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
#include <cstddef>
#include "CCAchievement.h"

namespace cocos2d {
    
    CCAchievement* CCAchievement::m_spUIAchievement = NULL;
    
    CCAchievement::CCAchievement()
    {
        return;
    }
    
    CCAchievement::~CCAchievement()
    {
        return;
    }
    
    CCAchievement* CCAchievement::sharedAchievement()
    {
        if (m_spUIAchievement == NULL) {
            m_spUIAchievement = new CCAchievement();
        }
        
        return m_spUIAchievement;
    }
    
    void CCAchievement::setDelegate(CCAchievementDelegate* pDelegate)
    {
        //[[AchievementDispatcher sharedAchievementDispather] addDelegate:pDelegate];
        return;
    }
    
    void CCAchievement::onLocalPlayerAuthenticationChanged()
    {
        return;
    }
    void CCAchievement::onAchievementReported(/*GKAchievement *acheivement*/)
    {
        return;
    }
    void CCAchievement::onAchievementLoaded(/*NSDictionary *Achievement*/)
    {
        return;
    }
    void CCAchievement::onResetAchievement(bool success)
    {
        return;
    }
    void CCAchievement::onAchievementViewDismissed()
    {
        return;
    }
    bool CCAchievement::isCompleted(const char *achievementName) const
    {
        return false;
        /*AchievementDispatcher *ad = [AchievementDispatcher sharedAchievementDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        GKAchievement* achievement = [ad getAchievementByID:achievementId];
        return achievement.completed;*/
    }
    float CCAchievement::getPercentComplete(const char *achievementName) const
    {
        return 0.0f;
        /*AchievementDispatcher *ad = [AchievementDispatcher sharedAchievementDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        GKAchievement* achievement = [ad getAchievementByID:achievementId];
        return achievement.percentComplete;*/
    }
    void CCAchievement::updateAchievementPercentage(const char *achievementName, float percent)
    {
        return;
        /*AchievementDispatcher *ad = [AchievementDispatcher sharedAchievementDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        [ad reportAchievementWithID:achievementId percentComplete:percent];
        return;*/
    }
    void  CCAchievement::resetAchievement()
    {
        return;//[[AchievementDispatcher sharedAchievementDispather] resetAchievement];
    }
    void  CCAchievement::showAchievement()
    {
        return;//[[AchievementDispatcher sharedAchievementDispather] showAchievement];
    }
}

