//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDModifyRecordsOperation, CKDPCSCache, CKDPCSManager, CKDProgressTracker, CKDRecordPCSData, CKDSharePCSData, CKDZonePCSData, CKRecord, CKRecordID, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface CKDModifyRecordHandler : NSObject
{
    _Bool _isDelete;	// 8 = 0x8
    _Bool _saveCompletionBlockCalled;	// 9 = 0x9
    _Bool _needsRefetch;	// 10 = 0xa
    _Bool _didAttemptZoneWideShareKeyRoll;	// 11 = 0xb
    _Bool _didRollRecordPCSMasterKey;	// 12 = 0xc
    int _saveAttempts;	// 16 = 0x10
    CKDModifyRecordsOperation *_operation;	// 24 = 0x18
    CKRecord *_record;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_pcsGroup;	// 40 = 0x28
    CKDRecordPCSData *_recordPCSData;	// 48 = 0x30
    CKDSharePCSData *_sharePCSData;	// 56 = 0x38
    CKRecord *_serverRecord;	// 64 = 0x40
    NSString *_etag;	// 72 = 0x48
    unsigned long long _state;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
    NSMutableDictionary *_rereferencedAssetArrayByFieldname;	// 96 = 0x60
    CKDProgressTracker *_progressTracker;	// 104 = 0x68
    long long _batchRank;	// 112 = 0x70
    CKDZonePCSData *_sharedZonePCSData;	// 120 = 0x78
    NSDictionary *_assetUUIDToExpectedProperties;	// 128 = 0x80
    CKRecordID *_recordID;	// 136 = 0x88
}

+ (id)_stringForState:(unsigned long long)arg1;	// IMP=0x00600000001b11c8
+ (id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001b0f89
+ (id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001b0f13
- (void).cxx_destruct;	// IMP=0x00000000001c5859
@property(nonatomic) _Bool didRollRecordPCSMasterKey; // @synthesize didRollRecordPCSMasterKey=_didRollRecordPCSMasterKey;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(nonatomic) _Bool didAttemptZoneWideShareKeyRoll; // @synthesize didAttemptZoneWideShareKeyRoll=_didAttemptZoneWideShareKeyRoll;
@property(retain, nonatomic) CKDZonePCSData *sharedZonePCSData; // @synthesize sharedZonePCSData=_sharedZonePCSData;
@property(nonatomic) _Bool needsRefetch; // @synthesize needsRefetch=_needsRefetch;
@property(nonatomic) _Bool saveCompletionBlockCalled; // @synthesize saveCompletionBlockCalled=_saveCompletionBlockCalled;
@property(nonatomic) int saveAttempts; // @synthesize saveAttempts=_saveAttempts;
@property(nonatomic) long long batchRank; // @synthesize batchRank=_batchRank;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname; // @synthesize rereferencedAssetArrayByFieldname=_rereferencedAssetArrayByFieldname;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData; // @synthesize recordPCSData=_recordPCSData;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup; // @synthesize pcsGroup=_pcsGroup;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(nonatomic) __weak CKDModifyRecordsOperation *operation; // @synthesize operation=_operation;
- (void)_clearRecordProtectionDataForRecord;	// IMP=0x00000000001c47fd
- (void)clearProtectionDataForRecord;	// IMP=0x00000000001c47eb
- (void)savePCSDataToCache;	// IMP=0x00000000001c409f
- (_Bool)_wrapEncryptedDataOnRecord:(id)arg1;	// IMP=0x00000000001c3b8d
- (_Bool)_encryptMergeableDeltasInRecordValueStore:(id)arg1 shareProtection:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c31ff
- (_Bool)_wrapEncryptedDataForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c2d2c
- (void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg1;	// IMP=0x00000000001c28df
- (_Bool)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3 recordID:(id)arg4;	// IMP=0x00000000001c2452
- (void)prepareForSave;	// IMP=0x00000000001c1fcf
- (void)prepareStreamingAsset:(id)arg1 forUploadWithRecord:(id)arg2;	// IMP=0x00000000001c1c1a
- (_Bool)_prepareAsset:(id)arg1 recordKey:(id)arg2 mergeableDeltaID:(id)arg3 record:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001c0c13
- (id)prepareAssetsForUploadWithError:(id *)arg1;	// IMP=0x00000000001bee97
- (id)assetsWhichNeedRecordFetch;	// IMP=0x00000000001be84b
- (void)fetchSharePCSData;	// IMP=0x00000000001be78e
- (void)_handlePCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001bc550
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1;	// IMP=0x00000000001bbb21
- (void)_unwrapRecordPCSForParent;	// IMP=0x00000000001bb372
- (void)_unwrapRecordPCSWithShareID:(id)arg1;	// IMP=0x00000000001bac3c
- (void)_unwrapRecordPCSForZone;	// IMP=0x00000000001ba3cb
- (void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2;	// IMP=0x00000000001b95e0
- (_Bool)_useZoneishPCS;	// IMP=0x00000000001b9498
- (void)_createAndSavePCS;	// IMP=0x00000000001b8629
- (id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2;	// IMP=0x00000000001b7e82
- (void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b67b6
- (void)_reallyAddShareToPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b56a6
- (void)_keyRollIfNeededForRecordPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b5084
- (void)_addShareToPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b5072
- (void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b4a1f
- (void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b451f
- (void)_fetchPCSData;	// IMP=0x00000000001b423f
- (void)_reallyFetchPCSDataWithOptions:(unsigned long long)arg1;	// IMP=0x00000000001b394a
- (void)_loadPCSData;	// IMP=0x00000000001b344e
- (_Bool)_createPublicSharingKeyWithError:(id *)arg1;	// IMP=0x00000000001b2e2e
- (_Bool)_canSetPreviousProtectionEtag;	// IMP=0x00000000001b2dea
- (void)_setSigningPCSIdentity:(id)arg1;	// IMP=0x00000000001b269c
- (void)_fetchSigningPCSForRecordToDelete;	// IMP=0x00000000001b1be1
- (void)fetchRecordPCSData;	// IMP=0x00000000001b16a1
- (_Bool)_needsSigningPCS;	// IMP=0x00000000001b15f1
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x00000000001b14ee
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x00000000001b14e8
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x00000000001b14e2
- (id)sideEffectRecordIDs;	// IMP=0x00000000001b1353
- (id)description;	// IMP=0x00000000001b11e7
@property(readonly, nonatomic) CKDPCSCache *pcsCache;
@property(readonly, nonatomic) CKDPCSManager *pcsManager;
@property(readonly, nonatomic) _Bool isShare;
- (id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2;	// IMP=0x00000000001b0e8c
- (id)_initWithRecord:(id)arg1 operation:(id)arg2;	// IMP=0x00000000001b0e21
- (id)_initCommonWithOperation:(id)arg1;	// IMP=0x00000000001b0da6

@end
