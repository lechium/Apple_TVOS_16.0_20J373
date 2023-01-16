//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAsset.h"

@class AVAssetProxyInternal;

__attribute__((visibility("hidden")))
@interface AVAssetProxy : AVAsset
{
    AVAssetProxyInternal *_assetProxy;	// 16 = 0x10
}

+ (id)assetProxyWithPropertyList:(id)arg1;	// IMP=0x00600000000218eb
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;	// IMP=0x0060000000021870
- (id)tracks;	// IMP=0x0000000000021bc7
- (Class)_classForTrackInspectors;	// IMP=0x0000000000021ba6
- (id)_assetInspector;	// IMP=0x0000000000021b85
- (id)_assetInspectorLoader;	// IMP=0x0000000000021b70
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x0000000000021b68
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x0000000000021b47
- (struct OpaqueFigAsset *)_figAsset;	// IMP=0x0000000000021b26
- (_Bool)isProxy;	// IMP=0x0000000000021b1e
- (void)dealloc;	// IMP=0x0000000000021aa1
- (id)initWithPropertyList:(id)arg1;	// IMP=0x000000000002191a

@end

