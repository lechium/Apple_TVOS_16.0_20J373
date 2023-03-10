//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe
{
    CPLPrequeliteVariable *_pullGenerationVar;	// 8 = 0x8
    CPLPrequeliteVariable *_pushGenerationVar;	// 16 = 0x10
    NSString *_countSqlCommand;	// 24 = 0x18
    NSString *_logDomain;	// 32 = 0x20
    unsigned long long _lastPullMarkerForCompact;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005b06a
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000005af5f
- (id)statusPerScopeIndex;	// IMP=0x001000000005ad9c
- (id)status;	// IMP=0x001000000005ac47
- (void)writeTransactionDidFail;	// IMP=0x001000000005ac07
- (id)allChangeBatches;	// IMP=0x001000000005a866
- (_Bool)compactChangeBatchesWithError:(id *)arg1;	// IMP=0x001000000005a713
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a4cf
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;	// IMP=0x001000000005a369
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;	// IMP=0x001000000005a185
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;	// IMP=0x001000000005a048
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000059efa
- (_Bool)popNextBatchWithError:(id *)arg1;	// IMP=0x0010000000059d3c
- (id)nextBatch;	// IMP=0x00100000000596dd
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;	// IMP=0x0010000000058fc8
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000589fd
- (_Bool)hasQueuedBatches;	// IMP=0x00100000000589e4
- (unsigned long long)countOfQueuedBatches;	// IMP=0x0010000000058814
- (_Bool)_setPushMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000587aa
- (unsigned long long)_pushMarker;	// IMP=0x001000000005875b
- (_Bool)_setPullMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000586f1
- (unsigned long long)_pullMarker;	// IMP=0x00100000000586a2
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000058417
- (_Bool)initializeStorage;	// IMP=0x00100000000582c9
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000581c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

