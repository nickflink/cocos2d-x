//
//  CCStoreKitHelper.m
//

#import <CommonCrypto/CommonCryptor.h>
#import "CCStoreKitHelper.h"
#include "CCInAppBilling.h"

#define IS_MIN_IOS6 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0f)

@interface CCStoreKitHelper () <SKProductsRequestDelegate>
@end

@implementation CCStoreKitHelper

#pragma mark - Singleton
+(id) sharedHelper
{
    static CCStoreKitHelper *sharedHelper = nil;
    static dispatch_once_t once = 0;
    dispatch_once(&once, ^{sharedHelper = [[self alloc] init];});
    return sharedHelper;
}

#pragma mark - Initializer
-(id) init
{
    self = [super init];
    if (self)
    {
        //[self authenticatePlayer];
    }
    return self;
}

-(void) inAppPurchase:(NSString*)name
{
    return;
}

#pragma mark -
#pragma mark SKProductsRequestDelegate methods

- (void)productsRequest:(SKProductsRequest *)request didReceiveResponse:(SKProductsResponse *)response
{
    /*NSArray *products = response.products;
    proUpgradeProduct = [products count] == 1 ? [[products firstObject] retain] : nil;
    if (proUpgradeProduct)
    {
        NSLog(@"Product title: %@" , proUpgradeProduct.localizedTitle);
        NSLog(@"Product description: %@" , proUpgradeProduct.localizedDescription);
        NSLog(@"Product price: %@" , proUpgradeProduct.price);
        NSLog(@"Product id: %@" , proUpgradeProduct.productIdentifier);
    }
    
    for (NSString *invalidProductId in response.invalidProductIdentifiers)
    {
        NSLog(@"Invalid product id: %@" , invalidProductId);
    }
    
    // finally release the reqest we alloc/init’ed in requestProUpgradeProductData
    [productsRequest release];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:kInAppPurchaseManagerProductsFetchedNotification object:self userInfo:nil];*/
}

@end
