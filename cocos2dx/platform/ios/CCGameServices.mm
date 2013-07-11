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

void CCGameServices::setLocalizedMessages(const char *signingIn, const char *signingOut, const char *unknownError) {
    CCLog("CCGameServices::setLocalizedMessages is only used for android");
}

bool CCGameServices::isSignedIn() {
    CCLog("CCGameServices::isSignedIn");
    return [[CCGameKitHelper sharedHelper] isAuthenticated];
}

void CCGameServices::signIn() {
    CCLog("CCGameServices::signIn");
    return [[CCGameKitHelper sharedHelper] authenticatePlayer];
}

void CCGameServices::setSecretKey(const char *key) {
    CCLog("CCGameServices::setSecretKey");
    [[CCGameKitHelper sharedHelper] setSecretKey:[NSString stringWithFormat:@"%s", key]];
}


void CCGameServices::showLeaderboard() {
    CCLog("CCGameServices::showLeaderboard");
    [[CCGameKitHelper sharedHelper] showLeaderboard:nil];
    //CCAssert(false, "implement CCGameServices::showLeaderboard");
}

void CCGameServices::showAchievement() {
    CCLog("CCGameServices::showAchievement");
    //[[CCGameKitHelper sharedHelper] resetAchievements];//For testing
    [[CCGameKitHelper sharedHelper] showAchievements];
    //CCAssert(false, "implement CCGameServices::showLeaderboard");
}

void CCGameServices::reportAchievement(const char *category) {
    reportAchievement(category, 100);
}


void CCGameServices::reportAchievement(const char *category, int portion) {
    [[CCGameKitHelper sharedHelper] reportAchievement:[NSString stringWithFormat:@"%s", category] percentComplete:(double)portion];
    [[CCGameKitHelper sharedHelper] showNotification:[NSString stringWithFormat:@"%s", category] identifier:[NSString stringWithFormat:@"%s", category]];
}

void CCGameServices::submitScore(const char *category, long long score) {
    [[CCGameKitHelper sharedHelper] reportScore:score forLeaderboard:[NSString stringWithFormat:@"%s", category]];
}

void CCGameServices::addSignInDelegate(CCSignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void CCGameServices::removeSignInDelegate(CCSignInDelegate *pDelegate) {
    //m_pSignInHandlers.erase(std::remove(m_pSignInHandlers.begin(), m_pSignInHandlers.end(), pDelegate), m_pSignInHandlers.end());
    int indexToErase = -1;
    int index = 0;
    for(std::vector<CCSignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        if(reinterpret_cast<size_t>(*it) == reinterpret_cast<size_t>(pDelegate)) {
            indexToErase = index;
            break;
        }
        index++;
    }
    if(indexToErase >= 0) {
        m_pSignInHandlers.erase(m_pSignInHandlers.begin() + indexToErase);
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
