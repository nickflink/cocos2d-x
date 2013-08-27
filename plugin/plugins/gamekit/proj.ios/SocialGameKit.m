/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
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

#import "SocialGameKit.h"
#import "SocialWrapper.h"
#import "CCGameKitHelper.h"

#define OUTPUT_LOG(...)     if (self.debug) NSLog(__VA_ARGS__);

@implementation SocialGameKit

@synthesize debug = __debug;

- (void) configDeveloperInfo : (NSMutableDictionary*) cpInfo
{
    OUTPUT_LOG(@"SocialGameKit::configDeveloperInfo");
    if(![[CCGameKitHelper sharedHelper] isAuthenticated]) {
        [[CCGameKitHelper sharedHelper] authenticatePlayer];
    }
}
- (void) submitScore: (NSString*) leaderboardID withScore: (long) score
{
    OUTPUT_LOG(@"SocialGameKit::submitScore:withScore");
}

- (void) showLeaderboard: (NSString*) leaderboardID
{
    OUTPUT_LOG(@"SocialGameKit::showLeaderboard");
    [[CCGameKitHelper sharedHelper] showLeaderboard:nil];
}

- (void) unlockAchievement: (NSMutableDictionary*) achInfo
{
    OUTPUT_LOG(@"SocialGameKit::unlockAchievement");
}

- (void) showAchievements
{
    OUTPUT_LOG(@"SocialGameKit::showAchievements");
    [[CCGameKitHelper sharedHelper] showAchievements];
}

- (void) setDebugMode: (BOOL) debug
{
    OUTPUT_LOG(@"SocialGameKit::setDebugMode");
    self.debug = debug;
}


- (NSString*) getSDKVersion
{
    OUTPUT_LOG(@"SocialGameKit::getSDKVersion");
    return @"20130824";
}

- (NSString*) getPluginVersion
{
    OUTPUT_LOG(@"SocialGameKit::getPluginVersion");
    return @"20130824";
}

@end
