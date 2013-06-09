/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCGameServices.h"
#include "CCGameKitHelper.h"

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
    CCLog("CCGameServices::isSignedIn");
    return [[CCGameKitHelper sharedHelper] isAuthenticated];
}

void CCGameServices::beginUserInitiatedSignIn() {
    CCLog("CCGameServices::beginUserInitiatedSignIn");
}

void CCGameServices::showLeaderboard() {
    CCLog("CCGameServices::showLeaderboard");
    [[CCGameKitHelper sharedHelper] showLeaderboard:nil];
    //CCAssert(false, "implement CCGameServices::showLeaderboard");
}

void CCGameServices::submitScore(int64_t score, const char *category) {
    CCLog("This needs implemented");
    CCAssert(false, "implement CCGameServices::submitScore");
}

void CCGameServices::addSignInDelegate(CCSignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void CCGameServices::removeSignInDelegate(CCSignInDelegate *pDelegate) {
    m_pSignInHandlers.erase(std::remove(m_pSignInHandlers.begin(), m_pSignInHandlers.end(), pDelegate), m_pSignInHandlers.end());
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
