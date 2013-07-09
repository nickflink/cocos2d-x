/**
 * @author Nick Flink <nick@github.com>
 * http://www.gogododo.com
 */
package org.cocos2dx.plugin;

import org.cocos2dx.plugin.FacebookApp.FbDialogListener;

import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Bundle;
import android.util.Log;
import android.view.Display;
import android.view.ViewGroup;
import android.view.Window;
import android.webkit.CookieManager;
import android.webkit.CookieSyncManager;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;

public class FacebookDialog extends Dialog {
    static final FrameLayout.LayoutParams FILL = new FrameLayout.LayoutParams(ViewGroup.LayoutParams.FILL_PARENT, ViewGroup.LayoutParams.FILL_PARENT);
    static final int MARGIN = 4;
    static final int PADDING = 2;
    private String mUrl;
    private FbDialogListener mListener;
    private ProgressDialog mSpinner;
    private WebView mWebView;
    private LinearLayout mContent;
    private TextView mTitle;
    private static final String LOG_TAG = "Facebook-WebView";

    protected static void LogD(String msg) {
        if (SocialFacebook.bDebug) {
            Log.d(LOG_TAG, msg);
        }
    }

    public FacebookDialog(Context context, String url, FbDialogListener listener) {
        super(context);
        mUrl = url;
        mListener = listener;
        setOnCancelListener(mCancelListener);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mSpinner = new ProgressDialog(getContext());
        mSpinner.requestWindowFeature(Window.FEATURE_NO_TITLE);
        mSpinner.setMessage("Loading...");
        mSpinner.setCancelable(false);
        mContent = new LinearLayout(getContext());
        mContent.setOrientation(LinearLayout.VERTICAL);
        setUpTitle();
        setUpWebView();
        Display display = getWindow().getWindowManager().getDefaultDisplay();
        double[] dimensions = new double[2];
        if (display.getWidth() < display.getHeight()) {
            dimensions[0] = 0.87 * display.getWidth();
            dimensions[1] = 0.82 * display.getHeight();
        } else {
            dimensions[0] = 0.75 * display.getWidth();
            dimensions[1] = 0.75 * display.getHeight();
        }
        addContentView(mContent, new FrameLayout.LayoutParams((int) dimensions[0], (int) dimensions[1]));
    }

    private void setUpTitle() {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        // Drawable icon = getContext().getResources().getDrawable(R.drawable.facebook_icon);
        mTitle = new TextView(getContext());
        mTitle.setText("Facebook");
        mTitle.setTextColor(Color.WHITE);
        mTitle.setTypeface(Typeface.DEFAULT_BOLD);
        mTitle.setBackgroundColor(0xFFbbd7e9);
        mTitle.setPadding(MARGIN + PADDING, MARGIN, MARGIN, MARGIN);
        mTitle.setCompoundDrawablePadding(MARGIN + PADDING);
        // mTitle.setCompoundDrawablesWithIntrinsicBounds(icon, null, null, null);
        mTitle.setCompoundDrawablesWithIntrinsicBounds(null, null, null, null);
        mContent.addView(mTitle);
    }

    private void setUpWebView() {
        CookieSyncManager.createInstance(getContext());
        CookieManager cookieManager = CookieManager.getInstance();
        cookieManager.removeAllCookie();
        mWebView = new WebView(getContext());
        mWebView.setVerticalScrollBarEnabled(false);
        mWebView.setHorizontalScrollBarEnabled(false);
        mWebView.setWebViewClient(new FacebookWebViewClient());
        mWebView.getSettings().setJavaScriptEnabled(true);
        mWebView.loadUrl(mUrl);
        mWebView.setLayoutParams(FILL);
        mContent.addView(mWebView);
    }

    private class FacebookWebViewClient extends WebViewClient {
        @Override
        public boolean shouldOverrideUrlLoading(WebView view, String url) {
            boolean ret = true;
            LogD("Redirecting URL " + url);
            if (url.startsWith(FacebookApp.CALLBACK_URL)) {
                mListener.onComplete(url);
                FacebookDialog.this.dismiss();
                ret = true;
            }  else if (url.startsWith("authorize")) {
                ret = false;
            }
            return ret;
        }

        @Override
        public void onReceivedError(WebView view, int errorCode, String description, String failingUrl) {
            LogD("Page error: " + description);
            super.onReceivedError(view, errorCode, description, failingUrl);
            mListener.onError(FbConsts.EPAGE_ERROR, description);
            FacebookDialog.this.dismiss();
        }

        @Override
        public void onPageStarted(WebView view, String url, Bitmap favicon) {
            LogD("Loading URL: " + url);
            super.onPageStarted(view, url, favicon);
            mSpinner.show();
        }

        @Override
        public void onPageFinished(WebView view, String url) {
            super.onPageFinished(view, url);
            String title = mWebView.getTitle();
            if (title != null && title.length() > 0) {
                mTitle.setText(title);
            }
            mSpinner.dismiss();
        }
    }

    private DialogInterface.OnCancelListener mCancelListener = new OnCancelListener() {

        @Override
        public void onCancel(DialogInterface dialog) {
            mSpinner.dismiss();
            mListener.onError(FbConsts.EUSER_CANCELED, "User canceled!");
        }
    };
}
