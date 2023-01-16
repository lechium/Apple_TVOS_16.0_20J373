//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMZone.h>

@class NSArray;

@interface HMZone (HMUAdditions)
+ (id)hmu_zonesWithAnnounceAccessoriesFromZones:(id)arg1;	// IMP=0x0020000000002dcc
+ (id)hmu_zonesWithHomePodsFromZones:(id)arg1;	// IMP=0x0020000000002d65
+ (id)hmu_roomsInZones:(id)arg1 appendingRooms:(id)arg2;	// IMP=0x0020000000002ca6
+ (id)hmu_roomsInZones:(id)arg1;	// IMP=0x0020000000002c1a
+ (id)hmu_uniqueIdentifiersFromZones:(id)arg1;	// IMP=0x0020000000002be9
+ (id)hmu_accessoriesInZones:(id)arg1;	// IMP=0x0020000000002b5d
@property(readonly, nonatomic) NSArray *hmu_homePods;
@property(readonly, nonatomic) NSArray *hmu_accessories;
@end
