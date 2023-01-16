//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavJunction : NSObject
{
    struct shared_ptr<md::LabelTile> _tile;	// 8 = 0x8
    Matrix_8746f91e _tileCoordinate;	// 24 = 0x18
    struct GeoCodecsConnectivityJunction *_geoJunction;	// 32 = 0x20
    struct PolylineCoordinate _routeOffset;	// 40 = 0x28
    NSMutableArray *_roads;	// 48 = 0x30
    VKLabelNavRoad *_incomingRoad;	// 56 = 0x38
    VKLabelNavRoad *_outgoingRoad;	// 64 = 0x40
    float _distanceFromPreviousShieldLabel;	// 72 = 0x48
    int _preferredLabelPlacement;	// 76 = 0x4c
    _Bool _isOnDualCarriageway;	// 80 = 0x50
    _Bool _hasSharedRouteDirection;	// 81 = 0x51
    Matrix_8746f91e _sharedRouteDirection;	// 84 = 0x54
    _Bool _foundRoads;	// 92 = 0x5c
    _Bool _isOverpass;	// 93 = 0x5d
    _Bool _isRouteOverpass;	// 94 = 0x5e
    int _largestRoadClass;	// 96 = 0x60
    void *_labelFeature;	// 104 = 0x68
    NSString *_name;	// 112 = 0x70
    VKLabelNavRoadLabel *_junctionSign;	// 120 = 0x78
    _Bool _areLabelsDisabled;	// 128 = 0x80
    unsigned long long _depthFromRoute;	// 136 = 0x88
    double _worldUnitsPerMeter;	// 144 = 0x90
    VKLabelNavJunction *_overpassJunction;	// 152 = 0x98
    _Bool _cachedSignVisibility[8];	// 160 = 0xa0
    _Bool _isVisibilityCached[8];	// 168 = 0xa8
    _Bool _isVisible;	// 176 = 0xb0
    _Bool _isPicked;	// 177 = 0xb1
    Mercator3_d8bb135c _mercatorCoordinate;	// 184 = 0xb8
    double _sortValue;	// 208 = 0xd0
    _Bool _isRouteRefineJunction;	// 216 = 0xd8
}

- (id).cxx_construct;	// IMP=0x00000000006b151a
- (void).cxx_destruct;	// IMP=0x00000000006b14c0
@property(readonly, nonatomic) const void *tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) const void *mercatorCoordinate; // @synthesize mercatorCoordinate=_mercatorCoordinate;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // @synthesize junctionSign=_junctionSign;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isRouteRefineJunction; // @synthesize isRouteRefineJunction=_isRouteRefineJunction;
@property(nonatomic) _Bool isRouteOverpass; // @synthesize isRouteOverpass=_isRouteOverpass;
@property(readonly, nonatomic) _Bool isOverpass; // @synthesize isOverpass=_isOverpass;
@property(nonatomic) __weak VKLabelNavJunction *overpassJunction; // @synthesize overpassJunction=_overpassJunction;
@property(nonatomic) unsigned long long depthFromRoute; // @synthesize depthFromRoute=_depthFromRoute;
@property(nonatomic) Matrix_8746f91e sharedRouteDirection; // @synthesize sharedRouteDirection=_sharedRouteDirection;
@property(readonly, nonatomic) _Bool hasSharedRouteDirection; // @synthesize hasSharedRouteDirection=_hasSharedRouteDirection;
@property(nonatomic) _Bool isOnDualCarriageway; // @synthesize isOnDualCarriageway=_isOnDualCarriageway;
@property(nonatomic) float distanceFromPreviousShieldLabel; // @synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel;
@property(nonatomic) int preferredLabelPlacement; // @synthesize preferredLabelPlacement=_preferredLabelPlacement;
@property(readonly, nonatomic) __weak VKLabelNavRoad *incomingRoad; // @synthesize incomingRoad=_incomingRoad;
@property(readonly, nonatomic) __weak VKLabelNavRoad *outgoingRoad; // @synthesize outgoingRoad=_outgoingRoad;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) Matrix_8746f91e tileCoordinate; // @synthesize tileCoordinate=_tileCoordinate;
@property(readonly, nonatomic) const struct GeoCodecsConnectivityJunction *geoJunction; // @synthesize geoJunction=_geoJunction;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(_Bool)arg2 artworkCache:(void *)arg3;	// IMP=0x00000000006b0c85
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;	// IMP=0x00000000006b09a8
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void)layoutWithNavContext:(struct NavContext *)arg1;	// IMP=0x00000000006b0941
- (void)_updateWithNavContext:(struct NavContext *)arg1;	// IMP=0x00000000006b092c
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;	// IMP=0x00000000006b08ae
- (Mercator3_d8bb135c)_anchorCoordinateForSignOrientation:(unsigned char)arg1;	// IMP=0x00000000006b070a
- (unsigned char)_signOrientationWithDrivingSide:(_Bool)arg1;	// IMP=0x00000000006b035d
@property(readonly, nonatomic) double worldUnitsPerMeter; // @synthesize worldUnitsPerMeter=_worldUnitsPerMeter;
@property(readonly, nonatomic) int requiredLabelPlacement;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;	// IMP=0x00000000006af61f
- (void)evaluateCrossStreets;	// IMP=0x00000000006af60a
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2;	// IMP=0x00000000006af3b1
- (void)findRoads;	// IMP=0x00000000006aedb7
@property(readonly, nonatomic) int largestRoadClass;
@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
@property(readonly, nonatomic) _Bool isMultiRoadIntersection;
@property(readonly, nonatomic) _Bool isIntraRamp;
@property(readonly, nonatomic) _Bool isOffRouteGraph;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property(readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property(readonly, nonatomic) _Bool isIntersection;
@property(readonly, nonatomic) _Bool isOnRoute;
@property(readonly, nonatomic) _Bool isRoadTerminus;
@property(readonly, nonatomic) _Bool isTileEdgeJunction;
- (_Bool)matchesLocationForJunction:(id)arg1;	// IMP=0x00000000006ae6f2
- (id)description;	// IMP=0x00000000006ae64a
- (void)dealloc;	// IMP=0x00000000006ae5d1
- (id)initWithRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;	// IMP=0x00000000006ae357
- (id)initWithGEOJunction:(struct GeoCodecsConnectivityJunction *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(const void *)arg3;	// IMP=0x00000000006ae092

@end

