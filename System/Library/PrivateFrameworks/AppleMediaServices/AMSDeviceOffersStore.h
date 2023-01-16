//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSDeviceOffersStore : NSObject
{
}

+ (id)serialsFromGroups:(id)arg1;	// IMP=0x001000000019a9be
+ (id)serialsBySubtractingAGroups:(id)arg1 fromBGroups:(id)arg2;	// IMP=0x001000000019a8da
+ (id)splitGroups:(id)arg1 byItem:(id)arg2;	// IMP=0x001000000019a592
- (void)removeCachedRegistrationItem:(id)arg1;	// IMP=0x000000000019a4b1
- (void)_dbSetNullableValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000019a3fb
@property(retain, nonatomic) NSArray *deviceOffers;
@property(retain, nonatomic) NSDictionary *deviceOfferEligibility;
@property(retain, nonatomic) NSArray *cachedRegistrationGroups;
@property(readonly, nonatomic) NSArray *companionSerialNumbers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

