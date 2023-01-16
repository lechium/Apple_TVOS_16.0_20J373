//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject
{
    id <MNNavigationServiceClientInterface> _delegate;	// 8 = 0x8
    unsigned long long _navigationServiceState;	// 16 = 0x10
    CDUnknownBlockType _navigationServiceActiveBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000234ba
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x0000000000023437
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x00000000000233db
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x000000000002337f
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x0000000000023323
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000232de
- (void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000023282
- (void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000023226
- (void)navigationSessionManager:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x00000000000231e1
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x0000000000023185
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x0000000000023129
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000230cd
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000023071
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000023015
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000022fb9
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000022f5d
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000022f18
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0000000000022ebc
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000022e60
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0000000000022e04
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0000000000022da8
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x0000000000022d63
- (void)navigationSessionManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0000000000022d07
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0000000000022cab
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x0000000000022c75
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x0000000000022c3f
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;	// IMP=0x0000000000022c09
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0000000000022b57
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x0000000000022b12
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x0000000000022a4c
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000229fd
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x00000000000229a1
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x000000000002292e
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000228d2
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x0000000000022876
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000002280b
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x00000000000227af
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;	// IMP=0x0000000000022779
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x00000000000226dc
- (void)navigationSessionManagerWillReroute:(id)arg1;	// IMP=0x00000000000226a6
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x000000000002263b
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x00000000000225f1
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x000000000002259f
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x0000000000022543
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00000000000224a6
- (void)navigationSessionManager:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x0000000000022461
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;	// IMP=0x000000000002242b
- (void)navigationSessionManagerWillPause:(id)arg1;	// IMP=0x00000000000223f5
- (void)navigationSessionManagerDidArrive:(id)arg1;	// IMP=0x00000000000223bf
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;	// IMP=0x0000000000022389
- (void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000000022319
- (void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000222ae
- (void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000022243
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000221e7
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000002219d
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000022153
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x0000000000022055
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x0000000000022010
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000021d9f
- (void)navigationSessionManager:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x0000000000021d8a
- (void)navigationSessionManager:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x0000000000021d45
- (void)navigationSessionManager:(id)arg1 willStopWithReason:(unsigned long long)arg2;	// IMP=0x0000000000021d00
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(long long)arg3 request:(id)arg4 response:(id)arg5 simulationType:(long long)arg6 isResumingMultipointRoute:(_Bool)arg7;	// IMP=0x0000000000021c40
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;	// IMP=0x0000000000021c1f
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000021b92
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000021b05
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x0000000000021a3c
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x0000000000021973
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021837
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000217b1
- (void)setSimulationPosition:(double)arg1;	// IMP=0x0000000000021716
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x000000000002167b
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x00000000000215e0
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x0000000000021517
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x000000000002144e
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000213b3
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x0000000000021318
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x0000000000021280
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000211a8
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x0000000000021110
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x0000000000021078
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x0000000000020fd4
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x0000000000020f34
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x0000000000020e9c
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x0000000000020e04
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x0000000000020d6c
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x0000000000020cd5
- (void)stopCurrentGuidancePrompt;	// IMP=0x0000000000020c80
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020ba8
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020adf
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020a16
- (void)changeUserOptions:(id)arg1;	// IMP=0x0000000000020915
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x000000000002087d
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000207b4
- (void)forceReroute;	// IMP=0x000000000002075f
- (void)resumeOriginalDestination;	// IMP=0x000000000002070a
- (void)updateDestination:(id)arg1;	// IMP=0x0000000000020641
- (void)advanceToNextLeg;	// IMP=0x00000000000205ec
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000020554
- (void)insertWaypoint:(id)arg1;	// IMP=0x000000000002048b
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x00000000000203c2
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x0000000000020229
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020022
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x000000000001fee2
- (void)reset;	// IMP=0x000000000001fdb1
- (void)start;	// IMP=0x000000000001fca9
- (void)dealloc;	// IMP=0x000000000001fbff
- (id)init;	// IMP=0x000000000001fba9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

