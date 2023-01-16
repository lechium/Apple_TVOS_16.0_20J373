//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapFeatureAccess, NSCache;

__attribute__((visibility("hidden")))
@interface GEOPathMatcherRoadLookup : NSObject
{
    GEOMapFeatureAccess *_mapFeatureAccess;	// 8 = 0x8
    NSCache *_roadsCache;	// 16 = 0x10
    unsigned long long _cacheMissCount;	// 24 = 0x18
    unsigned long long _mapFeatureRoadsCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000345ce3
- (id)description;	// IMP=0x0000000000345a79
- (void)_cacheRoad:(id)arg1;	// IMP=0x00000000003459ad
- (id)_roadForKey:(struct GEOPathMatcherRoadKey)arg1;	// IMP=0x0000000000345918
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey)arg1;	// IMP=0x000000000034572a
- (id)findRoadsNearCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;	// IMP=0x000000000034558a
- (id)findRoadWithMuid:(long long)arg1 nearCoordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000000345437
- (struct GEOPathMatcherRoadKey)flippedRoad:(struct GEOPathMatcherRoadKey)arg1;	// IMP=0x000000000034520a
- (id)roadForKey:(struct GEOPathMatcherRoadKey)arg1;	// IMP=0x0000000000344e33
- (struct GEOPathMatcherRoadKey)keyForRoad:(id)arg1;	// IMP=0x0000000000344d7b
- (void)dealloc;	// IMP=0x0000000000344c86
- (id)init;	// IMP=0x0000000000344b76

@end

