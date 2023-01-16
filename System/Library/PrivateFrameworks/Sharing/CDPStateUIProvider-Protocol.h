//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/CDPRecoveryKeyUIProvider-Protocol.h>

@class CDPContext, CDPLocalDeviceSecretHandler, CDPRecoveryFlowContext, CDPRemoteDeviceSecretValidator, NSArray, NSError, NSNumber;

@protocol CDPStateUIProvider <CDPRecoveryKeyUIProvider>
- (void)cdpContext:(CDPContext *)arg1 promptForBeneficiaryAccessKeyWithCompletion:(void (^)(AKInheritanceAccessKey *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForInteractiveAuthenticationWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(_Bool, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(NSNumber *)arg3 isRandom:(_Bool)arg4 validator:(CDPRemoteDeviceSecretValidator *)arg5;
- (void)cdpRecoveryFlowContext:(CDPRecoveryFlowContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 validator:(CDPRemoteDeviceSecretValidator *)arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(CDPRemoteDeviceSecretValidator *)arg4;

@optional
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountLockOutWithCompletion:(void (^)(void))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountUnlockWithCompletion:(void (^)(void))arg2;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withDefaultIndex:(long long)arg3 withCompletion:(void (^)(long long))arg4;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)cdpContext:(CDPContext *)arg1 beginRemoteApprovalWithValidator:(CDPRemoteDeviceSecretValidator *)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(CDPLocalDeviceSecretHandler *)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithCompletion:(void (^)(CDPLocalSecret *, NSError *))arg2;
@end

