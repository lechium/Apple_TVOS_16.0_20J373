//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_AlightExit
{
    GEOPBTransitStop *_alightStop;	// 48 = 0x30
    GEOPBTransitStation *_alightStation;	// 56 = 0x38
    struct PolylineCoordinate _routeCoordinateAlightStation;	// 64 = 0x40
    GEOComposedRouteStep *_alightStep;	// 72 = 0x48
    GEOComposedRouteStep *_postAlightStep;	// 80 = 0x50
    GEOComposedRouteStep *_postAlightWalkingStep;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x000000000119cbe7
- (void).cxx_destruct;	// IMP=0x000000000119cb83
- (_Bool)_isLocationNearAlightNode:(id)arg1;	// IMP=0x000000000119caf9
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000119c583
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2;	// IMP=0x000000000119c118

@end
