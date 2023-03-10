//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapFeatureMultiSegmentRoadFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureRoadFinder
{
    _Bool _flipNegativeTravelDirectionRoads;	// 40 = 0x28
    _Bool _visitDoubleTravelDirectionRoadsTwice;	// 41 = 0x29
    _Bool _joinAllRoadsByMuid;	// 42 = 0x2a
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000010a8f78
@property(nonatomic) _Bool joinAllRoadsByMuid; // @synthesize joinAllRoadsByMuid=_joinAllRoadsByMuid;
@property(nonatomic) _Bool visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice;
@property(nonatomic) _Bool flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads;
- (id)_multiSegmentRoadFinder;	// IMP=0x00000000010a8e80
- (id)_findUnjoinedRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000010a8c0e
- (id)_findUnjoinedRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000010a84bf
- (id)findRoadWithMuid:(unsigned long long)arg1 nearCoordinate:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000010a7ec7
- (id)findRoadWithID:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000010a7735
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000010a7427

@end

