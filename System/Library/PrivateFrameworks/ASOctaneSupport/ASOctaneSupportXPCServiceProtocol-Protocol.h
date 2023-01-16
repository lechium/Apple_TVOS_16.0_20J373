//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ASOctaneSupport/NSObject-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString, NSUUID;

@protocol ASOctaneSupportXPCServiceProtocol <NSObject>
- (void)unregisterForEventWithIdentifier:(NSUUID *)arg1;
- (void)registerForEventOfType:(long long)arg1 filterData:(NSData *)arg2 withReply:(void (^)(NSUUID *))arg3;
- (void)setStringValue:(NSString *)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSString *))arg3;
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(long long))arg3;
- (void)validateSKAdNetworkSignature:(NSString *)arg1 withPublicKey:(NSString *)arg2 andParameters:(NSDictionary *)arg3 forBundleID:(NSString *)arg4 withReply:(void (^)(NSError *))arg5;
- (void)generateSKANPostbackSignature:(NSDictionary *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)completePriceConsentRequestWithResponse:(_Bool)arg1 transactionIdentifier:(unsigned long long)arg2 forBundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)startPriceIncreaseForTransactionID:(unsigned long long)arg1 bundleID:(NSString *)arg2 needsConsent:(_Bool)arg3 withReply:(void (^)(NSError *))arg4;
- (void)messageOfTypeForBundleID:(NSString *)arg1 messageReason:(NSNumber *)arg2 withReply:(void (^)(NSDictionary *))arg3;
- (void)messageForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)startServingConfiguration:(NSString *)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)setStorefront:(NSString *)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)resolveIssueForTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)refundTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)getTransactionDataForBundleID:(NSString *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)getStorefrontForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)getPortWithReply:(void (^)(long long))arg1;
- (void)deleteAllTransactionsForBundleID:(NSString *)arg1 withRelpy:(void (^)(NSError *))arg2;
- (void)expireOrRenewSubscriptionWithIdentifier:(NSString *)arg1 expire:(_Bool)arg2 forBundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)deleteTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionIdentifier:(unsigned long long)arg2 forBundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)clearOverridesForBundleID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(NSString *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)cancelTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)buyProductWithID:(NSString *)arg1 bundleID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)appRemovedWithBundleID:(NSString *)arg1 withReply:(void (^)(void))arg2;
@end
