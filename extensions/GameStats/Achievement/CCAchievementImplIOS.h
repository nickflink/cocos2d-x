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

#ifndef __CCACHIEVEMENTIMPLIOS_H__
#define __CCACHIEVEMENTIMPLIOS_H__

#include "cocos2d.h"
#include "ExtensionMacros.h"
#include "CCAchievementImpl.h"

NS_CC_EXT_BEGIN

class CCAchievement;

class CCAchievementImplIOS : public CCAchievementImpl
{
public:
    CCAchievementImplIOS(CCAchievement * pAchievement);
    virtual ~CCAchievementImplIOS();
    virtual void setDelegate(CCAchievementDelegate* pDelegate);
    virtual void submitScore(int64_t score, const char *category){CCLOG("submitScore not implemented!");}
    virtual void showAchievement();

private:
    //AchievementDispatcher *m_pDispatcher;
};


NS_CC_EXT_END


#import "CCAchievement.h"
#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>



@interface AchievementDispatcher : NSObject<GKAchievementViewControllerDelegate/*, AchievementDelegateProtocol*/>
{
    //id<AchievementDelegateProtocol> delegate;
    //cocos2d::CCAchievementDelegate *delegate_;
    bool isGameCenterAvailable;
    NSError* lastError;
    
    NSMutableDictionary* m_Achievements;
    NSMutableDictionary* cachedAchievement;
}

@property (readwrite) cocos2d::extension::CCAchievementDelegate *delegate_;
@property (nonatomic, readonly) bool isGameCenterAvailable;
@property (nonatomic, readonly) NSError* lastError;
@property (nonatomic, readonly) NSMutableDictionary* m_Achievements;

+ (id) sharedAchievementDispatcher;
- (id) init;
- (void) dealloc;
- (void) addDelegate: (cocos2d::extension::CCAchievementDelegate *) delegate;
- (void) setLastError:(NSError*)error;
- (void) authenticateLocalPlayer;
- (void) onLocalPlayerAuthenticationChanged;
- (void) registerForLocalPlayerAuthChange;
- (void) loadAchievement;
- (GKAchievement*) getAchievementByID:(NSString*)identifier;
- (void) reportAchievementWithID:(NSString*)identifier percentComplete:(float)percent;
- (void) resetAchievement;
- (void) reportCachedAchievement;
- (void) initCachedAchievement;
- (void) saveCachedAchievement;
- (void) cacheAchievement:(GKAchievement*)achievement;
- (void) uncacheAchievement:(GKAchievement*)achievement;
- (UIViewController*) getRootViewController;
- (void) presentViewController:(UIViewController*)vc;
- (void) dismissModalViewController;
- (void) showAchievement;
- (void) achievementViewControllerDidFinish:(GKAchievementViewController*)viewController;


@end

#endif //__CCACHIEVEMENTIMPLIOS_H__

