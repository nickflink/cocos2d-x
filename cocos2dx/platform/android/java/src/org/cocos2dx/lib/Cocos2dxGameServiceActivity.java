/*
 * Copyright (C) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.cocos2dx.lib;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import com.google.android.gms.appstate.AppStateClient;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.games.GamesClient;
import com.google.android.gms.plus.PlusClient;

/**
 * Example base class for games. This implementation takes care of setting up
 * the GamesClient object and managing its lifecycle. Subclasses only need to
 * override the @link{#onSignInSucceeded} and @link{#onSignInFailed} abstract
 * methods. To initiate the sign-in flow when the user clicks the sign-in
 * button, subclasses should call @link{#beginUserInitiatedSignIn}. By default,
 * this class only instantiates the GamesClient object. If the PlusClient or
 * AppStateClient objects are also wanted, call the Cocos2dxGameServiceActivity(int)
 * constructor and specify the requested clients. For example, to request
 * PlusClient and GamesClient, use Cocos2dxGameServiceActivity(CLIENT_GAMES | CLIENT_PLUS).
 * To request all available clients, use Cocos2dxGameServiceActivity(CLIENT_ALL).
 * Alternatively, you can also specify the requested clients via
 * @link{#setRequestedClients}, but you must do so before @link{#onCreate}
 * gets called, otherwise the call will have no effect.
 *
 * @author Bruno Oliveira (Google)
 */
//public class Cocos2dxGameServiceActivity extends FragmentActivity implements Cocos2dxGameServiceHelper.Cocos2dxGameServiceHelperListener {
public class Cocos2dxGameServiceActivity implements Cocos2dxGameServiceHelper.Cocos2dxGameServiceHelperListener {

    // The game helper object. This class is mainly a wrapper around this object.
    protected Cocos2dxGameServiceHelper mHelper;

    // We expose these constants here because we don't want users of this class
    // to have to know about Cocos2dxGameServiceHelper at all.
    public static final int CLIENT_GAMES = Cocos2dxGameServiceHelper.CLIENT_GAMES;
    public static final int CLIENT_APPSTATE = Cocos2dxGameServiceHelper.CLIENT_APPSTATE;
    public static final int CLIENT_PLUS = Cocos2dxGameServiceHelper.CLIENT_PLUS;
    public static final int CLIENT_ALL = Cocos2dxGameServiceHelper.CLIENT_ALL;

    // Requested clients. By default, that's just the games client.
    protected int mRequestedClients = CLIENT_GAMES;

    /** Constructs a Cocos2dxGameServiceActivity with default client (GamesClient). */
    public Cocos2dxGameServiceActivity(Activity activity) {
        super();
        mHelper = new Cocos2dxGameServiceHelper(activity);
    }

    /**
     * Constructs a Cocos2dxGameServiceActivity with the requested clients.
     * @param requestedClients The requested clients (a combination of CLIENT_GAMES,
     *         CLIENT_PLUS and CLIENT_APPSTATE).
     */
    protected Cocos2dxGameServiceActivity(int requestedClients) {
        super();
        setRequestedClients(requestedClients);
    }

    /**
     * Sets the requested clients. The preferred way to set the requested clients is
     * via the constructor, but this method is available if for some reason your code
     * cannot do this in the constructor. This must be called before onCreate in order to
     * have any effect. If called after onCreate, this method is a no-op.
     *
     * @param requestedClients A combination of the flags CLIENT_GAMES, CLIENT_PLUS
     *         and CLIENT_APPSTATE, or CLIENT_ALL to request all available clients.
     */
    protected void setRequestedClients(int requestedClients) {
        mRequestedClients = requestedClients;
    }

//    @Override
//    protected void onCreate(Bundle b) {
//        super.onCreate(b);
//        mHelper = new Cocos2dxGameServiceHelper(this);
//        mHelper.setup(this, mRequestedClients);
//    }

//    @Override
//    protected void onStart() {
//        super.onStart();
//        mHelper.onStart(this);
//    }

//    @Override
//    protected void onStop() {
//        super.onStop();
//        mHelper.onStop();
//    }

//    @Override
//    protected void onActivityResult(int request, int response, Intent data) {
//        super.onActivityResult(request, response, data);
//        mHelper.onActivityResult(request, response, data);
//    }

    //Cocos2dxGameServiceHelperListener Overrides
    @Override
    public void onSignInFailed() {
        mHelper.debugLog("handle onSignInFailed gracefully");
    }

    @Override
    public void onSignInSucceeded() {
        mHelper.debugLog("handle onSignInSucceeded gracefully");
    }


    public GamesClient getGamesClient() {
        return mHelper.getGamesClient();
    }

    public AppStateClient getAppStateClient() {
        return mHelper.getAppStateClient();
    }

    public PlusClient getPlusClient() {
        return mHelper.getPlusClient();
    }

    public boolean isSignedIn() {
        return mHelper.isSignedIn();
    }

    public void beginUserInitiatedSignIn() {
        mHelper.beginUserInitiatedSignIn();
    }

    public void signOut() {
        mHelper.signOut();
    }

    public void showAlert(String title, String message) {
        mHelper.showAlert(title, message);
    }

    public void showAlert(String message) {
        mHelper.showAlert(message);
    }

    public void enableDebugLog(boolean enabled, String tag) {
        mHelper.enableDebugLog(enabled, tag);
    }

    public String getInvitationId() {
        return mHelper.getInvitationId();
    }

    public void reconnectClients(int whichClients) {
        mHelper.reconnectClients(whichClients);
    }

    public String getScopes() {
        return mHelper.getScopes();
    }

    public boolean hasSignInError() {
        return mHelper.hasSignInError();
    }

    public ConnectionResult getSignInError() {
        return mHelper.getSignInError();
    }

    public void setSignInMessages(String signingInMessage, String signingOutMessage) {
        mHelper.setSigningInMessage(signingInMessage);
        mHelper.setSigningOutMessage(signingOutMessage);
    }
}
