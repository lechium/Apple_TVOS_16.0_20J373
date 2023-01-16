//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBOverlayLayoutOffsetList;

@interface PBOverlayLayoutSuggestionSet : NSObject
{
    PBOverlayLayoutOffsetList *_hOffsets;	// 8 = 0x8
    PBOverlayLayoutOffsetList *_vOffsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000894c2
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *vOffsets; // @synthesize vOffsets=_vOffsets;
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *hOffsets; // @synthesize hOffsets=_hOffsets;
- (id)bestLayoutSuggestionAtIndexes:(id)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x001000000008928f
- (id)layoutSuggestionsAtIndexes:(id)arg1;	// IMP=0x0010000000089109
- (void)enumerateSuggestionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000890f1
- (void)enumerateSuggestionsAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088ef8
- (void)addOffset:(double)arg1 forAxis:(unsigned long long)arg2;	// IMP=0x0010000000088e8b
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithNodeCount:(unsigned long long)arg1;	// IMP=0x0010000000088e35
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0010000000088d67

@end
