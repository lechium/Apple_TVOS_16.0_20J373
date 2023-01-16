//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequest.h"

@class GEOMapAccess, GEOMapTileFinder, NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;	// 40 = 0x28
    CDStruct_34734122 _centerPoint;	// 48 = 0x30
    double _mapRadius;	// 64 = 0x40
    CDUnknownBlockType _edgeHandler;	// 72 = 0x48
    NSMutableSet *_edgeBuilders;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000dc5ad1
@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (_Bool)_checkEdgeForDuplicates:(const void *)arg1;	// IMP=0x0000000000dc5a97
- (void)_buildersInTile:(id)arg1 localPoint:(const void *)arg2 localRadiusSqr:(float)arg3 localSearch:(const void *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000dc5a82
- (void)findEdges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000dc5422
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;	// IMP=0x0000000000dc515d
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000dc5091

@end

