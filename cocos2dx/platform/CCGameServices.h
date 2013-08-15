/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCGameServices_H__
#define __CCGameServices_H__

#include "cocos2d.h"

NS_CC_BEGIN

class CC_DLL SignInDelegate
{
public:

    SignInDelegate() {}
    virtual ~SignInDelegate() {log("SignInDelegate::~SignInDelegate");}
    virtual void ccOnSignInSucceeded() = 0;
    virtual void ccOnSignInFailed() = 0;
};


///
///\brief Class for CCGameServices
//
///You can use this widget to display platform specific CCGameServicess
///
///

class GameServices
{
private:
    ///
    ///Constructor.
    ///
    GameServices(void);
    virtual bool init();
public:
    ///
    ///Destructor.
    ///
    static GameServices* getInstance(void);
    virtual ~GameServices(void);
    virtual void setLocalizedMessages(const char *signingIn, const char *signingOut, const char *unknownError);
    virtual bool isSignedIn();
    virtual void signIn();
    virtual void setSecretKey(const char *key);
    virtual void showLeaderboard();
    virtual void showAchievement();
    virtual void reportAchievement(const char *category);
    virtual void reportAchievement(const char *category, int portion);
    virtual void submitScore(const char *category, long long score);
    virtual void addSignInDelegate(SignInDelegate *pDelegate);
    virtual void removeSignInDelegate(SignInDelegate *pDelegate);
    //
    //Callbacks.
    //
    virtual void onSignInFailed();
    virtual void onSignInSucceeded();
  private:
    std::vector<SignInDelegate*>m_pSignInHandlers;

};

NS_CC_END

#endif //__CCGameServices_H__

