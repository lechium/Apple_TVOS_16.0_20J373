//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol CKModifyRecordAccessOperationCallbacks;

@interface CKDModifyRecordAccessOperation
{
    int _numSaveAttempts;	// 8 = 0x8
    CDUnknownBlockType _accessWasGrantedBlock;	// 16 = 0x10
    CDUnknownBlockType _accessWasRevokedBlock;	// 24 = 0x18
    NSArray *_recordIDsToGrant;	// 32 = 0x20
    NSArray *_recordIDsToRevoke;	// 40 = 0x28
    NSMutableSet *_fetchedRecordIDs;	// 48 = 0x30
    NSMutableDictionary *_recordsToSaveByID;	// 56 = 0x38
}

+ (long long)isPredominatelyDownload;	// IMP=0x00600000000c1149
- (void).cxx_destruct;	// IMP=0x00000000000c151a
@property(nonatomic) int numSaveAttempts; // @synthesize numSaveAttempts=_numSaveAttempts;
@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableSet *fetchedRecordIDs; // @synthesize fetchedRecordIDs=_fetchedRecordIDs;
@property(retain, nonatomic) NSArray *recordIDsToRevoke; // @synthesize recordIDsToRevoke=_recordIDsToRevoke;
@property(retain, nonatomic) NSArray *recordIDsToGrant; // @synthesize recordIDsToGrant=_recordIDsToGrant;
@property(copy, nonatomic) CDUnknownBlockType accessWasRevokedBlock; // @synthesize accessWasRevokedBlock=_accessWasRevokedBlock;
@property(copy, nonatomic) CDUnknownBlockType accessWasGrantedBlock; // @synthesize accessWasGrantedBlock=_accessWasGrantedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000c13a5
- (void)main;	// IMP=0x00000000000c1151
- (void)_fetchRecords;	// IMP=0x00000000000c092c
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;	// IMP=0x00000000000bf794
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bf346
- (void)_saveRecords;	// IMP=0x00000000000be8e4
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;	// IMP=0x00000000000be283
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000000be221
- (_Bool)makeStateTransition;	// IMP=0x00000000000be08d
- (id)activityCreate;	// IMP=0x00000000000be064
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000bdf62

// Remaining properties
@property(retain, nonatomic) id <CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

