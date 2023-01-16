//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class DeviceScorer, ISURLRequestPerformance, NSData, NSDictionary, NSNumber, NSString, PurchaseResponseInfo, SSAuthenticationContext, SSBiometricAuthenticationContext, SSURLConnectionResponse, SSURLRequestProperties, SSVFairPlaySubscriptionController;
@protocol PurchaseOperationDelegate;

@interface PurchaseOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSString *_affiliateIdentifier;	// 104 = 0x68
    _Bool _allowsBootstrapCellularData;	// 112 = 0x70
    SSAuthenticationContext *_authenticationContext;	// 120 = 0x78
    long long _bagType;	// 128 = 0x80
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;	// 136 = 0x88
    NSString *_buyParameters;	// 144 = 0x90
    NSData *_clientAuditTokenData;	// 152 = 0x98
    NSString *_clientIdentifier;	// 160 = 0xa0
    NSString *_clientIdentifierHeader;	// 168 = 0xa8
    DeviceScorer *_deviceScorer;	// 176 = 0xb0
    _Bool _didAuthenticate;	// 184 = 0xb8
    _Bool _displayedErrorDialog;	// 185 = 0xb9
    _Bool _displaysOnLockScreen;	// 186 = 0xba
    NSString *_downloadKind;	// 192 = 0xc0
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;	// 200 = 0xc8
    _Bool _ignoresForcedPasswordRestriction;	// 208 = 0xd0
    _Bool _isBackgroundPurchase;	// 209 = 0xd1
    _Bool _isPlaybackRequest;	// 210 = 0xd2
    NSString *_mToken;	// 216 = 0xd8
    NSNumber *_originalProductOwnerAccountDSID;	// 224 = 0xe0
    _Bool _preauthenticated;	// 232 = 0xe8
    NSDictionary *_rawOutput;	// 240 = 0xf0
    ISURLRequestPerformance *_requestPerformanceMetrics;	// 248 = 0xf8
    SSURLRequestProperties *_requestProperties;	// 256 = 0x100
    _Bool _requiresAuthentication;	// 264 = 0x108
    _Bool _requiresSerialNumber;	// 265 = 0x109
    PurchaseResponseInfo *_responseInfo;	// 272 = 0x110
    _Bool _shouldCancelBiometricTokenUpdate;	// 280 = 0x118
    _Bool _shouldSendKeyBagSyncData;	// 281 = 0x119
    unsigned long long _silentAuthCount;	// 288 = 0x120
    _Bool _skipsConfirmationDialogs;	// 296 = 0x128
    _Bool _suppressDialogs;	// 297 = 0x129
    NSString *_urlBagKey;	// 304 = 0x130
    SSURLConnectionResponse *_urlResponse;	// 312 = 0x138
    _Bool _moveToiOS;	// 320 = 0x140
    _Bool _useRemoteAuthentication;	// 321 = 0x141
    _Bool _microPayment;	// 322 = 0x142
    _Bool _didConsumeScore;	// 323 = 0x143
    NSString *_deviceScore;	// 328 = 0x148
    NSString *_originatingStorefront;	// 336 = 0x150
    NSString *_storeCorrelationID;	// 344 = 0x158
    NSString *_logKey;	// 352 = 0x160
    CDUnknownBlockType _remoteAuthenticationHandler;	// 360 = 0x168
}

+ (double)_randomDouble;	// IMP=0x0020000000023dc8
+ (void)reportAnonymousPings:(id)arg1;	// IMP=0x001000000001766e
- (void).cxx_destruct;	// IMP=0x002000000002497e
@property _Bool didConsumeScore; // @synthesize didConsumeScore=_didConsumeScore;
@property _Bool microPayment; // @synthesize microPayment=_microPayment;
@property(copy) CDUnknownBlockType remoteAuthenticationHandler; // @synthesize remoteAuthenticationHandler=_remoteAuthenticationHandler;
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy, nonatomic) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property _Bool skipsConfirmationDialogs; // @synthesize skipsConfirmationDialogs=_skipsConfirmationDialogs;
@property _Bool shouldSendKeyBagSyncData; // @synthesize shouldSendKeyBagSyncData=_shouldSendKeyBagSyncData;
@property _Bool requiresSerialNumber; // @synthesize requiresSerialNumber=_requiresSerialNumber;
@property _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain) NSDictionary *rawOutput; // @synthesize rawOutput=_rawOutput;
@property(getter=isPreauthenticated) _Bool preauthenticated; // @synthesize preauthenticated=_preauthenticated;
@property(copy) NSString *originatingStorefront; // @synthesize originatingStorefront=_originatingStorefront;
@property _Bool displayedErrorDialog; // @synthesize displayedErrorDialog=_displayedErrorDialog;
@property(retain) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(retain) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property long long bagType; // @synthesize bagType=_bagType;
@property _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
- (id)_URLBagContext;	// IMP=0x0010000000024652
- (_Bool)_shouldUseClientAuthentication;	// IMP=0x0010000000024197
- (_Bool)_shouldSendSBSyncData;	// IMP=0x00100000000240e1
- (_Bool)_shouldSendKeyBagSyncData;	// IMP=0x0010000000023ef1
- (void)_setMoveToiOS;	// IMP=0x0010000000023e02
- (_Bool)_shouldDisableReversePush;	// IMP=0x00100000000239ea
- (void)_setChangedBuyParameters:(id)arg1 fromDataProvider:(id)arg2;	// IMP=0x0010000000023880
- (void)_scoreDeviceRetryFailedV2Score;	// IMP=0x00100000000233f3
- (void)_scoreDevice;	// IMP=0x0010000000022b98
- (void)_runPurchaseRequest;	// IMP=0x0010000000021d40
- (void)_runDialogOperationForDialog:(id)arg1;	// IMP=0x001000000001fbb1
- (id)_recordEngagementEventWithResult:(id)arg1 error:(id)arg2;	// IMP=0x001000000001f1b0
- (long long)_purchaseType;	// IMP=0x001000000001f0e8
- (id)_priceFromBuyParams;	// IMP=0x001000000001efe4
- (void)_performAutoEnrollmentCheck;	// IMP=0x001000000001ee57
- (void)_performApplePayClassicCheck;	// IMP=0x001000000001ecca
- (void)_performMachineDataActionForURLResponse:(id)arg1;	// IMP=0x001000000001e82e
- (void)_performDelayedGotoForOperation:(id)arg1;	// IMP=0x001000000001e698
- (id)_newRequestParameters;	// IMP=0x001000000001ddbb
- (id)_newPurchaseRequestOperation;	// IMP=0x001000000001c435
- (void)_handleFailureForOperation:(id)arg1;	// IMP=0x001000000001b2e5
- (id)_fairPlaySubscriptionController;	// IMP=0x001000000001b289
- (id);	// IMP=0x001000000001b1f6
- (id)_countryCode;	// IMP=0x001000000001ae1e
- (void)_continueTouchIDSessionWithDialog:(id)arg1;	// IMP=0x001000000001abf0
- (_Bool)_clientIsViewService;	// IMP=0x001000000001aa79
- (id)_buyParamProductType;	// IMP=0x001000000001a825
- (void)_addFairPlayToRequestProperties:(id)arg1 withAccountIdentifier:(unsigned long long)arg2;	// IMP=0x001000000001a81f
- (id)_accountWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000001a6fa
- (id)_account;	// IMP=0x001000000001a5bb
- (void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 andFpanID:(id)arg5 isExtendedAction:(_Bool)arg6 isPayment:(_Bool)arg7 additionalHeaders:(id)arg8;	// IMP=0x001000000001a399
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(_Bool)arg2;	// IMP=0x001000000001a37a
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;	// IMP=0x001000000001a35b
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x001000000001a29f
- (void)operation:(id)arg1 shouldAuthenticateWithContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a1a9
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x0010000000019e21
- (id)uniqueKey;	// IMP=0x0010000000019e14
- (void)run;	// IMP=0x00100000000183fb
- (id)authenticatedAccountDSID;	// IMP=0x0010000000018377
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool useRemoteAuthentication; // @synthesize useRemoteAuthentication=_useRemoteAuthentication;
@property(copy) NSString *urlBagKey;
@property(readonly) NSDictionary *tidHeaders;
@property(copy) NSNumber *originalProductOwnerAccountDSID;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) NSString *clientIdentifier;
@property(getter=isPlaybackRequest) _Bool playbackRequest;
@property(getter=isBackgroundPurchase) _Bool backgroundPurchase;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(copy) NSString *affiliateIdentifier;
@property(readonly) ISURLRequestPerformance *requestPerformanceMetrics;
@property(readonly, getter=isMoveToiOS) _Bool moveToiOS; // @synthesize moveToiOS=_moveToiOS;
@property(readonly, copy) NSString *deviceScore; // @synthesize deviceScore=_deviceScore;
- (id)initWithPurchase:(id)arg1;	// IMP=0x00100000000171a7
- (id)init;	// IMP=0x0010000000017193

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <PurchaseOperationDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
