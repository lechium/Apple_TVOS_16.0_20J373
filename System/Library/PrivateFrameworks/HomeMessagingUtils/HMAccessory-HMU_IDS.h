//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

@interface HMAccessory (HMU_IDS)
+ (id)hmu_announceAccessoriesFromAccessories:(id)arg1;	// IMP=0x0020000000005c64
+ (id)hmu_accessoriesFromAccessories:(id)arg1 excludingStereoCompanionForAccessory:(id)arg2;	// IMP=0x0020000000005584
+ (id)hmu_accessoriesExcludingCurrentAccessoryFromAccessories:(id)arg1;	// IMP=0x0020000000005550
- (id)hmu_destinationForService:(id)arg1;	// IMP=0x0010000000004f0c
- (_Bool)hmu_isPartOfHome:(id)arg1;	// IMP=0x001000000000549c
@property(readonly, nonatomic) _Bool hmu_isAppleTV;
@property(readonly, nonatomic) _Bool hmu_isHomePod;
@property(readonly, nonatomic) _Bool hmu_isEndpoint;
@end

