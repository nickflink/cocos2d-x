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

#ifndef __CCLEADERBOARD_H__
#define __CCLEADERBOARD_H__

#include "cocos2d.h"
#include "ExtensionMacros.h"
#include "../../GUI/CCControlExtension/CCControlExtensions.h"

NS_CC_EXT_BEGIN


class CCLeaderboard;
class CCLeaderboardImpl;


class CCLeaderboardDelegate 
{
public:
    virtual ~CCLeaderboardDelegate() {};
    
    virtual void onLocalPlayerAuthenticationChanged(){}
//    virtual void onLeaderboardReported(){}//GKLeaderboard *acheivement);
//    virtual void onLeaderboardLoaded(){}//NSDictionary *leaderboard);
//    virtual void onResetLeaderboard(bool success){CC_UNUSED_PARAM(success);}
    virtual void onLeaderboardViewDismissed(){CCLOG("onLeaderboardViewDismissed not implemented");}
    virtual void onScoresSubmitted(bool success) {CCLOG("onScoresSubmitted: %s", success ? "YES" : "NO");}
    virtual void onScoresReceived(CCArray *scores){CCLOG("onScoresReceived need array conversion");}
};

///
///\brief Class for leaderboard
//
///You can use this widget to display platform specific leaderboards
///
///
 
class CCLeaderboard
: public CCControl
{
public:
    ///
    ///Constructor.
    ///
    CCLeaderboard(void);
    
    ///
    ///Destructor.
    ///
    virtual ~CCLeaderboard(void);

    CREATE_FUNC(CCLeaderboard);
    
    bool init();
    
    ///
    ///Set the delegate for leaderboard.
    ///
    void setDelegate(CCLeaderboardDelegate* pDelegate);
    
    virtual void showLeaderboard();
    

    
protected:
    CCLeaderboardImpl*      m_pLeaderboardImpl;
    CCLeaderboardDelegate*  m_pDelegate;
};

NS_CC_EXT_END

#endif //__CCLEADERBOARD_H__

