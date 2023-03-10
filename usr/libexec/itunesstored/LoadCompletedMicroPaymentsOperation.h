//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, StoreKitClientIdentity;

@interface LoadCompletedMicroPaymentsOperation : ISOperation
{
    NSString *_applicationUsername;	// 96 = 0x60
    StoreKitClientIdentity *_clientIdentity;	// 104 = 0x68
    _Bool _partialFailure;	// 112 = 0x70
    CDUnknownBlockType _paymentBatchBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000064380
- (void)_runForIdentity:(id)arg1;	// IMP=0x00100000000638bd
- (id)_newFetchOperationForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3;	// IMP=0x0010000000063336
- (id)_copyResponseForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 returningError:(id *)arg4;	// IMP=0x0010000000063108
- (void)run;	// IMP=0x0010000000062d54
@property(copy) CDUnknownBlockType paymentBatchBlock;
@property(copy) StoreKitClientIdentity *clientIdentity;
@property(copy) NSString *applicationUsername;
@property(readonly, getter=isPartialFailure) _Bool partialFailure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

