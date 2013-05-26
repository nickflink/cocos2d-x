/****************************************************************************
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2012 Nick Flink
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __CCACHIEVEMENT_H__
#define __CCACHIEVEMENT_H__

#include "cocos2d.h"
#include "ExtensionMacros.h"
#include "../../GUI/CCControlExtension/CCControlExtensions.h"

NS_CC_EXT_BEGIN


class CCAchievement;
class CCAchievementImpl;


class CCAchievementDelegate 
{
public:
    virtual ~CCAchievementDelegate() {};
    
    virtual void onLocalPlayerAuthenticationChanged(){}
    virtual void onAchievementViewDismissed(){CCLOG("onAchievementViewDismissed not implemented");}
    virtual void onAchievementLoaded(){CCLOG("onAchievementLoaded not implemented");}//NSDictionary *leaderboard);
    virtual void onResetAchievement(bool success){CCLOG("onAchievementReported not implemented");CC_UNUSED_PARAM(success);}
    virtual void onAchievementReported(){CCLOG("onAchievementReported not implemented");}
};

///
///\brief Class for leaderboard
//
///You can use this widget to display platform specific leaderboards
///
///
 
class CCAchievement
: public CCControl
{
public:
    ///
    ///Constructor.
    ///
    CCAchievement(void);
    
    ///
    ///Destructor.
    ///
    virtual ~CCAchievement(void);

    CREATE_FUNC(CCAchievement);
    
    bool init();
    
    ///
    ///Set the delegate for leaderboard.
    ///
    void setDelegate(CCAchievementDelegate* pDelegate);
    
    virtual void showAchievement();
    

    
protected:
    CCAchievementImpl*      m_pAchievementImpl;
    CCAchievementDelegate*  m_pDelegate;
};

NS_CC_EXT_END

#endif //__CCACHIEVEMENT_H__

