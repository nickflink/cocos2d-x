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
#import "CCArray.h"

static NSString* kCachedLeaderboardFile = @"CachedLeaderboard.archive";

@interface LeaderboardDispatcher (Private)
-(void) authenticateLocalPlayer;
-(void) registerForLocalPlayerAuthChange;
//-(void) onLocalPlayerAuthenticationChanged;
-(void) setLastError:(NSError*)error;
-(UIViewController*) getRootViewController;
@end



@implementation LeaderboardDispatcher

static LeaderboardDispatcher* s_pLeaderboardDispatcher;

#pragma mark Init & Dealloc
@synthesize delegate_;
@synthesize isGameCenterAvailable;
@synthesize lastError;

//@synthesize leaderboard_;

+ (id) sharedLeaderboardDispatcher
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
        delegate_ = nil;
        [self registerForLocalPlayerAuthChange];
        [self authenticateLocalPlayer];

    }
    return self;
}

- (void) dealloc
{
    CCLOG("dealloc %@", self);
    
    [lastError release];
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
      
      //if (error == nil){any req initialization}
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
    CCLOG("LocalPlayer isAuthenticated changed to: %s", [GKLocalPlayer localPlayer].authenticated ? "YES" : "NO");
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

#pragma mark Friends & Player Info

-(void) getLocalPlayerFriends
{
	if (isGameCenterAvailable == NO)
		return;
	
	GKLocalPlayer* localPlayer = [GKLocalPlayer localPlayer];
	if (localPlayer.authenticated)
	{
		// First, get the list of friends (player IDs)
		[localPlayer loadFriendsWithCompletionHandler:^(NSArray* friends, NSError* error)
		{
			[self setLastError:error];
            //NFHACK THIS NEEDS TO BE A C++ CALL
			//[delegate_ onFriendListReceived:friends];
		}];
	}
}

-(void) getPlayerInfo:(NSArray*)playerList
{
	if (isGameCenterAvailable == NO)
		return;

	// Get detailed information about a list of players
	if ([playerList count] > 0)
	{
		[GKPlayer loadPlayersForIdentifiers:playerList withCompletionHandler:^(NSArray* players, NSError* error)
		{
			[self setLastError:error];
            //NFHACK THIS NEEDS TO BE A C++ CALL
			//[delegate_ onPlayerInfoReceived:players];
		}];
	}
}

#pragma mark Views (Leaderboard)

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


#pragma mark Scores & Leaderboard

-(void) submitScore:(int64_t)score category:(NSString*)category
{
	if (isGameCenterAvailable == NO)
		return;

	GKScore* gkScore = [[[GKScore alloc] initWithCategory:category] autorelease];
	gkScore.value = score;

	[gkScore reportScoreWithCompletionHandler:^(NSError* error)
	{
		[self setLastError:error];
		
		bool success = (error == nil);
		if(delegate_) delegate_->onScoresSubmitted(success);
	}];
}

-(void) retrieveScoresForPlayers:(NSArray*)players
						category:(NSString*)category 
						   range:(NSRange)range
					 playerScope:(GKLeaderboardPlayerScope)playerScope 
					   timeScope:(GKLeaderboardTimeScope)timeScope 
{
	if (isGameCenterAvailable == NO)
		return;
	
	GKLeaderboard* leaderboard = nil;
	if ([players count] > 0)
	{
		leaderboard = [[[GKLeaderboard alloc] initWithPlayerIDs:players] autorelease];
	}
	else
	{
		leaderboard = [[[GKLeaderboard alloc] init] autorelease];
		leaderboard.playerScope = playerScope;
	}
	
	if (leaderboard != nil)
	{
		leaderboard.timeScope = timeScope;
		leaderboard.category = category;
		leaderboard.range = range;
		[leaderboard loadScoresWithCompletionHandler:^(NSArray* scores, NSError* error)
		{
			[self setLastError:error];
            //NFHACK need to convert scores to a CCArray
            cocos2d::CCArray *scoresArray = cocos2d::CCArray::array();
			if(delegate_) delegate_->onScoresReceived(scoresArray);
		}];
	}
}

-(void) retrieveTopTenAllTimeGlobalScores
{
	[self retrieveScoresForPlayers:nil
						  category:nil 
							 range:NSMakeRange(1, 10)
					   playerScope:GKLeaderboardPlayerScopeGlobal 
						 timeScope:GKLeaderboardTimeScopeAllTime];
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
