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

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ImageView;

import org.cocos2dx.lib.util.IabHelper;
import org.cocos2dx.lib.util.IabResult;
import org.cocos2dx.lib.util.Inventory;
import org.cocos2dx.lib.util.Purchase;


/**
 * @author Nick Flink (gogododo)
 */
public class Cocos2dxInAppBilling {
    // Debug tag, for logging
    private static final String TAG = Cocos2dxInAppBilling.class.getSimpleName();

    // (arbitrary) request code for the purchase flow
    static final int RC_REQUEST = 10001;

    // The helper object
    private IabHelper mHelper;
    private Activity mActivity = null;
    private static volatile Cocos2dxInAppBilling sInstance = null;

    /**
     * Construct a Cocos2dxInAppBilling object, initially tied to the given Activity.
     * After constructing this object, call @link{setup} from the onCreate()
     * method of your Activity.
     */
    private Cocos2dxInAppBilling() {
    }

    public static Cocos2dxInAppBilling getInstance() {
        if (sInstance == null) {
            synchronized ( Cocos2dxInAppBilling.class ){
                if (sInstance == null) {
                    sInstance = new Cocos2dxInAppBilling();
                }
            }
        }
        return sInstance;
    }

    private Context getContext() {
        return mActivity;
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

    public static void setupJNI() {
        Log.e(TAG, "implement setupJNI");
    }
    public static void refreshPurchasesJNI() {
        Log.e(TAG, "implement refreshPurchasesJNI");
    }

    public static void inAppPurchaseJNI(String name, String receipt) {

    // User clicked the "Buy Gas" button
    //public void onBuyGasButtonClicked(View arg0) {
        Log.d(TAG, "Buy gas button clicked.");
        getInstance().setWaitScreen(true);
        getInstance().mHelper.launchPurchaseFlow(getInstance().mActivity, name, RC_REQUEST, getInstance().mPurchaseFinishedListener, receipt);

        //if (mSubscribedToInfiniteGas) {
        //    Log.e(TAG,"No need! You're subscribed to infinite gas. Isn't that awesome?");
        //    return;
        //}
        //
        //if (mTank >= TANK_MAX) {
        //    Log.e(TAG,"Your tank is full. Drive around a bit!");
        //    return;
        //}

        //// launch the gas purchase UI flow.
        //// We will be notified of completion via mPurchaseFinishedListener
        //setWaitScreen(true);
        //Log.d(TAG, "Launching purchase flow for gas.");
        //
        ///* TODO: for security, generate your payload here for verification. See the comments on 
        // *        verifyDeveloperPayload() for more info. Since this is a SAMPLE, we just use 
        // *        an empty string, but on a production app you should carefully generate this. */
        //String payload = ""; 
        //
        //mHelper.launchPurchaseFlow(this, SKU_GAS, RC_REQUEST, 
        //        mPurchaseFinishedListener, payload);
    }

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
    public boolean onActivityResult(int requestCode, int resultCode, Intent data) {
        //Returns true if handled otherwise
        //false means that you should handle it in your activity
        return mHelper.handleActivityResult(requestCode, resultCode, data);
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
        onPurchaseSucceeded();
    }

    void failPurchase() {
        onPurchaseFailed();
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

    //void saveData() {
    //    
    //    /*
    //     * WARNING: on a real application, we recommend you save data in a secure way to
    //     * prevent tampering. For simplicity in this sample, we simply store the data using a
    //     * SharedPreferences.
    //     */
    //    
    //    SharedPreferences.Editor spe = getPreferences(MODE_PRIVATE).edit();
    //    spe.putInt("tank", mTank);
    //    spe.commit();
    //    Log.d(TAG, "Saved data: tank = " + String.valueOf(mTank));
    //}

    //void loadData() {
    //    SharedPreferences sp = getPreferences(MODE_PRIVATE);
    //    mTank = sp.getInt("tank", 2);
    //    Log.d(TAG, "Loaded data: tank = " + String.valueOf(mTank));
    //}
    // ===========================================================
    // Native Methods
    // ===========================================================
    public static native void onPurchaseFailed();
    public static native void onPurchaseSucceeded();
}
