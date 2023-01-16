//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BLSHNullInactiveProcessBudget : NSObject
{
}

- (_Bool)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg1;	// IMP=0x00000000000248a2
- (void)performInvalidation;	// IMP=0x000000000002489c
- (void)invalidateAtRequestDate:(id)arg1 expectedFidelity:(long long)arg2 invalidationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024891
- (void)chargeRenderedSpecifier:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x000000000002488b
- (void)resetFutureSpecifiers;	// IMP=0x0000000000024885
- (id)validateAndChargeFutureSpecifier:(id)arg1 nextSpecifier:(id)arg2 expectedFidelity:(long long)arg3;	// IMP=0x000000000002486f
- (long long)allowedFidelityAtDate:(id)arg1 expectedFidelity:(long long)arg2;	// IMP=0x000000000002485c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

