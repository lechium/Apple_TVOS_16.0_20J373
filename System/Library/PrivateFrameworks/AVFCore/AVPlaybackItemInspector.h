//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
    NSArray *_trackIDs;	// 16 = 0x10
}

- (id)compatibleTrackForCompositionTrack:(id)arg1;	// IMP=0x00000000000e2c5d
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000e2c44
- (id)availableMetadataFormats;	// IMP=0x00000000000e2c2b
- (id)commonMetadata;	// IMP=0x00000000000e2c12
- (id)lyrics;	// IMP=0x00000000000e2bf6
- (id)trackIDs;	// IMP=0x00000000000e2be5
- (long long)trackCount;	// IMP=0x00000000000e2b8a
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000e2b82
- (struct CGSize)naturalSize;	// IMP=0x00000000000e2b0a
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000e2aab
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000e2a32
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem *playbackItem;
- (unsigned long long)hash;	// IMP=0x00000000000e298f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e290c
- (void)dealloc;	// IMP=0x00000000000e28b8
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2;	// IMP=0x00000000000e2835

@end

