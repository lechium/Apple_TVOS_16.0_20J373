//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadFinder
{
    struct unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> _roadsConsidered;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000eb3c4b
- (void).cxx_destruct;	// IMP=0x0000000000eb3bd9
- (_Bool)_checkEdgeForDuplicates:(const void *)arg1;	// IMP=0x0000000000eb3539
- (void)_buildersInTile:(id)arg1 localPoint:(const void *)arg2 localRadiusSqr:(float)arg3 localSearch:(const void *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000eb2dac
- (void)dealloc;	// IMP=0x0000000000eb2d7d
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000eb2c98

@end

