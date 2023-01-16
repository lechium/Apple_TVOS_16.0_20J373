//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVPlayerItemMediaDataCollector.h"

@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector
{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;	// 16 = 0x10
    CDUnknownBlockType _obtainCoordinator;	// 24 = 0x18
    AVPlayerItem *_weakReferenceToPlayerItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000157c7
- (void)dealloc;	// IMP=0x0000000000015760
- (id)initWithCoordinatorGenerator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015678
- (void)_updateTaggedRangeMetadataArray:(id)arg1;	// IMP=0x00000000000159bc
- (void)_detatchFromPlayerItem;	// IMP=0x0000000000015953
- (_Bool)_attachToPlayerItem:(id)arg1;	// IMP=0x00000000000157d8

@end
