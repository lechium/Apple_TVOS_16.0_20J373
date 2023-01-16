//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSHashTable, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MNNavigationSessionLogger : NSObject
{
    NSUUID *_lastGuidanceSignID;	// 8 = 0x8
    NSArray *_lastARInfos;	// 16 = 0x10
    NSError *_previousSuppressedRerouteError;	// 24 = 0x18
    NSMutableDictionary *_displayETALookup;	// 32 = 0x20
    NSHashTable *_activeCameraInfos;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d7a2f
- (id)_stringForStyleAttributeKey:(unsigned int)arg1;	// IMP=0x00000000000d79e1
- (void)_updateCameraStyleAttributesForLocation:(id)arg1;	// IMP=0x00000000000d7070
- (id)_stringForLocationType:(unsigned long long)arg1;	// IMP=0x00000000000d7051
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6f9e
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000d6e43
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000d6c86
- (void)navigationSession:(id)arg1 didRemoveWaypoint:(id)arg2;	// IMP=0x00000000000d6baf
- (void)navigationSession:(id)arg1 didInsertWaypoint:(id)arg2;	// IMP=0x00000000000d6ad8
- (void)navigationSession:(id)arg1 didRerouteWithWaypoints:(id)arg2;	// IMP=0x00000000000d68a8
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x00000000000d67d1
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000d640c
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000d6353
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000d617b
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000000d5fa9
- (void)navigationSessionDidCancelReroute:(id)arg1;	// IMP=0x00000000000d5f3f
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;	// IMP=0x00000000000d5dbe
- (void)navigationSessionWillReroute:(id)arg1;	// IMP=0x00000000000d5d54
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000d5c16
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00000000000d59f3
- (void)navigationSessionDidArrive:(id)arg1;	// IMP=0x00000000000d5989
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000d591f
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x00000000000d5852
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000d57b6
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000d571a
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000d566c
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000d5151
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x00000000000d5096
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000d4f9d
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(_Bool)arg4 isReconnecting:(_Bool)arg5;	// IMP=0x00000000000d4b93
- (id)init;	// IMP=0x00000000000d4b45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

