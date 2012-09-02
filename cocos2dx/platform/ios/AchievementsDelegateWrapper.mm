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

#import "AchievementsDelegateWrapper.h"

static NSString* kCachedAchievementsFile = @"CachedAchievements.archive";

@interface AchievementsDispatcher (Private)
-(void) registerForLocalPlayerAuthChange;
-(void) setLastError:(NSError*)error;
-(void) initCachedAchievements;
-(void) cacheAchievement:(GKAchievement*)achievement;
-(void) uncacheAchievement:(GKAchievement*)achievement;
-(void) loadAchievements;
-(void) initMatchInvitationHandler;
-(UIViewController*) getRootViewController;
@end



@implementation AchievementsDispatcher

static AchievementsDispatcher* s_pAchievementsDispatcher;

@synthesize delegate_;
//@synthesize achievements_;

+ (id) sharedAchievementsDispather
{
    if (s_pAchievementsDispatcher == nil) {
        s_pAchievementsDispatcher = [[self alloc] init];
    }
    
    return s_pAchievementsDispatcher;
}

- (id) init
{
    //achievements_ = new cocos2d::CCAchievements();
    return self;
}

- (void) dealloc
{
    s_pAchievementsDispatcher = 0;
    delegate_ = 0;
    //delete achievements_;
    [super dealloc];
}

- (void) addDelegate: (cocos2d::CCAchievementsDelegate *) delegate
{
    delegate_ = delegate;
    
    if (delegate_)
    {
        [[CCAchievements sharedAchievements] setDelegate:self];
    }
    else 
    {
        [[CCAchievements sharedAchievements] setDelegate:nil];
    }
}

- (void)achievementViewControllerDidFinish:(GKAchievementViewController *)viewController
{
    CCLOG("IMPLEMENT ME AchievementsDispatcher::achievementViewControllerDidFinish");
}

/*- (void)achievements:(GKAchievementViewControllerDelegate *)achievements didAccelerate:(UIAcceleration *)acceleration
{   
    if (! delegate_)
    {
        return;
    }
    
    acceleration_->x = acceleration.x;
    acceleration_->y = acceleration.y;
    acceleration_->z = acceleration.z;
    acceleration_->timestamp = acceleration.timestamp;
    
    double tmp = acceleration_->x;
    
    switch ([[UIApplication sharedApplication] statusBarOrientation]) 
    {
    case UIInterfaceOrientationLandscapeRight:
        acceleration_->x = -acceleration_->y;
        acceleration_->y = tmp;
        break;
        
    case UIInterfaceOrientationLandscapeLeft:
        acceleration_->x = acceleration_->y;
        acceleration_->y = -tmp;
        break;
        
    case UIInterfaceOrientationPortraitUpsideDown:
        acceleration_->x = -acceleration_->y;
        acceleration_->y = -tmp;
        break;
            
    case UIInterfaceOrientationPortrait:
        break;
    }
    
    delegate_->didAccelerate(acceleration_);
}*/

@end

