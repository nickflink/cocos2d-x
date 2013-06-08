/****************************************************************************
Copyright (c) 2012 gogododo
Copyright (c) 2012 Nicholas Flink
****************************************************************************/
#import "CCGameServices_objc.h"

@implementation CCGameServices

static CCGameServices *sharedGameServices = nil;
//static CDSoundEngine* soundEngine = nil;
//static CDAudioManager *am = nil;
//static CDBufferManager *bufferManager = nil;

// Init
+ (CCGameServices *) sharedGameServices
{
    @synchronized(self)     {
        if (!sharedGameServices)
            sharedGameServices = [[CCGameServices alloc] init];
    }
    return sharedGameServices;
}

+ (id) alloc
{
    @synchronized(self)     {
        NSAssert(sharedGameServices == nil, @"Attempted to allocate a second instance of a singleton.");
        return [super alloc];
    }
    return nil;
}

-(id) init
{
    if((self=[super init])) {
        //am = [CDAudioManager sharedManager];
        //soundEngine = am.soundEngine;
        //bufferManager = [[CDBufferManager alloc] initWithEngine:soundEngine];
        mute_ = NO;
        enabled_ = YES;
    }
    return self;
}

// Memory
- (void) dealloc
{
    //am = nil;
    //soundEngine = nil;
    //bufferManager = nil;
    [super dealloc];
}

+(void) end 
{
    //am = nil;
    //[bufferManager release];
    [sharedGameServices release];
    sharedGameServices = nil;
}    

#pragma mark Leaderboard

-(void) showLeaderboard {
    [[CCGameServices sharedGameServices] showLeaderboard];
}


@end 
