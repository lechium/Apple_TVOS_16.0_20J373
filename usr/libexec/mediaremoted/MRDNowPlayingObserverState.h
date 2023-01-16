//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRNowPlayingState, MRPlaybackQueue, MRPlayer, MRPlayerPath, NSArray, NSDate, NSNumber;

@interface MRDNowPlayingObserverState : NSObject
{
    NSArray *_supportedCommands;	// 8 = 0x8
    MRPlaybackQueue *_playbackQueue;	// 16 = 0x10
    unsigned long long _playbackQueueCapabilities;	// 24 = 0x18
    NSArray *_contentItems;	// 32 = 0x20
    NSArray *_contentItemsArtwork;	// 40 = 0x28
    NSNumber *_playbackState;	// 48 = 0x30
    NSDate *_playbackStateTimestamp;	// 56 = 0x38
    MRPlayer *_playerProperties;	// 64 = 0x40
    MRPlayerPath *_playerPath;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000753e2
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) MRPlayer *playerProperties; // @synthesize playerProperties=_playerProperties;
@property(retain, nonatomic) NSDate *playbackStateTimestamp; // @synthesize playbackStateTimestamp=_playbackStateTimestamp;
@property(retain, nonatomic) NSNumber *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSArray *contentItemsArtwork; // @synthesize contentItemsArtwork=_contentItemsArtwork;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(nonatomic) unsigned long long playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
@property(retain, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(retain, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
- (id)_coealesceItems:(id)arg1;	// IMP=0x0010000000074ffe
@property(readonly, nonatomic) MRNowPlayingState *state;
- (id)description;	// IMP=0x0010000000073759
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00100000000736ee

@end

