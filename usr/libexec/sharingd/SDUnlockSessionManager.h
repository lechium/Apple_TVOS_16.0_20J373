//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SDUnlockIDSController, SDUnlockSecurityManager, SFPairedUnlockEvent;
@protocol OS_dispatch_source;

@interface SDUnlockSessionManager : NSObject
{
    long long _setupAuthSession;	// 8 = 0x8
    long long _unlockAuthSession;	// 16 = 0x10
    long long _stashBagSession;	// 24 = 0x18
    SDUnlockIDSController *_idsController;	// 32 = 0x20
    SDUnlockSecurityManager *_securityManager;	// 40 = 0x28
    SFPairedUnlockEvent *_metrics;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_unlockTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000163c97
@property(retain) NSObject<OS_dispatch_source> *unlockTimer; // @synthesize unlockTimer=_unlockTimer;
@property(retain) SFPairedUnlockEvent *metrics; // @synthesize metrics=_metrics;
@property(retain) SDUnlockSecurityManager *securityManager; // @synthesize securityManager=_securityManager;
@property __weak SDUnlockIDSController *idsController; // @synthesize idsController=_idsController;
@property long long stashBagSession; // @synthesize stashBagSession=_stashBagSession;
@property long long unlockAuthSession; // @synthesize unlockAuthSession=_unlockAuthSession;
@property long long setupAuthSession; // @synthesize setupAuthSession=_setupAuthSession;
- (void)logMetrics;	// IMP=0x0010000000163aeb
- (void)logProtoBufReceived:(id)arg1;	// IMP=0x00100000001639c6
- (void)logProtoBufSend:(id)arg1;	// IMP=0x00100000001638a1
- (unsigned int)generateSessionID;	// IMP=0x0010000000163892
- (_Bool)activeDevicesMatch;	// IMP=0x001000000016388a
- (id)activeDeviceDescription;	// IMP=0x0010000000163882
- (id)activeDeviceName;	// IMP=0x001000000016387a
- (id)pairingStorePath;	// IMP=0x0010000000163872
- (id)pairingID;	// IMP=0x001000000016386a
- (_Bool)deviceIsPaired;	// IMP=0x0010000000163862
- (unsigned short)pairingCompatibilityState;	// IMP=0x0010000000163857
- (_Bool)inConfigureState;	// IMP=0x001000000016384f
- (_Bool)shouldAbort;	// IMP=0x0010000000163847
- (void)abortDevicePairingWithReason:(id)arg1;	// IMP=0x0010000000163841
- (void)sendDisableMessage;	// IMP=0x001000000016373f
- (void)sendResetMessage:(unsigned int)arg1 reason:(unsigned short)arg2;	// IMP=0x0010000000163604
- (void)invalidateUnlockTimer;	// IMP=0x001000000016357e
- (void)restartUnlockTimer:(unsigned long long)arg1;	// IMP=0x00100000001633af
- (void)resetStashState;	// IMP=0x0010000000163340
- (void)resetState;	// IMP=0x00100000001632c4
- (void)resetAndClearState;	// IMP=0x00100000001632b2
- (void)resetSetupState;	// IMP=0x0010000000163243
- (void)resetAll;	// IMP=0x0010000000163208
- (void)disableUnlockWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016311f
- (_Bool)unlockEnabled;	// IMP=0x00100000001630db
- (void)disableUnlockPairingForSecManager:(id)arg1;	// IMP=0x0010000000163012
- (void)disableUnlockPairing;	// IMP=0x0010000000162f8c
- (void)enableUnlockPairing;	// IMP=0x0010000000162f0f
- (void)deviceDidEnterConfigState:(id)arg1;	// IMP=0x0010000000162e5e
- (void)pairingDidBegin:(id)arg1;	// IMP=0x0010000000162dad
- (void)pairingStatusChanged:(id)arg1;	// IMP=0x0010000000162da7
- (void)updateExitPrevention;	// IMP=0x0010000000162da1
- (void)handleDevicesDidFailToPair;	// IMP=0x0010000000162d2b
- (void)devicesDidFailToPair:(id)arg1;	// IMP=0x0010000000162d19
- (id)generateDebugInfo;	// IMP=0x0010000000162826
- (void)removeObservers;	// IMP=0x00100000001627d3
- (void)addObservers;	// IMP=0x0010000000162714
- (void)debugInfoRequested:(id)arg1;	// IMP=0x001000000016270e
- (void)preventExitForLocaleIfNeeded;	// IMP=0x0010000000162708
- (void)updateSecurityManager;	// IMP=0x00100000001624d0
- (void)updateSecurityManagerIfNeeded;	// IMP=0x0010000000162487
- (void)dealloc;	// IMP=0x0010000000162449
- (id)init;	// IMP=0x001000000016235c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

