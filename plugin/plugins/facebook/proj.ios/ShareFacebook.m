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

#import "ShareFacebook.h"
#import <FacebookSDK/FacebookSDK.h>
#import "ShareWrapper.h"

#define OUTPUT_LOG(...)     if (self.debug) NSLog(__VA_ARGS__);

@implementation ShareFacebook

@synthesize mShareInfo;
@synthesize mState;

@synthesize debug = __debug;

- (void) configDeveloperInfo : (NSMutableDictionary*) cpInfo
{
    mState = kFacebookEngineState_CLOSED;
    NSLog(@"ShareFacebook::configDeveloperInfo");
    //[FBAppCall handleDidBecomeActiveWithSession:self.mSession];
    //if(self.mSession == nil) {
    //  self.mSession = [[FBSession alloc] init];
    //  if (self.mSession.state == FBSessionStateCreatedTokenLoaded) {
    //      // even though we had a cached token, we need to login to make the session usable
    //      [self.mSession openWithCompletionHandler:^(FBSession *session, FBSessionState status, NSError *error) {
    //          // we should have a state machine updated here
    //          NSLog(@"openWithCompletionHandler finished");
    //      }];
    //  }
    //}
}

- (void) share: (NSMutableDictionary*) shareInfo
{
    NSLog(@"ShareFacebook::share");
    self.mShareInfo = shareInfo;
    if(self.mSession == nil) {
        NSLog(@"ERROR in share self.session should not be nil at this point");
        self.mSession = [[FBSession alloc] initWithPermissions:[NSArray arrayWithObject:@"publish_actions"]];
    }
    switch(self.mSession.state) {
        case FBSessionStateCreated:
            NSLog(@"ShareFacebook::share - FBSessionStateCreated");
            [self.mSession openWithBehavior:FBSessionLoginBehaviorForcingWebView completionHandler:^(FBSession *session, FBSessionState status, NSError *error) {
                NSLog(@"ShareFacebook::share - session openWithCompletionHandler");
                if(error) {
                    NSLog(@"Error share %@", [error localizedDescription]);
                }
            }];
            break;
        case FBSessionStateCreatedTokenLoaded:
            NSLog(@"ShareFacebook::share - FBSessionStateCreatedTokenLoaded");
            [self.mSession openWithBehavior:FBSessionLoginBehaviorForcingWebView completionHandler:^(FBSession *session, FBSessionState status, NSError *error) {
                NSLog(@"ShareFacebook::share - session openWithCompletionHandler");
                if(error) {
                    NSLog(@"Error share %@", [error localizedDescription]);
                }
            }];
            break;
        case FBSessionStateCreatedOpening:
            NSLog(@"ShareFacebook::share - FBSessionStateCreatedOpening");
            //[FBAppCall handleDidBecomeActiveWithSession:self.mSession];
            //[FBAppCall handleOpenURL:url sourceApplication:sourceApplication withSession:self.session];
            break;
        case FBSessionStateOpen:
            if ([FBSession activeSession] != self.mSession) {
                [FBSession setActiveSession:self.mSession];
            }
            NSLog(@"ShareFacebook::share - FBSessionStateOpen");
            [self doShare];
            /*if(mState == kFacebookEngineState_CLOSED) {
                mState = kFacebookEngineState_OPEN;
                [self doShare];
            }*/
            break;
        case FBSessionStateOpenTokenExtended:
            NSLog(@"ShareFacebook::share - FBSessionStateOpenTokenExtended");
            break;
        case FBSessionStateClosedLoginFailed:
            NSLog(@"ShareFacebook::share - FBSessionStateClosedLoginFailed");
            break;
        case FBSessionStateClosed:
            NSLog(@"ShareFacebook::share - FBSessionStateClosed");
            break;
    }
    NSLog(@"< ShareFacebook::share");

//    [FBAppCall handleDidBecomeActiveWithSession:self.session];

    /*if ([[FHSFacebookEngine sharedEngine]isAuthorized])
    {
        [self doShare];
    } else {
        UIViewController* controller = [self getCurrentRootViewController];
        [[FHSFacebookEngine sharedEngine]showOAuthLoginControllerFromViewController:controller withCompletion:^(BOOL success) {
            if (success) {
                [self doShare];
            } else {
                [ShareWrapper onShareResult:self withRet:kShareFail withMsg:@"Login Failed"];
            }
        }];
    }*/
}

// Convenience method to perform some action that requires the "publish_actions" permissions.
- (void) performPublishAction:(void (^)(void)) action {
    NSLog(@"ShareFacebook::performPublishAction");
    // we defer request for permission to post to the moment of post, then we check for the permission
    //if ([FBSession.activeSession.permissions indexOfObject:@"publish_actions"] == NSNotFound) {
    if ([self.mSession.permissions indexOfObject:@"publish_actions"] == NSNotFound) {
        // if we don't already have the permission, then we request it now
        NSLog(@"ShareFacebook::performPublishAction - requesting new permissions");
        //[FBSession.activeSession requestNewPublishPermissions:@[@"publish_actions"] defaultAudience:FBSessionDefaultAudienceFriends completionHandler:^(FBSession *session, NSError *error) {
        //NFHACK should NOT only be to me
        FBSessionDefaultAudience defaultAudience = FBSessionDefaultAudienceOnlyMe;
        //FBSessionDefaultAudience defaultAudience = FBSessionDefaultAudienceFriends;
        [self.mSession requestNewPublishPermissions:@[@"publish_actions"] defaultAudience:defaultAudience completionHandler:^(FBSession *session, NSError *error) {
                NSLog(@"ShareFacebook::performPublishAction - session requestNewPublishPermissions");
                if (!error) {
                    action();
                }
                //For this example, ignore errors (such as if user cancels).
        }];
    } else {
        action();
    }
    
}

- (void) setDebugMode: (BOOL) debug
{
    NSLog(@"ShareFacebook::setDebugMode");
    self.debug = debug;
}

- (NSString*) getSDKVersion
{
    NSLog(@"ShareFacebook::getSDKVersion");
    return @"20130607";
}

- (NSString*) getPluginVersion
{
    NSLog(@"ShareFacebook::getPluginVersion");
    return @"0.2.0";
}

- (void) doShare
{
    NSLog(@"ShareFacebook::doShare");
    if (nil == mShareInfo) {
        [ShareWrapper onShareResult:self withRet:kShareFail withMsg:@"Shared info error"];
        return;
    }
    NSString* strText = [mShareInfo objectForKey:@"SharedText"];
    NSString* strImagePath = [mShareInfo objectForKey:@"SharedImagePath"];

    //BOOL oldConfig = [UIApplication sharedApplication].networkActivityIndicatorVisible;
    //[UIApplication sharedApplication].networkActivityIndicatorVisible = YES;
    
    if (nil != strText ) {
        NSString* strErrorCode = [NSString stringWithFormat:@"Implementation Error SharedText NOT implemented for ShareFacebook"];
        [ShareWrapper onShareResult:self withRet:kShareFail withMsg:strErrorCode];
    }
    if (nil != strImagePath) {
        NSLog(@"ShareFacebook::doShare - sharing SharedImagePath");
        [self performPublishAction:^{
            NSLog(@"ShareFacebook::doShare - performPublishAction");
            UIImage *img = [UIImage imageNamed:strImagePath];
            [FBRequestConnection startForUploadPhoto:img completionHandler:^(FBRequestConnection *connection, id result, NSError *error) {
            //[FBRequestConnection startForPostStatusUpdate:(NSString *)@"Message test" completionHandler:^(FBRequestConnection *connection, id result, NSError *error) {
                NSLog(@"ShareFacebook::doShare - FBRequestConnection startForUploadPhoto");
                [self showAlert:@"Photo Post" result:result error:error];
                [self.mSession close];
                //self.buttonPostPhoto.enabled = YES; UNBLOCK BUTTON
            }];
          //self.buttonPostPhoto.enabled = NO; BLOCK BUTTON
        }];
    }
    //[UIApplication sharedApplication].networkActivityIndicatorVisible = oldConfig;

}

- (UIViewController *)getCurrentRootViewController {
    NSLog(@"ShareFacebook::getCurrentRootViewController");
    UIViewController *result = nil;

    /*// Try to find the root view controller programmically

    // Find the top window (that is not an alert view or other window)
    UIWindow *topWindow = [[UIApplication sharedApplication] keyWindow];
    if (topWindow.windowLevel != UIWindowLevelNormal)
    {
        NSArray *windows = [[UIApplication sharedApplication] windows];
        for(topWindow in windows)
        {
            if (topWindow.windowLevel == UIWindowLevelNormal)
                break;
        }
    }

    UIView *rootView = [[topWindow subviews] objectAtIndex:0];
    id nextResponder = [rootView nextResponder];

    if ([nextResponder isKindOfClass:[UIViewController class]])
        result = nextResponder;
    else if ([topWindow respondsToSelector:@selector(rootViewController)] && topWindow.rootViewController != nil)
        result = topWindow.rootViewController;
    else
        NSAssert(NO, @"Could not find a root view controller.");*/

    return result;
}

// UIAlertView helper for post buttons
- (void)showAlert:(NSString *)message
           result:(id)result
            error:(NSError *)error {
    NSLog(@"ShareFacebook::showAlert");
    NSString *alertMsg;
    NSString *alertTitle;
    if (error) {
        alertTitle = @"Error";
        if (error.fberrorShouldNotifyUser ||
            error.fberrorCategory == FBErrorCategoryPermissions ||
            error.fberrorCategory == FBErrorCategoryAuthenticationReopenSession) {
            alertMsg = error.fberrorUserMessage;
        } else {
            alertMsg = @"Operation failed due to a connection problem, retry later.";
        }
    } else {
        NSDictionary *resultDict = (NSDictionary *)result;
        alertMsg = [NSString stringWithFormat:@"Successfully posted '%@'.", message];
        NSString *postId = [resultDict valueForKey:@"id"];
        if (!postId) {
            postId = [resultDict valueForKey:@"postId"];
        }
        if (postId) {
            alertMsg = [NSString stringWithFormat:@"%@\nPost ID: %@", alertMsg, postId];
        }
        alertTitle = @"Success";
    }
    
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:alertTitle
                                                        message:alertMsg
                                                       delegate:nil
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
    [alertView show];
}

@end
