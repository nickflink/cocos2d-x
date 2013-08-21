/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCGameServices.h"
#include "CCGameKitHelper.h"

NS_CC_BEGIN

// singleton stuff
static GameServices *s_getInstance = NULL;
GameServices* GameServices::getInstance(void) {
    if (!s_getInstance) {
        s_getInstance = new GameServices();
        s_getInstance->init();
    }
    return s_getInstance;
}

GameServices::GameServices(void) {
}

GameServices::~GameServices(void) {
}

bool GameServices::init(void) {
    bool success = true;
    return success;
}

void GameServices::setLocalizedMessages(const char *signingIn, const char *signingOut, const char *unknownError) {
    log("GameServices::setLocalizedMessages is only used for android");
}

bool GameServices::isSignedIn() {
    log("GameServices::isSignedIn");
    return [[CCGameKitHelper sharedHelper] isAuthenticated];
}

void GameServices::signIn() {
    log("GameServices::signIn");
    return [[CCGameKitHelper sharedHelper] authenticatePlayer];
}

void GameServices::setSecretKey(const char *key) {
    log("GameServices::setSecretKey");
    [[CCGameKitHelper sharedHelper] setSecretKey:[NSString stringWithFormat:@"%s", key]];
}


void GameServices::showLeaderboard() {
    log("GameServices::showLeaderboard");
    [[CCGameKitHelper sharedHelper] showLeaderboard:nil];
    //CCAssert(false, "implement GameServices::showLeaderboard");
}

void GameServices::showAchievement() {
    log("GameServices::showAchievement");
    //[[CCGameKitHelper sharedHelper] resetAchievements];//For testing
    [[CCGameKitHelper sharedHelper] showAchievements];
    //CCAssert(false, "implement GameServices::showLeaderboard");
}

void GameServices::reportAchievement(const char *category) {
    reportAchievement(category, 100);
}


void GameServices::reportAchievement(const char *category, int portion) {
    [[CCGameKitHelper sharedHelper] reportAchievement:[NSString stringWithFormat:@"%s", category] percentComplete:(double)portion];
    [[CCGameKitHelper sharedHelper] showNotification:[NSString stringWithFormat:@"%s", category] message:[NSString stringWithFormat:@"%s", category] identifier:[NSString stringWithFormat:@"%s", category]];
}

void GameServices::submitScore(const char *category, long long score) {
    [[CCGameKitHelper sharedHelper] reportScore:score forLeaderboard:[NSString stringWithFormat:@"%s", category]];
}

void GameServices::addSignInDelegate(SignInDelegate *pDelegate) {
    m_pSignInHandlers.push_back(pDelegate);
}

void GameServices::removeSignInDelegate(SignInDelegate *pDelegate) {
    //m_pSignInHandlers.erase(std::remove(m_pSignInHandlers.begin(), m_pSignInHandlers.end(), pDelegate), m_pSignInHandlers.end());
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
    log("GameServices::onSignInFailed");
    for(std::vector<SignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInFailed();
    }
}

void GameServices::onSignInSucceeded() {
    log("GameServices::onSignInSucceeded");
    for(std::vector<SignInDelegate*>::iterator it = m_pSignInHandlers.begin(); it != m_pSignInHandlers.end(); ++it) {
        (*it)->ccOnSignInSucceeded();
    }
}

NS_CC_END
