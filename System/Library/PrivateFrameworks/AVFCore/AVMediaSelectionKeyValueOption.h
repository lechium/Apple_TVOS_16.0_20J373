//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    id _groupMediaType;	// 24 = 0x18
    NSString *_optionMediaType;	// 32 = 0x20
    NSDictionary *_dictionary;	// 40 = 0x28
    AVWeakReference *_weakReferenceToGroup;	// 48 = 0x30
    _Bool _displaysNonForcedSubtitles;	// 56 = 0x38
}

- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000010b691
- (id)availableMetadataFormats;	// IMP=0x000000000010b678
- (id)commonMetadata;	// IMP=0x000000000010b53e
- (id)locale;	// IMP=0x000000000010b4d8
- (_Bool)isPlayable;	// IMP=0x000000000010b4d0
- (id)mediaType;	// IMP=0x000000000010b4bf
- (id)_groupMediaType;	// IMP=0x000000000010b4ae
- (id)_groupID;	// IMP=0x000000000010b49d
- (id)group;	// IMP=0x000000000010b480
- (id)dictionary;	// IMP=0x000000000010b46f
- (unsigned long long)hash;	// IMP=0x000000000010b402
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010b314
- (void)dealloc;	// IMP=0x000000000010b292
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x000000000010b13c

@end

