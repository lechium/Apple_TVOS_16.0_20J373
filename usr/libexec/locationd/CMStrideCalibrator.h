//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, CMStrideCalLocationFSM, CMStrideCalibrationActivityBuffer, CMStrideCalibrationDatabase, CMStrideCalibrationElevationBuffer, CMStrideCalibrationRunningFormBuffer, CMStrideCalibrationStats, CMStrideCalibrationStepCountBuffer, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLIntersiloUniverse, CLStreamingAwareLocationProviderProtocol;

@interface CMStrideCalibrator : NSObject
{
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 8 = 0x8
    void *fServiceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>> fServiceLocationClient;	// 24 = 0x18
    id <CLClientAuthorizationCacheProtocol> fClientAuthorizationCache;	// 32 = 0x20
    struct unique_ptr<CLStreamingAwareLocationProvider_Type::Client, std::default_delete<CLStreamingAwareLocationProvider_Type::Client>> fStreamingAwareLocationClient;	// 40 = 0x28
    id <CLStreamingAwareLocationProviderProtocol> fStreamingAwareProxy;	// 48 = 0x30
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 56 = 0x38
    struct unique_ptr<CLMotionState_Type::Client, std::default_delete<CLMotionState_Type::Client>> fMotionStateClient;	// 64 = 0x40
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 72 = 0x48
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 80 = 0x50
    id <CLIntersiloUniverse> fUniverse;	// 88 = 0x58
    CLTimer *fStopOpportunisticCalibrationTimer;	// 96 = 0x60
    CMStrideCalibrationActivityBuffer *fActivityBuffer;	// 104 = 0x68
    CMStrideCalibrationElevationBuffer *fElevationBuffer;	// 112 = 0x70
    CMStrideCalibrationRunningFormBuffer *fFormBuffer;	// 120 = 0x78
    CMStrideCalibrationStepCountBuffer *fStepsBuffer;	// 128 = 0x80
    CMStrideCalibrationStats *fStats;	// 136 = 0x88
    CMStrideCalibrationDatabase *fDatabase;	// 144 = 0x90
    CMStrideCalLocationFSM *fStrideCalLocationFSM;	// 152 = 0x98
    NSMutableArray *fLatestCalDataArray;	// 160 = 0xa0
    shared_ptr_a3117978 fStepCountDb;	// 168 = 0xa8
    double fLastGoodLocFix;	// 184 = 0xb8
    long long fCurrentSession;	// 192 = 0xc0
    _Bool fLogPedometer;	// 200 = 0xc8
    CDUnknownBlockType _calibrationTrackCallback;	// 208 = 0xd0
}

- (id).cxx_construct;	// IMP=0x001000000036cb35
- (void).cxx_destruct;	// IMP=0x001000000036ca72
@property(copy, nonatomic) CDUnknownBlockType calibrationTrackCallback; // @synthesize calibrationTrackCallback=_calibrationTrackCallback;
- (_Bool)queryStrideLengthTracks:(void *)arg1;	// IMP=0x001000000036ca3d
- (id)copyHistory;	// IMP=0x001000000036ca24
- (void)updateUserHeight:(long long)arg1;	// IMP=0x001000000036ca0b
- (void)updateCalibrationBins:(double)arg1;	// IMP=0x001000000036be0a
- (_Bool)checkValidTrack:(id)arg1 associatedEntry:(const struct CLStepDistance *)arg2;	// IMP=0x001000000036b6ba
- (void)fsm:(id)arg1 didUpdateSource:(int)arg2;	// IMP=0x001000000036b6b4
- (void)fsm:(id)arg1 didUpdateLocationAtTime:(double)arg2;	// IMP=0x001000000036b2c7
- (void)fsm:(id)arg1 didYieldTrack:(id)arg2;	// IMP=0x001000000036b22e
- (void)fsm:(id)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;	// IMP=0x001000000036b02e
- (void)strideCalibrationDatabase:(id)arg1 didInsertEntry:(struct CLStrideCalEntry)arg2;	// IMP=0x001000000036af38
- (void)quitForcedLocationState;	// IMP=0x001000000036ae25
- (void)attemptForcedLocation;	// IMP=0x001000000036a9f9
- (void)checkForLocationStateTransition;	// IMP=0x001000000036a5c7
- (_Bool)outOfSession;	// IMP=0x001000000036a5b6
- (_Bool)inOutdoorPedestrianSession;	// IMP=0x001000000036a591
- (long long)currentSession;	// IMP=0x001000000036a584
- (void)tick:(double)arg1;	// IMP=0x001000000036a556
- (void)addLatestCalData:(id)arg1;	// IMP=0x001000000036a405
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x001000000036a3ec
- (void)setSession:(long long)arg1;	// IMP=0x001000000036a294
- (void)dealloc;	// IMP=0x001000000036a19c
- (id)initInUniverse:(id)arg1 stepCountDb:(shared_ptr_a3117978)arg2;	// IMP=0x0010000000369c40
- (void)onRunningFormMetrics:(const struct FormMetrics *)arg1;	// IMP=0x00100000005e1eab
- (void)authorizeLocationInReplay;	// IMP=0x00100000005e1ea5
- (void)onLocationNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x00100000005e1d28
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005e1cb6
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005e1c8c
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005e1c10
- (_Bool)isAuthorizedForLocation;	// IMP=0x00100000008a7811
- (void)checkLocationAuthorization;	// IMP=0x00100000008a76ed
- (void)tickleArrow;	// IMP=0x00100000008a76d5
- (void)stopLeechingLocation;	// IMP=0x00100000008a76a8
- (void)startLeechingLocation;	// IMP=0x00100000008a7678
- (void)stopLocationUpdates;	// IMP=0x00100000008a761d
- (void)startLocationUpdates;	// IMP=0x00100000008a75b7
- (void)stopGpsOdometerUpdates;	// IMP=0x00100000008a758a
- (void)startGpsOdometerUpdates;	// IMP=0x00100000008a755a
- (void)stopGpsOdometerSpectatorUpdates;	// IMP=0x00100000008a752d
- (void)startGpsOdometerSpectatorUpdates;	// IMP=0x00100000008a74fd
- (void)stopElevationSpectatorUpdates;	// IMP=0x00100000008a74d0
- (void)startElevationSpectatorUpdates;	// IMP=0x00100000008a74a0
- (void)stopElevationUpdates;	// IMP=0x00100000008a7473
- (void)startElevationUpdates;	// IMP=0x00100000008a7443
- (void)teardownCLNotifiers;	// IMP=0x00100000008a73c0
- (void)setupCLNotifiers;	// IMP=0x00100000008a6de4
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000008a79b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
