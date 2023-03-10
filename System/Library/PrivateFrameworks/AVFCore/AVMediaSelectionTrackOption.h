//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    AVAssetTrack *_track;	// 24 = 0x18
    NSDictionary *_dictionary;	// 32 = 0x20
    AVWeakReference *_weakReferenceToGroup;	// 40 = 0x28
    _Bool _displaysNonForcedSubtitles;	// 48 = 0x30
}

- (int)trackID;	// IMP=0x000000000010b11f
- (id)track;	// IMP=0x000000000010b10e
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x000000000010af9f
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000010af82
- (id)availableMetadataFormats;	// IMP=0x000000000010af65
- (id)commonMetadata;	// IMP=0x000000000010af48
- (id)locale;	// IMP=0x000000000010af2b
- (_Bool)isPlayable;	// IMP=0x000000000010af0e
- (id)mediaSubTypes;	// IMP=0x000000000010ab53
- (id)_track;	// IMP=0x000000000010ab42
- (id)mediaType;	// IMP=0x000000000010ab25
- (_Bool)displaysNonForcedSubtitles;	// IMP=0x000000000010ab15
- (id)_groupID;	// IMP=0x000000000010ab04
- (id)group;	// IMP=0x000000000010aae7
- (id)dictionary;	// IMP=0x000000000010aad6
- (unsigned long long)hash;	// IMP=0x000000000010aaa0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010aa13
- (void)dealloc;	// IMP=0x000000000010a99f
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x000000000010a7e7

@end

