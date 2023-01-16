//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedETARoute, GEODataRequestThrottlerToken, GEOETATrafficUpdateRequest, GEOLatLng, GEOTransitRouteUpdater, NSDate, NSError, NSMutableDictionary, NSString, NSTimer;
@protocol MNSessionUpdateManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNSessionUpdateManager : NSObject
{
    id <MNSessionUpdateManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_requestingAppIdentifier;	// 16 = 0x10
    GEOApplicationAuditToken *_auditToken;	// 24 = 0x18
    GEODataRequestThrottlerToken *_throttleToken;	// 32 = 0x20
    GEOLatLng *_tripOrigin;	// 40 = 0x28
    GEOTransitRouteUpdater *_transitUpdater;	// 48 = 0x30
    NSMutableDictionary *_subscribers;	// 56 = 0x38
    NSTimer *_etaTimer;	// 64 = 0x40
    double _etaRequestInterval;	// 72 = 0x48
    double _initialRequestDelay;	// 80 = 0x50
    double _opportunisticRequestTimeWindow;	// 88 = 0x58
    NSDate *_dateOfLastUpdate;	// 96 = 0x60
    _Bool _lastRequestWasServerDriven;	// 104 = 0x68
    unsigned long long _maxAlternateRoutesCount;	// 112 = 0x70
    _Bool _isPaused;	// 120 = 0x78
    GEOETATrafficUpdateRequest *_pendingETARequest;	// 128 = 0x80
    GEOComposedETARoute *_pendingETARoute;	// 136 = 0x88
    NSError *_retryError;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000e9c9d
@property(retain, nonatomic) GEOLatLng *tripOrigin; // @synthesize tripOrigin=_tripOrigin;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount;
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttleToken; // @synthesize throttleToken=_throttleToken;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) __weak id <MNSessionUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasAtLeastOneActiveSubscriber;	// IMP=0x00000000000e9b27
- (void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000e98f4
- (void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;	// IMP=0x00000000000e96c7
- (void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;	// IMP=0x00000000000e965a
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000000e95ed
- (void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;	// IMP=0x00000000000e9580
- (id)_serverDisplayETAForResponseInfo:(id)arg1;	// IMP=0x00000000000e9508
- (void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 etaRoute:(id)arg3;	// IMP=0x00000000000e8d0b
- (id)_updateWaypointsForRequest:(id)arg1 routeInfo:(id)arg2 userLocation:(id)arg3 etaRoute:(id)arg4;	// IMP=0x00000000000e86a7
- (id)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3;	// IMP=0x00000000000e8166
- (id)_baseETARequest;	// IMP=0x00000000000e7ed8
- (void)_sendETARequestWithRouteAttributes:(id)arg1;	// IMP=0x00000000000e5f3d
- (void)_sendETARequest;	// IMP=0x00000000000e5f29
- (void)_updateRouteAttributesFor:(id)arg1 route:(id)arg2 updatedLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e5a02
- (void)_cancelPendingETARequest;	// IMP=0x00000000000e5885
- (void)_terminateETARequests;	// IMP=0x00000000000e5764
- (void)_continueETARequests;	// IMP=0x00000000000e56cb
- (void)_scheduleETATimerWithInterval:(double)arg1;	// IMP=0x00000000000e5489
- (void)resumeUpdateRequestsForSubscriber:(id)arg1;	// IMP=0x00000000000e52a1
- (void)pauseUpdateRequestsForSubscriber:(id)arg1;	// IMP=0x00000000000e509a
- (void)requestUpdateForETAUPosition:(id)arg1;	// IMP=0x00000000000e4d46
- (void)requestImmediateUpdate;	// IMP=0x00000000000e4c62
- (void)restartUpdateTimer;	// IMP=0x00000000000e4b71
- (void)stopUpdateRequests;	// IMP=0x00000000000e4a77
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(long long)arg2;	// IMP=0x00000000000e438b
- (void)dealloc;	// IMP=0x00000000000e42cf
- (id)init;	// IMP=0x00000000000e4200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

