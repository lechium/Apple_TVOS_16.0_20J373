//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class ACAccount, AMSBiometricsSignatureRequest, AMSBuyParams, AMSProcessInfo, NSDictionary, NSSet, NSString, NSURLRequest, NSURLResponse;

@protocol AMSSecurityServiceInterface <NSObject>
- (void)handleResponse:(NSURLResponse *)arg1 completion:(void (^)(AMSURLAction *))arg2;
- (void)performSilentEnrollmentWithRequest:(NSURLRequest *)arg1 logKey:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)signChallengeForRequest:(AMSBiometricsSignatureRequest *)arg1 completion:(void (^)(AMSBiometricsSignatureResult *, NSError *))arg2;
- (void)signedHeadersForRequest:(NSURLRequest *)arg1 buyParams:(AMSBuyParams *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)shouldAttemptApplePayWithCountryCode:(NSString *)arg1 paymentNetworks:(NSSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)paymentServicesMerchantURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)performBiometricTokenUpdateWithAccount:(ACAccount *)arg1 clientInfo:(AMSProcessInfo *)arg2 additionalDialogMetrics:(NSDictionary *)arg3 shouldGenerateKeysOnly:(_Bool)arg4 shouldRequestConfirmation:(_Bool)arg5 userInitiated:(_Bool)arg6 completion:(void (^)(_Bool, NSError *))arg7;
- (void)isBiometricsAvailableForAccount:(ACAccount *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)saveIdentityMapWithCompletion:(void (^)(NSError *))arg1;
- (void)isIdentityMapValidWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end
