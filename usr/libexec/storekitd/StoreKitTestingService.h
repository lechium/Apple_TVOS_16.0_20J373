//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface StoreKitTestingService : NSObject
{
}

+ (id)defaultService;	// IMP=0x002000000002d37d
- (void)_logExitForMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x0040000000030bd6
- (id)_logAndValidateMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x001000000003082a
- (_Bool)_isAppleSignedApp:(id)arg1;	// IMP=0x0010000000030822
- (_Bool)_connectionHasEntitlement:(id)arg1 entitlementName:(id)arg2;	// IMP=0x00100000000307b9
- (id)_bundleIDForConnection:(id)arg1;	// IMP=0x00100000000307a4
- (void)receiveEventOfType:(long long)arg1 eventData:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000000305fe
- (void)unregisterForEventWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000030214
- (void)registerForEventOfType:(long long)arg1 forBundleID:(id)arg2 withFilterData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fb84
- (void)simulateStoreKitPushWithAction:(id)arg1 forBundleIdentifiers:(id)arg2;	// IMP=0x001000000002f7de
- (void)removeTransactionIdentifiersFromCache:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000002f62a
- (void)updatePort:(long long)arg1;	// IMP=0x001000000002f58f
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000002f3b9
- (void)transactionDeleted:(unsigned long long)arg1 productID:(id)arg2 forBundleID:(id)arg3;	// IMP=0x001000000002f0f6
- (void)revokeEntitlementsForProductIdentifiers:(id)arg1 forBundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ef1b
- (void)refreshQueueForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ed23
- (void)setStorefront:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ec0a
- (void)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002eae8
- (void)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e9d1
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002e8b9
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e7ad
- (void)startObservingTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e5d0
- (void)saveConfigurationData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e4bc
- (void)saveSigningData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e3a8
- (void)removeConfigurationForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e2b7
- (void)performAction:(long long)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002e09c
- (void)invalidateBag;	// IMP=0x001000000002dfc8
- (void)getTransactionDataForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002deb4
- (void)getActivePortWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002dc74
- (void)getStorefrontForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002db34
- (void)forceRenewalOfSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002da19
- (void)expireSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d8fb
- (void)deleteAllTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d7ff
- (void)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d6f3
- (void)clearOverridesForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d5f7
- (void)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d4eb
- (void)buyProductWithID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d3d2

@end

