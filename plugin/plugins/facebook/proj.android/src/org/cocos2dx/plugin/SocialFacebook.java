/****************************************************************************
Copyright (c) 2012-2013 cocos2d-x.org

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
package org.cocos2dx.plugin;

import java.util.Hashtable;

import org.cocos2dx.plugin.FacebookApp.FbDialogListener;

import android.app.Activity;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.util.Log;

public class SocialFacebook implements InterfaceSocial {

	private static final String LOG_TAG = "SocialFacebook";
	private static Activity mContext = null;
	private static InterfaceSocial mSocialAdapter = null;
	protected static boolean bDebug = false;
	private static String CONSUMER_KEY="";
	private static String CONSUMER_SECRET="";
	
	private static FacebookApp mFacebook = null;
	private static boolean isInitialized = false;
	private static Hashtable<String, String> mShareInfo = null;
	
	public static String KEY_TEXT="SharedText";
	public static String KEY_IMAGE_PATH = "SharedImagePath";

	protected static void LogE(String msg, Exception e) {
		Log.e(LOG_TAG, msg, e);
		e.printStackTrace();
	}

	protected static void LogD(String msg) {
		if (bDebug) {
			Log.d(LOG_TAG, msg);
		}
	}

	public SocialFacebook(Context context) {
		mContext = (Activity) context;
		mSocialAdapter = this;
	}
	

	@Override
	public void configDeveloperInfo(Hashtable<String, String> cpInfo) {
		LogD("initDeveloperInfo invoked " + cpInfo.toString());
		try {
			SocialFacebook.CONSUMER_KEY = cpInfo.get("FacebookKey");
			SocialFacebook.CONSUMER_SECRET = cpInfo.get("FacebookSecret");
			LogD("key : " + SocialFacebook.CONSUMER_KEY);
			LogD("secret : " + SocialFacebook.CONSUMER_SECRET);
			if(isInitialized){
				return;
			}
			isInitialized = true;	
			PluginWrapper.runOnMainThread(new Runnable() {
				
				@Override
				public void run() {
					mFacebook =  new FacebookApp(PluginWrapper.getContext(), SocialFacebook.CONSUMER_KEY, SocialFacebook.CONSUMER_SECRET);
					mFacebook.setListener(mFbLoginDialogListener);
				}
			});
		} catch (Exception e) {
			LogE("Developer info is wrong!", e);
		}

	}

	@Override
	public void share(Hashtable<String, String> info) {
		LogD("share invoked " + info.toString());
		mShareInfo =  info;
		if (! networkReachable()) {
			shareResult(SocialWrapper.SHARERESULT_FAIL, "Network error!");
			return;
		}

		if (! isInitialized) {
			shareResult(SocialWrapper.SHARERESULT_FAIL, "Initialize failed!");
			return;
		}

		// need login
		if(!mFacebook.hasAccessToken()){
			PluginWrapper.runOnMainThread(new Runnable() {
				
				@Override
				public void run() {
					mFacebook.authorize();
				}
			});

			return;
		}
		
		PluginWrapper.runOnMainThread(new Runnable() {
			
			@Override
			public void run() {
				SocialFacebook.sendToFacebook();
			}
		});
	}

	@Override
	public void setDebugMode(boolean debug) {
		bDebug = debug;
	}

	@Override
	public String getSDKVersion() {
		return "Unknown version";
	}

	private boolean networkReachable() {
		boolean bRet = false;
		try {
			ConnectivityManager conn = (ConnectivityManager)mContext.getSystemService(Context.CONNECTIVITY_SERVICE);
			NetworkInfo netInfo = conn.getActiveNetworkInfo();
			bRet = (null == netInfo) ? false : netInfo.isAvailable();
		} catch (Exception e) {
			LogE("Fail to check network status", e);
		}
		LogD("NetWork reachable : " + bRet);
		return bRet;
	}

	private static void shareResult(int ret, String msg) {
		SocialWrapper.onShareResult(mSocialAdapter, ret, msg);
		LogD("SocialFacebook result : " + ret + " msg : " + msg);
	}

	private static final FbDialogListener mFbLoginDialogListener = new FbDialogListener() {
		
		@Override
		public void onError(int flag, String value) {
			LogD("Facebook connection failed!");
			shareResult(SocialWrapper.SHARERESULT_FAIL, value);			
		}
		
		@Override
		public void onComplete(String value) {
			SocialFacebook.sendToFacebook();
		}
	};

	private static void sendToFacebook() {
		String text = mShareInfo.get(KEY_TEXT);
		String imagePath = mShareInfo.get(KEY_IMAGE_PATH);
		try {
			if(imagePath != null && imagePath.length() > 0){
				mFacebook.updateStatus(text, imagePath);
			}else{
				mFacebook.updateStatus(text);	
			}
			LogD("Posted to Facebook!");
			shareResult(SocialWrapper.SHARERESULT_SUCCESS, "Share succeed!");
		} catch (Exception e) {
			LogD("Post to Facebook failed!");
			shareResult(SocialWrapper.SHARERESULT_FAIL, "Unknown error!");
			e.printStackTrace();
		}
	}

	@Override
	public String getPluginVersion() {
		return "0.2.0";
	}
}
