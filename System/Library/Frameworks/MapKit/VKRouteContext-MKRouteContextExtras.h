//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKRouteContext.h>

@class NSString;

@interface VKRouteContext (MKRouteContextExtras)
- (id)_routeInfoForRoute:(id)arg1;	// IMP=0x002000000010c2e2
- (void)_updateChargingStationTexts;	// IMP=0x002000000010cd11
- (void)_setAlternateRouteContextAnnotationETAComparison:(unsigned char)arg1 forRoute:(id)arg2;	// IMP=0x002000000010cb22
- (void)_setRouteContextAnnotationFocus:(_Bool)arg1 forRoute:(id)arg2;	// IMP=0x002000000010cabf
- (void)_setRouteContextAnnotationTexts:(id)arg1 forLegsInRoute:(id)arg2;	// IMP=0x002000000010c72a
- (void)_setRouteContextAnnotationText:(id)arg1 advisoryStyleAttributes:(id)arg2 forRoute:(id)arg3;	// IMP=0x002000000010c63c
- (void)_setRouteContextAnnotationText:(id)arg1 tollCurrency:(unsigned char)arg2 forRoute:(id)arg3;	// IMP=0x002000000010c56e
- (void)_setRouteContextInspectedSegmentIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;	// IMP=0x002000000010c531

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

