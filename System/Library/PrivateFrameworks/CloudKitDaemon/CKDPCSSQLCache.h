//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainerID, CKDPCSSQLCacheTable, CKDPCSSQLCacheTableGroup, NSString;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : NSObject
{
    CKContainerID *_containerID;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
    NSString *_encryptionServiceName;	// 24 = 0x18
    CKDPCSSQLCacheTableGroup *_cacheGroup;	// 32 = 0x20
    CKDPCSSQLCacheTable *_table;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_asyncQueue;	// 48 = 0x30
    unsigned long long _cacheRequestCount;	// 56 = 0x38
    unsigned long long _cacheHitCount;	// 64 = 0x40
}

+ (void)evictPCSSQLCachesForKnownContainers;	// IMP=0x00600000002cbfd9
- (void).cxx_destruct;	// IMP=0x00000000002cd3a2
@property unsigned long long cacheHitCount; // @synthesize cacheHitCount=_cacheHitCount;
@property unsigned long long cacheRequestCount; // @synthesize cacheRequestCount=_cacheRequestCount;
- (id)CKStatusReportArray;	// IMP=0x00000000002cd193
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002cd0fd
- (void)clearCache;	// IMP=0x00000000002cd096
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ccedf
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ccd9e
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ccd79
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ccd54
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ccd2f
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002ccbec
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;	// IMP=0x00000000002cc7c5
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cc680
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cc53b
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cc3f6
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3;	// IMP=0x00000000002cc33e
- (_Bool)hasStatusToReport;	// IMP=0x00000000002cc330
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;	// IMP=0x00000000002cc09a

@end
