/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "platform/CCGameServices.h"
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

void CCGameServices::signIn() {
    CCLog("CCGameServices::signIn");
    return beginUserInitiatedSignInJNI();
}

void CCGameServices::setLocalizedMessages(const char *signingIn, const char *signingOut, const char *unknownError) {
    CCLog("CCGameServices::setLocalizedMessages");
    setLocalizedMessagesJNI(signingIn, signingOut, unknownError);
}

void CCGameServices::setSecretKey(const char *key) {
    CCLog("CCGameServices::setSecretKey - No key necessary for android");
}

void CCGameServices::showLeaderboard() {
    CCLog("CCGameServices::showLeaderboard");
    showLeaderboardJNI();
}

void CCGameServices::showAchievement() {
    CCLog("CCGameServices::showAchievement");
    showAchievementJNI();
}

void CCGameServices::reportAchievement(const char *category) {
    reportAchievement(category, 0);
}

void CCGameServices::reportAchievement(const char *category, int portion) {
    CCLog("> CCGameServices::reportAchievement(category=%s portion=%d)", category, portion);
    reportAchievementJNI(category, portion);
    CCLog("< CCGameServices::reportAchievement");
}

void CCGameServices::submitScore(const char *category, long long score) {
    CCLog("> CCGameServices::submitScore:%lld toCategory:%s", score, category);
    submitScoreJNI(category, score);
    CCLog("< CCGameServices::submitScore");
}

void CCGameServices::addSignInDelegate(CCSignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void CCGameServices::removeSignInDelegate(CCSignInDelegate *pDelegate) {
   // m_pSignInHandlers.erase(pDelegate);
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
