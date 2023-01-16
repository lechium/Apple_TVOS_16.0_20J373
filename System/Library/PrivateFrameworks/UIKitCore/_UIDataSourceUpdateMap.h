//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;	// 8 = 0x8
    _UIDataSourceSnapshotter *_finalSnapshot;	// 16 = 0x10
    NSArray *_originalUpdateItems;	// 24 = 0x18
    NSArray *_updateItems;	// 32 = 0x20
    NSArray *_reverseUpdateItems;	// 40 = 0x28
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;	// 48 = 0x30
}

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;	// IMP=0x006000000038549e
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;	// IMP=0x0060000000385430
- (void).cxx_destruct;	// IMP=0x000000000038a29e
@property(retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // @synthesize batchUpdateMapHelper=_batchUpdateMapHelper;
@property(retain, nonatomic) NSArray *reverseUpdateItems; // @synthesize reverseUpdateItems=_reverseUpdateItems;
@property(retain, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
@property(copy, nonatomic) NSArray *originalUpdateItems; // @synthesize originalUpdateItems=_originalUpdateItems;
@property(retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (id)updates;	// IMP=0x000000000038a1ec
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;	// IMP=0x0000000000389ff8
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000389da5
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x00000000003898de
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;	// IMP=0x00000000003893ca
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;	// IMP=0x00000000003890d8
- (id)_rebasedUpdatesForUpdate:(id)arg1;	// IMP=0x0000000000388b84
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;	// IMP=0x000000000038867e
- (id)submapAfterUpdate:(id)arg1;	// IMP=0x00000000003882e9
- (id)submapBeforeUpdate:(id)arg1;	// IMP=0x00000000003880aa
- (id)_findUpdateForIdentifier:(id)arg1;	// IMP=0x0000000000387eba
- (void)_performAppendingInsertsFixups;	// IMP=0x0000000000387c13
- (_Bool)_mapIsSimpleInsertMoveSequence;	// IMP=0x0000000000387aa9
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;	// IMP=0x0000000000387a4e
- (id)_sectionIndexPathForSection:(long long)arg1;	// IMP=0x0000000000387a28
- (id)description;	// IMP=0x0000000000387936
- (id)initialUpdateForFinalUpdate:(id)arg1;	// IMP=0x00000000003877cc
- (id)finalUpdateForInitialUpdate:(id)arg1;	// IMP=0x0000000000387537
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;	// IMP=0x000000000038734c
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;	// IMP=0x0000000000387288
- (id)initialUpdateForUpdateIdentifier:(id)arg1;	// IMP=0x00000000003870cf
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000000386b81
@property(readonly, nonatomic) _Bool isBatchUpdateMap;
- (id)rebasedMapFromNewBaseMap:(id)arg1;	// IMP=0x000000000038606a
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x0000000000385dc7
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x0000000000385b24
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x0000000000385828
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x000000000038552c
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;	// IMP=0x00000000003852f8

@end
