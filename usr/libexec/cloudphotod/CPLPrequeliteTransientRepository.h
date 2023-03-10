//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CPLPrequeliteTransientRepository
{
    NSSet *_ignoredIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000054e91
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000054d86
- (id)status;	// IMP=0x0010000000054ce9
@property(readonly, nonatomic) unsigned long long countOfUnmingledRecords;
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054a16
- (_Bool)hasUnmingledRecordsWithScopeFilter:(id)arg1;	// IMP=0x001000000005491d
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000546cb
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054588
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000054418
- (_Bool)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005433e
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x0010000000054261
- (_Bool)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005405d
- (id)allUnmingledChangesWithScopeIdentifier:(id)arg1;	// IMP=0x0010000000053fff
- (id)allUnmingledChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x0010000000053d2f
- (id)allUnmingledDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x0010000000053cc4
- (id)allUnmingledNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x0010000000053c59
- (id)allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x0010000000053c40
- (id)_allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000000539da
- (id)unmingledChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000053765
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 scope:(id)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000533e8
- (id)nextBatchOfRemappedRecordsInScope:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0010000000053170
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;	// IMP=0x0010000000052fd0
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000052e88
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000052cf7
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4;	// IMP=0x0010000000052aa5
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x0010000000052891
- (id)_enumeratorForRecordsWithScopeIndex:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0010000000052697
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000522b8
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005213d
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000051911
- (_Bool)hasUnmingledChangesForScope:(id)arg1;	// IMP=0x0010000000051827
@property(readonly, nonatomic) _Bool hasUnmingledChanges;
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000051505
- (_Bool)initializeStorage;	// IMP=0x00100000000513d3
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000051298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

