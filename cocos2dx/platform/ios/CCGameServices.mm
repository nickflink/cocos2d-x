/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCGameServices.h"
#include "CCGameServices_objc.h"

NS_CC_BEGIN
static void static_showLeaderboard()
{
    //[[CCGameServices sharedGameServices] showLeaderboard];
}

// singleton stuff
static CCGameServices *s_SharedGameServices = NULL;
CCGameServices* CCGameServices::sharedGameServices(void) {
    if (!s_SharedGameServices) {
        s_SharedGameServices = new CCGameServices();
        s_SharedGameServices->init();
    }
    return s_SharedGameServices;
}

CCGameServices::CCGameServices(void) {
}

CCGameServices::~CCGameServices(void) {
}

bool CCGameServices::init(void) {
    bool success = true;
    return success;
}

bool CCGameServices::isSignedIn() {
    CCLog("CCGameServices::isSignedIn");
    return false;
}

void CCGameServices::beginUserInitiatedSignIn() {
    CCLog("CCGameServices::beginUserInitiatedSignIn");
}

void CCGameServices::showLeaderboard() {
    CCLog("CCGameServices::showLeaderboard");
    static_showLeaderboard();
    //CCAssert(false, "implement CCGameServices::showLeaderboard");
}

void CCGameServices::submitScore(int64_t score, const char *category) {
    CCLog("This needs implemented");
    CCAssert(false, "implement CCGameServices::submitScore");
}

void CCGameServices::onSignInFailed() {
    CCLog("CCGameServices::onSignInFailed");
}

void CCGameServices::onSignInSucceeded() {
    CCLog("CCGameServices::onSignInSucceeded");
}


NS_CC_END
