/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "platform/CCGameServices.h"
#include "CCGameServicesJni.h"

NS_CC_BEGIN
// singleton stuff
static GameServices *s_SharedGameServices = NULL;
GameServices* GameServices::getInstance(void) {
    if (!s_SharedGameServices) {
        s_SharedGameServices = new GameServices();
        s_SharedGameServices->init();
    }
    return s_SharedGameServices;
}

GameServices::GameServices(void) {
}

GameServices::~GameServices(void) {
}

bool GameServices::init(void) {
    bool success = true;
    return success;
}

bool GameServices::isSignedIn() {
    return isSignedInJNI();
}

void GameServices::signIn() {
    CCLog("GameServices::signIn");
    return beginUserInitiatedSignInJNI();
}

void GameServices::setLocalizedMessages(const char *signingIn, const char *signingOut, const char *unknownError) {
    CCLog("GameServices::setLocalizedMessages");
    setLocalizedMessagesJNI(signingIn, signingOut, unknownError);
}

void GameServices::setSecretKey(const char *key) {
    CCLog("GameServices::setSecretKey - No key necessary for android");
}

void GameServices::showLeaderboard() {
    CCLog("GameServices::showLeaderboard");
    showLeaderboardJNI();
}

void GameServices::showAchievement() {
    CCLog("GameServices::showAchievement");
    showAchievementJNI();
}

void GameServices::reportAchievement(const char *category) {
    reportAchievement(category, 0);
}

void GameServices::reportAchievement(const char *category, int portion) {
    CCLog("> GameServices::reportAchievement(category=%s portion=%d)", category, portion);
    reportAchievementJNI(category, portion);
    CCLog("< GameServices::reportAchievement");
}

void GameServices::submitScore(const char *category, long long score) {
    CCLog("> GameServices::submitScore:%lld toCategory:%s", score, category);
    submitScoreJNI(category, score);
    CCLog("< GameServices::submitScore");
}

void GameServices::addSignInDelegate(SignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void GameServices::removeSignInDelegate(SignInDelegate *pDelegate) {
   // m_pSignInHandlers.erase(pDelegate);
    int indexToErase = -1;
    int index = 0;
    for(std::vector<SignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
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

void GameServices::onSignInFailed() {
    CCLog("GameServices::onSignInFailed");
    for(std::vector<SignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInFailed();
    }
}

void GameServices::onSignInSucceeded() {
    CCLog("GameServices::onSignInSucceeded");
    for(std::vector<SignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInSucceeded();
    }
}

NS_CC_END
