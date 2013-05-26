
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

#include "CCAchievementImplIOS.h"

NS_CC_EXT_BEGIN

CCAchievementImpl* __createSystemAchievement(CCAchievement* pAchievement)
{
    return new CCAchievementImplIOS(pAchievement);
}

CCAchievementImplIOS::CCAchievementImplIOS(CCAchievement * pAchievement)
: CCAchievementImpl(pAchievement)
{
    //m_pDispatcher = [[[AchievementDispatcher alloc] init] retain];
}

CCAchievementImplIOS::~CCAchievementImplIOS()
{
    //[m_pDispatcher release];
}


void CCAchievementImplIOS::setDelegate(CCAchievementDelegate* pDelegate)
{
    m_pDelegate = pDelegate;
}

void CCAchievementImplIOS::showAchievement()
{
    [[AchievementDispatcher sharedAchievementDispatcher] showAchievement];
}

NS_CC_EXT_END

//#import "AchievementDelegateWrapper.h"


static NSString* kCachedAchievementFile = @"CachedAchievement.archive";

@interface AchievementDispatcher (Private)
-(void) authenticateLocalPlayer;
-(void) registerForLocalPlayerAuthChange;
//-(void) onLocalPlayerAuthenticationChanged;
-(void) setLastError:(NSError*)error;
-(void) initCachedAchievement;
-(void) cacheAchievement:(GKAchievement*)achievement;
-(void) uncacheAchievement:(GKAchievement*)achievement;
-(void) loadAchievement;
-(UIViewController*) getRootViewController;
@end



@implementation AchievementDispatcher

static AchievementDispatcher* s_pAchievementDispatcher;

#pragma mark Init & Dealloc
@synthesize delegate_;
@synthesize isGameCenterAvailable;
@synthesize lastError;
@synthesize m_Achievements;

//@synthesize achievement_;

+ (id) sharedAchievementDispatcher
{
    if (s_pAchievementDispatcher == nil) {
        s_pAchievementDispatcher = [[self alloc] init];
    }
    
    return s_pAchievementDispatcher;
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
        [self initCachedAchievement];
        [self authenticateLocalPlayer];
        
    }
    return self;
}

- (void) dealloc
{
    CCLOG("dealloc %@", self);
    
    
    [lastError release];
    
    [self saveCachedAchievement];
    [cachedAchievement release];
    [m_Achievements release];
    
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    
    s_pAchievementDispatcher = nil;
    delegate_ = nil;
    [super dealloc];
}

- (void) addDelegate: (cocos2d::extension::CCAchievementDelegate *) delegate
{
    delegate_ = delegate;
    /*This would cause an infinite loop
     if (delegate_)
     {
     [[CCAchievement sharedAchievement] setDelegate:self];
     }
     else 
     {
     [[CCAchievement sharedAchievement] setDelegate:nil];
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
                 [self reportCachedAchievement];
                 [self loadAchievement];
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
        [self resetAchievement];
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

#pragma mark Achievement

-(void) loadAchievement
{
    if (isGameCenterAvailable == NO)
        return;
    
    [GKAchievement loadAchievementsWithCompletionHandler:^(NSArray* loadedAchievement, NSError* error)
     {
         [self setLastError:error];
         
         if (m_Achievements == nil)
         {
             m_Achievements = [[NSMutableDictionary alloc] init];
         }
         else
         {
             [m_Achievements removeAllObjects];
         }
         
         for (GKAchievement* achievement in loadedAchievement)
         {
             [m_Achievements setObject:achievement forKey:achievement.identifier];
         }
         
         //[delegate_ onAchievementLoaded:achievement];
         if(delegate_) delegate_->onAchievementLoaded();
     }];
}

-(GKAchievement*) getAchievementByID:(NSString*)identifier
{
    if (isGameCenterAvailable == NO || delegate_ == nil)
        return nil;
    
    // Try to get an existing achievement with this identifier
    GKAchievement* achievement = [m_Achievements objectForKey:identifier];
    
    if (achievement == nil)
    {
        // Create a new achievement object
        achievement = [[[GKAchievement alloc] initWithIdentifier:identifier] autorelease];
        [m_Achievements setObject:achievement forKey:achievement.identifier];
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

-(void) resetAchievement
{
    if (isGameCenterAvailable == NO)
        return;
    
    [m_Achievements removeAllObjects];
    [cachedAchievement removeAllObjects];
    
    [GKAchievement resetAchievementsWithCompletionHandler:^(NSError* error)
     {
         [self setLastError:error];
         bool success = (error == nil);
         //[[AchievementDispatcher sharedAchievementDispatcher] onResetAchievement:success];
         if(delegate_) delegate_->onResetAchievement(success);
         
     }];
}

-(void) reportCachedAchievement
{
    if (isGameCenterAvailable == NO)
        return;
    
    if ([cachedAchievement count] == 0)
        return;
    
    for (GKAchievement* achievement in [cachedAchievement allValues])
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

-(void) initCachedAchievement
{
    NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedAchievementFile];
    id object = [NSKeyedUnarchiver unarchiveObjectWithFile:file];
    
    if ([object isKindOfClass:[NSMutableDictionary class]])
    {
        NSMutableDictionary* loadedAchievement = (NSMutableDictionary*)object;
        cachedAchievement = [[NSMutableDictionary alloc] initWithDictionary:loadedAchievement];
    }
    else
    {
        cachedAchievement = [[NSMutableDictionary alloc] init];
    }
}

-(void) saveCachedAchievement
{
    NSString* file = [NSHomeDirectory() stringByAppendingPathComponent:kCachedAchievementFile];
    [NSKeyedArchiver archiveRootObject:cachedAchievement toFile:file];
}

-(void) cacheAchievement:(GKAchievement*)achievement
{
    [cachedAchievement setObject:achievement forKey:achievement.identifier];
    
    // Save to disk immediately, to keep achievement around even if the game crashes.
    [self saveCachedAchievement];
}

-(void) uncacheAchievement:(GKAchievement*)achievement
{
    [cachedAchievement removeObjectForKey:achievement.identifier];
    
    // Save to disk immediately, to keep the removed cached achievement from being loaded again
    [self saveCachedAchievement];
}


#pragma mark Views (Leaderboard, Achievement)

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

// Achievement

-(void) showAchievement
{
    if (isGameCenterAvailable == NO)
        return;
    
    GKAchievementViewController* achievementVC = [[[GKAchievementViewController alloc] init] autorelease];
    if (achievementVC != nil)
    {
        achievementVC.achievementDelegate = self;
        [self presentViewController:achievementVC];
    }
}

-(void) achievementViewControllerDidFinish:(GKAchievementViewController*)viewController
{
    [self dismissModalViewController];
    //[[AchievementDispatcher sharedAchievementDispatcher] onAchievementViewDismissed];
    if(delegate_) delegate_->onAchievementViewDismissed();
    
}

@end