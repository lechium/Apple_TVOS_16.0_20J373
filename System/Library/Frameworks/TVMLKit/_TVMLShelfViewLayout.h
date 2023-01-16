//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVShelfViewLayout.h"

__attribute__((visibility("hidden")))
@interface _TVMLShelfViewLayout : _TVShelfViewLayout
{
    double _showcaseFactor;	// 8 = 0x8
    double _cachedTallestHeaderHeight;	// 16 = 0x10
    struct TVCellMetrics _cellMetrics;	// 24 = 0x18
}

@property(nonatomic) double cachedTallestHeaderHeight; // @synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00000000000ad27f
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000acfb5
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000acee6
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000acc85
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000000000ac9c1
- (id)contentRowMetricsForShowcase:(_Bool)arg1;	// IMP=0x00000000000ac47b
- (double)headerAllowance;	// IMP=0x00000000000ac27d
- (double)expectedLineSpacing;	// IMP=0x00000000000ac091
- (id)init;	// IMP=0x00000000000abf88

@end
