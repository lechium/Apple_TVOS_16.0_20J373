//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKDFetchUserQuotaOperation
{
    unsigned long long _quotaAvailable;	// 8 = 0x8
}

@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (void)main;	// IMP=0x00000000000e306a
- (int)operationType;	// IMP=0x00000000000e305f
- (id)activityCreate;	// IMP=0x00000000000e3036
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000e3007

// Remaining properties
@property(retain, nonatomic) id <CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

