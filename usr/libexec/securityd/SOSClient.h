//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SOSAccount;

@interface SOSClient : NSObject
{
    SOSAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000022ae6b
@property(retain) SOSAccount *account; // @synthesize account=_account;
- (void)setBypass:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000022add0
- (id)sosIsEnabledString;	// IMP=0x001000000022ad80
- (_Bool)sosIsEnabled;	// IMP=0x001000000022ac8e
- (void)sosIsEnabledCB:(CDUnknownBlockType)arg1;	// IMP=0x001000000022abcf
- (void)sosEnable;	// IMP=0x001000000022ab51
- (void)sosDisable;	// IMP=0x001000000022aad3
- (void)removeV0Peers:(CDUnknownBlockType)arg1;	// IMP=0x001000000022aa61
- (void)iCloudIdentityStatus_internal:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a9ef
- (void)rpcTriggerRingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a930
- (void)rpcTriggerBackup:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a852
- (void)keyStatusFor:(int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a7da
- (void)accountStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a768
- (void)iCloudIdentityStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a6f6
- (void)ghostBustInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a684
- (void)ghostBustPeriodic:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a60c
- (void)ghostBustTriggerTimed:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a594
- (void)ghostBust:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a51c
- (void)setWatchdogParmeters:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a496
- (void)getWatchdogParameters:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a424
- (void)rpcTriggerSync:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a376
- (void)importInitialSyncCredentials:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a293
- (void)initialSyncCredentials:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a1c5
- (void)joinCircleWithBlob:(id)arg1 version:(int)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000022a139
- (void)circleJoiningBlob:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022a0b3
- (void)circleHash:(CDUnknownBlockType)arg1;	// IMP=0x001000000022a041
- (void)myPeerInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229fcf
- (void)stashAccountCredential:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000229f49
- (void)validatedStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229ed7
- (void)assertStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229e65
- (void)stashedCredentialPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229df3
- (void)rateLimitingPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229d81
- (void)kvsPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229d0f
- (void)userPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000229c9d
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x0010000000229c95
- (id)initSOSClientWithAccount:(id)arg1;	// IMP=0x0010000000229c2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

