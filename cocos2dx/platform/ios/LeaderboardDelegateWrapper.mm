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

#import "LeaderboardDelegateWrapper.h"

static NSString* kCachedLeaderboardFile = @"CachedLeaderboard.archive";

@interface LeaderboardDispatcher (Private)
-(void) authenticateLocalPlayer;
-(void) registerForLocalPlayerAuthChange;
//-(void) onLocalPlayerAuthenticationChanged;
-(void) setLastError:(NSError*)error;
-(void) initCachedLeaderboard;
-(void) cacheLeaderboard:(GKLeaderboard*)leaderboard;
-(void) uncacheLeaderboard:(GKLeaderboard*)leaderboard;
-(void) loadLeaderboard;
-(UIViewController*) getRootViewController;
@end



@implementation LeaderboardDispatcher

static LeaderboardDispatcher* s_pLeaderboardDispatcher;

#pragma mark Init & Dealloc
@synthesize delegate_;
@synthesize isGameCenterAvailable;
@synthesize lastError;
@synthesize leaderboard;

//@synthesize leaderboard_;

+ (id) sharedLeaderboardDispather
{
    if (s_pLeaderboardDispatcher == nil) {
        s_pLeaderboardDispatcher = [[self alloc] init];
    }
    
    return s_pLeaderboardDispatcher;
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
        [self initCachedLeaderboard];
        [self authenticateLocalPlayer];

    }
    return self;
}

- (void) dealloc
{
    CCLOG("dealloc %@", self);
    
    
    [lastError release];
    
    [self saveCachedLeaderboard];
    [cachedLeaderboard release];
    [leaderboard release];

    [[NSNotificationCenter defaultCenter] removeObserver:self];

    s_pLeaderboardDispatcher = nil;
    delegate_ = nil;
    [super dealloc];
}

- (void) addDelegate: (cocos2d::CCLeaderboardDelegate *) delegate
{
    delegate_ = delegate;
    /*This would cause an infinite loop
    if (delegate_)
    {
        [[CCLeaderboard sharedLeaderboard] setDelegate:self];
    }
    else 
    {
        [[CCLeaderboard sharedLeaderboard] setDelegate:nil];
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
        [self reportCachedLeaderboard];
        [self loadLeaderboard];
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
	CCLOG("LocalPlayer isAuthenticated changed to: %@", localPlayer.authenticated ? @"YES" : @"NO");
	
	if (localPlayer.authenticated)
	{
		[self resetLeaderboard];
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







#pragma mark Leaderboard

-(void) loadLeaderboard
{
  if (isGameCenterAvailable == NO)
    return;

  [GKLeaderboard loadLeaderboardWithCompletionHandler:^(NSArray* loadedLeaderboard, NSError* error)
  {
    [self setLastError:error];
     
    if (leaderboard == nil)
    {
      leaderboard = [[NSMutableDictionary alloc] init];
    }
    else
    {
      [leaderboard removeAllObjects];
    }

    for (GKLeaderboard* leaderboard in loadedLeaderboard)
    {
      [leaderboard setObject:leaderboard forKey:leaderboard.identifier];
    }
     
    //[delegate_ onLeaderboardLoaded:leaderboard];
    if(delegate_) delegate_->onLeaderboardLoaded();
  }];
}

-(GKLeaderboard*) getLeaderboardByID:(NSString*)identifier
{
  if (isGameCenterAvailable == NO || delegate_ == nil)
    return nil;
    
  // Try to get an existing leaderboard with this identifier
  GKLeaderboard* leaderboard = [leaderboard objectForKey:identifier];
  
  if (leaderboard == nil)
  {
    // Create a new leaderboard object
    leaderboard = [[[GKLeaderboard alloc] initWithIdentifier:identifier] autorelease];
    [leaderboard setObject:leaderboard forKey:leaderboard.identifier];
  }
  
  return [[leaderboard retain] autorelease];
}

-(void) reportLeaderboardWithID:(NSString*)identifier percentComplete:(float)percent
{
  if (isGameCenterAvailable == NO || delegate_ == nil)
    return;

  GKLeaderboard* leaderboard = [self getLeaderboardByID:identifier];
  if (leaderboard != nil && leaderboard.percentComplete < percent)
  {
    leaderboard.percentComplete = percent;
    [leaderboard reportLeaderboardWithCompletionHandler:^(NSError* error)
    {
      [self setLastError:error];
      
      bool success = (error == nil);
      if (success == NO)
      {
        // Keep leaderboard to try to submit it later
        [self cacheLeaderboard:leaderboard];
      }
      
      //[delegate onLeaderboardReported:leaderboard];
    }];
  }
}

-(void) resetLeaderboard
{
  if (isGameCenterAvailable == NO)
    return;
  
  [leaderboard removeAllObjects];
  [cachedLeaderboard removeAllObjects];
  
  [GKLeaderboard resetLeaderboardWithCompletionHandler:^(NSError* error)
  {
    [self setLastError:error];
    bool success = (error == nil);
    //[[LeaderboardDispatcher sharedLeaderboardDispather] onResetLeaderboard:success];
    if(delegate_) delegate_->onResetLeaderboard(success);

  }];
}

-(void) reportCachedLeaderboard
{
  if (isGameCenterAvailable == NO)
    return;
  
  if ([cachedLeaderboard count] == 0)
    return;

  for (GKLeaderboard* leaderboard in [cachedLeaderboard allValues])
  {
    [leaderboard reportLeaderboardWithCompletionHandler:^(NSError* error)
    {
      bool success = (error == nil);
      if (success == YES)
      {
        [self uncacheLeaderboard:leaderboard];
      }
    }];
  }
}

-(void) initCachedLeaderboard
{
  NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedLeaderboardFile];
  id object = [NSKeyedUnarchiver unarchiveObjectWithFile:file];
  
  if ([object isKindOfClass:[NSMutableDictionary class]])
  {
    NSMutableDictionary* loadedLeaderboard = (NSMutableDictionary*)object;
    cachedLeaderboard = [[NSMutableDictionary alloc] initWithDictionary:loadedLeaderboard];
  }
  else
  {
    cachedLeaderboard = [[NSMutableDictionary alloc] init];
  }
}

-(void) saveCachedLeaderboard
{
  NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedLeaderboardFile];
  [NSKeyedArchiver archiveRootObject:cachedLeaderboard toFile:file];
}

-(void) cacheLeaderboard:(GKLeaderboard*)leaderboard
{
  [cachedLeaderboard setObject:leaderboard forKey:leaderboard.identifier];
  
  // Save to disk immediately, to keep leaderboard around even if the game crashes.
  [self saveCachedLeaderboard];
}

-(void) uncacheLeaderboard:(GKLeaderboard*)leaderboard
{
  [cachedLeaderboard removeObjectForKey:leaderboard.identifier];
  
  // Save to disk immediately, to keep the removed cached leaderboard from being loaded again
  [self saveCachedLeaderboard];
}


#pragma mark Views (Leaderboard, Leaderboard)

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



// Leaderboard

-(void) showLeaderboard
{
  if (isGameCenterAvailable == NO)
    return;
  
  GKLeaderboardViewController* leaderboardVC = [[[GKLeaderboardViewController alloc] init] autorelease];
  if (leaderboardVC != nil)
  {
    leaderboardVC.leaderboardDelegate = self;
    [self presentViewController:leaderboardVC];
  }
}

-(void) leaderboardViewControllerDidFinish:(GKLeaderboardViewController*)viewController
{
  [self dismissModalViewController];
  //[[LeaderboardDispatcher sharedLeaderboardDispather] onLeaderboardViewDismissed];
  if(delegate_) delegate_->onLeaderboardViewDismissed();

}




@end

