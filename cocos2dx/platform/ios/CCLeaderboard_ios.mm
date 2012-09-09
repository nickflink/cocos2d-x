/****************************************************************************
 Copyright (c) 2010 cocos2d-x.org
 
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

#include "CCLeaderboard.h"
#include "LeaderboardDelegateWrapper.h"

namespace cocos2d {
    
    CCLeaderboard* CCLeaderboard::m_spUILeaderboard = NULL;
    
    CCLeaderboard::CCLeaderboard()
    {
    }
    
    CCLeaderboard::~CCLeaderboard()
    {
    }
    
    CCLeaderboard* CCLeaderboard::sharedLeaderboard()
    {
        if (m_spUILeaderboard == NULL) {
            m_spUILeaderboard = new CCLeaderboard();
        }
        
        return m_spUILeaderboard;
    }
    
    void CCLeaderboard::setDelegate(CCLeaderboardDelegate* pDelegate)
    {
        [[LeaderboardDispatcher sharedLeaderboardDispather] addDelegate:pDelegate];
    }
    
    void onLocalPlayerAuthenticationChanged(){
        return;
    }
    void onLeaderboardReported(/*GKLeaderboard *acheivement*/){
        return;
    }
    void onLeaderboardLoaded(/*NSDictionary *leaderboard*/){
        return;
    }
    void onResetLeaderboard(bool success){
        return;
    }
    void onLeaderboardViewDismissed(){
        return;
    }

}

