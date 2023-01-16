//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RequestStore;
@protocol OS_dispatch_queue;

@interface ApproverStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_approverStoreItems;	// 16 = 0x10
    RequestStore *_requestStore;	// 24 = 0x18
}

+ (id)sharedStore;	// IMP=0x0020000000011639
- (void).cxx_destruct;	// IMP=0x0020000000012c04
@property(readonly, nonatomic) RequestStore *requestStore; // @synthesize requestStore=_requestStore;
@property(readonly, nonatomic) NSMutableDictionary *approverStoreItems; // @synthesize approverStoreItems=_approverStoreItems;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)_loadItemsIntoMemory;	// IMP=0x001000000001287e
- (void)_saveChanges;	// IMP=0x001000000001264f
- (id)_approvalRequestWithStoreItem:(id)arg1;	// IMP=0x001000000001240b
- (void)storeApprovalRequest:(id)arg1;	// IMP=0x0010000000012167
- (id)getCachedApprovalRequests;	// IMP=0x0010000000012098
- (id)approvalRequestWithRequestIdentifier:(id)arg1;	// IMP=0x0010000000011d9a
- (id)approvalRequestIdentifierWithItemIdentifier:(id)arg1;	// IMP=0x0010000000011b49
- (void)removeApprovalRequestWithIdentifier:(id)arg1;	// IMP=0x001000000001193d
- (_Bool)containsApprovalRequestWithIdentifier:(id)arg1;	// IMP=0x001000000001187a
- (void)clearRequests;	// IMP=0x001000000001168e
- (id)init;	// IMP=0x0010000000011522

@end

