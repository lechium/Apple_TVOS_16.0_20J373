//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, IDSRateLimiter, IDSRestoreMonitor, IDSUserStore, IMSystemMonitor, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSPreflightStackStore;

@interface IDSSMSRegistrationCenter : NSObject
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSPreflightStackStore> _preflightStackStore;	// 24 = 0x18
    IDSPushHandler *_pushHandler;	// 32 = 0x20
    NSMutableDictionary *_registrationReasonByUserID;	// 40 = 0x28
    NSMutableDictionary *_stateMachineByUserID;	// 48 = 0x30
    NSMutableSet *_userConsentDeniedForCTPNR;	// 56 = 0x38
    IMSystemMonitor *_systemMonitor;	// 64 = 0x40
    IDSRestoreMonitor *_restoreMonitor;	// 72 = 0x48
    NSMapTable *_CTPNRByConsentCompletion;	// 80 = 0x50
    IDSRateLimiter *_smallWindowSMSTimeoutRateLimiter;	// 88 = 0x58
    IDSRateLimiter *_wideWindowSMSTimeoutRateLimiter;	// 96 = 0x60
    IDSRateLimiter *_registrationAttemptRateLimiter;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x002000000027e820
- (void).cxx_destruct;	// IMP=0x00200000002852f0
@property(retain, nonatomic) IDSRateLimiter *registrationAttemptRateLimiter; // @synthesize registrationAttemptRateLimiter=_registrationAttemptRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *wideWindowSMSTimeoutRateLimiter; // @synthesize wideWindowSMSTimeoutRateLimiter=_wideWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *smallWindowSMSTimeoutRateLimiter; // @synthesize smallWindowSMSTimeoutRateLimiter=_smallWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) NSMapTable *CTPNRByConsentCompletion; // @synthesize CTPNRByConsentCompletion=_CTPNRByConsentCompletion;
@property(retain, nonatomic) IDSRestoreMonitor *restoreMonitor; // @synthesize restoreMonitor=_restoreMonitor;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) NSMutableSet *userConsentDeniedForCTPNR; // @synthesize userConsentDeniedForCTPNR=_userConsentDeniedForCTPNR;
@property(retain, nonatomic) NSMutableDictionary *stateMachineByUserID; // @synthesize stateMachineByUserID=_stateMachineByUserID;
@property(retain, nonatomic) NSMutableDictionary *registrationReasonByUserID; // @synthesize registrationReasonByUserID=_registrationReasonByUserID;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(readonly, nonatomic) id <IDSPreflightStackStore> preflightStackStore; // @synthesize preflightStackStore=_preflightStackStore;
@property(readonly, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void)_postPendingConsentAlerts;	// IMP=0x0010000000284bf0
- (void)requestUserConsentToValidatePhoneNumberForCTPNR:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000283ad0
- (void)_sendABCForFailureForIdentifier:(id)arg1 WithEvent:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000283830
- (void)_resetRateLimitersForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x00100000002837b0
- (_Bool)_hasThresholdReachedForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x00100000002836d0
- (void)validator:(id)arg1 handleABCEvent:(long long)arg2;	// IMP=0x0010000000283520
- (void)validator:(id)arg1 failedIdentificationWithRegistrationError:(long long)arg2;	// IMP=0x0010000000283420
- (void)validator:(id)arg1 identifiedPhoneNumber:(id)arg2 token:(id)arg3 phoneBookNumber:(id)arg4;	// IMP=0x0010000000283100
- (id)_identifierForValidator:(id)arg1;	// IMP=0x0010000000282de0
- (void)_notifyNeedsNewIdentification;	// IMP=0x0010000000282a70
- (void)_notifySuccess:(id)arg1 token:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000281b30
- (void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000002810d0
- (void)removeListener:(id)arg1;	// IMP=0x0010000000281070
- (void)addListener:(id)arg1;	// IMP=0x0010000000280fb0
- (void)_noteRegistrationAttemptForIdentifier:(id)arg1 withRegistrationInfo:(id)arg2;	// IMP=0x0010000000280b00
- (void)notePhoneNumberRegistrationReset;	// IMP=0x00100000002808f0
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000280840
- (void)_clearConsentDenialsForUniqueIdentifier:(id)arg1;	// IMP=0x0010000000280690
- (void)clearConsentDenialsForPhoneUser:(id)arg1;	// IMP=0x0010000000280600
- (void)clearConsentDenialsForRegistration:(id)arg1;	// IMP=0x0010000000280570
- (void)_cleanupUntrackedValidators;	// IMP=0x0010000000280080
- (void)sendRegistration:(id)arg1;	// IMP=0x001000000027f390
- (void)setRegistrationReason:(long long)arg1 forUserUniqueIdentifier:(id)arg2;	// IMP=0x001000000027f2e0
- (void)setRegistrationReason:(long long)arg1 forPhoneNumber:(id)arg2;	// IMP=0x001000000027eeb0
- (void)dealloc;	// IMP=0x001000000027ec30
- (id)initWithRestoreMonitor:(id)arg1 systemMonitor:(id)arg2;	// IMP=0x001000000027e9c0
- (id)init;	// IMP=0x001000000027e900
- (id);	// IMP=0x001000000027e860
@property(readonly, nonatomic) NSArray *validators;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDSUserStore *userStore;

@end

