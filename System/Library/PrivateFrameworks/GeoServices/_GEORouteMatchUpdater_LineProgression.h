//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression
{
    GEOComposedTransitTripRouteStep *_boardStep;	// 48 = 0x30
    GEOComposedTransitTripRouteStep *_alightStep;	// 56 = 0x38
    struct PolylineCoordinate _startRouteCoordinate;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000119dbe3
- (void).cxx_destruct;	// IMP=0x000000000119dbb2
- (unsigned long long)priority;	// IMP=0x000000000119dba7
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000119d6cb
- (id)initWithTransitRouteMatcher:(id)arg1 tripSegment:(id)arg2;	// IMP=0x000000000119d520

@end

