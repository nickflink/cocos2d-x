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

#ifndef __CCLEADERBOARDIMPLIOS_H__
#define __CCLEADERBOARDIMPLIOS_H__

#include "cocos2d.h"
#include "ExtensionMacros.h"
#include "CCLeaderboardImpl.h"

NS_CC_EXT_BEGIN

class CCLeaderboard;

class CCLeaderboardImplIOS : public CCLeaderboardImpl
{
public:
    CCLeaderboardImplIOS(CCLeaderboard * pLeaderboard);
    virtual ~CCLeaderboardImplIOS();
    virtual void setDelegate(CCLeaderboardDelegate* pDelegate);
    virtual void submitScore(int64_t score, const char *category){CCLOG("submitScore not implemented!");}
    virtual void showLeaderboard();

private:
    //LeaderboardDispatcher *m_pDispatcher;
};


NS_CC_EXT_END


#import "CCLeaderboard.h"
#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>

@interface LeaderboardDispatcher : NSObject <GKLeaderboardViewControllerDelegate>
{
    bool isGameCenterAvailable;
    NSError* lastError;
}

@property (readwrite) cocos2d::extension::CCLeaderboardDelegate *delegate_;
@property (nonatomic, readonly) bool isGameCenterAvailable;
@property (nonatomic, readonly) NSError* lastError;

//Delegate functions
+(id) sharedLeaderboardDispatcher;
-(id) init;
//-(void) addDelegate: (cocos2d::CCLeaderboardDelegate *) delegate;
-(void) leaderboardViewControllerDidFinish:(GKLeaderboardViewController*)viewController;

// Player authentication, info
-(void) authenticateLocalPlayer;
-(void) getLocalPlayerFriends;
-(void) getPlayerInfo:(NSArray*)players;
-(void) onLocalPlayerAuthenticationChanged;

// Scores
-(void) submitScore:(int64_t)score category:(NSString*)category;
-(void) retrieveScoresForPlayers:(NSArray*)players
                        category:(NSString*)category 
                           range:(NSRange)range
                     playerScope:(GKLeaderboardPlayerScope)playerScope 
                       timeScope:(GKLeaderboardTimeScope)timeScope;
-(void) retrieveTopTenAllTimeGlobalScores;


// Game Center Views
-(void) showLeaderboard;

@end

#endif //__CCLEADERBOARDIMPLIOS_H__

