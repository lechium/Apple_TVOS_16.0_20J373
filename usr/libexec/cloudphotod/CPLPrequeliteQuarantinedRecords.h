//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteQuarantinedRecords
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x002000000006c0b9
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;	// IMP=0x001000000006bfe2
- (unsigned long long)countOfQuarantinedRecords;	// IMP=0x001000000006bf6e
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000006be10
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;	// IMP=0x001000000006bce7
- (_Bool)removeQuarantinedRecordWithScopedIdentifier:(id)arg1 removed:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000006bb29
- (_Bool)addQuarantinedRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006b915
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000006b3ed
- (_Bool)initializeStorage;	// IMP=0x001000000006b366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
