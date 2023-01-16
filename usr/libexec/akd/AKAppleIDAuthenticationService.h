//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, AKFidoDaemonServerHandler, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy;

@interface AKAppleIDAuthenticationService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
    AKAuthenticationTrafficController *_authTrafficController;	// 32 = 0x20
    AKAuthenticationUILiaison *_authUILiaison;	// 40 = 0x28
    CUTReachability *_reachability;	// 48 = 0x30
    AKFidoDaemonServerHandler *_fidoHandler;	// 56 = 0x38
}

+ (id)_verificationQueue;	// IMP=0x00200000000361eb
- (void).cxx_destruct;	// IMP=0x00200000000543ce
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000542fa
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054256
- (id)_errorFromServerResponseParameters:(id)arg1 authenticationError:(long long)arg2;	// IMP=0x0010000000054067
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;	// IMP=0x0010000000053e92
- (_Bool)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000052a8b
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000529fd
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005231b
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005203c
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051d12
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051c2a
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051b42
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000051a60
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005153f
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051085
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050df7
- (void)_handleCreateNewAppleIDError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050caf
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050588
- (void)_repairAppleIDWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ffe4
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000004fe82
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fa2e
- (void)_handleRecoverCredentialsError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f8ee
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f1e5
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f139
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f08d
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004eff6
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004dea0
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d9c8
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d65c
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;	// IMP=0x001000000004d643
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d5a9
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d51a
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d502
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004cf3a
- (void)clearSessionCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ce75
- (void)_handleGrandslamResponse:(id)arg1 data:(id)arg2 error:(id)arg3 serverResponse:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000004ccbb
- (void)_performGrandslamEndpointActionWithContext:(id)arg1 serverResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c984
- (void)_attemptPasswordlessAuthAfterBiometricOrPasscodeValidationWithContext:(id)arg1 promptType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c503
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c345
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004c209
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000004bd64
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004bd39
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b577
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;	// IMP=0x001000000004b55b
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 withNewTokens:(id)arg2;	// IMP=0x001000000004af65
- (_Bool)_persistGrandSlamServiceTokensHelper:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 appleIDAuthAccount:(id)arg5 error:(id *)arg6;	// IMP=0x001000000004a8f2
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 forContext:(id)arg5 error:(id *)arg6;	// IMP=0x001000000004a687
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004a3b9
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000049b00
- (id)_authKitAccountFromContext:(id)arg1;	// IMP=0x0010000000049888
- (void)_handleSuccessfulVerificationForContext:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000049486
- (void)_shouldContinueAuthenticatingForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000047f1e
- (void)_handleVerificationCompletionForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000047d49
- (void)_performSafeSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047b6e
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047968
- (id)_srpAuthContextHelperWithContext:(id)arg1;	// IMP=0x00100000000478bb
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046ea9
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046e8f
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000046693
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000046495
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000462ad
- (void)_titleAndMessageForError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045567
- (_Bool);	// IMP=0x001000000004533a
- (void)_showAlertForVerificationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045177
- (void)_handleVerificationError:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044fe2
- (void)_handleMissingUsernameOrPasswordForContext:(id)arg1 password:(id)arg2 username:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000044ba3
- (void)_keepLoginAliveWithContext:(id)arg1 error:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044aa6
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000436e6
- (void)_refreshAuthModeForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000435dc
- (void)_refreshAuthModeIfNecessaryForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004326f
- (void)_refreshLocalAccountAndUpdateContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042b18
- (void)_updateAltDSIDAndUsername:(id)arg1;	// IMP=0x001000000004253a
- (void)_correlateContext:(id)arg1 withAuthMode:(unsigned long long)arg2;	// IMP=0x00100000000424ca
- (void)_performInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042105
- (void)refreshAuthMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041e56
- (void)_attemptInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041970
- (id)_accountForContinuationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004155a
- (void)_showContinueUsingUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040fb1
- (void)_accountForContinuationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040e70
- (void)_attemptPasswordlessAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040955
- (void)_attemptPasswordlessAuthOptionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000403f9
- (void)_showBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040067
- (void)_attemptBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ff98
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;	// IMP=0x001000000003fcf1
- (void)_handlePasswordlessAuthResults:(id)arg1 context:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003f9ce
- (void)_performAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f5bb
- (void)_upgradeSecurityLevelWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f127
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f022
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e7f3
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003e23e
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003df89
- (void)performCheckInForAccountWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dc97
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d8a4
- (oneway void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d6c8
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003c625
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000003b8e7
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b2e0
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b1d3
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a046
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039f96
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039f02
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039d30
- (void)activeLoginCode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039bd5
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039b51
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038e15
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000382ec
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003819b
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003808b
- (void)deleteAuthorizationDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037f4e
- (void)fetchAppListWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037e36
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037a8a
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000377bf
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037679
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000374a8
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000372d7
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000036af3
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000036892
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000036631
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036598
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000364c7
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003643d
- (void)accountNamesForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003626c
- (id)init;	// IMP=0x001000000003607b
- (id)initWithProxy:(id)arg1;	// IMP=0x0010000000036021
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000035fad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
