//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient, SDStatusMonitor, SFCombinedDevice, SFDeviceDiscovery, SFNotificationProxy, SFProxHandoffService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDProxHandoffAgent : NSObject
{
    SFDeviceDiscovery *_bleActionDiscovery;	// 8 = 0x8
    NSMutableDictionary *_bleActionDevices;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_bleActionScanTimer;	// 24 = 0x18
    _Bool _bleActionScanTimedOut;	// 32 = 0x20
    SFProxHandoffService *_bleActionService;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_bleActionServiceTimer;	// 48 = 0x30
    SFDeviceDiscovery *_bleInfoDiscovery;	// 56 = 0x38
    NSMutableDictionary *_bleInfoDevices;	// 64 = 0x40
    CUCoalescer *_bleMapCoalescer;	// 72 = 0x48
    NSMutableDictionary *_bleUnmapped;	// 80 = 0x50
    _Bool _candidateNearby;	// 88 = 0x58
    _Bool _clientShouldAdvertise;	// 89 = 0x59
    RPCompanionLinkClient *_clinkClient;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_delayTimer;	// 104 = 0x68
    NSMutableDictionary *_mappedDevices;	// 112 = 0x70
    _Bool _motionMonitorStarted;	// 120 = 0x78
    SFNotificationProxy *_notificationProxy;	// 128 = 0x80
    NSMutableSet *_proxClients;	// 136 = 0x88
    _Bool _stationary;	// 144 = 0x90
    SDStatusMonitor *_statusMonitor;	// 152 = 0x98
    NSMutableSet *_suppressedDeviceIDs;	// 160 = 0xa0
    CUSystemMonitor *_systemMonitor;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_transferTimer;	// 176 = 0xb0
    SFCombinedDevice *_uiDevice;	// 184 = 0xb8
    _Bool _unansweredCall;	// 192 = 0xc0
    _Bool _userOnCall;	// 193 = 0xc1
    double _prefBLEActionScanSecs;	// 200 = 0xc8
    _Bool _prefEnabled;	// 208 = 0xd0
    _Bool _prefForceShouldAdvertise;	// 209 = 0xd1
    _Bool _prefForceStationary;	// 210 = 0xd2
    _Bool _prefForceOnCall;	// 211 = 0xd3
    _Bool _prefHighNormal;	// 212 = 0xd4
    _Bool _prefIgnoreMediumThrottle;	// 213 = 0xd5
    _Bool _prefMediumBubbleEnabled;	// 214 = 0xd6
    unsigned long long _prefMediumBubbleLastTicks;	// 216 = 0xd8
    double _prefRetriggerSecs;	// 224 = 0xe0
    double _prefTransferSecs;	// 232 = 0xe8
    unsigned long long _prefThrottleEventCount;	// 240 = 0xf0
    unsigned long long _prefThrottleEventMax;	// 248 = 0xf8
    _Bool _preventNotifications;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 264 = 0x108
}

+ (id)sharedAgent;	// IMP=0x0040000000075058
- (void).cxx_destruct;	// IMP=0x0020000000082cee
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testUI:(id)arg1;	// IMP=0x0010000000082c58
- (id)displayNameForContact:(id)arg1;	// IMP=0x0010000000082c21
- (unsigned long long)notificationHomePodTypeForDevice:(id)arg1;	// IMP=0x0010000000082ba5
- (id)mediaTransferInfoFromInfo:(id)arg1;	// IMP=0x0010000000082a71
- (_Bool)callTransferShouldPush:(id)arg1;	// IMP=0x0010000000082a69
- (id)callTransferInfoForDevice:(id)arg1;	// IMP=0x00100000000827f3
- (_Bool)_shouldMediumPromptWithInfo:(id)arg1;	// IMP=0x00100000000826a8
- (id)_routes;	// IMP=0x00100000000826a0
- (id)_routeForDevice:(id)arg1;	// IMP=0x001000000008244c
- (void)_resetAllStates;	// IMP=0x0010000000082343
- (void)_combinedDevicePrepareForCallTransferTrigger:(id)arg1;	// IMP=0x0010000000082282
- (_Bool)_expectingContentForDeviceID:(id)arg1;	// IMP=0x001000000008224f
- (_Bool)_combinedDeviceIsSuppressed:(id)arg1;	// IMP=0x00100000000821d6
- (id)_combinedDeviceForUIID:(id)arg1;	// IMP=0x0010000000081f9f
- (id)_combinedDevicePending;	// IMP=0x0010000000081989
- (void)_uiStopIfNeeded:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000008145e
- (void)_uiDismissWhenReady:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000008122a
- (void)_hapticsEnsureStopped;	// IMP=0x0010000000081224
- (void)_hapticsEnsurePrepared;	// IMP=0x001000000008121e
- (void)_hapticsFireNotificationSuccess;	// IMP=0x0010000000081218
- (void)userDidTapNotification:(id)arg1;	// IMP=0x0010000000081169
- (void)notificationDidDismiss:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000008107a
- (void)_proxiedNotificationWasTapped:(id)arg1;	// IMP=0x0010000000080a5f
- (void)_proxiedNotificationDidDismiss:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000008057b
- (void)_throttleMediumSetTicks:(unsigned long long)arg1;	// IMP=0x00100000000804ed
- (void)_throttleMediumReset;	// IMP=0x0010000000080473
- (_Bool)_throttleMediumAllowsTrigger;	// IMP=0x0010000000080423
- (void)_throttleEventsReset;	// IMP=0x00100000000803ae
- (_Bool)_throttleEventsReachedMax;	// IMP=0x001000000008038a
- (void)_throttleEventSet:(unsigned long long)arg1;	// IMP=0x00100000000802fc
- (void)_throttleEventDidOccur;	// IMP=0x001000000008027f
- (void)_serviceTimeoutFired;	// IMP=0x001000000008020c
- (void)_serviceTimeoutInvalidate;	// IMP=0x0010000000080163
- (void)_serviceTimeoutActivate;	// IMP=0x001000000008004d
- (_Bool)_serviceShouldStart;	// IMP=0x0010000000080016
- (void)_serviceEnsureStopped;	// IMP=0x001000000007ff82
- (void)_serviceEnsureStarted;	// IMP=0x001000000007fdcb
- (void)_proximityClientSeedWillTriggerDeviceIfNeeded:(id)arg1;	// IMP=0x001000000007fbad
- (void)_proximityClientSeedInitialDevices:(id)arg1;	// IMP=0x001000000007f83a
- (void)_proximityClientDeviceUpdated:(id)arg1;	// IMP=0x001000000007f4ff
- (void)_proximityClientDeviceDidUnTrigger:(id)arg1;	// IMP=0x001000000007f2cc
- (void)_proximityClientDeviceWillTrigger:(id)arg1;	// IMP=0x001000000007f099
- (void)_proximityClientDeviceWasSelected:(id)arg1;	// IMP=0x001000000007ee66
- (void)_proximityClientDeviceWasDismissed:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000007ebff
- (void)_proximityClientDeviceWasDismissed:(id)arg1;	// IMP=0x001000000007e9cc
- (void)_proximityClientDeviceExitedNearby:(id)arg1;	// IMP=0x001000000007e799
- (void)_proximityClientDeviceEnteredNearby:(id)arg1;	// IMP=0x001000000007e566
- (void)_proximityClientDeviceExitedImmediate:(id)arg1;	// IMP=0x001000000007e333
- (void)_proximityClientDeviceEnteredImmediate:(id)arg1;	// IMP=0x001000000007e100
- (int)proximityClientRequestScannerTimerReset:(id)arg1;	// IMP=0x001000000007dfbb
- (int)proximityClient:(id)arg1 updateContent:(id)arg2 forDevice:(id)arg3;	// IMP=0x001000000007dad4
- (int)proximityClient:(id)arg1 stopSuppressingDevice:(id)arg2;	// IMP=0x001000000007d9bb
- (int)proximityClient:(id)arg1 suppressDevice:(id)arg2;	// IMP=0x001000000007d660
- (int)proximityClient:(id)arg1 provideContent:(id)arg2 forDevice:(id)arg3 force:(_Bool)arg4;	// IMP=0x001000000007d180
- (int)proximityClient:(id)arg1 dismissContentForDevice:(id)arg2;	// IMP=0x001000000007cfc9
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x001000000007ce20
- (void)proximityClientStop:(id)arg1;	// IMP=0x001000000007cd23
- (int)proximityClientStart:(id)arg1;	// IMP=0x001000000007cc08
- (_Bool)_motionShouldStart;	// IMP=0x001000000007cbec
- (void)_motionEnsureStopped;	// IMP=0x001000000007cbe6
- (void)_motionEnsureStarted;	// IMP=0x001000000007cbe0
- (void)_clinkHomePodHandleRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ca97
- (void)_clinkHandleRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c90e
- (_Bool)_clinkShouldStart;	// IMP=0x001000000007c8d6
- (void)_clinkEnsureStopped;	// IMP=0x001000000007c82c
- (void)_clinkEnsureStarted;	// IMP=0x001000000007c300
- (id)_bleUpdateMappingWithDevice:(id)arg1;	// IMP=0x001000000007bb40
- (void)_bleUpdateMappingReset;	// IMP=0x001000000007b89d
- (void)_bleUpdateMappingAndNearbyCoalesced;	// IMP=0x001000000007b5a8
- (void)_bleUpdateMappingAndNearby;	// IMP=0x001000000007b592
- (void)_bleDeviceNearbyExit:(id)arg1;	// IMP=0x001000000007b424
- (void)_bleDeviceNearbyEnter:(id)arg1;	// IMP=0x001000000007b26e
- (void)_bleInfoDeviceLost:(id)arg1;	// IMP=0x001000000007b143
- (void)_bleInfoDeviceFound:(id)arg1;	// IMP=0x001000000007af83
- (void)_bleInfoDeviceChanged:(id)arg1;	// IMP=0x001000000007ad6d
- (_Bool)_bleInfoDiscoveryShouldStart;	// IMP=0x001000000007ad5d
- (void)_bleInfoDiscoveryEnsureStopped;	// IMP=0x001000000007ac77
- (void)_bleInfoDiscoveryEnsureStarted;	// IMP=0x001000000007a954
- (void)_bleActionScanTimerFired;	// IMP=0x001000000007a8cd
- (void)_bleActionScanTimerInvalidate;	// IMP=0x001000000007a820
- (void)_bleActionScanTimerActivate;	// IMP=0x001000000007a706
- (void)_bleActionDeviceLost:(id)arg1;	// IMP=0x001000000007a5f6
- (void)_bleActionDeviceFoundCandidate:(id)arg1;	// IMP=0x001000000007a476
- (void)_bleActionDeviceFound:(id)arg1;	// IMP=0x001000000007a3ae
- (void)_bleActionDeviceChanged:(id)arg1;	// IMP=0x0010000000079a90
- (_Bool)_bleActionDiscoveryShouldStart;	// IMP=0x0010000000079a4d
- (void)_bleActionDiscoveryEnsureStopped;	// IMP=0x001000000007996a
- (void)_bleActionDiscoveryEnsureStarted;	// IMP=0x0010000000079444
- (void)_runCallHandoffHandleDelayTimerFired;	// IMP=0x00100000000792bd
- (void)_runCallHandoffStartDelayTimer;	// IMP=0x00100000000791cd
- (void)_runCallHandoffHandleResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000790f6
- (void)_runCallHandoffStart:(id)arg1;	// IMP=0x0010000000078f43
- (void)_runTransferDone;	// IMP=0x0010000000078dce
- (void);	// IMP=0x0010000000078c15
- (void)_runTransferReady;	// IMP=0x00100000000789f1
- (void)_runTransferPending;	// IMP=0x00100000000785c8
- (void)_runTransferInProgress;	// IMP=0x00100000000783fb
- (void)_runNotificationDismissed;	// IMP=0x001000000007821c
- (void)_runNotificationPresented;	// IMP=0x001000000007800c
- (void)_runNotificationReady;	// IMP=0x001000000007791f
- (void)_runNotificationPendingContent;	// IMP=0x0010000000077739
- (void)_runNotificationPending;	// IMP=0x0010000000077435
- (_Bool)_runStateVerify:(int)arg1 device:(id)arg2;	// IMP=0x0010000000077341
- (void)_run;	// IMP=0x00100000000772cf
- (void)_scheduleRunAfter:(double)arg1;	// IMP=0x0010000000077252
- (void)commonSystemUIChanged;	// IMP=0x001000000007711a
- (_Bool)_systemCanTrigger;	// IMP=0x00100000000770a5
- (void)_commonScreenStateChanged;	// IMP=0x0010000000076f75
- (void)_commonShouldAdvertiseChanged;	// IMP=0x0010000000076d71
- (void)_commonCallCountChanged;	// IMP=0x0010000000076a9c
- (void)_commonEnsureStopped;	// IMP=0x0010000000076919
- (void)_commonEnsureStarted;	// IMP=0x001000000007646c
- (void)_updateCandidateIsNearby;	// IMP=0x00100000000763cb
- (void)_update;	// IMP=0x0010000000076256
- (void)prefsChanged;	// IMP=0x00100000000758e1
- (void)_invalidate;	// IMP=0x001000000007580e
- (void)invalidate;	// IMP=0x00100000000757aa
- (void)activate;	// IMP=0x00100000000756f2
- (id)description;	// IMP=0x001000000007510a
- (id)init;	// IMP=0x00100000000750ad

@end

