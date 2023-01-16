//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDiffableDataSourceSnapshot, NSMapTable, _UIDiffableDataSourceDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject
{
    NSDiffableDataSourceSnapshot *_initialSnapshot;	// 8 = 0x8
    NSDiffableDataSourceSnapshot *_finalSnapshot;	// 16 = 0x10
    _UIDiffableDataSourceDiffer *_dataSourceDiffer;	// 24 = 0x18
    NSMapTable *_initialSectionSnapshots;	// 32 = 0x20
    NSMapTable *_rebasedSectionSnapshots;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014b37
@property(readonly, nonatomic) NSMapTable *rebasedSectionSnapshots; // @synthesize rebasedSectionSnapshots=_rebasedSectionSnapshots;
- (id)_computeSectionTransactionsIncludingSectionDifferences:(_Bool)arg1;	// IMP=0x00000000000146e6
- (id)_transactionIncludingSectionDifferences:(_Bool)arg1 source:(long long)arg2;	// IMP=0x0000000000014481
- (id)computeApplyTransactionIncludingSectionDifferences:(_Bool)arg1;	// IMP=0x000000000001446d
- (id)computeReorderingTransaction;	// IMP=0x0000000000014451
- (void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;	// IMP=0x000000000001264d
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;	// IMP=0x0000000000012537
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4;	// IMP=0x0000000000012515
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3;	// IMP=0x00000000000124f0

@end

