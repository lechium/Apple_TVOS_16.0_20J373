//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDModeAssertion.h>

@class NSString;

@interface DNDModeAssertion (Resolution)
+ (id)predicateForModeAssertionsTakenBeforeDate:(id)arg1;	// IMP=0x001000000008e193
+ (id)predicateForModeAssertionsWithLifetimeClass:(Class)arg1;	// IMP=0x001000000008e091
+ (id)predicateForModeAssertionsWithModeIdentifiersNotContainedIn:(id)arg1;	// IMP=0x001000000008e06c
+ (id)predicateForModeAssertionsWithDeviceIdentifier:(id)arg1;	// IMP=0x001000000008e047
+ (id)predicateForModeAssertionsWithClientIdentifiers:(id)arg1;	// IMP=0x001000000008e022
+ (id)predicateForModeAssertionsWithUUIDs:(id)arg1;	// IMP=0x001000000008dffd
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;	// IMP=0x0010000000008e88
@property(readonly, nonatomic) _Bool isUserInitiated;
@property(readonly, nonatomic) _Bool isClientScheduled;
@property(readonly, nonatomic) _Bool isInternalScheduled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

