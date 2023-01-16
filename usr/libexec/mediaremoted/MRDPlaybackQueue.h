//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDPlaybackQueueArtworkCache, MRPlaybackQueue;

@interface MRDPlaybackQueue : NSObject
{
    MRPlaybackQueue *_playbackQueue;	// 8 = 0x8
    MRDPlaybackQueueArtworkCache *_artworkCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f1e03
@property(retain, nonatomic) MRDPlaybackQueueArtworkCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(readonly, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
- (id)createPlaybackQueueForRequest:(id)arg1 cachingPolicy:(unsigned int)arg2 playerPath:(id)arg3 partiallyCachedItems:(id *)arg4;	// IMP=0x00100000000f195a
- (void)clearArtwork;	// IMP=0x00100000000f1931
- (void)clearArtworkForContentItems:(id)arg1;	// IMP=0x00100000000f16c2
- (void)updatePlaybackQueueWithContentItems:(id)arg1 fromRequest:(id)arg2;	// IMP=0x00100000000f1454
- (id)debugDescription;	// IMP=0x00100000000f1364
- (id)initWithPlaybackQueue:(id)arg1;	// IMP=0x00100000000f11a0

@end
