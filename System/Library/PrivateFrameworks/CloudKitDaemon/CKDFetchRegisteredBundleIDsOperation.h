//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation
{
    NSArray *_bundleIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004dbf
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)main;	// IMP=0x000000000000441e
- (int)operationType;	// IMP=0x0000000000004413
- (id)activityCreate;	// IMP=0x00000000000043ea
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000043bb
- (id)_unitTestBundleIDsByContainerID:(id)arg1;	// IMP=0x000000000000432f

// Remaining properties
@property(retain, nonatomic) id <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
