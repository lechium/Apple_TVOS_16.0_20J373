//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDDecryptRecordsOperation, NSArray, NSObject, NSString;
@protocol CKFetchRecordVersionsOperationCallbacks, OS_dispatch_group;

@interface CKDFetchRecordVersionsOperation
{
    CKDDecryptRecordsOperation *_decryptOperation;	// 8 = 0x8
    _Bool _isDeleted;	// 16 = 0x10
    _Bool _shouldFetchAssetContent;	// 17 = 0x11
    CDUnknownBlockType _recordVersionFetchedBlock;	// 24 = 0x18
    NSArray *_recordIDs;	// 32 = 0x20
    NSArray *_desiredKeys;	// 40 = 0x28
    NSString *_minimumVersionETag;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_fetchVersionsGroup;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002a6558
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup; // @synthesize fetchVersionsGroup=_fetchVersionsGroup;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordVersionFetchedBlock; // @synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock;
- (id)relevantZoneIDs;	// IMP=0x00000000002a6282
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002a60f3
- (void)main;	// IMP=0x00000000002a5c41
- (int)operationType;	// IMP=0x00000000002a5c36
- (void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(_Bool)arg2 versions:(id)arg3 responseCode:(id)arg4;	// IMP=0x00000000002a4f27
- (_Bool)hasDecryptOperation;	// IMP=0x00000000002a4ee6
@property(readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
- (id)activityCreate;	// IMP=0x00000000002a4c6c
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002a4a72

// Remaining properties
@property(retain, nonatomic) id <CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

