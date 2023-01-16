//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadGraph : NSObject
{
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _tiles;	// 8 = 0x8
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _duplicateTiles;	// 64 = 0x40
    NSMutableDictionary *_tileDatasByIndex;	// 120 = 0x78
    NSMutableArray *_junctions;	// 128 = 0x80
    NSMutableArray *_intersections;	// 136 = 0x88
    _Bool _oppositeCarriagewayJunctionsValid;	// 144 = 0x90
    NSMutableArray *_oppositeCarriagewayJunctions;	// 152 = 0x98
    Matrix_8746f91e _unitHeading;	// 160 = 0xa0
    _Bool _offRouteJunctionsValid;	// 168 = 0xa8
    Box_3d7e3c2c _offRouteJunctionSelectRect;	// 176 = 0xb0
    NSMutableArray *_offRouteJunctions;	// 208 = 0xd0
    struct PolylineCoordinate _routeUserOffset;	// 216 = 0xd8
    _Bool _routeFeatureMapValid;	// 224 = 0xe0
    struct unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> _routeFeatureMap;	// 232 = 0xe8
    _Bool _simplifiedRouteValid;	// 288 = 0x120
    struct vector<md::LabelPoint, geo::StdAllocator<md::LabelPoint, mdm::Allocator>> _simplifiedRoutePoints;	// 296 = 0x128
    unsigned long long _currentRoadStartSimplifiedPointIndex;	// 328 = 0x148
    _Bool _screenRouteValid;	// 336 = 0x150
    struct vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> _screenRouteSegments;	// 344 = 0x158
    unsigned long long _firstPOIAligningRouteSegment;	// 376 = 0x178
}

- (id).cxx_construct;	// IMP=0x0000000000706c38
- (void).cxx_destruct;	// IMP=0x0000000000706b3b
@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (id)_nextIntersectionForRoad:(id)arg1;	// IMP=0x000000000070685b
- (id)nextRoadSegmentForRoad:(id)arg1;	// IMP=0x0000000000706485
- (id)_findInterTileJunctionForJunction:(id)arg1;	// IMP=0x000000000070621c
- (id)_junctionForRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;	// IMP=0x000000000070602e
- (Matrix_8746f91e)unitHeading;	// IMP=0x0000000000706020
- (id)junctionForRoad:(id)arg1 nearJunction:(_Bool)arg2 crossTileEdge:(_Bool)arg3;	// IMP=0x0000000000705f0f
- (void)setTiles:(const void *)arg1;	// IMP=0x0000000000705bea
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg1 routeUserOffset:(struct PolylineCoordinate)arg2;	// IMP=0x0000000000705ba5
- (void)routeJunctionsHaveChanged;	// IMP=0x0000000000705a0c
- (void)reset;	// IMP=0x000000000070599b
- (id)initWithJunctions:(id)arg1;	// IMP=0x00000000007057eb
- (void)debugDraw:(id)arg1 overlayConsole:(void *)arg2 navContext:(struct NavContext *)arg3;	// IMP=0x000000000070bcfb
- (_Bool)prepareOppositeCarriagewayJunctions;	// IMP=0x000000000070ae0b
- (id)oppositeCarriagewayJunctions;	// IMP=0x000000000070adfa
- (unsigned char)computeRoutePositionForPOIAtPixel:(const void *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;	// IMP=0x000000000070aba2
- (_Bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float *)arg2 context:(struct NavContext *)arg3;	// IMP=0x000000000070aa5b
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg1;	// IMP=0x000000000070a14c
- (void)_updateSimplifiedRoute;	// IMP=0x0000000000709c29
- (_Bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;	// IMP=0x0000000000709979
- (void)_findOffRouteJunctions;	// IMP=0x00000000007096a1
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(_Bool)arg3;	// IMP=0x0000000000708ee7
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;	// IMP=0x000000000070884b
- (id)offRouteJunctionList;	// IMP=0x000000000070883a
- (id)junctionListForDepth:(unsigned long long)arg1;	// IMP=0x00000000007087b1
- (unsigned long long)countReadyJunctionLists;	// IMP=0x000000000070876d
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;	// IMP=0x00000000007078fa
- (_Bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(_Bool)arg4;	// IMP=0x000000000070718c
- (id)overpassJunctionForJunction:(id)arg1;	// IMP=0x0000000000706e56
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2 isRouteRefineJunction:(_Bool)arg3 tile:(const void *)arg4 junctionList:(id)arg5;	// IMP=0x0000000000706d28

@end

