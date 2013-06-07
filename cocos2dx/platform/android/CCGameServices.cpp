/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCGameServices.h"
#include "CCGameServicesJni.h"

NS_CC_BEGIN
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
    return isSignedInJNI();
}

void CCGameServices::beginUserInitiatedSignIn() {
    return beginUserInitiatedSignInJNI();
}

void CCGameServices::showLeaderboard() {
    CCLog("CCGameServices::showLeaderboard");
    showLeaderboardJNI();
    //CCAssert(false, "implement CCGameServices::showLeaderboard");
}

void CCGameServices::submitScore(int64_t score, const char *category) {
    CCLog("This needs implemented");
    CCAssert(false, "implement CCGameServices::submitScore");
}
NS_CC_END
