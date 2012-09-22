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
-(void) authenticateLocalPlayer;
-(void) registerForLocalPlayerAuthChange;
//-(void) onLocalPlayerAuthenticationChanged;
-(void) setLastError:(NSError*)error;
-(void) initCachedAchievements;
-(void) cacheAchievement:(GKAchievement*)achievement;
-(void) uncacheAchievement:(GKAchievement*)achievement;
-(void) loadAchievements;
-(UIViewController*) getRootViewController;
@end



@implementation AchievementsDispatcher

static AchievementsDispatcher* s_pAchievementsDispatcher;

#pragma mark Init & Dealloc
@synthesize delegate_;
@synthesize isGameCenterAvailable;
@synthesize lastError;
@synthesize achievements;

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
    if ((self = [super init]))
    {
        // Test for Game Center availability
        Class gameKitLocalPlayerClass = NSClassFromString(@"GKLocalPlayer");
        bool isLocalPlayerAvailable = (gameKitLocalPlayerClass != nil);
        
        // Test if device is running iOS 4.1 or higher
        NSString* reqSysVer = @"4.1";
        NSString* currSysVer = [[UIDevice currentDevice] systemVersion];
        bool isOSVer41 = ([currSysVer compare:reqSysVer options:NSNumericSearch] != NSOrderedAscending);
        
        isGameCenterAvailable = (isLocalPlayerAvailable && isOSVer41);
        NSLog(@"GameCenter available = %@", isGameCenterAvailable ? @"YES" : @"NO");

        [self registerForLocalPlayerAuthChange];
        [self initCachedAchievements];
        [self authenticateLocalPlayer];

    }
    return self;
}

- (void) dealloc
{
    CCLOG("dealloc %@", self);
    
    
    [lastError release];
    
    [self saveCachedAchievements];
    [cachedAchievements release];
    [achievements release];

    [[NSNotificationCenter defaultCenter] removeObserver:self];

    s_pAchievementsDispatcher = nil;
    delegate_ = nil;
    [super dealloc];
}

- (void) addDelegate: (cocos2d::CCAchievementsDelegate *) delegate
{
    delegate_ = delegate;
    /*This would cause an infinite loop
    if (delegate_)
    {
        [[CCAchievements sharedAchievements] setDelegate:self];
    }
    else 
    {
        [[CCAchievements sharedAchievements] setDelegate:nil];
    }*/
}

#pragma mark setLastError

-(void) setLastError:(NSError*)error
{
  [lastError release];
  lastError = [error copy];
  
  if (lastError)
  {
    NSLog(@"GameKitHelper ERROR: %@", [[lastError userInfo] description]);
  }
}

#pragma mark Player Authentication

-(void) authenticateLocalPlayer
{
  if (isGameCenterAvailable == NO)
    return;

  GKLocalPlayer* localPlayer = [GKLocalPlayer localPlayer];
  if (localPlayer.authenticated == NO)
  {
    // Authenticate player, using a block object. See Apple's Block Programming guide for more info about Block Objects:
    // http://developer.apple.com/library/mac/#documentation/Cocoa/Conceptual/Blocks/Articles/00_Introduction.html
    [localPlayer authenticateWithCompletionHandler:^(NSError* error)
    {
      [self setLastError:error];
      
      if (error == nil)
      {
        [self reportCachedAchievements];
        [self loadAchievements];
      }
    }];
    
    /*
     // NOTE: bad example ahead!
     
     // If you want to modify a local variable inside a block object, you have to prefix it with the __block keyword.
     __block bool success = NO;
     
     [localPlayer authenticateWithCompletionHandler:^(NSError* error)
     {
      success = (error == nil);
     }];
     
     // CAUTION: success will always be NO here! The block isn't run until later, when the authentication call was
     // confirmed by the Game Center server. Set a breakpoint inside the block to see what is happening in what order.
     if (success)
      NSLog(@"Local player logged in!");
     else
      NSLog(@"Local player NOT logged in!");
     */
  }
}

-(void) onLocalPlayerAuthenticationChanged
{
    GKLocalPlayer* localPlayer = [GKLocalPlayer localPlayer];
	CCLOG("LocalPlayer isAuthenticated changed to: %s", localPlayer.authenticated ? "YES" : "NO");
	
	if (localPlayer.authenticated)
	{
		[self resetAchievements];
	}	
    if(delegate_) delegate_->onLocalPlayerAuthenticationChanged();
}



-(void) registerForLocalPlayerAuthChange
{
  if (isGameCenterAvailable == NO)
    return;

  // Register to receive notifications when local player authentication status changes
  NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];
  [nc addObserver:self
       selector:@selector(onLocalPlayerAuthenticationChanged)
         name:GKPlayerAuthenticationDidChangeNotificationName
       object:nil];
}







#pragma mark Achievements

-(void) loadAchievements
{
  if (isGameCenterAvailable == NO)
    return;

  [GKAchievement loadAchievementsWithCompletionHandler:^(NSArray* loadedAchievements, NSError* error)
  {
    [self setLastError:error];
     
    if (achievements == nil)
    {
      achievements = [[NSMutableDictionary alloc] init];
    }
    else
    {
      [achievements removeAllObjects];
    }

    for (GKAchievement* achievement in loadedAchievements)
    {
      [achievements setObject:achievement forKey:achievement.identifier];
    }
     
    //[delegate_ onAchievementsLoaded:achievements];
    if(delegate_) delegate_->onAchievementsLoaded();
  }];
}

-(GKAchievement*) getAchievementByID:(NSString*)identifier
{
  if (isGameCenterAvailable == NO || delegate_ == nil)
    return nil;
    
  // Try to get an existing achievement with this identifier
  GKAchievement* achievement = [achievements objectForKey:identifier];
  
  if (achievement == nil)
  {
    // Create a new achievement object
    achievement = [[[GKAchievement alloc] initWithIdentifier:identifier] autorelease];
    [achievements setObject:achievement forKey:achievement.identifier];
  }
  
  return [[achievement retain] autorelease];
}

-(void) reportAchievementWithID:(NSString*)identifier percentComplete:(float)percent
{
  if (isGameCenterAvailable == NO || delegate_ == nil)
    return;

  GKAchievement* achievement = [self getAchievementByID:identifier];
  if (achievement != nil && achievement.percentComplete < percent)
  {
    achievement.percentComplete = percent;
    [achievement reportAchievementWithCompletionHandler:^(NSError* error)
    {
      [self setLastError:error];
      
      bool success = (error == nil);
      if (success == NO)
      {
        // Keep achievement to try to submit it later
        [self cacheAchievement:achievement];
      }
      
      if(delegate_) delegate_->onAchievementReported();//[identifier UTF8String]);//:achievement];
    }];
  }
}

-(void) resetAchievements
{
  if (isGameCenterAvailable == NO)
    return;
  
  [achievements removeAllObjects];
  [cachedAchievements removeAllObjects];
  
  [GKAchievement resetAchievementsWithCompletionHandler:^(NSError* error)
  {
    [self setLastError:error];
    bool success = (error == nil);
    //[[AchievementsDispatcher sharedAchievementsDispather] onResetAchievements:success];
    if(delegate_) delegate_->onResetAchievements(success);

  }];
}

-(void) reportCachedAchievements
{
  if (isGameCenterAvailable == NO)
    return;
  
  if ([cachedAchievements count] == 0)
    return;

  for (GKAchievement* achievement in [cachedAchievements allValues])
  {
    [achievement reportAchievementWithCompletionHandler:^(NSError* error)
    {
      bool success = (error == nil);
      if (success == YES)
      {
        [self uncacheAchievement:achievement];
      }
    }];
  }
}

-(void) initCachedAchievements
{
  NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedAchievementsFile];
  id object = [NSKeyedUnarchiver unarchiveObjectWithFile:file];
  
  if ([object isKindOfClass:[NSMutableDictionary class]])
  {
    NSMutableDictionary* loadedAchievements = (NSMutableDictionary*)object;
    cachedAchievements = [[NSMutableDictionary alloc] initWithDictionary:loadedAchievements];
  }
  else
  {
    cachedAchievements = [[NSMutableDictionary alloc] init];
  }
}

-(void) saveCachedAchievements
{
  NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedAchievementsFile];
  [NSKeyedArchiver archiveRootObject:cachedAchievements toFile:file];
}

-(void) cacheAchievement:(GKAchievement*)achievement
{
  [cachedAchievements setObject:achievement forKey:achievement.identifier];
  
  // Save to disk immediately, to keep achievements around even if the game crashes.
  [self saveCachedAchievements];
}

-(void) uncacheAchievement:(GKAchievement*)achievement
{
  [cachedAchievements removeObjectForKey:achievement.identifier];
  
  // Save to disk immediately, to keep the removed cached achievement from being loaded again
  [self saveCachedAchievements];
}


#pragma mark Views (Leaderboard, Achievements)

// Helper methods

-(UIViewController*) getRootViewController
{
  return [UIApplication sharedApplication].keyWindow.rootViewController;
}

-(void) presentViewController:(UIViewController*)vc
{
  UIViewController* rootVC = [self getRootViewController];
  [rootVC presentModalViewController:vc animated:YES];
}

-(void) dismissModalViewController
{
  UIViewController* rootVC = [self getRootViewController];
  [rootVC dismissModalViewControllerAnimated:YES];
}



// Achievements

-(void) showAchievements
{
  if (isGameCenterAvailable == NO)
    return;
  
  GKAchievementViewController* achievementsVC = [[[GKAchievementViewController alloc] init] autorelease];
  if (achievementsVC != nil)
  {
    achievementsVC.achievementDelegate = self;
    [self presentViewController:achievementsVC];
  }
}

-(void) achievementViewControllerDidFinish:(GKAchievementViewController*)viewController
{
  [self dismissModalViewController];
  //[[AchievementsDispatcher sharedAchievementsDispather] onAchievementsViewDismissed];
  if(delegate_) delegate_->onAchievementsViewDismissed();

}




@end

