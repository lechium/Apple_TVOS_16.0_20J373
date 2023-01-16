//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol SFCollectionViewDelegateLayout;

__attribute__((visibility("hidden")))
@interface SFCollectionViewLayout : UICollectionViewLayout
{
    id <SFCollectionViewDelegateLayout> _fallbackDelegate;	// 8 = 0x8
    double _evaluatedHorizontalItemOffset;	// 16 = 0x10
    NSArray *_preparedLayoutAttributes;	// 24 = 0x18
    NSArray *_preparedUpdateItems;	// 32 = 0x20
    struct CGSize _evaluatedItemSize;	// 40 = 0x28
    struct CGSize _evaluatedContentSize;	// 56 = 0x38
    struct UIEdgeInsets _evaluatedInset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000cb39
@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(nonatomic) __weak id <SFCollectionViewDelegateLayout> fallbackDelegate; // @synthesize fallbackDelegate=_fallbackDelegate;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;	// IMP=0x000000000000c94f
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x000000000000c7d4
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;	// IMP=0x000000000000c7cc
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4;	// IMP=0x000000000000c72c
- (id)_indexPathsForItemsInSection:(long long)arg1;	// IMP=0x000000000000c625
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;	// IMP=0x000000000000c5fb
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000000c384
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000000000c344
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000000c2d6
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000000c02f
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000000bd89
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000bcf6
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000000bb91
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000000bb43
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000000bb31
- (_Bool)shouldReverseLayoutDirection;	// IMP=0x000000000000baca
- (void)prepareLayout;	// IMP=0x000000000000b65f
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;	// IMP=0x000000000000b367
- (struct CGPoint)firstItemCenterForContainerWidth:(double)arg1;	// IMP=0x000000000000b25e
- (id)init;	// IMP=0x000000000000b20d

@end
