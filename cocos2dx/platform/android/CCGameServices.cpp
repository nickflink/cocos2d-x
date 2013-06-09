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

void CCGameServices::submitScore(const char *category, long long score) {
    CCLog("This needs implemented");
    submitScoreJNI(category, score);
    CCAssert(false, "implement CCGameServices::submitScore");
}

void CCGameServices::addSignInDelegate(CCSignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void CCGameServices::removeSignInDelegate(CCSignInDelegate *pDelegate) {
   // m_pSignInHandlers.erase(pDelegate);
    for(std::vector<CCSignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        if(reinterpret_cast<size_t>(*it) == reinterpret_cast<size_t>(pDelegate)) {
            m_pSignInHandlers.erase(it);
        }
    }
}

void CCGameServices::onSignInFailed() {
    CCLog("CCGameServices::onSignInFailed");
    for(std::vector<CCSignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInFailed();
    }
}

void CCGameServices::onSignInSucceeded() {
    CCLog("CCGameServices::onSignInSucceeded");
    for(std::vector<CCSignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInSucceeded();
    }
}

NS_CC_END
