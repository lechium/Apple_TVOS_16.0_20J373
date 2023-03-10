//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFInstanceContext, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADDeviceResolutionServiceListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    AFInstanceContext *_instanceContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x001000000024e1a4
- (void)getDeviceContextAndProximityMapIncludingAllReachableDevice:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024dfd0
- (void)getDevicesMatchingCapabilityDescriptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024d85e
- (void)getSourceDeviceForContextWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024d403
- (void)getAllReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000024cee8
- (void)getContextAndProximitySnapshotForCurrentRequestForDeviceUnits:(id)arg1 serviceContexts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000024c8fb
- (void)logCrossDeviceCommandFailed:(id)arg1 action:(id)arg2 reason:(id)arg3;	// IMP=0x001000000024c7cd
- (void)_logAFAnalyticsCrossDeviceCommandHandledEventWithResult:(int)arg1 halActionResult:(int)arg2 contextProximityPairs:(id)arg3;	// IMP=0x001000000024c595
- (_Bool)_shouldLogAFAnalyticsCrossDeviceEvent:(id)arg1;	// IMP=0x001000000024c56b
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 actionResult:(id)arg3 homeKitTarget:(id)arg4 contextProximityPairs:(id)arg5;	// IMP=0x001000000024c347
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 homeKitTarget:(id)arg3 contextProximityPairs:(id)arg4;	// IMP=0x001000000024c31b
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 contextProximityPairs:(id)arg3;	// IMP=0x001000000024c2ee
- (void)logCrossDeviceCommandStarted:(id)arg1 action:(id)arg2;	// IMP=0x001000000024c1bd
- (void)logCrossDeviceRequestLink:(id)arg1 halId:(id)arg2;	// IMP=0x001000000024c0cc
- (void)logCrossDeviceRequestLink:(id)arg1 halRequestId:(id)arg2;	// IMP=0x001000000024c0ba
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000024bd6d
- (void)setupListener;	// IMP=0x001000000024bc54
- (id)initWithInstanceContext:(id)arg1 deviceCircleManager:(id)arg2;	// IMP=0x001000000024bacf
- (int)_halDevicePowerStateFromSystemStateSnapshot:(id)arg1;	// IMP=0x0010000000285f1f
- (int)_halDeviceFamilyFromInterfaceIdiom:(id)arg1;	// IMP=0x0010000000285e31
- (int)_halMediaPlayerStateFromPlaybackState:(long long)arg1;	// IMP=0x0010000000285e16
- (int)_halDeviceProximityFromProximity:(long long)arg1;	// IMP=0x0010000000285dcb
- (double)_generalizeTimeIntervalsForPrivacy:(double)arg1;	// IMP=0x0010000000285da8
- (id)_halDeviceFromContext:(id)arg1 proximity:(long long)arg2;	// IMP=0x001000000028530a
- (id)_crossDeviceCommandExecutionEndedEvent:(int)arg1 actionResult:(int)arg2 halId:(id)arg3 contextProximityPairs:(id)arg4 homeKitTarget:(int)arg5;	// IMP=0x0010000000284ff9
- (id)_crossDeviceCommandExecutionFailedEvent:(int)arg1 halId:(id)arg2;	// IMP=0x0010000000284e91
- (id)_crossDeviceCommandExecutionStartedEvent:(int)arg1 halId:(id)arg2;	// IMP=0x0010000000284d39
- (int)_halHomeKitTargetFromTarget:(id)arg1;	// IMP=0x0010000000284d12
- (int)_halActionFromAction:(id)arg1;	// IMP=0x0010000000284ceb
- (int)_halActionResultFromActionResult:(id)arg1;	// IMP=0x0010000000284cc4
- (id)_resultStringFromHALAction:(int)arg1 actionResult:(int)arg2;	// IMP=0x0010000000284b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

