//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORouteHypothesisMonitor.h"

__attribute__((visibility("hidden")))
@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor
{
}

- (_Bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;	// IMP=0x000000000102d2d0
- (void)checkRouteForLocation:(id)arg1;	// IMP=0x000000000102ce43
- (void)_sendETARequestWithRouteMatch:(id)arg1 updater:(id)arg2;	// IMP=0x000000000102ccce
- (void)_fetchETAWithRouteMatch:(id)arg1;	// IMP=0x000000000102cc3b
- (void)_recalculateETAWithRouteMatch:(id)arg1;	// IMP=0x000000000102c71d

@end

