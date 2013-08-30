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

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.KeyEvent;
import android.view.View;
import android.widget.ImageView;

import java.net.URLEncoder;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Hashtable;

import org.cocos2dx.plugin.util.IabHelper;
import org.cocos2dx.plugin.util.IabResult;
import org.cocos2dx.plugin.util.Inventory;
import org.cocos2dx.plugin.util.Purchase;

public class IAPGooglePlay implements InterfaceIAP {

	private static final String TAG = "IAPGooglePlay";
	private static Context mContext = null;
	private static boolean bDebug = false;
	private static Handler mHandler = null;
	private static IAPGooglePlay mAdapter = null;

	protected static void LogE(String msg, Exception e) {
		Log.e(TAG, msg, e);
		e.printStackTrace();
	}

	protected static void LogD(String msg) {
		if (bDebug) {
			Log.d(TAG, msg);
		}
	}

	public IAPGooglePlay(Context context) {
		mContext = context;
		mAdapter = this;

		PluginWrapper.runOnMainThread(new Runnable() {

			@Override
			public void run() {
				initUIHandle();
			}
		});
	}

	@Override
	public void configDeveloperInfo(Hashtable<String, String> cpInfo) {
		LogD("initDeveloperInfo invoked " + cpInfo.toString());
		try {
			//PartnerConfig.PARTNER = cpInfo.get("GooglePlayPartner");
			//PartnerConfig.SELLER = cpInfo.get("GooglePlaySeller");
			//PartnerConfig.RSA_PRIVATE = cpInfo.get("GooglePlayRsaPrivate");
			//PartnerConfig.RSA_GooglePlay_PUBLIC = cpInfo.get("GooglePlayPublic");
			//PartnerConfig.GooglePlay_PLUGIN_NAME = cpInfo.get("GooglePlayPluginName");
			String appId = cpInfo.get("GooglePlayAppId");
			String appKey = cpInfo.get("GooglePlayAppKey");
			initWithActivityAndKey(getActivity(), appKey);
			//strPayAccount = cpInfo.get("GooglePlayRoyPayAccount");
			//strReceiveAccount = cpInfo.get("GooglePlayRoyReceiveAccount");
			//fPayPercent = ((cpInfo.get("GooglePlayRoyPercent") == null) ? 0.0f : Float.parseFloat(cpInfo.get("GooglePlayRoyPercent")));
			//strRoyTip = cpInfo.get("GooglePlayRoyTip");
			//strNotifyUrl = ((null == cpInfo.get("GooglePlayNotifyUrl")) ? "" : cpInfo.get("GooglePlayNotifyUrl"));
		} catch (Exception e) {
			LogE("Developer info is wrong!", e);
		}
	}

	@Override
	public void payForProduct(Hashtable<String, String> info) {
		LogD("payForProduct invoked " + info.toString());
		if (! networkReachable()) {
			payResult(IAPWrapper.PAYRESULT_FAIL, "网络不可用");
			return;
		}

		final Hashtable<String, String> productInfo = info;
		PluginWrapper.runOnMainThread(new Runnable() {
			@Override
			public void run() {
				String iapId = productInfo.get("IAPId");
				String iapSecKey = productInfo.get("IAPSecKey");
				mHelper.launchPurchaseFlow(mActivity, iapId, RC_REQUEST, mPurchaseFinishedListener, iapSecKey);
				//LogD("ERROR implement payForProduct");
				//MobileSecurePayHelper mspHelper = new MobileSecurePayHelper(mContext);
				//boolean bInstalled = mspHelper.detectMobile_sp();
				//if (! bInstalled) {
				//	payResult(IAPWrapper.PAYRESULT_FAIL, "未安装支付宝插件");
				//	return;
				//}

				//// start pay for this order.
				//// 根据订单信息开始进行支付
				//try {
				//	// prepare the order info.
				//	// 准备订单信息
				//	String orderInfo = getOrderInfo(productInfo);
				//	// 这里根据签名方式对订单信息进行签名
				//	String signType = getSignType();
				//	String strsign = sign(signType, orderInfo);
				//	// 对签名进行编码
				//	strsign = URLEncoder.encode(strsign);
				//	// 组装好参数
				//	String info = orderInfo + "&sign=" + "\"" + strsign + "\"" + "&" + getSignType();
				//	LogD("pay info : " + info);
				//	// start the pay.
				//	// 调用pay方法进行支付
				//	MobileSecurePayer msp = new MobileSecurePayer();
				//	boolean bRet = msp.pay(info, mHandler, AlixId.RQF_PAY, mContext);

				//	if (bRet) {
				//		// show the progress bar to indicate that we have started
				//		// paying.
				//		// 显示“正在支付”进度条
				//		closeProgress();
				//		mProgress = BaseHelper.showProgress(mContext, null, "正在支付", false, true);
				//	} else {
				//		payResult(IAPWrapper.PAYRESULT_FAIL, "支付失败");
				//		return;
				//	}
				//} catch (Exception ex) {
				//	LogE("Remote call failed", ex);
				//	payResult(IAPWrapper.PAYRESULT_FAIL, "remote call failed");
				//	return;
				//}
			}
		});
	}

	@Override
	public void setDebugMode(boolean debug) {
		bDebug = debug;
		mHelper.enableDebugLogging(debug);
	}

	@Override
	public String getSDKVersion() {
		return "Unknown version";
	}

	//static class AlixOnCancelListener implements DialogInterface.OnCancelListener {
	//	Activity mcontext;
	//	AlixOnCancelListener(Activity context) {
	//		mcontext = context;
	//	}

	//	public void onCancel(DialogInterface dialog) {
	//		mcontext.onKeyDown(KeyEvent.KEYCODE_BACK, null);
	//	}
	//}

	private static void initUIHandle() {
		//
		// the handler use to receive the pay result.
		// 这里接收支付结果，支付宝手机端同步通知
		mHandler = new Handler() {
			public void handleMessage(Message msg) {
				LogD("ERROR IMPLEMENT handle msg : " + msg.toString());
				//try {
				//	String strRet = (String) msg.obj;
				//	LogD("handle msg : " + msg.toString());

				//	switch (msg.what) {
				//	case AlixId.RQF_PAY: {
				//		LogD("msg.what is RQF_PAY");
				//		mAdapter.closeProgress();

				//		// 从通知中获取参数
				//		try {
				//			// 获取交易状态，具体状态代码请参看文档
				//			String memo = "memo=";
				//			int imemoStart = strRet.indexOf("memo=");
				//			imemoStart += memo.length();
				//			int imemoEnd = strRet.indexOf(";result=");
				//			memo = strRet.substring(imemoStart, imemoEnd);
				//			// 对通知进行验签
				//			ResultChecker resultChecker = new ResultChecker(strRet);

				//			int retVal = resultChecker.checkSign();
				//			// 返回验签结果以及交易状态
				//			if (retVal == ResultChecker.RESULT_CHECK_SIGN_FAILED) {
				//				payResult(IAPWrapper.PAYRESULT_FAIL, "签名验证失败");
				//			} else if (retVal == ResultChecker.RESULT_CHECK_SIGN_SUCCEED && resultChecker.isPayOk()) {
				//				payResult(IAPWrapper.PAYRESULT_SUCCESS, "支付成功");
				//			} else {
				//				payResult(IAPWrapper.PAYRESULT_FAIL, "支付失败");
				//			}
				//		} catch (Exception e) {
				//			e.printStackTrace();
				//			payResult(IAPWrapper.PAYRESULT_FAIL, "结果解析失败");
				//		}
				//	}
				//		break;
				//	default:
				//		mAdapter.closeProgress();
				//		payResult(IAPWrapper.PAYRESULT_FAIL, "支付失败");
				//		break;
				//	}

				//	super.handleMessage(msg);
				//} catch (Exception e) {
				//	e.printStackTrace();
				//}
			}
		};
	}
	/**
	 * get the selected order info for pay. 获取商品订单信息
	 * 
	 * @param position
	 *            商品在列表中的位置
	 * @return
	 */
	private static String strPayAccount = "";
	private static String strReceiveAccount = "";
	private static float fPayPercent = 0.0f;
	private static String strRoyTip = "";
	private static String strNotifyUrl = "";
	private String getOrderInfo(Hashtable<String, String> info) {
		String strRet = null;
		try {
			float price = Float.parseFloat(info.get("productPrice"));//IAPProducts.getProductPrice(productID);
			String productName = info.get("productName");
			String productDesc = info.get("productDesc");
			String royParam = "";
			if (fPayPercent > 0 ) {
				float royValue = fPayPercent * price;
				royParam = strPayAccount + "^" + strReceiveAccount + "^" + royValue + "^"+ strRoyTip;
				royParam = "&royalty_parameters=\""+ royParam + "\"" + "&royalty_type=\"10" + "\"";
			}

			//strRet = "partner=\"" + PartnerConfig.PARTNER + "\""
			//			+ "&seller=\"" + PartnerConfig.SELLER + "\""
			//			+ "&out_trade_no=\"" + getOutTradeNo() + "\""
			//			+ "&subject=\"" + productName + "\""
			//			+ "&body=\"" + productDesc + "\""
			//			+ "&total_fee=\"" + price + "\""
			//			+ "&notify_url=\"" + strNotifyUrl + "\""
			//			+ royParam;
		} catch (Exception e) {
			LogE("Product info parse error", e);
		}

		LogD("order info : " + strRet);
		return strRet;
	}

	/**
	 * get the out_trade_no for an order.
	 * 获取外部订单号
	 * 
	 * @return
	 */
	String getOutTradeNo() {
		SimpleDateFormat format = new SimpleDateFormat("yyyyMMddHHmmss");
		Date date = new Date();
		String strKey = format.format(date);

		java.util.Random r = new java.util.Random();
		strKey = strKey + r.nextInt(10000);
		return strKey;
	}

	//
	//
	/**
	 *  sign the order info.
	 *  对订单信息进行签名
	 *  
	 * @param signType	签名方式 
	 * @param content		待签名订单信息
	 * @return
	 */
	private String sign(String signType, String content) {
		LogD("sign params :");
		//LogD("type : " + signType + ", content : " + content + ", private : " + PartnerConfig.RSA_PRIVATE);
		return "";//Rsa.sign(content, PartnerConfig.RSA_PRIVATE);
	}

	/**
	 * get the sign type we use.
	 * 获取签名方式
	 * 
	 * @return
	 */
	private String getSignType() {
		String getSignType = "sign_type=" + "\"" + "RSA" + "\"";
		return getSignType;
	}
	
	private ProgressDialog mProgress = null;
	void closeProgress() {
		try {
			if (mProgress != null) {
				mProgress.dismiss();
				mProgress = null;
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
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

	private static void payResult(int ret, String msg) {
		IAPWrapper.onPayResult(mAdapter, ret, msg);
		LogD("GooglePlay result : " + ret + " msg : " + msg);
	}

	@Override
	public String getPluginVersion() {
		return "0.2.0";
	}

//
// START OF COPY COPIED CODE
//

    // Debug tag, for logging
    //private static final String TAG = Cocos2dxInAppBilling.class.getSimpleName();

    // (arbitrary) request code for the purchase flow
    static final int RC_REQUEST = 10001;

    // The helper object
    private IabHelper mHelper;
    private Activity mActivity = null;
    //private static volatile Cocos2dxInAppBilling sInstance = null;

    /**
     * Construct a Cocos2dxInAppBilling object, initially tied to the given Activity.
     * After constructing this object, call @link{setup} from the onCreate()
     * method of your Activity.
     */
    //private Cocos2dxInAppBilling() {
    //}

    //public static Cocos2dxInAppBilling getInstance() {
    //    if (sInstance == null) {
    //        synchronized ( Cocos2dxInAppBilling.class ){
    //            if (sInstance == null) {
    //                sInstance = new Cocos2dxInAppBilling();
    //            }
    //        }
    //    }
    //    return sInstance;
    //}

    private Context getContext() {
        return mContext;
    }

    private Activity getActivity() {
        return (Activity) mContext;
    }

    /* base64EncodedPublicKey should be YOUR APPLICATION'S PUBLIC KEY
     * (that you got from the Google Play developer console). This is not your
     * developer public key, it's the *app-specific* public key.
     *
     * Instead of just storing the entire literal string here embedded in the
     * program,  construct the key at runtime from pieces or
     * use bit manipulation (for example, XOR with some other string) to hide
     * the actual key.  The key itself is not secret information, but we don't
     * want to make it easy for an attacker to replace the public key with one
     * of their own and then fake messages from the server.
     */
    public void initWithActivityAndKey(Activity activity, String base64EncodedPublicKey) {
        mActivity = activity;
        // load game data
        //loadData();

        // Create the helper, passing it our context and the public key to verify signatures with
        Log.d(TAG, "Creating IAB helper.");
        //mHelper = new IabHelper(this, base64EncodedPublicKey);
        mHelper = new IabHelper(getContext(), base64EncodedPublicKey);

        // enable debug logging (for a production application, you should set this to false).
        mHelper.enableDebugLogging(true);

        // Start setup. This is asynchronous and the specified listener
        // will be called once setup completes.
        Log.d(TAG, "Starting setup.");
        mHelper.startSetup(new IabHelper.OnIabSetupFinishedListener() {
            public void onIabSetupFinished(IabResult result) {
                Log.d(TAG, "Setup finished.");

                if (!result.isSuccess()) {
                    // Oh noes, there was a problem.
                    Log.e(TAG,"Problem setting up in-app billing: " + result);
                    return;
                }

                // Hooray, IAB is fully set up. Now, let's get an inventory of stuff we own.
                Log.d(TAG, "Setup successful. Querying inventory.");
                mHelper.queryInventoryAsync(mGotInventoryListener);
            }
        });
    }

    // Listener that's called when we finish querying the items and subscriptions we own
    IabHelper.QueryInventoryFinishedListener mGotInventoryListener = new IabHelper.QueryInventoryFinishedListener() {
        public void onQueryInventoryFinished(IabResult result, Inventory inventory) {
            Log.d(TAG, "Query inventory finished.");
            if (result.isFailure()) {
                Log.e(TAG,"Failed to query inventory: " + result);
                return;
            }

            Log.d(TAG, "Query inventory was successful.");
            
            /*
             * Check for items we own. Notice that for each purchase, we check
             * the developer payload to see if it's correct! See
             * verifyDeveloperPayload().
             */
            
            // Do we have the premium upgrade?
            //Purchase premiumPurchase = inventory.getPurchase(SKU_PREMIUM);
            //mIsPremium = (premiumPurchase != null && verifyDeveloperPayload(premiumPurchase));
            //Log.d(TAG, "User is " + (mIsPremium ? "PREMIUM" : "NOT PREMIUM"));
            //
            //// Do we have the infinite gas plan?
            //Purchase infiniteGasPurchase = inventory.getPurchase(SKU_INFINITE_GAS);
            //mSubscribedToInfiniteGas = (infiniteGasPurchase != null && 
            //        verifyDeveloperPayload(infiniteGasPurchase));
            //Log.d(TAG, "User " + (mSubscribedToInfiniteGas ? "HAS" : "DOES NOT HAVE") 
            //            + " infinite gas subscription.");
            ////if (mSubscribedToInfiniteGas) mTank = TANK_MAX;

            //// Check for gas delivery -- if we own gas, we should fill up the tank immediately
            //Purchase gasPurchase = inventory.getPurchase(SKU_GAS);
            //if (gasPurchase != null && verifyDeveloperPayload(gasPurchase)) {
            //    Log.d(TAG, "We have gas. Consuming it.");
            //    mHelper.consumeAsync(inventory.getPurchase(SKU_GAS), mConsumeFinishedListener);
            //    return;
            //}

            //updateUi();
            setWaitScreen(false);
            Log.d(TAG, "Initial inventory query finished; enabling main UI.");
        }
    };

    //public static void setupJNI() {
    //    Log.e(TAG, "implement setupJNI");
    //}
    //public static void refreshPurchasesJNI() {
    //    Log.e(TAG, "implement refreshPurchasesJNI");
    //}

    //public static void inAppPurchaseJNI(String name, String receipt) {

    //// User clicked the "Buy Gas" button
    ////public void onBuyGasButtonClicked(View arg0) {
    //    Log.d(TAG, "Buy gas button clicked.");
    //    getInstance().setWaitScreen(true);
    //    getInstance().mHelper.launchPurchaseFlow(getInstance().mActivity, name, RC_REQUEST, getInstance().mPurchaseFinishedListener, receipt);

    //    //if (mSubscribedToInfiniteGas) {
    //    //    Log.e(TAG,"No need! You're subscribed to infinite gas. Isn't that awesome?");
    //    //    return;
    //    //}
    //    //
    //    //if (mTank >= TANK_MAX) {
    //    //    Log.e(TAG,"Your tank is full. Drive around a bit!");
    //    //    return;
    //    //}

    //    //// launch the gas purchase UI flow.
    //    //// We will be notified of completion via mPurchaseFinishedListener
    //    //setWaitScreen(true);
    //    //Log.d(TAG, "Launching purchase flow for gas.");
    //    //
    //    ///* TODO: for security, generate your payload here for verification. See the comments on 
    //    // *        verifyDeveloperPayload() for more info. Since this is a SAMPLE, we just use 
    //    // *        an empty string, but on a production app you should carefully generate this. */
    //    //String payload = ""; 
    //    //
    //    //mHelper.launchPurchaseFlow(this, SKU_GAS, RC_REQUEST, 
    //    //        mPurchaseFinishedListener, payload);
    //}

    // User clicked the "Upgrade to Premium" button.
    public void onUpgradeAppButtonClicked(View arg0) {
        Log.d(TAG, "Upgrade button clicked; launching purchase flow for upgrade.");
        //setWaitScreen(true);
        //
        ///* TODO: for security, generate your payload here for verification. See the comments on 
        // *        verifyDeveloperPayload() for more info. Since this is a SAMPLE, we just use 
        // *        an empty string, but on a production app you should carefully generate this. */
        //String payload = ""; 

        //mHelper.launchPurchaseFlow(this, SKU_PREMIUM, RC_REQUEST, 
        //        mPurchaseFinishedListener, payload);
    }
    
    // "Subscribe to infinite gas" button clicked. Explain to user, then start purchase
    // flow for subscription.
    public void onInfiniteGasButtonClicked(View arg0) {
        //if (!mHelper.subscriptionsSupported()) {
        //    Log.e(TAG,"Subscriptions not supported on your device yet. Sorry!");
        //    return;
        //}
        //
        ///* TODO: for security, generate your payload here for verification. See the comments on 
        // *        verifyDeveloperPayload() for more info. Since this is a SAMPLE, we just use 
        // *        an empty string, but on a production app you should carefully generate this. */
        //String payload = ""; 
        //
        //setWaitScreen(true);
        //Log.d(TAG, "Launching purchase flow for infinite gas subscription.");
        //mHelper.launchPurchaseFlow(this,
        //        SKU_INFINITE_GAS, IabHelper.ITEM_TYPE_SUBS, 
        //        RC_REQUEST, mPurchaseFinishedListener, payload);        
    }
    
    //@Override
    /**
     * Handle activity result. Call this method from your Activity's
     * onActivityResult callback.
     */
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        LogD("onActivityResult("+requestCode+", "+resultCode+", data)");
        //Returns true if handled otherwise
        //false means that you should handle it in your activity
        boolean handled = mHelper.handleActivityResult(requestCode, resultCode, data);
        if(handled) {
            LogD("handled = TRUE");
        } else {
            LogD("handled = FALSE");
        }
    }
    
    /** Verifies the developer payload of a purchase. */
    boolean verifyDeveloperPayload(Purchase p) {
        String payload = p.getDeveloperPayload();
        
        /*
         * TODO: verify that the developer payload of the purchase is correct. It will be
         * the same one that you sent when initiating the purchase.
         * 
         * WARNING: Locally generating a random string when starting a purchase and 
         * verifying it here might seem like a good approach, but this will fail in the 
         * case where the user purchases an item on one device and then uses your app on 
         * a different device, because on the other device you will not have access to the
         * random string you originally generated.
         *
         * So a good developer payload has these characteristics:
         * 
         * 1. If two different users purchase an item, the payload is different between them,
         *    so that one user's purchase can't be replayed to another user.
         * 
         * 2. The payload must be such that you can verify it even when the app wasn't the
         *    one who initiated the purchase flow (so that items purchased by the user on 
         *    one device work on other devices owned by the user).
         * 
         * Using your own server to store and verify developer payloads across app
         * installations is recommended.
         */
        
        return true;
    }

    // Callback for when a purchase is finished
    IabHelper.OnIabPurchaseFinishedListener mPurchaseFinishedListener = new IabHelper.OnIabPurchaseFinishedListener() {
        public void onIabPurchaseFinished(IabResult result, Purchase purchase) {
            Log.d(TAG, "Purchase finished: " + result + ", purchase: " + purchase);
            if (result.isFailure()) {
                Log.e(TAG,"Error purchasing: " + result);
                failPurchase();
                setWaitScreen(false);
                return;
            }
            if (!verifyDeveloperPayload(purchase)) {
                Log.e(TAG,"Error purchasing. Authenticity verification failed.");
                failPurchase();
                setWaitScreen(false);
                return;
            }

            Log.d(TAG, "Purchase successful.");
            succeedPurchase();

            //if (purchase.getSku().equals(SKU_GAS)) {
            //    // bought 1/4 tank of gas. So consume it.
            //    Log.d(TAG, "Purchase is gas. Starting gas consumption.");
            //    mHelper.consumeAsync(purchase, mConsumeFinishedListener);
            //}
            //else if (purchase.getSku().equals(SKU_PREMIUM)) {
            //    // bought the premium upgrade!
            //    Log.d(TAG, "Purchase is premium upgrade. Congratulating user.");
            //    alert("Thank you for upgrading to premium!");
            //    mIsPremium = true;
            //    updateUi();
            //    setWaitScreen(false);
            //}
            //else if (purchase.getSku().equals(SKU_INFINITE_GAS)) {
            //    // bought the infinite gas subscription
            //    Log.d(TAG, "Infinite gas subscription purchased.");
            //    alert("Thank you for subscribing to infinite gas!");
            //    mSubscribedToInfiniteGas = true;
            //    mTank = TANK_MAX;
            //    updateUi();
            //    setWaitScreen(false);
            //}
        }
    };

    // Called when consumption is complete
    IabHelper.OnConsumeFinishedListener mConsumeFinishedListener = new IabHelper.OnConsumeFinishedListener() {
        public void onConsumeFinished(Purchase purchase, IabResult result) {
            Log.d(TAG, "Consumption finished. Purchase: " + purchase + ", result: " + result);

            // We know this is the "gas" sku because it's the only one we consume,
            // so we don't check which sku was consumed. If you have more than one
            // sku, you probably should check...
            if (result.isSuccess()) {
                // successfully consumed, so we apply the effects of the item in our
                // game world's logic, which in our case means filling the gas tank a bit
                Log.d(TAG, "Consumption successful. Provisioning.");
                //mTank = mTank == TANK_MAX ? TANK_MAX : mTank + 1;
                //saveData();
                //alert("You filled 1/4 tank. Your tank is now " + String.valueOf(mTank) + "/4 full!");
            }
            else {
                Log.e(TAG,"Error while consuming: " + result);
            }
            //updateUi();
            setWaitScreen(false);
            Log.d(TAG, "End consumption flow.");
        }
    };

    //// Drive button clicked. Burn gas!
    //public void onDriveButtonClicked(View arg0) {
    //    Log.d(TAG, "Drive button clicked.");
    //    if (!mSubscribedToInfiniteGas && mTank <= 0) alert("Oh, no! You are out of gas! Try buying some!");
    //    else {
    //        if (!mSubscribedToInfiniteGas) --mTank;
    //        saveData();
    //        alert("Vroooom, you drove a few miles.");
    //        updateUi();
    //        Log.d(TAG, "Vrooom. Tank is now " + mTank);
    //    }
    //}
    
    // We're being destroyed. It's important to dispose of the helper here!
    //@Override
    //public void onDestroy() {
    //    super.onDestroy();
    //    
    //    // very important:
    //    Log.d(TAG, "Destroying helper.");
    //    if (mHelper != null) mHelper.dispose();
    //    mHelper = null;
    //}
    void succeedPurchase() {
        IAPWrapper.onPayResult(this, IAPWrapper.PAYRESULT_SUCCESS, "");
        //onPurchaseSucceeded();
    }

    void failPurchase() {
        IAPWrapper.onPayResult(this, IAPWrapper.PAYRESULT_FAIL, "");
        //onPurchaseFailed();
    }

    // Enables or disables the "please wait" screen.
    void setWaitScreen(boolean set) {
        //Log.e(TAG, "ERROR: need to implement setWaitScreen");
        //findViewById(R.id.screen_main).setVisibility(set ? View.GONE : View.VISIBLE);
        //findViewById(R.id.screen_wait).setVisibility(set ? View.VISIBLE : View.GONE);
    }

    void alert(String message) {
        //AlertDialog.Builder bld = new AlertDialog.Builder(this);
        AlertDialog.Builder bld = new AlertDialog.Builder(getContext());
        bld.setMessage(message);
        bld.setNeutralButton("OK", null);
        Log.d(TAG, "Showing alert dialog: " + message);
        bld.create().show();
    }


}
