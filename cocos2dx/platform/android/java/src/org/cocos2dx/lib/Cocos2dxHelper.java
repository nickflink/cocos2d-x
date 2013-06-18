/****************************************************************************
Copyright (c) 2010-2013 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
 ****************************************************************************/
package org.cocos2dx.lib;

import java.io.UnsupportedEncodingException;
import java.util.Locale;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.res.AssetManager;
import android.os.Build;
import android.os.Vibrator;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.WindowManager;
import org.cocos2dx.lib.Cocos2dxGameServiceHelper;

public class Cocos2dxHelper {
	// ===========================================================
	// Constants
	// ===========================================================
	private static final String PREFS_NAME = "Cocos2dxPrefsFile";
	private static final String TAG = Cocos2dxHelper.class.getSimpleName();

	// ===========================================================
	// Fields
	// ===========================================================

	private static Cocos2dxMusic sCocos2dMusic;
	private static Cocos2dxSound sCocos2dSound;
	private static AssetManager sAssetManager;
	private static Cocos2dxAccelerometer sCocos2dxAccelerometer;
	private static boolean sAccelerometerEnabled;
	private static String sPackageName;
	private static String sFileDirectory;
	private static Context sContext = null;
	private static Cocos2dxHelperListener sCocos2dxHelperListener;
	private static Cocos2dxGameServiceHelper sCocos2dxGameServiceHelper;

	// ===========================================================
	// Constructors
	// ===========================================================

	public static void init(final Context pContext, final Cocos2dxHelperListener pCocos2dxHelperListener) {
		final ApplicationInfo applicationInfo = pContext.getApplicationInfo();
		
		Cocos2dxHelper.sContext = pContext;
		Cocos2dxHelper.sCocos2dxHelperListener = pCocos2dxHelperListener;
		//Set this
		Cocos2dxHelper.sCocos2dxGameServiceHelper = new Cocos2dxGameServiceHelper((Activity)pContext);
		Cocos2dxHelper.sCocos2dxGameServiceHelper.setup();
		Cocos2dxHelper.sCocos2dxGameServiceHelper.setSigningInMessage("NL: signing in");
		Cocos2dxHelper.sCocos2dxGameServiceHelper.setSigningOutMessage("NL: signing out");

		Cocos2dxHelper.sPackageName = applicationInfo.packageName;
		Cocos2dxHelper.sFileDirectory = pContext.getFilesDir().getAbsolutePath();
		Cocos2dxHelper.nativeSetApkPath(applicationInfo.sourceDir);

		Cocos2dxHelper.sCocos2dxAccelerometer = new Cocos2dxAccelerometer(pContext);
		Cocos2dxHelper.sCocos2dMusic = new Cocos2dxMusic(pContext);
		Cocos2dxHelper.sCocos2dSound = new Cocos2dxSound(pContext);
		Cocos2dxHelper.sAssetManager = pContext.getAssets();
		Cocos2dxBitmap.setContext(pContext);
		Cocos2dxETCLoader.setContext(pContext);
	}

	// ===========================================================
	// Activity passthru methods
	// ===========================================================
	public static void onStart() {
		Activity activity = ((Activity)sContext);
		Cocos2dxHelper.sCocos2dxGameServiceHelper.onStart(activity);
	}

	public static void onStop() {
		Cocos2dxHelper.sCocos2dxGameServiceHelper.onStop();
	}

	public static void onActivityResult(int request, int response, Intent data) {
		Cocos2dxHelper.sCocos2dxGameServiceHelper.onActivityResult(request, response, data);
	}

	// ===========================================================
	// Getter & Setter
	// ===========================================================

	// ===========================================================
	// Methods for/from SuperClass/Interfaces
	// ===========================================================

	// ===========================================================
	// Methods
	// ===========================================================

	private static native void nativeSetApkPath(final String pApkPath);

	private static native void nativeSetEditTextDialogResult(final byte[] pBytes);

	public static String getCocos2dxPackageName() {
		return Cocos2dxHelper.sPackageName;
	}

	public static String getCocos2dxWritablePath() {
		return Cocos2dxHelper.sFileDirectory;
	}

	public static String getCurrentLanguage() {
		return Locale.getDefault().getLanguage();
	}
	
	public static String getDeviceModel(){
		return Build.MODEL;
    }

	public static AssetManager getAssetManager() {
		return Cocos2dxHelper.sAssetManager;
	}
	// ===========================================================
	// GameServices Methods
	// ===========================================================

	public static boolean isSignedIn() {
		return sCocos2dxGameServiceHelper.isSignedIn();
	}
	
	public static void beginUserInitiatedSignIn() {
		Log.d(Cocos2dxHelper.TAG, "beginUserInitiatedSignIn");
		((Activity)sContext).runOnUiThread(new Runnable() {
				public void run() {
					if(!sCocos2dxGameServiceHelper.isSignedIn()) {
						sCocos2dxGameServiceHelper.beginUserInitiatedSignIn();
					} else {
						//sCocos2dxGameServiceHelper.showAlert("NL: You are already signed in");
						Log.e(Cocos2dxHelper.TAG, "NL: You are already signed in");
					}
				}
		});
		return;
	}

	public static void showAchievement()
	{
		Log.d(Cocos2dxHelper.TAG, "showAchievement");
		((Activity)sContext).runOnUiThread(new Runnable() {
				public void run() {
					if(sCocos2dxGameServiceHelper.isSignedIn()) {
						Activity activity = (Activity)sContext;
						activity.startActivityForResult(sCocos2dxGameServiceHelper.getGamesClient().getAchievementsIntent(), /*RC_UNUSED*/9002);
					} else {
						//sCocos2dxGameServiceHelper.showAlert("NL: You must sign in to use leaderboards");
						Log.e(Cocos2dxHelper.TAG, "NL: You must sign in to use achievements");
					}
				}
		});
		return;
	}

	public static void showLeaderboard()
	{
		Log.d(Cocos2dxHelper.TAG, "showLeaderboard");
		((Activity)sContext).runOnUiThread(new Runnable() {
				public void run() {
					if(sCocos2dxGameServiceHelper.isSignedIn()) {
						Activity activity = (Activity)sContext;
						activity.startActivityForResult(sCocos2dxGameServiceHelper.getGamesClient().getAllLeaderboardsIntent(), /*RC_UNUSED*/9002);
					} else {
						//sCocos2dxGameServiceHelper.showAlert("NL: You must sign in to use leaderboards");
						Log.e(Cocos2dxHelper.TAG, "NL: You must sign in to use leaderboards");
					}
				}
		});
		return;
	}

	public static void reportAchievement(final String category, final int portion) {
		Log.d(Cocos2dxHelper.TAG, "reportAchievement:("+category+", "+portion+")");
		((Activity)sContext).runOnUiThread(new Runnable() {
				public void run() {
					if(sCocos2dxGameServiceHelper.isSignedIn()) {
						if(portion == 0) {
							sCocos2dxGameServiceHelper.getGamesClient().unlockAchievement(category);
						} else {
							sCocos2dxGameServiceHelper.getGamesClient().incrementAchievement(category, portion);
						}
					} else {
						Log.e(Cocos2dxHelper.TAG, "NL: You must sign in to report achievements");
					}
				}
		});
	}

	public static void submitScore(final String category, final String stringScore)
	{
		Log.d(Cocos2dxHelper.TAG, "submitScore:"+stringScore+" toCategory:"+category);
		((Activity)sContext).runOnUiThread(new Runnable() {
				public void run() {
					if(sCocos2dxGameServiceHelper.isSignedIn()) {
						long score = Long.parseLong(stringScore);
						sCocos2dxGameServiceHelper.getGamesClient().submitScore(category, score);
						//Log.e(Cocos2dxHelper.TAG, "Submitting "+score+" to category "+category);
					} else {
						//sCocos2dxGameServiceHelper.showAlert("NL: You must sign in to submit scores");
						Log.e(Cocos2dxHelper.TAG, "NL: You must sign in to submit scores");
					}
				}
		});
		return;
	}

	// ===========================================================
	// Vibrate Methods
	// ===========================================================
	public static boolean hasVibrator()
	{
		return Cocos2dxHelper.sCocos2dSound.hasVibrator();
	}

	public static void vibrate(long time)
	{
		Cocos2dxHelper.sCocos2dSound.vibrate(time);
	}

	public static void vibrateWithPattern(long pattern[], int repeat)
	{
		Cocos2dxHelper.sCocos2dSound.vibrateWithPattern(pattern, repeat);
	}

	public static void cancelVibrate()
	{
		Cocos2dxHelper.sCocos2dSound.cancelVibrate();
	}


	public static void enableAccelerometer() {
		Cocos2dxHelper.sAccelerometerEnabled = true;
		Cocos2dxHelper.sCocos2dxAccelerometer.enable();
	}


	public static void setAccelerometerInterval(float interval) {
		Cocos2dxHelper.sCocos2dxAccelerometer.setInterval(interval);
	}

	public static void disableAccelerometer() {
		Cocos2dxHelper.sAccelerometerEnabled = false;
		Cocos2dxHelper.sCocos2dxAccelerometer.disable();
	}

	public static void preloadBackgroundMusic(final String pPath) {
		Cocos2dxHelper.sCocos2dMusic.preloadBackgroundMusic(pPath);
	}

	public static void playBackgroundMusic(final String pPath, final boolean isLoop) {
		Cocos2dxHelper.sCocos2dMusic.playBackgroundMusic(pPath, isLoop);
	}

	public static void resumeBackgroundMusic() {
		Cocos2dxHelper.sCocos2dMusic.resumeBackgroundMusic();
	}

	public static void pauseBackgroundMusic() {
		Cocos2dxHelper.sCocos2dMusic.pauseBackgroundMusic();
	}

	public static void stopBackgroundMusic() {
		Cocos2dxHelper.sCocos2dMusic.stopBackgroundMusic();
	}

	public static void rewindBackgroundMusic() {
		Cocos2dxHelper.sCocos2dMusic.rewindBackgroundMusic();
	}

	public static boolean isBackgroundMusicPlaying() {
		return Cocos2dxHelper.sCocos2dMusic.isBackgroundMusicPlaying();
	}

	public static float getBackgroundMusicVolume() {
		return Cocos2dxHelper.sCocos2dMusic.getBackgroundVolume();
	}

	public static void setBackgroundMusicVolume(final float volume) {
		Cocos2dxHelper.sCocos2dMusic.setBackgroundVolume(volume);
	}

	public static void preloadEffect(final String path) {
		Cocos2dxHelper.sCocos2dSound.preloadEffect(path);
	}

	public static int playEffect(final String path, final boolean isLoop) {
		return Cocos2dxHelper.sCocos2dSound.playEffect(path, isLoop);
	}

	public static void resumeEffect(final int soundId) {
		Cocos2dxHelper.sCocos2dSound.resumeEffect(soundId);
	}

	public static void pauseEffect(final int soundId) {
		Cocos2dxHelper.sCocos2dSound.pauseEffect(soundId);
	}

	public static void stopEffect(final int soundId) {
		Cocos2dxHelper.sCocos2dSound.stopEffect(soundId);
	}

	public static float getEffectsVolume() {
		return Cocos2dxHelper.sCocos2dSound.getEffectsVolume();
	}

	public static void setEffectsVolume(final float volume) {
		Cocos2dxHelper.sCocos2dSound.setEffectsVolume(volume);
	}

	public static void unloadEffect(final String path) {
		Cocos2dxHelper.sCocos2dSound.unloadEffect(path);
	}

	public static void pauseAllEffects() {
		Cocos2dxHelper.sCocos2dSound.pauseAllEffects();
	}

	public static void resumeAllEffects() {
		Cocos2dxHelper.sCocos2dSound.resumeAllEffects();
	}

	public static void stopAllEffects() {
		Cocos2dxHelper.sCocos2dSound.stopAllEffects();
	}

	public static void end() {
		Cocos2dxHelper.sCocos2dMusic.end();
		Cocos2dxHelper.sCocos2dSound.end();
	}

	public static void onResume() {
		if (Cocos2dxHelper.sAccelerometerEnabled) {
			Cocos2dxHelper.sCocos2dxAccelerometer.enable();
		}
	}

	public static void onPause() {
		if (Cocos2dxHelper.sAccelerometerEnabled) {
			Cocos2dxHelper.sCocos2dxAccelerometer.disable();
		}
	}

	public static void terminateProcess() {
		android.os.Process.killProcess(android.os.Process.myPid());
	}

	private static void showDialog(final String pTitle, final String pMessage) {
		Cocos2dxHelper.sCocos2dxHelperListener.showDialog(pTitle, pMessage);
	}

	private static void showEditTextDialog(final String pTitle, final String pMessage, final int pInputMode, final int pInputFlag, final int pReturnType, final int pMaxLength) {
		Cocos2dxHelper.sCocos2dxHelperListener.showEditTextDialog(pTitle, pMessage, pInputMode, pInputFlag, pReturnType, pMaxLength);
	}

	public static void setEditTextDialogResult(final String pResult) {
		try {
			final byte[] bytesUTF8 = pResult.getBytes("UTF8");

			Cocos2dxHelper.sCocos2dxHelperListener.runOnGLThread(new Runnable() {
				@Override
				public void run() {
					Cocos2dxHelper.nativeSetEditTextDialogResult(bytesUTF8);
				}
			});
		} catch (UnsupportedEncodingException pUnsupportedEncodingException) {
			/* Nothing. */
		}
	}

    public static int getDPI()
    {
		if (sContext != null)
		{
			DisplayMetrics metrics = new DisplayMetrics();
			WindowManager wm = ((Activity)sContext).getWindowManager();
			if (wm != null)
			{
				Display d = wm.getDefaultDisplay();
				if (d != null)
				{
					d.getMetrics(metrics);
					return (int)(metrics.density*160.0f);
				}
			}
		}
		return -1;
    }
    
    // ===========================================================
 	// Functions for CCUserDefault
 	// ===========================================================
    
    public static boolean getBoolForKey(String key, boolean defaultValue) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	return settings.getBoolean(key, defaultValue);
    }
    
    public static int getIntegerForKey(String key, int defaultValue) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	return settings.getInt(key, defaultValue);
    }
    
    public static float getFloatForKey(String key, float defaultValue) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	return settings.getFloat(key, defaultValue);
    }
    
    public static double getDoubleForKey(String key, double defaultValue) {
    	// SharedPreferences doesn't support saving double value
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	return settings.getFloat(key, (float)defaultValue);
    }
    
    public static String getStringForKey(String key, String defaultValue) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	return settings.getString(key, defaultValue);
    }
    
    public static void setBoolForKey(String key, boolean value) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	SharedPreferences.Editor editor = settings.edit();
    	editor.putBoolean(key, value);
    	editor.commit();
    }
    
    public static void setIntegerForKey(String key, int value) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	SharedPreferences.Editor editor = settings.edit();
    	editor.putInt(key, value);
    	editor.commit();
    }
    
    public static void setFloatForKey(String key, float value) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	SharedPreferences.Editor editor = settings.edit();
    	editor.putFloat(key, value);
    	editor.commit();
    }
    
    public static void setDoubleForKey(String key, double value) {
    	// SharedPreferences doesn't support recording double value
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	SharedPreferences.Editor editor = settings.edit();
    	editor.putFloat(key, (float)value);
    	editor.commit();
    }
    
    public static void setStringForKey(String key, String value) {
    	SharedPreferences settings = ((Activity)sContext).getSharedPreferences(Cocos2dxHelper.PREFS_NAME, 0);
    	SharedPreferences.Editor editor = settings.edit();
    	editor.putString(key, value);
    	editor.commit();
    }
	
	// ===========================================================
	// Inner and Anonymous Classes
	// ===========================================================

	public static interface Cocos2dxHelperListener {
		public void showDialog(final String pTitle, final String pMessage);
		public void showEditTextDialog(final String pTitle, final String pMessage, final int pInputMode, final int pInputFlag, final int pReturnType, final int pMaxLength);

		public void runOnGLThread(final Runnable pRunnable);
	}
}
