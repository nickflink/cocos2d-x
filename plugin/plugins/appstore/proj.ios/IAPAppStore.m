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

#import "IAPAppStore.h"

#define OUTPUT_LOG(...)     if (self.debug) NSLog(__VA_ARGS__);

@implementation IAPAppStore

@synthesize mIAPInfo;
//@synthesize mState;

@synthesize debug = __debug;

- (void) configDeveloperInfo : (NSMutableDictionary*) cpInfo
{
    //mState = kAppStoreEngineState_CLOSED;
    NSLog(@"IAPAppStore::configDeveloperInfo");
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

- (void) payForProduct: (NSMutableDictionary*) IAPInfo
{
    NSLog(@"IAPAppStore::payForProduct");
    self.mIAPInfo = IAPInfo;
    //if(self.mSession == nil) {
    //    NSLog(@"ERROR in IAP self.session should not be nil at this point");
    //    self.mSession = [[FBSession alloc] initWithPermissions:[NSArray arrayWithObject:@"publish_actions"]];
    //}
    //switch(self.mSession.state) {
    //    case FBSessionStateCreated:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateCreated");
    //        [self.mSession openWithBehavior:FBSessionLoginBehaviorForcingWebView completionHandler:^(FBSession *session, FBSessionState status, NSError *error) {
    //            NSLog(@"IAPAppStore::IAP - session openWithCompletionHandler");
    //            if(error) {
    //                NSLog(@"Error IAP %@", [error localizedDescription]);
    //            }
    //        }];
    //        break;
    //    case FBSessionStateCreatedTokenLoaded:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateCreatedTokenLoaded");
    //        [self.mSession openWithBehavior:FBSessionLoginBehaviorForcingWebView completionHandler:^(FBSession *session, FBSessionState status, NSError *error) {
    //            NSLog(@"IAPAppStore::IAP - session openWithCompletionHandler");
    //            if(error) {
    //                NSLog(@"Error IAP %@", [error localizedDescription]);
    //            }
    //        }];
    //        break;
    //    case FBSessionStateCreatedOpening:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateCreatedOpening");
    //        //[FBAppCall handleDidBecomeActiveWithSession:self.mSession];
    //        //[FBAppCall handleOpenURL:url sourceApplication:sourceApplication withSession:self.session];
    //        break;
    //    case FBSessionStateOpen:
    //        if ([FBSession activeSession] != self.mSession) {
    //            [FBSession setActiveSession:self.mSession];
    //        }
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateOpen");
    //        [self doIAP];
    //        /*if(mState == kAppStoreEngineState_CLOSED) {
    //            mState = kAppStoreEngineState_OPEN;
    //            [self doIAP];
    //        }*/
    //        break;
    //    case FBSessionStateOpenTokenExtended:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateOpenTokenExtended");
    //        break;
    //    case FBSessionStateClosedLoginFailed:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateClosedLoginFailed");
    //        break;
    //    case FBSessionStateClosed:
    //        NSLog(@"IAPAppStore::IAP - FBSessionStateClosed");
    //        break;
    //}
    NSLog(@"< IAPAppStore::IAP");

//    [FBAppCall handleDidBecomeActiveWithSession:self.session];

    /*if ([[FHSAppStoreEngine IAPdEngine]isAuthorized])
    {
        [self doIAP];
    } else {
        UIViewController* controller = [self getCurrentRootViewController];
        [[FHSAppStoreEngine IAPdEngine]showOAuthLoginControllerFromViewController:controller withCompletion:^(BOOL success) {
            if (success) {
                [self doIAP];
            } else {
                [IAPWrapper onIAPResult:self withRet:kIAPFail withMsg:@"Login Failed"];
            }
        }];
    }*/
}

- (void) setDebugMode: (BOOL) debug
{
    NSLog(@"IAPAppStore::setDebugMode");
    self.debug = debug;
}

- (NSString*) getSDKVersion
{
    NSLog(@"IAPAppStore::getSDKVersion");
    return @"20130607";
}

- (NSString*) getPluginVersion
{
    NSLog(@"IAPAppStore::getPluginVersion");
    return @"0.2.0";
}

- (UIViewController *)getCurrentRootViewController {
    NSLog(@"IAPAppStore::getCurrentRootViewController");
    UIViewController *result = nil;

    /*// Try to find the root view controller programmically

    // Find the top window (that is not an alert view or other window)
    UIWindow *topWindow = [[UIApplication IAPdApplication] keyWindow];
    if (topWindow.windowLevel != UIWindowLevelNormal)
    {
        NSArray *windows = [[UIApplication IAPdApplication] windows];
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
    NSLog(@"IAPAppStore::showAlert");
    NSString *alertMsg;
    NSString *alertTitle;
    //if (error) {
    //    alertTitle = @"Error";
    //    if (error.fberrorShouldNotifyUser ||
    //        error.fberrorCategory == FBErrorCategoryPermissions ||
    //        error.fberrorCategory == FBErrorCategoryAuthenticationReopenSession) {
    //        alertMsg = error.fberrorUserMessage;
    //    } else {
    //        alertMsg = @"Operation failed due to a connection problem, retry later.";
    //    }
    //} else {
    //    NSDictionary *resultDict = (NSDictionary *)result;
    //    alertMsg = [NSString stringWithFormat:@"Successfully posted '%@'.", message];
    //    NSString *postId = [resultDict valueForKey:@"id"];
    //    if (!postId) {
    //        postId = [resultDict valueForKey:@"postId"];
    //    }
    //    if (postId) {
    //        alertMsg = [NSString stringWithFormat:@"%@\nPost ID: %@", alertMsg, postId];
    //    }
    //    alertTitle = @"Success";
    //}
    
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:alertTitle
                                                        message:alertMsg
                                                       delegate:nil
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
    [alertView show];
}

@end
