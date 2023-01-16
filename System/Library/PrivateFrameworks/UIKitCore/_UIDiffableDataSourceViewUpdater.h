//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, UITableView;
@protocol _UICollectionViewUpdateItemApplying, _UIDataSourceSnapshotTranslating;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceViewUpdater : NSObject
{
    _Bool _hasPerformedInitialUpdate;	// 8 = 0x8
    long long _tableViewRowAnimation;	// 16 = 0x10
    long long _sinkKind;	// 24 = 0x18
    id <_UICollectionViewUpdateItemApplying> _updatesSink;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    id <_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002bd715
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasPerformedInitialUpdate; // @synthesize hasPerformedInitialUpdate=_hasPerformedInitialUpdate;
@property(retain, nonatomic) id <_UIDataSourceSnapshotTranslating> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_UICollectionViewUpdateItemApplying> updatesSink; // @synthesize updatesSink=_updatesSink;
@property(nonatomic) long long sinkKind; // @synthesize sinkKind=_sinkKind;
@property(nonatomic) long long tableViewRowAnimation; // @synthesize tableViewRowAnimation=_tableViewRowAnimation;
- (void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2;	// IMP=0x00000000002bd563
- (id)_sectionIndexesToReloadForTableViewCompatibility:(id)arg1;	// IMP=0x00000000002bd4b0
- (void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2;	// IMP=0x00000000002bd3c8
- (void)_performViewUpdates:(id)arg1;	// IMP=0x00000000002bc860
- (id)targetView;	// IMP=0x00000000002bc7fd
- (void)_willPerformDiff:(_Bool)arg1;	// IMP=0x00000000002bc7f7
- (void)_reloadData;	// IMP=0x00000000002bc603
- (void)_deleteAllItems;	// IMP=0x00000000002bc40f
- (_Bool)_doesExpectedUpdate:(id)arg1 matchActualUpdates:(id)arg2 allowingEmptyUpdates:(_Bool)arg3;	// IMP=0x00000000002bc20e
- (void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshot:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 viewPropertyAnimator:(id)arg5 customAnimationsProvider:(CDUnknownBlockType)arg6 animated:(_Bool)arg7;	// IMP=0x00000000002bb52b
- (id)initWithTableView:(id)arg1;	// IMP=0x00000000002bb512
- (id)initWithCollectionView:(id)arg1;	// IMP=0x00000000002bb4af
- (id)initWithCollectionViewUpdatesSink:(id)arg1;	// IMP=0x00000000002bb498
- (id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3;	// IMP=0x00000000002bb334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
