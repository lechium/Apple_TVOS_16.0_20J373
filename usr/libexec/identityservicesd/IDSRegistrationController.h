//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    NSMutableArray *_activeRegistrations;	// 24 = 0x18
    NSMutableArray *_trackedRegistrations;	// 32 = 0x20
    NSMutableSet *_deferredRegisters;	// 40 = 0x28
    int _screenSharingToken;	// 48 = 0x30
    int _iMessageToken;	// 52 = 0x34
    int _faceTimeToken;	// 56 = 0x38
    int _callingToken;	// 60 = 0x3c
    _Bool _displayingAddNumberPrompt;	// 64 = 0x40
    IDSKeychainWrapper *_keychainWrapper;	// 72 = 0x48
    IDSUserStore *_userStore;	// 80 = 0x50
    IDSRateLimiter *_simDeactivationRequestRateLimiter;	// 88 = 0x58
}

+ (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x00200000000958c0
+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000095720
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000094b90
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000094a30
+ (id)sharedInstance;	// IMP=0x0010000000093db0
+ (id)registeredPhoneNumbers;	// IMP=0x00100000000939b0
+ (_Bool)validSIMStateForRegistration;	// IMP=0x00100000000937b0
+ (_Bool)_isPhoneNumberAuthenticationDuringBuddyAllowed;	// IMP=0x00100000000936c0
+ (_Bool)canCompleteRegistration;	// IMP=0x00100000000935c0
+ (_Bool)canStartRegistrationForAccountType:(int)arg1;	// IMP=0x00100000000931c0
+ (_Bool)isBuddyShowing;	// IMP=0x0010000000093130
+ (void)initialize;	// IMP=0x00100000000930d0
- (void).cxx_destruct;	// IMP=0x00200000000a69f0
@property(retain, nonatomic) IDSRateLimiter *simDeactivationRequestRateLimiter; // @synthesize simDeactivationRequestRateLimiter=_simDeactivationRequestRateLimiter;
@property(nonatomic) _Bool displayingAddNumberPrompt; // @synthesize displayingAddNumberPrompt=_displayingAddNumberPrompt;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)SIM:(id)arg1 didDeactivateWithInfo:(id)arg2;	// IMP=0x00100000000a63f0
- (double)simDeactivationInfoRateLimitInterval;	// IMP=0x00100000000a62f0
- (long long)simDeactivationInfoRateLimitCount;	// IMP=0x00100000000a6200
- (void)_alertForHomeNumberIfNeededForSIMIdentifier:(id)arg1 withPhoneNumber:(id)arg2;	// IMP=0x00100000000a5860
- (void)_notifyHomeNumberSuccessForUser:(id)arg1;	// IMP=0x00100000000a5790
- (id)_phoneUserWithCredentials;	// IMP=0x00100000000a5440
- (id)_provisionedTemporaryUser;	// IMP=0x00100000000a5110
- (_Bool)_pnrOngoing;	// IMP=0x00100000000a4e80
- (void)_postHomeNumberNotificationBeforeAlertForIdentifier:(id)arg1 forcefully:(_Bool)arg2;	// IMP=0x00100000000a4a10
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000000a4610
- (void)_systemConfigurationPrefsChanged;	// IMP=0x00100000000a3eb0
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(int)arg1;	// IMP=0x00100000000a3c30
- (id)activeRegistrationsMatchingUserID:(id)arg1;	// IMP=0x00100000000a39b0
- (void)stopTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a3800
- (void)startTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000a3590
- (void)stopTrackingRegistration:(id)arg1;	// IMP=0x00100000000a33a0
- (void)startTrackingRegistration:(id)arg1;	// IMP=0x00100000000a30e0
- (void)_updateNotifyState;	// IMP=0x00100000000a2a50
- (void)removeListener:(id)arg1;	// IMP=0x00100000000a29c0
- (void)addListener:(id)arg1;	// IMP=0x00100000000a2900
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;	// IMP=0x00100000000a26d0
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a2100
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x00100000000a1d90
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x00100000000a1b30
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;	// IMP=0x00100000000a18c0
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;	// IMP=0x00100000000a1550
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;	// IMP=0x00100000000a0f60
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x00100000000a0e50
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x00100000000a0af0
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;	// IMP=0x00100000000a02f0
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000009eab0
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;	// IMP=0x001000000009e6f0
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x001000000009e600
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x001000000009e3d0
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x001000000009e080
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;	// IMP=0x001000000009df90
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000009dde0
- (void)center:(id)arg1 succeededRegistration:(id)arg2;	// IMP=0x001000000009d630
- (void)_captureDiagnosticsForFailedRegistration:(id)arg1 registrationError:(long long)arg2;	// IMP=0x001000000009d240
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;	// IMP=0x001000000009d1b0
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2 registrationError:(long long)arg3;	// IMP=0x001000000009cf30
- (void)_notifyDeregistrationStarting:(id)arg1;	// IMP=0x001000000009cb80
- (void)_notifyAllRegistrationSuccess:(id)arg1;	// IMP=0x001000000009c500
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000009be10
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;	// IMP=0x001000000009b5d0
- (void)_notifyRegistrationStarting:(id)arg1;	// IMP=0x001000000009b110
- (void)_notifyRegistrationUpdated:(id)arg1;	// IMP=0x001000000009ac50
- (void)_notifyNeedsNewRegistration;	// IMP=0x001000000009a8e0
- (_Bool)_performCorrectServerRequestForTemporaryPhoneRegistration:(id)arg1 sentAuthentication:(_Bool *)arg2 sentIDSAction:(_Bool *)arg3;	// IMP=0x0010000000099f80
- (_Bool)_performCorrectServerRequestForDeviceIDRegistration:(id)arg1;	// IMP=0x0010000000099c20
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000099b40
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 messageServerTimestamp:(id)arg4 toURI:(id)arg5 registration:(id)arg6;	// IMP=0x00100000000999e0
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000099900
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x00100000000997f0
- (_Bool)unregisterInfo:(id)arg1;	// IMP=0x0010000000099510
- (_Bool)registerInfo:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000095c40
- (_Bool)registerInfo:(id)arg1;	// IMP=0x0010000000095bd0
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000095b60
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000095ae0
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000095a50
- (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0010000000095a10
- (_Bool)registrationSupportedForRegistration:(id)arg1;	// IMP=0x0010000000094740
- (void)dealloc;	// IMP=0x0010000000094600
- (id)initWithUserStore:(id)arg1;	// IMP=0x0010000000093fe0
- (id)init;	// IMP=0x0010000000093e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

