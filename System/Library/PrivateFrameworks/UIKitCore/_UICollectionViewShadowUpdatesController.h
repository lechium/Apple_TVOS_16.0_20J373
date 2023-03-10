//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewShadowUpdatesController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UIDataSourceSnapshotter *_initialSnapshot;	// 16 = 0x10
    _UIDataSourceUpdateMap *_updateMap;	// 24 = 0x18
    NSMutableArray *__shadowUpdates;	// 32 = 0x20
    NSPointerArray *_rebaseObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000037fe8f
@property(retain, nonatomic) NSPointerArray *rebaseObservers; // @synthesize rebaseObservers=_rebaseObservers;
@property(retain, nonatomic) NSMutableArray *_shadowUpdates; // @synthesize _shadowUpdates=__shadowUpdates;
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;	// IMP=0x000000000037fcfe
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;	// IMP=0x000000000037fa7f
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;	// IMP=0x000000000037f8a2
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000037f89c
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x000000000037f88f
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000037f879
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000037f6c8
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x000000000037f593
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;	// IMP=0x000000000037f57f
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;	// IMP=0x000000000037f510
- (id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x000000000037f38d
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x000000000037f379
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000037f2de
- (id)_coalesceUpdatesIfPossible:(id)arg1;	// IMP=0x000000000037f034
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2;	// IMP=0x000000000037eeda
- (id)_rebasedUpdateMapForUpdate:(id)arg1;	// IMP=0x000000000037ed87
- (void)_regenerateUpdateMap;	// IMP=0x000000000037ecba
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;	// IMP=0x000000000037e555
- (_Bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;	// IMP=0x000000000037e361
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x000000000037e359
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000037e12e
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000037df03
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000037dde8
- (id)_collectionView:(id)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)arg2;	// IMP=0x000000000037dcc3
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x000000000037dc25
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;	// IMP=0x000000000037db65
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000037daaf
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;	// IMP=0x000000000037da0e
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000037d976
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000037d8d4
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000037d82e
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000037d75d
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000000037d6a7
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000037d5dd
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000037d527
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000037d44e
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x000000000037d352
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;	// IMP=0x000000000037d279
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000037d18b
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000037d096
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;	// IMP=0x000000000037cfcc
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000037ceea
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000037cdf8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000037cd18
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000037cc26
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000037cb46
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000037ca83
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c9c0
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c8f6
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c82c
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c769
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c6a6
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000037c5dc
- (void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2;	// IMP=0x000000000037c2b5
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000037c1f4
- (id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x000000000037c14d
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000037c0ac
- (_Bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000037bfe2
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000037bee0
- (_Bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000037be0c
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x000000000037bd24
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000037bc4e
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000037bb82
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000037badc
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000037b9da
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000037b910
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000037b81f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000037b68e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000037b57b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000037b45c
- (void)addRebaseObserver:(id)arg1;	// IMP=0x000000000037b3b5
- (id)computeRevertShadowUpdates;	// IMP=0x000000000037b20e
- (id)shadowUpdates;	// IMP=0x000000000037b1fc
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x000000000037ae95
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;	// IMP=0x000000000037ae8f
- (void)rebaseForUpdates:(id)arg1 notifyRebaseObservers:(_Bool)arg2;	// IMP=0x000000000037aa29
- (_Bool)shouldRebaseForUpdates;	// IMP=0x000000000037a9e1
- (void)reset;	// IMP=0x000000000037a978
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000037a897

@end

