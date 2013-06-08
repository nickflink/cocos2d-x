/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCGameServices_H__
#define __CCGameServices_H__

#include "cocos2d.h"

NS_CC_BEGIN

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
    virtual void beginUserInitiatedSignIn();
    virtual void showLeaderboard();
    virtual void submitScore(int64_t score, const char *category);
    //
    //Callbacks.
    //
    virtual void onSignInFailed();
    virtual void onSignInSucceeded();
};

NS_CC_END

#endif //__CCGameServices_H__

