//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZone, CUTUnsafePromise, IDSCloudKitKeyTransparencyDeviceRecord, IDSServerBag;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyTransparencyStore : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _cachedManateeAvailability;	// 24 = 0x18
    IDSServerBag *_serverBag;	// 32 = 0x20
    CKRecordZone *_cachedRecordZone;	// 40 = 0x28
    IDSCloudKitKeyTransparencyDeviceRecord *_lastSuccessfulUpsertDeviceRecord;	// 48 = 0x30
    CUTUnsafePromise *_currentDeviceRecordsPromise;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001bee80
@property(retain, nonatomic) CUTUnsafePromise *currentDeviceRecordsPromise; // @synthesize currentDeviceRecordsPromise=_currentDeviceRecordsPromise;
@property(retain, nonatomic) IDSCloudKitKeyTransparencyDeviceRecord *lastSuccessfulUpsertDeviceRecord; // @synthesize lastSuccessfulUpsertDeviceRecord=_lastSuccessfulUpsertDeviceRecord;
@property(retain, nonatomic) CKRecordZone *cachedRecordZone; // @synthesize cachedRecordZone=_cachedRecordZone;
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool cachedManateeAvailability; // @synthesize cachedManateeAvailability=_cachedManateeAvailability;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)_no_timeout_no_cache_fetchKeyTransparencyDeviceRecords;	// IMP=0x00100000001bd000
- (void)_no_timeout_fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bc540
- (void)fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bb8b0
- (void)_no_timeout_nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bad90
- (void)nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba2a0
- (void)deleteKeyTransparencyDeviceRecordsForPushToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ba1a0
- (void)_no_timeout_upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b8660
- (void)upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b7950
- (void)_no_timeout_verifyEncryptionPrerequisitesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b7430
- (void)fetchAccountEligibilityForDeviceToDeviceEncryptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b66a0
- (void)fetchShouldReregisterForManateeAvailability:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6230
- (void)setupContainerCache;	// IMP=0x00100000001b6070
- (void)_createZoneIfNeededUsingTimeIntervalForRequest:(double)arg1 isNonDiscretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b4b50
- (void)_copyDeviceRecord:(id)arg1 toCloudKitRecordRef:(id *)arg2;	// IMP=0x00100000001b4a00
- (id)_cloudKitRecordForDeviceRecord:(id)arg1;	// IMP=0x00100000001b4720
- (id)_deviceRecordForCloudKitRecord:(id)arg1;	// IMP=0x00100000001b4440
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00100000001b42e0
- (id)_recordIDForDeviceRecord:(id)arg1;	// IMP=0x00100000001b4200
- (id)_recordType;	// IMP=0x00100000001b41e0
- (id)_zoneID;	// IMP=0x00100000001b4160
- (id)database;	// IMP=0x00100000001b40f0
- (id)initWithContainer:(id)arg1 serverBag:(id)arg2 queue:(id)arg3;	// IMP=0x00100000001b3fb0
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001b3ea0

@end

