//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC15MediaFoundation31InternalPlaybackStackController : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *currentQueueControllerItem;	// 32 = 0x20
    MISSING_TYPE *loadedQueueControllerItems;	// 40 = 0x28
    MISSING_TYPE *loadedItemsPool;	// 48 = 0x30
    MISSING_TYPE *maximumPlayerQueueLength;	// 56 = 0x38
    MISSING_TYPE *mediaServicesAvailable;	// 64 = 0x40
    MISSING_TYPE *playerController;	// 72 = 0x48
    MISSING_TYPE *queueAssetLoader;	// 80 = 0x50
    MISSING_TYPE *queueController;	// 96 = 0x60
    MISSING_TYPE *reporter;	// 104 = 0x68
    MISSING_TYPE *errorController;	// 144 = 0x90
    MISSING_TYPE *externalPlaybackController;	// 152 = 0x98
    MISSING_TYPE *backgroundTaskController;	// 160 = 0xa0
    MISSING_TYPE *playbackDefaults;	// 168 = 0xa8
    MISSING_TYPE *synchronizingToPlayer;	// 176 = 0xb0
    MISSING_TYPE *currentQueueRestorationItem;	// 184 = 0xb8
    MISSING_TYPE *playerItemStateSnapshot;	// 192 = 0xc0
    MISSING_TYPE *throttlingStateMachine;	// 208 = 0xd0
    MISSING_TYPE *transitionController;	// 216 = 0xd8
    MISSING_TYPE *deferredPlaybackRateForNextSetQueue;	// 224 = 0xe0
    MISSING_TYPE *inFlightSetQueueLoadingContext;	// 232 = 0xe8
    MISSING_TYPE *currentQueueAssetLoadingContext;	// 288 = 0x120
    MISSING_TYPE *reloadQueueOnGoing;	// 340 = 0x154
    MISSING_TYPE *stackVersion;	// 344 = 0x158
    MISSING_TYPE *assetLoadingId;	// 352 = 0x160
    MISSING_TYPE *playbackStallTimer;	// 360 = 0x168
    MISSING_TYPE *isPausedForLeasePrevention;	// 368 = 0x170
    MISSING_TYPE *$__lazy_storage_$_skipAggregator;	// 376 = 0x178
    MISSING_TYPE *skippingState;	// 384 = 0x180
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;

@end

