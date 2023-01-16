//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice
{
}

+ (id)requirementIdentifier;	// IMP=0x0010000000154673
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x0000000000154917
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000001547da
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000154761
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
