//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapFeatureMultiSegmentRoadFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder
{
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;	// 40 = 0x28
    _Bool _joinAllRoadsByMuid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000761ef9
@property(nonatomic) _Bool joinAllRoadsByMuid; // @synthesize joinAllRoadsByMuid=_joinAllRoadsByMuid;
- (void)_tilesBorderingTile:(struct _GEOTileKey)arg1 atPoint:(struct GeoCodecsVectorTilePoint)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000761be6
- (id)findUnjoinedRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 requireExactMuidMatch:(_Bool)arg4 featureToIgnore:(id)arg5 handler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000760387
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 featureToIgnore:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000075fd80
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000075fd4b
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000075fbf5
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000075fa9f

@end

