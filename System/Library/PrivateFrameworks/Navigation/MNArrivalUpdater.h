//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, MNDepartureUpdater, MNEVChargingStateMonitor, MNLocation, MNObserverHashTable, NSMutableArray, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MNArrivalUpdater : NSObject
{
    MNObserverHashTable *_safeDelegate;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    MNLocation *_lastLocation;	// 24 = 0x18
    unsigned long long _arrivalLegIndex;	// 32 = 0x20
    NSMutableArray *_timeoutRegions;	// 40 = 0x28
    MNEVChargingStateMonitor *_evChargingStateMonitor;	// 48 = 0x30
    _Bool _isCharging;	// 56 = 0x38
    MNDepartureUpdater *_departureUpdater;	// 64 = 0x40
    NSTimer *_departureTimer;	// 72 = 0x48
    unsigned long long _stateCaptureHandle;	// 80 = 0x50
    _Bool _isApproachingWaypoint;	// 88 = 0x58
    unsigned long long _arrivalState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000da51e
@property(nonatomic) unsigned long long arrivalState; // @synthesize arrivalState=_arrivalState;
@property(nonatomic) _Bool isApproachingWaypoint; // @synthesize isApproachingWaypoint=_isApproachingWaypoint;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x00000000000da39e
- (void)evChargingStateMonitor:(id)arg1 didChangeChargingState:(_Bool)arg2;	// IMP=0x00000000000da334
- (void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2;	// IMP=0x00000000000da2f6
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1;	// IMP=0x00000000000da1ff
- (void)arrivalRegionTimerDidFire:(id)arg1;	// IMP=0x00000000000da16a
- (void)_startMonitoringBatteryChargeForLegIndex:(unsigned long long)arg1;	// IMP=0x00000000000d9fac
- (void)_setArrivalForLegIndex:(unsigned long long)arg1;	// IMP=0x00000000000d9ef1
- (double)_distanceToEndOfLeg:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000000d9df1
- (_Bool)_checkArrival:(id)arg1 forLocation:(id)arg2;	// IMP=0x00000000000d9170
- (_Bool)_checkPreArrival:(id)arg1 forLocation:(id)arg2;	// IMP=0x00000000000d8d8d
- (_Bool)_checkApproachingForLocation:(id)arg1;	// IMP=0x00000000000d8c67
@property(readonly, nonatomic) _Bool isInPreArrivalRegion;
- (void)_updateForDepartureFromWaypointWithReason:(unsigned long long)arg1;	// IMP=0x00000000000d8c00
- (void)forceDepartureForCurrentLeg:(unsigned long long)arg1;	// IMP=0x00000000000d8bee
- (_Bool)allowDepartureForLocation:(id)arg1;	// IMP=0x00000000000d8a2e
- (void)setIsCharging:(_Bool)arg1 location:(id)arg2;	// IMP=0x00000000000d891b
- (void)updateForRoute:(id)arg1;	// IMP=0x00000000000d82d2
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000d7fc4
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000d7f39
- (void)dealloc;	// IMP=0x00000000000d7ee1
- (id)initWithRoute:(id)arg1;	// IMP=0x00000000000d7c96
- (id)init;	// IMP=0x00000000000d7c6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
