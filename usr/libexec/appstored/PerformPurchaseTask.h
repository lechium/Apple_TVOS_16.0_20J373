//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSPurchaseQueue, NSArray, NSMutableDictionary, NSString, PurchaseBatch;

@interface PerformPurchaseTask
{
    PurchaseBatch *_purchaseBatch;	// 8 = 0x8
    AMSPurchaseQueue *_purchaseQueue;	// 16 = 0x10
    NSMutableDictionary *_presenters;	// 24 = 0x18
    NSMutableDictionary *_purchasing;	// 32 = 0x20
    NSArray *_responses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000010dace
- (void)main;	// IMP=0x001000000010be8a
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000010b7c4
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000010ae88
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000010a83a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

