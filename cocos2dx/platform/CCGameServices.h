/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCGameServices_H__
#define __CCGameServices_H__

#include "cocos2d.h"

NS_CC_BEGIN

class CC_DLL CCSignInDelegate
{
public:

    CCSignInDelegate() {}
    virtual ~CCSignInDelegate() {CCLog("CCSignInDelegate::~CCSignInDelegate");}
    virtual void ccOnSignInSucceeded() = 0;
    virtual void ccOnSignInFailed() = 0;
};


///
///\brief Class for CCGameServices
//
///You can use this widget to display platform specific CCGameServicess
///
///

class CCGameServices
{
private:
    ///
    ///Constructor.
    ///
    CCGameServices(void);
    virtual bool init();
public:
    ///
    ///Destructor.
    ///
    static CCGameServices* sharedGameServices(void);
    virtual ~CCGameServices(void);
    virtual bool isSignedIn();
    virtual void signIn();
    virtual void setSecretKey(const char *key);
    virtual void showLeaderboard();
    virtual void showAchievement();
    virtual void reportAchievement(const char *category);
    virtual void reportAchievement(const char *category, int portion);
    virtual void submitScore(const char *category, long long score);
    virtual void addSignInDelegate(CCSignInDelegate *pDelegate);
    virtual void removeSignInDelegate(CCSignInDelegate *pDelegate);
    //
    //Callbacks.
    //
    virtual void onSignInFailed();
    virtual void onSignInSucceeded();
  private:
    std::vector<CCSignInDelegate*>m_pSignInHandlers;

};

NS_CC_END

#endif //__CCGameServices_H__

