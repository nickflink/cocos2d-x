/****************************************************************************
Copyright (c) 2012 gogododo
Copyright (c) 2012 Nicholas Flink
****************************************************************************/

// #import "CDAudioManager.h"
// 
// /**
//  A wrapper to the CDAudioManager object.
//  This is recommended for basic audio requirements. If you just want to play some sound fx
//  and some background music and have no interest in learning the lower level workings then
//  this is the interface to use.
//  
//  Requirements:
//  - Firmware: OS 2.2 or greater 
//  - Files: SimpleAudioEngine.*, CocosDenshion.*
//  - Frameworks: OpenAL, AudioToolbox, AVFoundation
//  @since v0.8
//  */
@interface CCGameServices : NSObject {
    
    BOOL    mute_;
    BOOL    enabled_;
}

/** Background music volume. Range is 0.0f to 1.0f. This will only have an effect if willPlayBackgroundMusic returns YES */
@property (readwrite) float backgroundMusicVolume;
/** Effects volume. Range is 0.0f to 1.0f */
@property (readwrite) float effectsVolume;
/** If NO it indicates background music will not be played either because no background music is loaded or the audio session does not permit it.*/
@property (readonly) BOOL willPlayBackgroundMusic;

/** returns the shared instance of the SimpleAudioEngine object */
+ (CCGameServices*) sharedGameServices;

/** Preloads a music file so it will be ready to play as background music */
-(void) showCCGameServices;

/** Shuts down the shared audio engine instance so that it can be reinitialised */
+(void) end;

@end
