/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/
package org.cocos2dx.plugin;

import android.app.Activity;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import com.facebook.android.AsyncFacebookRunner;
import com.facebook.android.Facebook;
import com.facebook.android.FacebookError;
import com.facebook.android.DialogError;
import com.facebook.android.Facebook.DialogListener;
import java.util.Hashtable;
import java.lang.Thread;
//import org.cocos2dx.plugin.FacebookApp.FbDialogListener;
import org.cocos2dx.plugin.SessionEvents.AuthListener;
import org.cocos2dx.plugin.SessionEvents.LogoutListener;
import org.json.JSONException;
import org.json.JSONObject;


public class SocialFacebook implements InterfaceSocial {

	private static final String TAG = "SocialFacebook";
	private static final int AUTHORIZE_ACTIVITY_RESULT_CODE = 0;
	private static Activity mContext = null;
	private static InterfaceSocial mSocialAdapter = null;
	protected static boolean bDebug = false;
	private static String CONSUMER_KEY="";
	private static String CONSUMER_SECRET="";
	
	//private static FacebookApp mFacebook = null;
	private static boolean isInitialized = false;
	private static Hashtable<String, String> mShareInfo = null;
	private Handler mHandler;
	
	public static String KEY_TEXT="SharedText";
	public static String KEY_IMAGE_PATH = "SharedImagePath";

	protected static void LogE(String msg, Exception e) {
		Log.e(TAG, msg, e);
		e.printStackTrace();
	}

	protected static void LogD(String msg) {
		if (bDebug) {
			int depth = 3;
			Log.d(TAG, Thread.currentThread().getStackTrace()[depth].getFileName()+":"+
				Thread.currentThread().getStackTrace()[depth].getLineNumber()+":"+
				Thread.currentThread().getStackTrace()[depth].getMethodName()+": "+msg);
		}
	}

	public SocialFacebook(Context context) {
		mSocialAdapter = this;
		mContext = (Activity) context;
		PluginWrapper.runOnMainThread(new Runnable() {
			@Override
			public void run() {
				mHandler = new Handler();
				//if (Utility.mFacebook.isSessionValid()) {
				//	SessionEvents.onLogoutBegin();
				//	AsyncFacebookRunner asyncRunner = new AsyncFacebookRunner(Utility.mFacebook);
				//	asyncRunner.logout(mContext, new LogoutRequestListener());
				//}
			}
		});
	}
	

	@Override
	public void configDeveloperInfo(Hashtable<String, String> cpInfo) {
		LogD("configDeveloperInfo invoked " + cpInfo.toString());
		try {
			SocialFacebook.CONSUMER_KEY = cpInfo.get("FacebookAppKey");
			SocialFacebook.CONSUMER_SECRET = cpInfo.get("FacebookAppSecret");
			LogD("key : " + SocialFacebook.CONSUMER_KEY);
			LogD("secret : " + SocialFacebook.CONSUMER_SECRET);
			if(isInitialized){
				return;
			}
			// Create the Facebook Object using the app id.
			Utility.mFacebook = new Facebook(SocialFacebook.CONSUMER_KEY);
			// Instantiate the asynrunner object for asynchronous api calls.
			Utility.mAsyncRunner = new AsyncFacebookRunner(Utility.mFacebook);
			// restore session if one exists
			SessionStore.restore(Utility.mFacebook, mContext);
			SessionEvents.addAuthListener(new FbAPIsAuthListener());
			SessionEvents.addLogoutListener(new FbAPIsLogoutListener());
			isInitialized = true;	
			//PluginWrapper.runOnMainThread(new Runnable() {
			//	
			//	@Override
			//	public void run() {
						Utility.mFacebook = new Facebook(SocialFacebook.CONSUMER_KEY);
			//		mFacebook =  new FacebookApp(PluginWrapper.getContext(), SocialFacebook.CONSUMER_KEY, SocialFacebook.CONSUMER_SECRET);
			//		mFacebook.setListener(mFbLoginDialogListener);
			//	}
			//});
		} catch (Exception e) {
			LogE("configDeveloperInfo failed!", e);
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
		if (!Utility.mFacebook.isSessionValid()) {
			LogD("have no session need to log in");
			PluginWrapper.runOnMainThread(new Runnable() {
				@Override
				public void run() {
					String[] permissions = { "publish_stream" };
					Utility.mFacebook.authorize(mContext, permissions, AUTHORIZE_ACTIVITY_RESULT_CODE, new LoginDialogListener());
				}
			});
		}
		//// need login
		//if(!mFacebook.hasAccessToken()){
		//	PluginWrapper.runOnMainThread(new Runnable() {
		//		
		//		@Override
		//		public void run() {
		//			mFacebook.authorize();
		//		}
		//	});

		//	return;
		//}
		//
		//PluginWrapper.runOnMainThread(new Runnable() {
		//	
		//	@Override
		//	public void run() {
		//		SocialFacebook.sendToFacebook();
		//	}
		//});
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

	//private static final FbDialogListener mFbLoginDialogListener = new FbDialogListener() {
	//	
	//	@Override
	//	public void onError(int flag, String value) {
	//		LogD("Facebook connection failed!");
	//		shareResult(SocialWrapper.SHARERESULT_FAIL, value);
	//	}
	//	
	//	@Override
	//	public void onComplete(String value) {
	//		SocialFacebook.sendToFacebook();
	//	}
	//};

	private static void sendToFacebook() {
		//String text = mShareInfo.get(KEY_TEXT);
		//String imagePath = mShareInfo.get(KEY_IMAGE_PATH);
		//try {
		//	if(imagePath != null && imagePath.length() > 0){
		//		mFacebook.updateStatus(text, imagePath);
		//	}else{
		//		mFacebook.updateStatus(text);
		//	}
		//	LogD("Posted to Facebook!");
		//	shareResult(SocialWrapper.SHARERESULT_SUCCESS, "Share succeed!");
		//} catch (Exception e) {
		//	LogD("Post to Facebook failed!");
		//	shareResult(SocialWrapper.SHARERESULT_FAIL, "Unknown error!");
		//	e.printStackTrace();
		//}
	}

	@Override
	public String getPluginVersion() {
		return "0.2.0";
	}

	/*
	 * Request user name, and picture to show on the main screen.
	 */
	public void requestUserData() {
			LogD("Fetching user name, profile pic...");
			Bundle params = new Bundle();
			params.putString("fields", "name, picture");
			Utility.mAsyncRunner.request("me", params, new UserRequestListener());
	}

	private final class LoginDialogListener implements DialogListener {
		@Override
		public void onComplete(Bundle values) {
			LogD("LoginDialogListener::onComplete");
			SessionEvents.onLoginSuccess();
		}

		@Override
		public void onFacebookError(FacebookError error) {
			LogD("LoginDialogListener::onFacebookError"+error.getMessage());
			SessionEvents.onLoginError(error.getMessage());
		}

		@Override
		public void onError(DialogError error) {
			LogD("LoginDialogListener::onError"+error.getMessage());
			SessionEvents.onLoginError(error.getMessage());
		}

		@Override
		public void onCancel() {
			LogD("LoginDialogListener::onCancel");
			SessionEvents.onLoginError("Action Canceled");
		}
	}

	private class LogoutRequestListener extends BaseRequestListener {
			@Override
			public void onComplete(String response, final Object state) {
				LogD("LogoutRequestListener::onComplete");
					/*
					 * callback should be run in the original thread, not the background
					 * thread
					 */
					mHandler.post(new Runnable() {
							@Override
							public void run() {
									SessionEvents.onLogoutFinish();
							}
					});
			}
	}

	/*
	 * Callback for fetching current user's name, picture, uid.
	 */
	@SuppressWarnings("deprecation")
	public class UserRequestListener extends BaseRequestListener {
		@Override
		public void onComplete(final String response, final Object state) {
			LogD("UserRequestListener::onComplete");
			JSONObject jsonObject;
			try {
				jsonObject = new JSONObject(response);
				final String picURL = jsonObject.getJSONObject("picture").getJSONObject("data").getString("url");
				final String name = jsonObject.getString("name");
				Utility.userUID = jsonObject.getString("id");
				mHandler.post(new Runnable() {
					@Override
					public void run() {
						LogD("Welcome " + name + "!");
						//mUserPic.setImageBitmap(Utility.getBitmap(picURL));
					}
				});
			} catch (JSONException e) {
				e.printStackTrace();
			}
		}
	}

	/*
	 * The Callback for notifying the application when authorization succeeds or
	 * fails.
	 */
	public class FbAPIsAuthListener implements AuthListener {
			@Override
			public void onAuthSucceed() {
				LogD("FbAPIsAuthListener::onAuthSucceed");
				requestUserData();
			}
			@Override
			public void onAuthFail(String error) {
				LogD("FbAPIsAuthListener::onAuthSucceed ERROR: Login Failed: " + error);
			}
	}

	/*
	 * The Callback for notifying the application when log out starts and
	 * finishes.
	 */
	public class FbAPIsLogoutListener implements LogoutListener {
			@Override
			public void onLogoutBegin() {
				LogD("FbAPIsLogoutListener::onLogoutBegin");
				LogD("Logging out...");
			}
			@Override
			public void onLogoutFinish() {
				LogD("FbAPIsLogoutListener::onLogoutFinish");
					LogD("You have logged out! ");
					//mUserPic.setImageBitmap(null);
			}
	}
}
