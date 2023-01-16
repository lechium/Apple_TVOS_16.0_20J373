//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRPlaybackQueue, MRPlaybackQueueSubscriptionController, MRPlayer, MRPlayerPath, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientRequests : NSObject
{
    MRPlaybackQueue *_playbackQueue;	// 8 = 0x8
    unsigned int _playbackState;	// 16 = 0x10
    NSArray *_supportedCommands;	// 24 = 0x18
    MRPlayer *_playerProperties;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_responseQueue;	// 48 = 0x30
    NSMutableDictionary *_playbackQueueCompletions;	// 56 = 0x38
    NSMutableArray *_supportedCommandsCompletions;	// 64 = 0x40
    NSMutableArray *_playbackStateCompletions;	// 72 = 0x48
    NSMutableArray *_playerPropertiesCompletions;	// 80 = 0x50
    NSOperationQueue *_enquedNowPlayingInfoRequests;	// 88 = 0x58
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;	// 96 = 0x60
    MRPlayerPath *_playerPath;	// 104 = 0x68
    MRPlaybackQueueSubscriptionController *_subscriptionController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002124a9
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void)restoreNowPlayingClientState;	// IMP=0x000000000021239e
- (void)handlePlayerPropertiesRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000211fe9
- (void)handlePlaybackStateRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000211c52
- (void)handleSupportedCommandsRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000021189d
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021118a
- (void)updateContentItemArtwork:(id)arg1;	// IMP=0x0000000000210c87
- (void)updateContentItems:(id)arg1;	// IMP=0x000000000021097f
@property(copy, nonatomic) MRPlayer *playerProperties;
@property(copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property(copy, nonatomic) NSArray *supportedCommands;
@property(nonatomic) unsigned int playbackState;
- (id)debugDescription;	// IMP=0x000000000021009c
- (void)dealloc;	// IMP=0x0000000000210027
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x000000000020fe82

@end

