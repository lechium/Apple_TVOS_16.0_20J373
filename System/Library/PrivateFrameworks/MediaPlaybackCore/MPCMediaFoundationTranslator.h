//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MPCQueueItemProviding;

__attribute__((visibility("hidden")))
@interface MPCMediaFoundationTranslator : NSObject
{
    NSMutableDictionary *_mapping;	// 8 = 0x8
    id <MPCQueueItemProviding> _queueController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019b805
@property(readonly, nonatomic) id <MPCQueueItemProviding> queueController; // @synthesize queueController=_queueController;
@property(readonly, copy, nonatomic) NSMutableDictionary *mapping; // @synthesize mapping=_mapping;
- (id)_MPAVItemForMFPlayerItem:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x000000000019b680
- (void)updatePlayerPlaybackCoordinator:(id)arg1;	// IMP=0x000000000019b5d9
- (_Bool)canSkipInDirection:(long long)arg1 fromItem:(id)arg2;	// IMP=0x000000000019b4d6
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;	// IMP=0x000000000019afcb
- (id)queueItemForPlayerItem:(id)arg1 allowReuse:(_Bool)arg2;	// IMP=0x000000000019afb9
- (void)resetMapping;	// IMP=0x000000000019af7c
- (void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2;	// IMP=0x000000000019aedf
- (id)MPAVItemForMFPlayerItem:(id)arg1;	// IMP=0x000000000019aec8
- (id)initWithQueueController:(id)arg1;	// IMP=0x000000000019ae43

@end
