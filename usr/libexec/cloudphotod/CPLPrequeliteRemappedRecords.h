//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteRemappedRecords
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x002000000006b1fe
- (_Bool)isRecordWithScopedIdentifierRemapped:(id)arg1;	// IMP=0x001000000006b0d5
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)arg1;	// IMP=0x001000000006ae7f
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;	// IMP=0x001000000006ad17
- (_Bool)removeRemappedRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006aad5
- (_Bool)addRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006a8fa
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x001000000006a77f
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000006a640
- (_Bool)initializeStorage;	// IMP=0x001000000006a58c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

