//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLMobilityHealthKitWriter, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLMobilityWalkingBoutService : CLIntersiloService
{
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 8 = 0x8
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 16 = 0x10
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> fDaemonStatusClient;	// 24 = 0x18
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> fMotionStateObserverClient;	// 32 = 0x20
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 40 = 0x28
    struct shared_ptr<CLMobility::BoutBoundaryRecorderDb> fBoutBoundaryDb;	// 48 = 0x30
    struct unique_ptr<CLActivityAggregator<CLMobility::BoutBoundary>, std::default_delete<CLActivityAggregator<CLMobility::BoutBoundary>>> fBoutBoundaryAggregator;	// 64 = 0x40
    struct shared_ptr<CLMobility::GaitMetricsRecorderDb> fGaitMetricsDb;	// 72 = 0x48
    struct unique_ptr<CLActivityAggregator<CLMobility::GaitMetrics>, std::default_delete<CLActivityAggregator<CLMobility::GaitMetrics>>> fGaitMetricsAggregator;	// 88 = 0x58
    struct shared_ptr<CLMobility::BoutMetricsRecorderDb> fBoutMetricsDb;	// 96 = 0x60
    struct unique_ptr<CLActivityAggregator<CLMobility::BoutMetrics>, std::default_delete<CLActivityAggregator<CLMobility::BoutMetrics>>> fBoutMetricsAggregator;	// 112 = 0x70
    shared_ptr_a3117978 fPedometerDb;	// 120 = 0x78
    struct shared_ptr<CLMobility::HealthKitQueryDelegate> fHKQueryDelegate;	// 136 = 0x88
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 152 = 0x98
    struct unique_ptr<CLMobility::WalkingBoutExtractor, std::default_delete<CLMobility::WalkingBoutExtractor>> fBoutExtractor;	// 160 = 0xa0
    struct unique_ptr<CLMobility::WalkingSteadinessClassifier, std::default_delete<CLMobility::WalkingSteadinessClassifier>> fSteadinessClassifier;	// 168 = 0xa8
    _Bool fClassificationInProgress;	// 176 = 0xb0
    _Bool fIsMigrationComplete;	// 177 = 0xb1
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLMobility::SPUGaitMetrics>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLMobility::SPUGaitMetrics>>> fSPUGaitMetricsDispatcher;	// 184 = 0xb8
    CLMobilityHealthKitWriter *fHealthKitWriter;	// 192 = 0xc0
    struct CLBodyMetrics _previousBodyMetrics;	// 200 = 0xc8
    NSMutableSet *_boutClients;	// 264 = 0x108
    NSMutableSet *_steadinessClients;	// 272 = 0x110
}

+ (_Bool)isSupported;	// IMP=0x00200000006bd649
+ (id)getSilo;	// IMP=0x00100000006bd4f6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006bd4dd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006bd480
- (id).cxx_construct;	// IMP=0x00200000006c7f83
- (void).cxx_destruct;	// IMP=0x00100000006c7e19
@property(retain, nonatomic) NSMutableSet *steadinessClients; // @synthesize steadinessClients=_steadinessClients;
@property(retain, nonatomic) NSMutableSet *boutClients; // @synthesize boutClients=_boutClients;
- (void)unregisterForWalkingSteadiness:(byref id)arg1;	// IMP=0x00100000006c7c76
- (void)registerForWalkingSteadiness:(byref id)arg1;	// IMP=0x00100000006c7b17
- (void)unregisterForMobilityBoutMetrics:(byref id)arg1;	// IMP=0x00100000006c79b8
- (void)registerForMobilityBoutMetrics:(byref id)arg1;	// IMP=0x00100000006c7859
- (void)setUpAggregationOnTimer;	// IMP=0x00100000006c7304
- (void)setUpProcessBoutsActivity;	// IMP=0x00100000006c6fe3
- (void)setUpClassificationActivityWithDeferral:(_Bool)arg1;	// IMP=0x00100000006c6825
- (void)sendAnalyticsSteadinessResult:(struct Result)arg1;	// IMP=0x00100000006c5077
- (void)sendAnalyticsBoutMetrics:(vector_c734fc51)arg1;	// IMP=0x00100000006c333b
- (float)BMIFromHeight:(float)arg1 weight:(float)arg2;	// IMP=0x00100000006c331d
- (void)checkForHistoricalComputeTrigger:(struct CLBodyMetrics)arg1;	// IMP=0x00100000006c2cac
- (void)classifySteadinessWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c0c70
- (void)handleBoutResults:(vector_c734fc51)arg1;	// IMP=0x00100000006c0621
- (void)checkForBoutsReadyToProcessWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c018e
- (void)onAggregationTimer;	// IMP=0x00100000006bf519
- (void)onDataCollectionRequested:(CDUnknownBlockType)arg1;	// IMP=0x00100000006bf16c
- (void)onMobilityClassificationActivity:(id)arg1;	// IMP=0x00100000006bedf1
- (void)onMobilityProcessBoutsActivity:(id)arg1;	// IMP=0x00100000006be9b0
- (void)onSPUGaitMetrics:(const struct SPUGaitMetrics *)arg1;	// IMP=0x00100000006be8d2
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006be872
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_913f635f *)arg2;	// IMP=0x00100000006be816
- (void)onStatusNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006be790
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006be516
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000006be3bf
- (void)endService;	// IMP=0x00100000006be252
- (void)beginService;	// IMP=0x00100000006bd68f
- (void)dealloc;	// IMP=0x00100000006bd5df
- (id)init;	// IMP=0x00100000006bd552

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

