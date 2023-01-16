//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDAppleIDAgent : NSObject
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x0020000000123f33
- (void).cxx_destruct;	// IMP=0x002000000012467d
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000012451e
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000124437
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000124321
- (void)handleUILockStatusChangedNotification;	// IMP=0x00100000001242d1
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x0010000000124281
- (void)handleAppleIDSignedOutNotification;	// IMP=0x0010000000124231
- (void)handleAppleIDSignedInNotification;	// IMP=0x00100000001241e1
- (void)handleAppleIDChangedNotification;	// IMP=0x0010000000124191
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x0010000000124041
- (id)statusInfo;	// IMP=0x0010000000123fde
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000123dfb
- (void)prefsChanged;	// IMP=0x0010000000123dab
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000123cf8
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000123cdf
- (id)myAccount;	// IMP=0x0010000000123c60
- (void)invalidate;	// IMP=0x0010000000123c10
- (id)detailedDescription;	// IMP=0x0010000000123bad
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000123855
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x0010000000123788
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001231e2
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x0010000000122efd
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122ee4
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000122d25
- (void)activate;	// IMP=0x0010000000122cd5
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x0010000000122c24
- (id)accountForAppleID:(id)arg1;	// IMP=0x0010000000122b4b
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x0010000000122b21
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x0010000000122af7
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x0010000000122a22
- (void)_verifyState;	// IMP=0x001000000012182b
- (void)_updateMyInfo;	// IMP=0x00100000001217a3
- (void)_updateAppleID;	// IMP=0x00100000001216ab
- (void)_update;	// IMP=0x001000000012163a
- (id)_statusInfo;	// IMP=0x0010000000121515
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001214de
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x00100000001214c4
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x00100000001214aa
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000120e4d
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001207e2
- (void)_removeObservers;	// IMP=0x001000000012078f
- (void)_prefsChanged;	// IMP=0x001000000012048b
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011fd66
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011edf5
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e47d
- (int)_performKeychainCount;	// IMP=0x001000000011e109
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x001000000011dd77
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x001000000011dd61
- (unsigned long long)_keychainCleanupTag;	// IMP=0x001000000011dd3e
- (void)_handleThrottledRetryTimerFired;	// IMP=0x001000000011dcc6
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x001000000011dc02
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000011d85e
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x001000000011d7c3
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x001000000011d635
- (void)_handleUILockStatusChange;	// IMP=0x001000000011d501
- (void)_handleUILockStatusChangedNotification;	// IMP=0x001000000011d49a
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x001000000011d2f4
- (void)_handleKeyVerificationFailure;	// IMP=0x001000000011d260
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x001000000011d1f9
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000011c395
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000011be38
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x001000000011bb29
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x001000000011ba20
- (void)_handleAppleIDSignedInNotification;	// IMP=0x001000000011b940
- (void)_handleAppleIDChangedNotification;	// IMP=0x001000000011b8d1
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x001000000011b832
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x001000000011b79c
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x001000000011b43b
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x001000000011b3ae
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x001000000011b214
- (void)_ensurePushStopped;	// IMP=0x001000000011b17f
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x001000000011af11
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011ac8e
- (id)_detailedDescription;	// IMP=0x0010000000119a64
- (void)_ensurePushStarted;	// IMP=0x0010000000119860
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x0010000000119818
- (void)_clearAccount;	// IMP=0x0010000000119781
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x001000000011959c
- (void)_invalidate;	// IMP=0x00100000001192f6
- (void)_addObservers;	// IMP=0x001000000011920d
- (void)_activate;	// IMP=0x001000000011916d
- (long long)_accountState;	// IMP=0x0010000000118aa7
- (id)_accountForAppleID:(id)arg1;	// IMP=0x0010000000118a91
- (_Bool);	// IMP=0x0010000000118a89
- (void)dealloc;	// IMP=0x0010000000118a45
- (id)init;	// IMP=0x001000000011897d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

