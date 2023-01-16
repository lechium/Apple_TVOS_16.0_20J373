//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, MISSING_TYPE, NSString;
@protocol CLLocationStreamingConnectionManagerServiceProtocol;

@interface CLLocationStreamer : CLIntersiloService
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationClient;	// 8 = 0x8
    struct unique_ptr<CLRollingPowerAssertion, std::default_delete<CLRollingPowerAssertion>> _locationAssertion;	// 16 = 0x10
    struct unique_ptr<CLMotionState_Type::Client, std::default_delete<CLMotionState_Type::Client>> _motionStateClient;	// 24 = 0x18
    struct unique_ptr<CLRollingPowerAssertion, std::default_delete<CLRollingPowerAssertion>> _motionAlarmAssertion;	// 32 = 0x20
    struct unique_ptr<CLMotionActivity, std::default_delete<CLMotionActivity>> _lastMotionActivity;	// 40 = 0x28
    MISSING_TYPE *_locationUpdatesIncludeMotionState;	// 48 = 0x30
    _Bool _clientActivityTypeFitnessActive;	// 49 = 0x31
    _Bool _clientActivityTypeAirborneActive;	// 50 = 0x32
    _Bool _motionAlarmActive;	// 51 = 0x33
    _Bool _isSubscribedForMotion;	// 52 = 0x34
    _Bool _emergencyEnablementAssertionActive;	// 53 = 0x35
    _Bool _clientMapMatchingActive;	// 54 = 0x36
    int _currentGranularity;	// 56 = 0x38
    CLTimer *_resendMotionStateTimer;	// 64 = 0x40
    id <CLLocationStreamingConnectionManagerServiceProtocol> _streamingConnection;	// 72 = 0x48
    CLTimer *_aliveAgainThrottleTimer;	// 80 = 0x50
}

+ (_Bool)isSupported;	// IMP=0x00200000003561b2
+ (id)getSilo;	// IMP=0x0010000000356156
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000035613d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003560e0
- (id).cxx_construct;	// IMP=0x0020000000359155
- (void).cxx_destruct;	// IMP=0x00100000003590c4
@property(retain, nonatomic) CLTimer *aliveAgainThrottleTimer; // @synthesize aliveAgainThrottleTimer=_aliveAgainThrottleTimer;
@property(retain, nonatomic) id <CLLocationStreamingConnectionManagerServiceProtocol> streamingConnection; // @synthesize streamingConnection=_streamingConnection;
@property(nonatomic, getter=isClientMapMatchingActive) _Bool clientMapMatchingActive; // @synthesize clientMapMatchingActive=_clientMapMatchingActive;
@property(nonatomic) _Bool emergencyEnablementAssertionActive; // @synthesize emergencyEnablementAssertionActive=_emergencyEnablementAssertionActive;
@property(retain, nonatomic) CLTimer *resendMotionStateTimer; // @synthesize resendMotionStateTimer=_resendMotionStateTimer;
@property(nonatomic) _Bool isSubscribedForMotion; // @synthesize isSubscribedForMotion=_isSubscribedForMotion;
@property(nonatomic) _Bool motionAlarmActive; // @synthesize motionAlarmActive=_motionAlarmActive;
@property(nonatomic, getter=isClientActivityTypeAirborneActive) _Bool clientActivityTypeAirborneActive; // @synthesize clientActivityTypeAirborneActive=_clientActivityTypeAirborneActive;
@property(nonatomic, getter=isClientActivityTypeFitnessActive) _Bool clientActivityTypeFitnessActive; // @synthesize clientActivityTypeFitnessActive=_clientActivityTypeFitnessActive;
@property(nonatomic) _Bool locationUpdatesIncludeMotionState; // @synthesize locationUpdatesIncludeMotionState=_locationUpdatesIncludeMotionState;
@property(nonatomic) int currentGranularity; // @synthesize currentGranularity=_currentGranularity;
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x0010000000358e4d
- (void)successfullySentMessage:(id)arg1;	// IMP=0x0010000000358d67
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x0010000000358c5b
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x001000000035884c
- (void)onMotionStateNotification:(const int *)arg1 withData:(const union NotificationData *)arg2;	// IMP=0x001000000035855c
- (void)sendMotionState;	// IMP=0x00100000003583b1
- (void)stopMotionAlarm;	// IMP=0x0010000000358284
- (void)startMotionAlarm;	// IMP=0x001000000035815f
- (void)reevaluateMotionSubscription;	// IMP=0x0010000000357f82
- (void)onLocationNotification:(const int *)arg1 withData:(const void *)arg2;	// IMP=0x0010000000357a31
- (void)startUpdatingLocationWithGranularity:(int)arg1 includeMotion:(_Bool)arg2 inFitnessSession:(_Bool)arg3 inAirborneSession:(_Bool)arg4 emergencyEnablementAssertionActive:(_Bool)arg5 hasMapMatching:(_Bool)arg6;	// IMP=0x0010000000357614
- (void)stopLocation;	// IMP=0x0010000000357024
- (void)unregisterAllLocationNotifications;	// IMP=0x0010000000356f9e
- (void)sendAliveAgainMessage;	// IMP=0x0010000000356e0c
- (void)endService;	// IMP=0x0010000000356ce7
- (void)beginService;	// IMP=0x0010000000356257
- (id)init;	// IMP=0x001000000035621a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

