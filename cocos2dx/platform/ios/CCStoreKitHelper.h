//
//  CCStoreKitHelper.h
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#ifndef ABStoreKitHELPER_LOGGING
    #define ABStoreKitHELPER_LOGGING 1
#endif

@interface CCStoreKitHelper : NSObject

/**
 * Always access class through this singleton
 * Call it once on application start to authenticate local player
 */
+(id) sharedHelper;


-(void) inAppPurchase:(NSString*)name;


@property (nonatomic, assign, getter = isAuthenticated) BOOL authenticated;

@end
