//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, NSMutableDictionary;
@protocol _TVCollectionViewDelegateFullScreenBrowserLayout;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewFullScreenBrowserLayout : UICollectionViewLayout
{
    struct SectionInfo *_sectionInfos;	// 8 = 0x8
    long long _numberOfSections;	// 16 = 0x10
    long long _numberOfCells;	// 24 = 0x18
    long long _centerCellIndex;	// 32 = 0x20
    id <_TVCollectionViewDelegateFullScreenBrowserLayout> _collectionViewDelegateFullScreenBrowserLayout;	// 40 = 0x28
    struct {
        _Bool hasCenterIndexPathDidChange;
        _Bool hasCenterIndexPathTransitionStateDidChange;
        _Bool hasShouldShowItemAtIndexPath;
    } _collectionViewDelegateFullScreenBrowserLayoutFlags;	// 48 = 0x30
    _Bool _isCenterIndexPathInTransition;	// 51 = 0x33
    NSArray *_layoutAttributesBySection;	// 56 = 0x38
    NSArray *_orderedLayoutAttributes;	// 64 = 0x40
    double _cornerRadius;	// 72 = 0x48
    double _interitemSpacing;	// 80 = 0x50
    double _parallaxFactor;	// 88 = 0x58
    double _maskAmount;	// 96 = 0x60
    NSMutableDictionary *_layoutAttributesByIndexPath;	// 104 = 0x68
    struct CGSize _cellSize;	// 112 = 0x70
    struct CGSize _contentSize;	// 128 = 0x80
}

+ (Class)layoutAttributesClass;	// IMP=0x0060000000001f75
- (void).cxx_destruct;	// IMP=0x00000000000036bb
@property(retain, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath; // @synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(readonly, nonatomic) _Bool isCenterIndexPathInTransition; // @synthesize isCenterIndexPathInTransition=_isCenterIndexPathInTransition;
@property(nonatomic) double maskAmount; // @synthesize maskAmount=_maskAmount;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) NSArray *orderedLayoutAttributes; // @synthesize orderedLayoutAttributes=_orderedLayoutAttributes;
@property(readonly, nonatomic) NSArray *layoutAttributesBySection; // @synthesize layoutAttributesBySection=_layoutAttributesBySection;
- (void)_evaluateCenterCellIndexTransitionCheck;	// IMP=0x0000000000003355
- (void)_enumerateVisibleCellIndexesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003264
- (long long)_currentCenterCellIndexWithTransitionState:(_Bool *)arg1;	// IMP=0x00000000000030ee
- (long long)_cellIndexForIndexPath:(id)arg1;	// IMP=0x0000000000003085
- (id)_indexPathForCellIndex:(long long)arg1;	// IMP=0x0000000000003010
- (struct CGPoint)_targetContentOffsetForCellIndex:(long long)arg1;	// IMP=0x0000000000002f63
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000002f5b
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x0000000000002e69
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000002d57
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000028d5
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000002782
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000002648
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000000248c
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000002484
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000002472
- (void)prepareLayout;	// IMP=0x0000000000001f86
@property(readonly, nonatomic) NSIndexPath *centerIndexPath;
- (void)dealloc;	// IMP=0x0000000000001cd3
- (id)init;	// IMP=0x0000000000001c75

@end

