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

#include "CCAchievements.h"
#include "AchievementsDelegateWrapper.h"

namespace cocos2d {
    
    CCAchievements* CCAchievements::m_spUIAchievements = NULL;
    
    CCAchievements::CCAchievements()
    {
        return;
    }
    
    CCAchievements::~CCAchievements()
    {
        return;
    }
    
    CCAchievements* CCAchievements::sharedAchievements()
    {
        if (m_spUIAchievements == NULL) {
            m_spUIAchievements = new CCAchievements();
        }
        
        return m_spUIAchievements;
    }
    
    void CCAchievements::setDelegate(CCAchievementsDelegate* pDelegate)
    {
        [[AchievementsDispatcher sharedAchievementsDispather] addDelegate:pDelegate];
    }
    
    void CCAchievements::onLocalPlayerAuthenticationChanged()
    {
        return;
    }
    void CCAchievements::onAchievementReported(/*GKAchievement *acheivement*/)
    {
        return;
    }
    void CCAchievements::onAchievementsLoaded(/*NSDictionary *achievements*/)
    {
        return;
    }
    void CCAchievements::onResetAchievements(bool success)
    {
        return;
    }
    void CCAchievements::onAchievementsViewDismissed()
    {
        return;
    }
    bool CCAchievements::isCompleted(const char *achievementName) const
    {
        AchievementsDispatcher *ad = [AchievementsDispatcher sharedAchievementsDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        GKAchievement* achievement = [ad getAchievementByID:achievementId];
        return achievement.completed;
    }
    float CCAchievements::getPercentComplete(const char *achievementName) const
    {
        AchievementsDispatcher *ad = [AchievementsDispatcher sharedAchievementsDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        GKAchievement* achievement = [ad getAchievementByID:achievementId];
        return achievement.percentComplete;
    }
    void CCAchievements::updateAchievementPercentage(const char *achievementName, float percent)
    {
        AchievementsDispatcher *ad = [AchievementsDispatcher sharedAchievementsDispather];
        NSString *achievementId = [NSString stringWithUTF8String:achievementName];
        [ad reportAchievementWithID:achievementId percentComplete:percent];
        return;
    }
    void  CCAchievements::resetAchievements()
    {
        [[AchievementsDispatcher sharedAchievementsDispather] resetAchievements];
    }
    void  CCAchievements::showAchievements()
    {
        [[AchievementsDispatcher sharedAchievementsDispather] showAchievements];
    }
}

