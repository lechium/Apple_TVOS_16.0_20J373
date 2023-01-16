//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDSpringBoardApplication
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_transitionalDiscretionaryStateTimer;	// 64 = 0x40
    NDSpringBoardApplication *_containingApplication;	// 72 = 0x48
}

+ (id)requestDelayQueue;	// IMP=0x00200000000363dd
- (void).cxx_destruct;	// IMP=0x0020000000036073
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000035fe6
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0010000000035e44
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0010000000035e0e
- (void)applicationBackgroundUpdatesTurnedOn:(id)arg1;	// IMP=0x0010000000035dd8
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;	// IMP=0x0010000000035da2
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0010000000035d6c
- (void)startTransitionalDiscretionaryPeriodTimer;	// IMP=0x0010000000035d08
- (void)disableTransitionalDiscretionaryPeriodTimer;	// IMP=0x0010000000035cbf
- (void)setupTransitionalDiscretionaryPeriodTimer;	// IMP=0x0010000000035bf0
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000035a80
- (void)addObserver:(id)arg1;	// IMP=0x0010000000035854
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x00100000000357e5
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x0010000000035776
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x00100000000356ba
- (_Bool)canBeSuspended;	// IMP=0x00100000000356b2
- (_Bool)isForeground;	// IMP=0x0010000000035643
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003563b
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x0010000000035633
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x0010000000035511
- (void)_onqueue_resetRequestDelay;	// IMP=0x0010000000035459
- (void)setupDelayTimer;	// IMP=0x0010000000035382
- (_Bool)supportsWakes;	// IMP=0x001000000003537a
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x0010000000035372
- (id)containerURL;	// IMP=0x00100000000352fb
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000035185

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
