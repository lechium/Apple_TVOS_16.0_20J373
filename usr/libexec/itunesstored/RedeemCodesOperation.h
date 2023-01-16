//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, ISDialogButton, NSArray, NSDictionary, NSString, SSAuthenticationContext, SSRedeemCodesResponse;

@interface RedeemCodesOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    ISBiometricStore *_biometricStore;	// 104 = 0x68
    _Bool _cameraRecognized;	// 112 = 0x70
    ISDialogButton *_dialogButton;	// 120 = 0x78
    _Bool _headless;	// 128 = 0x80
    NSDictionary *_installedExternalVersionByiTunesIdentifier;	// 136 = 0x88
    NSArray *_redeemCodes;	// 144 = 0x90
    NSDictionary *_redeemMetadataByCode;	// 152 = 0x98
    SSRedeemCodesResponse *_redeemResponse;	// 160 = 0xa0
    NSString *_userAgent;	// 168 = 0xa8
    NSString *_logCorrelationKey;	// 176 = 0xb0
    NSDictionary *_params;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000018cc15
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *logCorrelationKey; // @synthesize logCorrelationKey=_logCorrelationKey;
@property _Bool cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;
@property _Bool headless; // @synthesize headless=_headless;
- (void)_postNotificationWithResponse:(id)arg1;	// IMP=0x001000000018c77e
- (_Bool)_useLegacyRedeem;	// IMP=0x001000000018c474
- (id)_installedExternalVersionForRedeemCodeMetadata:(id)arg1;	// IMP=0x001000000018c3a8
- (_Bool)_fetchRedeemCodeMetadataWithError:(id *)arg1;	// IMP=0x001000000018aed5
- (_Bool)_didUserCancelWithError:(id)arg1;	// IMP=0x001000000018aeb9
- (_Bool)_canPerformExtendedBiometricActions;	// IMP=0x001000000018ae3d
- (id)_newURLRequestPropertiesForServiceActionButton:(id)arg1;	// IMP=0x001000000018ac3b
- (id)_newURLRequestPropertiesForCode:(id)arg1;	// IMP=0x001000000018a991
- (_Bool)_processDictionary:(id)arg1 dialog:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000018a77a
- (void)_runNonHeadless;	// IMP=0x0010000000188ebd
- (void)_runHeadless;	// IMP=0x0010000000187f3f
- (id)_authenticateAppleAccount:(id)arg1 withTitle:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000187515
- (void)operation:(id)arg1 selectedButton:(id)arg2;	// IMP=0x0010000000187501
- (void)run;	// IMP=0x00100000001874d6
@property(copy) NSString *userAgent;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSRedeemCodesResponse *redeemResponse;
@property(readonly) NSArray *redeemCodes;
- (id)initWithRedeemCodes:(id)arg1;	// IMP=0x0010000000187216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

