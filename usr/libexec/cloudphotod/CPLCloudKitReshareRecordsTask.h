//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitZoneIdentification, CPLEngineScope, CPLRecordChange, CPLScopedIdentifier, MISSING_TYPE, NSDate, NSDictionary, NSString;
@protocol CPLCKRecordPropertyMapping, CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitReshareRecordsTask
{
    CPLCloudKitZoneIdentification *_sourceIdentification;	// 8 = 0x8
    CPLCloudKitZoneIdentification *_destinationIdentification;	// 16 = 0x10
    NSDate *_recordModificationDate;	// 24 = 0x18
    CPLScopedIdentifier *_currentSourceScopedIdentifier;	// 32 = 0x20
    CPLRecordChange *_currentSharedRecord;	// 40 = 0x28
    NSString *_sourceRelatedRecordName;	// 48 = 0x30
    id <CPLCKRecordPropertyMapping> _mapping;	// 56 = 0x38
    MISSING_TYPE *_rejectedMapping;	// 64 = 0x40
    NSDictionary *_records;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
    CPLEngineScope *_sourceScope;	// 88 = 0x58
    CPLEngineScope *_destinationScope;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000d933a
@property(readonly, nonatomic) CPLEngineScope *destinationScope; // @synthesize destinationScope=_destinationScope;
@property(readonly, nonatomic) CPLEngineScope *sourceScope; // @synthesize sourceScope=_sourceScope;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSDictionary *records; // @synthesize records=_records;
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d9172
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d90cd
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000d9020
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000d89bb
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000d87da
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000d87d2
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000d86dd
- (void)runOperations;	// IMP=0x00100000000d7f39
- (void)_deleteSourceRecordIDs:(id)arg1;	// IMP=0x00100000000d79f2
- (id)initWithController:(id)arg1 records:(id)arg2 sourceScope:(id)arg3 destinationScope:(id)arg4 transportScopeMapping:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000d78b4

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

