//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTPNR, IDSPhoneNumberValidationModeArbiter, IDSPreflightStack, IDSPushHandler, IDSSystemAccountAdapter, IMSystemMonitor, IMTimer, NSDate, NSMutableArray, NSString;
@protocol IDSPhoneNumberValidationStateMachineLockdownManager, IDSPhoneNumberValidationStateMachineMessageDelivery, IDSPreflightStackStore;

@interface IDSPhoneNumberValidationStateMachine : NSObject
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSMutableArray *_handlers;	// 24 = 0x18
    NSMutableArray *_requestors;	// 32 = 0x20
    NSMutableArray *_promises;	// 40 = 0x28
    unsigned int _numberOfSuccessfulSends;	// 48 = 0x30
    unsigned int _numberOfAttemptsWithoutSuccessfulSend;	// 52 = 0x34
    unsigned int _numberOfPreflights;	// 56 = 0x38
    _Bool _isSMSWarningUp;	// 60 = 0x3c
    _Bool _hasAcceptedSMSRequest;	// 61 = 0x3d
    NSDate *_phoneNumberValidationStartDate;	// 64 = 0x40
    NSDate *_smsSendDate;	// 72 = 0x48
    IMTimer *_lastSendSMSTimer;	// 80 = 0x50
    _Bool _commCenterDead;	// 88 = 0x58
    _Bool _needsToCheckPhoneNumberState;	// 89 = 0x59
    _Bool _didReceiveSIMSetupCompleteNotification;	// 90 = 0x5a
    long long _reason;	// 96 = 0x60
    id <IDSPhoneNumberValidationStateMachineMessageDelivery> _httpMessageDelivery;	// 104 = 0x68
    id <IDSPhoneNumberValidationStateMachineLockdownManager> _lockdownManager;	// 112 = 0x70
    IMSystemMonitor *_systemMonitor;	// 120 = 0x78
    IDSPhoneNumberValidationModeArbiter *_arbiter;	// 128 = 0x80
    IDSSystemAccountAdapter *_systemAccountAdapter;	// 136 = 0x88
    id <IDSPreflightStackStore> _preflighStackStore;	// 144 = 0x90
    CDUnknownBlockType _inFlightHeartbeatBlock;	// 152 = 0x98
    CDUnknownBlockType _inFlightSMSTimeoutBlock;	// 160 = 0xa0
    IDSCTPNR *_CTPNR;	// 168 = 0xa8
    NSMutableArray *_registrations;	// 176 = 0xb0
    NSDate *_nextSendSMSDate;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0020000000435c70
@property(retain, nonatomic) IMTimer *lastSendSMSTimer; // @synthesize lastSendSMSTimer=_lastSendSMSTimer;
@property(retain, nonatomic) NSDate *smsSendDate; // @synthesize smsSendDate=_smsSendDate;
@property(retain, nonatomic) NSDate *phoneNumberValidationStartDate; // @synthesize phoneNumberValidationStartDate=_phoneNumberValidationStartDate;
@property(retain, nonatomic) NSDate *nextSendSMSDate; // @synthesize nextSendSMSDate=_nextSendSMSDate;
@property(nonatomic) _Bool didReceiveSIMSetupCompleteNotification; // @synthesize didReceiveSIMSetupCompleteNotification=_didReceiveSIMSetupCompleteNotification;
@property(nonatomic) _Bool needsToCheckPhoneNumberState; // @synthesize needsToCheckPhoneNumberState=_needsToCheckPhoneNumberState;
@property(nonatomic) _Bool commCenterDead; // @synthesize commCenterDead=_commCenterDead;
@property(nonatomic) _Bool hasAcceptedSMSRequest; // @synthesize hasAcceptedSMSRequest=_hasAcceptedSMSRequest;
@property(nonatomic) _Bool isSMSWarningUp; // @synthesize isSMSWarningUp=_isSMSWarningUp;
@property(nonatomic) unsigned int numberOfPreflights; // @synthesize numberOfPreflights=_numberOfPreflights;
@property(nonatomic) unsigned int numberOfAttemptsWithoutSuccessfulSend; // @synthesize numberOfAttemptsWithoutSuccessfulSend=_numberOfAttemptsWithoutSuccessfulSend;
@property(nonatomic) unsigned int numberOfSuccessfulSends; // @synthesize numberOfSuccessfulSends=_numberOfSuccessfulSends;
@property(retain, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) IDSCTPNR *CTPNR; // @synthesize CTPNR=_CTPNR;
@property(copy, nonatomic) CDUnknownBlockType inFlightSMSTimeoutBlock; // @synthesize inFlightSMSTimeoutBlock=_inFlightSMSTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType inFlightHeartbeatBlock; // @synthesize inFlightHeartbeatBlock=_inFlightHeartbeatBlock;
@property(retain, nonatomic) id <IDSPreflightStackStore> preflighStackStore; // @synthesize preflighStackStore=_preflighStackStore;
@property(retain, nonatomic) IDSSystemAccountAdapter *systemAccountAdapter; // @synthesize systemAccountAdapter=_systemAccountAdapter;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) IDSPhoneNumberValidationModeArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) id <IDSPhoneNumberValidationStateMachineLockdownManager> lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(retain, nonatomic) id <IDSPhoneNumberValidationStateMachineMessageDelivery> httpMessageDelivery; // @synthesize httpMessageDelivery=_httpMessageDelivery;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)persistNumberOfPreflightAttempts:(unsigned int)arg1;	// IMP=0x0010000000435470
- (unsigned int)loadNumberOfPreflightAttempts;	// IMP=0x0010000000435440
- (void)persistNumberOfSuccessfulValidationSends:(unsigned int)arg1;	// IMP=0x0010000000435410
- (unsigned int)loadNumberOfSuccessfulValidationSends;	// IMP=0x00100000004353e0
- (void)heartbeat;	// IMP=0x0010000000434950
- (void)removePhoneNumberValidationRequestor:(id)arg1;	// IMP=0x0010000000434700
- (id)identifyPhoneNumberForRequestor:(id)arg1 queue:(id)arg2;	// IMP=0x00100000004345f0
- (void)addPhoneNumberValidationRequestor:(id)arg1;	// IMP=0x0010000000434460
- (void)removeListener:(id)arg1;	// IMP=0x0010000000434400
- (void)addListener:(id)arg1;	// IMP=0x0010000000434340
- (void)timedOutWaitingForSMS;	// IMP=0x0010000000433ba0
- (void)resetSMSCounter;	// IMP=0x0010000000433990
- (void)handleIncomingSMSForResponse:(id)arg1;	// IMP=0x0010000000432970
- (void);	// IMP=0x0010000000432020
- (void)handleRegistrationSMSDeliveryFailedWithShouldBypassRetry:(_Bool)arg1;	// IMP=0x0010000000431510
- (void)handleRegistrationSMSDeliveryFailed;	// IMP=0x00100000004314e0
- (void)_requestUserConsentForPhoneNumberValidationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000431380
- (void)_tryToSendSMSIdentification;	// IMP=0x001000000042faf0
- (void)_sendPreflightVerificationWithIMSI:(id)arg1 PLMN:(id)arg2;	// IMP=0x001000000042ec40
- (void)_performHighestPriorityPreflightVerification;	// IMP=0x001000000042ebe0
- (void)_popHighestPriorityPreflightVerification;	// IMP=0x001000000042eb10
- (id)_getHighestPriorityMechanism;	// IMP=0x001000000042ea20
- (void)_sendPreflightVerificationIfNeeded;	// IMP=0x001000000042e6f0
- (void)_issueAsyncCoreTelephonyPhoneNumberValidationRequestWithPushToken:(id)arg1 mechanism:(id)arg2;	// IMP=0x001000000042e680
- (void)_sendSMSVerificationWithMechanism:(id)arg1;	// IMP=0x001000000042e0c0
- (void)_lastSendSMSTimerFiredOnMain;	// IMP=0x001000000042dff0
- (void)_setSMSDeliveryTimeout:(double)arg1;	// IMP=0x001000000042ddb0
- (_Bool)_canDeliverSMSNow;	// IMP=0x001000000042dd90
- (void)_smsDeliveryClear;	// IMP=0x001000000042db30
- (void)_clearSMSDeliveryTimeout;	// IMP=0x001000000042daf0
- (void)_keychainMigrationComplete:(id)arg1;	// IMP=0x001000000042d990
- (void)_SIMSetupDidComplete;	// IMP=0x001000000042d8b0
- (void)systemRestoreStateDidChange;	// IMP=0x001000000042d7c0
- (void)systemDidStopBackup;	// IMP=0x001000000042d6d0
- (void)systemDidFinishMigration;	// IMP=0x001000000042d4e0
- (void)PNRResponseReceivedWithResponseData:(id)arg1;	// IMP=0x001000000042ce90
- (void)PNRRequestSentWithRequestData:(id)arg1;	// IMP=0x001000000042c9a0
- (void)PNRReadyStateChanged:(_Bool)arg1;	// IMP=0x001000000042c7f0
- (void)_deviceIDChangedNotification:(id)arg1;	// IMP=0x001000000042c620
- (void)_registerForLockdownNotifications;	// IMP=0x001000000042c4e0
- (void)_lockdownStateChanged:(id)arg1;	// IMP=0x001000000042c2d0
- (_Bool)_validSIMStateForRegistration;	// IMP=0x001000000042c1b0
- (_Bool)_deviceCanRegisterPresently;	// IMP=0x001000000042bf30
- (long long)_errorCodeForRegistrationError:(long long)arg1;	// IMP=0x001000000042be50
- (void)_failPromisesWithError:(long long)arg1;	// IMP=0x001000000042bbd0
- (void)_fulfillPromisesWithPhoneNumber:(id)arg1 token:(id)arg2;	// IMP=0x001000000042b910
- (void)_notifySuccess:(id)arg1;	// IMP=0x001000000042aa40
- (void)_notifyFailureWithError:(long long)arg1;	// IMP=0x0010000000429c90
- (_Bool)_isAwaitingUserSelectionDuringSetup;	// IMP=0x0010000000429c70
- (_Bool)_isUserSubscriptionSelectionStillPending;	// IMP=0x0010000000429a20
- (_Bool)_userHasDisabledSMSRegistration;	// IMP=0x0010000000429a00
- (long long)_registrationControlStatus;	// IMP=0x00100000004299a0
@property(copy, nonatomic) IDSPreflightStack *currentPreflightStack;
- (void)_registerForDeviceCenterNotifications;	// IMP=0x00100000004297c0
- (void)dealloc;	// IMP=0x0010000000429770
- (void)invalidate;	// IMP=0x0010000000429630
- (id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2;	// IMP=0x00100000004293c0
- (id)initWithCTPNR:(id)arg1 preflightStackStore:(id)arg2 HTTPDelivery:(id)arg3 pushHandler:(id)arg4 lockdownManager:(id)arg5 systemMonitor:(id)arg6 arbiter:(id)arg7 systemAccountAdapter:(id)arg8;	// IMP=0x0010000000428bb0
- (void)_cancelScheduledSMSTimeout;	// IMP=0x0010000000428b10
- (void)_scheduleSMSTimeout:(double)arg1;	// IMP=0x0010000000428930
- (void)_cancelScheduledHeartbeat;	// IMP=0x0010000000428890
- (void)_scheduleHeartbeat:(double)arg1;	// IMP=0x0010000000428630
@property(readonly, copy) NSString *description;
- (_Bool)_isPhoneNumberIdentificationSupported;	// IMP=0x00100000004283c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
