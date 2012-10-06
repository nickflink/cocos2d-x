/****************************************************************************
 Copyright (c) 2012 cocos2d-x.org
 Copyright (c) 2012 Nick Flink
 
 http://www.cocos4d-x.org
 
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

#import "CCAchievementsDelegate.h"
#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>

/*@protocol AchievementsDelegateProtocol

-(void) onLocalPlayerAuthenticationChanged;
-(void) onAchievementReported:(GKAchievement*)achievement;
-(void) onAchievementsLoaded:(NSDictionary*)achievements;
-(void) onResetAchievements:(bool)success;
-(void) onAchievementsViewDismissed;

@end*/


@interface AchievementsDispatcher : NSObject<GKAchievementViewControllerDelegate/*, AchievementsDelegateProtocol*/>
{
	//id<AchievementsDelegateProtocol> delegate;
	//cocos2d::CCAchievementsDelegate *delegate_;
	bool isGameCenterAvailable;
	NSError* lastError;
	
	NSMutableDictionary* achievements;
	NSMutableDictionary* cachedAchievements;
}

@property (readwrite) cocos2d::CCAchievementsDelegate *delegate_;
@property (nonatomic, readonly) bool isGameCenterAvailable;
@property (nonatomic, readonly) NSError* lastError;
@property (nonatomic, readonly) NSMutableDictionary* achievements;

+ (id) sharedAchievementsDispather;
- (id) init;
- (void) dealloc;
- (void) addDelegate: (cocos2d::CCAchievementsDelegate *) delegate;
- (void) setLastError:(NSError*)error;
- (void) authenticateLocalPlayer;
- (void) onLocalPlayerAuthenticationChanged;
- (void) registerForLocalPlayerAuthChange;
- (void) loadAchievements;
- (GKAchievement*) getAchievementByID:(NSString*)identifier;
- (void) reportAchievementWithID:(NSString*)identifier percentComplete:(float)percent;
- (void) resetAchievements;
- (void) reportCachedAchievements;
- (void) initCachedAchievements;
- (void) saveCachedAchievements;
- (void) cacheAchievement:(GKAchievement*)achievement;
- (void) uncacheAchievement:(GKAchievement*)achievement;
- (UIViewController*) getRootViewController;
- (void) presentViewController:(UIViewController*)vc;
- (void) dismissModalViewController;
- (void) showAchievements;
- (void) achievementViewControllerDidFinish:(GKAchievementViewController*)viewController;


@end
