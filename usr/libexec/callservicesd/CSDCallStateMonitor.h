//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDRouteManager, NSString, TUCallCenter;
@protocol CSDCallContainer, OS_dispatch_queue, OS_dispatch_source;

@interface CSDCallStateMonitor : NSObject
{
    _Bool _audioMutedForHoldMusic;	// 8 = 0x8
    int _requestCLTMThrottleUncapToken;	// 12 = 0xc
    int _lockStateNotificationToken;	// 16 = 0x10
    TUCallCenter *_callCenter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_callDurationLimitTimer;	// 40 = 0x28
    CDUnknownBlockType _setUpBreakBeforeMakeTimeout;	// 48 = 0x30
}

+ (double)breakBeforeMakeTimeout;	// IMP=0x0020000000051956
- (void).cxx_destruct;	// IMP=0x0020000000055433
@property(copy, nonatomic) CDUnknownBlockType setUpBreakBeforeMakeTimeout; // @synthesize setUpBreakBeforeMakeTimeout=_setUpBreakBeforeMakeTimeout;
@property(nonatomic) int lockStateNotificationToken; // @synthesize lockStateNotificationToken=_lockStateNotificationToken;
@property(nonatomic) int requestCLTMThrottleUncapToken; // @synthesize requestCLTMThrottleUncapToken=_requestCLTMThrottleUncapToken;
- (void);	// IMP=0x00100000000553ed
@property(nonatomic, getter=isAudioMutedForHoldMusic) _Bool audioMutedForHoldMusic; // @synthesize audioMutedForHoldMusic=_audioMutedForHoldMusic;
@property(retain) NSObject<OS_dispatch_source> *callDurationLimitTimer; // @synthesize callDurationLimitTimer=_callDurationLimitTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x0010000000055299
- (void)setHeySiriEnabled:(_Bool)arg1;	// IMP=0x0010000000055293
- (void)_updateCallMutingForHoldMusic;	// IMP=0x0010000000054eb7
- (void)_handleCallDurationTimerFired;	// IMP=0x0010000000054a7c
- (void)_setUpCallDurationLimitIfNecessary;	// IMP=0x0010000000054650
- (id)_ringingTimerForCallWithIdentifier:(id)arg1;	// IMP=0x0010000000054256
- (void)_handleAudioReadyForCall:(id)arg1;	// IMP=0x00100000000540f2
- (void)_setUpBreakBeforeMakeTimeoutIfNecessaryForCall:(id)arg1;	// IMP=0x0010000000053c95
- (void)_pushCallToAlternateDestinationIfNecessary:(id)arg1;	// IMP=0x0010000000053851
- (void)_disconnectOrPullExistingCallsForCallIfNecessary:(id)arg1;	// IMP=0x0010000000053458
- (void)_notifyCLTMOfIncomingCall;	// IMP=0x001000000005337d
- (void)_handleLockStateChanged;	// IMP=0x0010000000053377
- (void)enableEmergencyModeIfNecessaryForCall:(id)arg1;	// IMP=0x0010000000053221
- (void)_handleCallWantsHoldMusicChanged:(id)arg1;	// IMP=0x001000000005320f
- (void)_handleCallMayRequireBreakBeforeMakeChanged:(id)arg1;	// IMP=0x00100000000531fd
- (void)disconnectActiveCallsBasedOnCallStatusForCall:(id)arg1;	// IMP=0x0010000000052e64
- (void)disconnectAllCallsBesides:(id)arg1;	// IMP=0x0010000000052b30
- (void)_handleCallConnected:(id)arg1;	// IMP=0x0010000000052a11
- (void)handleCallUpgradedToVideoNotification:(id)arg1;	// IMP=0x0010000000052869
- (void)handleCallOneToOneModeChangedNotification:(id)arg1;	// IMP=0x0010000000052639
- (void)callIsOnHoldChangedNotification:(id)arg1;	// IMP=0x00100000000524fb
- (void)leaveAVLessConversationsIfNecessaryForCall:(id)arg1;	// IMP=0x0010000000052134
- (void)_handleCallStartedConnecting:(id)arg1;	// IMP=0x0010000000052054
- (void)_handleCallStatusChanged:(id)arg1;	// IMP=0x00100000000519f1
- (void)_handleCallHasStartedOutgoingChanged:(id)arg1;	// IMP=0x00100000000519df
- (_Bool)wantsBreakBeforeMakeForCall:(id)arg1;	// IMP=0x00100000000516c6
@property(readonly, nonatomic) CSDRouteManager *routeManager;
@property(readonly, nonatomic) id <CSDCallContainer> callContainer;
- (void)_cleanCallMediaCache;	// IMP=0x00100000000512b0
- (void)handleCallWantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x0010000000051261
- (void)handleCallMayRequireBreakBeforeMakeChangedNotification:(id)arg1;	// IMP=0x0010000000051212
- (void)handleCallConnectedNotification:(id)arg1;	// IMP=0x00100000000511c3
- (void)handleCallStartedConnectingNotification:(id)arg1;	// IMP=0x0010000000051174
- (void)handleCallStatusChangedNotification:(id)arg1;	// IMP=0x001000000005102e
- (void)handleCallHasStartedOutgoingChangedNotification:(id)arg1;	// IMP=0x0010000000050fdf
- (void)dealloc;	// IMP=0x0010000000050efe
- (id)initWithCallCenter:(id)arg1;	// IMP=0x0010000000050b10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

