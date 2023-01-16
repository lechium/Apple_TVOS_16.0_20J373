//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AddressObject;

struct Angle {
    unsigned short _field1;
};

struct Arena;

struct ArenaStringPtr {
    struct TaggedPtr<std::string> _field1;
};

struct Box<float, 2> {
    Matrix_8746f91e _field1;
    Matrix_8746f91e _field2;
};

struct CAARiseTransitSetDetails {
    _Bool bRiseValid;
    double Rise;
    _Bool bTransitValid;
    _Bool bTransitAboveHorizon;
    double Transit;
    _Bool bSetValid;
    double Set;
};

struct CGSize {
    double width;
    double height;
};

struct CachedSize {
    struct atomic<int> _field1;
};

struct ControlPoint {
    int _field1;
    struct GeoCoordinates _field2;
    struct Angle _field3;
    struct FormOfWay _field4;
    struct FunctionalClass _field5;
    int _field6;
};

struct DispatchTimer;

struct Entry;

struct ErrorInfo;

struct FormOfWay {
    int _field1;
};

struct FunctionalClass {
    int _field1;
};

struct GEOCoarseLocationLatLng {
    double _lat;
    double _lng;
};

struct GEOCoarseLocationPoint {
    int _field1;
    int _field2;
};

struct GEOFlyoverRegion {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    CDStruct_8a1bf2a3 _field4;
};

struct GEOGenericTile {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    CDStruct_8a1bf2a3 _field4;
};

struct GEOHighlight {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    CDStruct_8a1bf2a3 _field4;
};

struct GEOJunctionElement {
    int _field1;
    int _field2;
    int _field3;
    CDStruct_8a1bf2a3 _field4;
};

struct GEOOnce_s {
    struct os_unfair_lock_s lock;
    _Bool didRun;
};

struct GEOPBTransitTimeRange {
    unsigned int _duration;
    unsigned int _startTime;
    CDStruct_beabc505 _has;
};

struct GEOPDLitePlaceResult {
    unsigned long long _field1;
    int _field2;
    CDStruct_d7010776 _field3;
};

struct GEOPDLocalTimeRange {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_d7010776 _field3;
};

struct GEOPDPhotoSizeFilterValue {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_d7010776 _field3;
};

struct GEOPDTimeRange {
    unsigned int _duration;
    unsigned int _startTime;
    CDStruct_beabc505 _has;
};

struct GEOPathMatcherRoadKey {
    long long _field1;
    unsigned long long _field2;
    double _field3;
    double _field4;
};

struct GEOPolylineCoordinateRange {
    CDStruct_f48a8b00 _field1;
    CDStruct_f48a8b00 _field2;
};

struct GEOSessionID {
    unsigned long long _high;
    unsigned long long _low;
};

struct GEOTileSetRegion {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct GeoCodecsConnectivityJunction {
    unsigned int _field1;
    unsigned int _field2;
    struct GeoCodecsPointFeature *_field3;
};

struct GeoCodecsPointFeature;

struct GeoCodecsVectorTilePoint {
    float _field1;
    float _field2;
};

struct GeoCoordinates {
    struct Longitude _field1;
    struct Latitude _field2;
    int _field3;
};

struct GeometryPathElement;

struct HasBits<1UL> {
    unsigned int _field1[1];
};

struct InternalMetadata {
    void *_field1;
};

struct Latitude {
    unsigned int _field1;
};

struct Longitude {
    unsigned int _field1;
};

struct MapAccessPointFeature;

struct MapEdge;

struct MapEdgeRoad;

struct MapEdgeTransit;

struct MapNodeTransit;

struct Matrix<float, 2, 1> {
    float _e[2];
};

struct Message;

struct Path<std::shared_ptr<geo::MapEdge>> {
    struct GeoCoordinates _field1;
    struct GeoCoordinates _field2;
    struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> _field3;
    struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> _field4;
    struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> _field5;
};

struct PolylineCoordinate {
    unsigned int index;
    float offset;
};

struct Rep;

struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RequesterTileKeys;

struct RoutingPathLeg {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadata _field2;
    struct HasBits<1UL> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> _field5;
    struct ArenaStringPtr _field6;
};

struct Sphere<float, 2, std::enable_if<true>> {
    Matrix_8746f91e _field1;
    float _field2;
};

struct TaggedPtr<std::string> {
    void *_field1;
};

struct Timestamp;

struct TransitEdgePiece {
    id _field1;
    unsigned long long _field2;
    id _field3;
    unsigned int _field4;
    _Bool _field5;
};

struct ZilchMapModel;

struct _GEOFlyoverKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int h:8;
    unsigned int region:24;
    unsigned int type:14;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
};

struct _GEOGloriaQuadIDTileKey {
    unsigned int z:6;
    unsigned int quadKey:64;
    unsigned int type:14;
    unsigned int padding:36;
};

struct _GEOIdentifiedResourceKey {
    unsigned long long identifier;
    unsigned char levelOfDetail;
    unsigned char type;
    unsigned int supportsASTC:1;
    unsigned int padding:39;
};

struct _GEOPolygonSelectionKey {
    unsigned int z:6;
    unsigned int x:25;
    unsigned int y:25;
    unsigned int polyId:64;
};

struct _GEORegionalResourceKey {
    unsigned int index:32;
    unsigned int scenarios:8;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
    unsigned int forceRefetch:1;
    unsigned int padding:57;
};

struct _GEORiseTransitSetEvent {
    double JD;
    unsigned int type;
};

struct _GEOS2TileKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int f:3;
    unsigned int type:14;
    unsigned int pixelSize:4;
    unsigned int textScale:4;
    unsigned int padding:37;
};

struct _GEOSputnikMetadataKey {
    unsigned int part:32;
    unsigned int region:24;
    unsigned int type:14;
    unsigned int pixelSize:8;
    unsigned int padding:42;
};

struct _GEOStandardTileKey {
    unsigned int reserved:40;
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:14;
    unsigned int pixelSize:4;
    unsigned int textScale:4;
};

struct _GEOTileKey {
    unsigned int provider:7;
    unsigned int expires:1;
    union {
        struct _GEOStandardTileKey standard;
        struct _GEOGloriaQuadIDTileKey gloriaQuad;
        struct _GEORegionalResourceKey regional;
        struct _GEOSputnikMetadataKey sputnikMetadata;
        struct _GEOFlyoverKey flyover;
        struct _GEOTransitLineSelectionKey transitLineSelection;
        struct _GEOPolygonSelectionKey polygonSelection;
        struct _GEOTileOverlayKey tileOverlay;
        struct _GEOIdentifiedResourceKey identifiedResource;
        struct _GEOS2TileKey s2Tile;
    } ;
};

struct _GEOTileOverlayKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int contentScale:8;
    unsigned int providerId:32;
    unsigned int keyframeIndex:16;
    unsigned int padding:6;
};

struct _GEOTransitLineSelectionKey {
    unsigned int z:6;
    unsigned int x:25;
    unsigned int y:25;
    unsigned int muid:64;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __shared_weak_count;

struct __wrap_iter<(anonymous namespace)::RequesterTileKeys *> {
    struct RequesterTileKeys *_field1;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int _field1;
    } _field1;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct deque<ErrorInfo, std::allocator<ErrorInfo>> {
    struct __split_buffer<ErrorInfo *, std::allocator<ErrorInfo *>> {
        struct ErrorInfo **__first_;
        struct ErrorInfo **__begin_;
        struct ErrorInfo **__end_;
        struct __compressed_pair<ErrorInfo **, std::allocator<ErrorInfo *>> {
            struct ErrorInfo **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<ErrorInfo>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> {
    struct __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<GEORoadEdge *__strong **, std::allocator<GEORoadEdge *__strong *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<GEORoadEdge *>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> {
    struct __split_buffer<geo::TransitEdgePiece *, std::allocator<geo::TransitEdgePiece *>> {
        struct TransitEdgePiece **__first_;
        struct TransitEdgePiece **__begin_;
        struct TransitEdgePiece **__end_;
        struct __compressed_pair<geo::TransitEdgePiece **, std::allocator<geo::TransitEdgePiece *>> {
            struct TransitEdgePiece **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<geo::TransitEdgePiece>> {
        unsigned long long __value_;
    } __size_;
};

struct list<CacheItem, std::allocator<CacheItem>> {
    struct __list_node_base<CacheItem, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<CacheItem, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<LoadItem, std::allocator<LoadItem>> {
    struct __list_node_base<LoadItem, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>> {
    struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> {
    struct __tree<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, _GEOAltitudeTriggerData>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *__left_;
            } __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct shared_ptr<addr_obj::AddressObject> {
    struct AddressObject *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<geo::MapAccessPointFeature> {
    struct MapAccessPointFeature *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<geo::MapEdge> {
    struct MapEdge *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<geo::MapEdgeRoad> {
    struct MapEdgeRoad *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<geo::MapEdgeTransit> {
    struct MapEdgeTransit *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<geo::MapNodeTransit> {
    struct MapNodeTransit *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<zilch::Message> {
    struct Message *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct sqlite3_module {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>> {
    struct __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>> {
        struct DispatchTimer *__value_;
    } __ptr_;
};

struct unique_ptr<geo::ZilchMapModel, std::default_delete<geo::ZilchMapModel>> {
    struct __compressed_pair<geo::ZilchMapModel *, std::default_delete<geo::ZilchMapModel>> {
        struct ZilchMapModel *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> {
    struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    struct __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> {
    struct __hash_table<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<GEORoadEdge *, void *>*>, std::allocator<std::__hash_node<GEORoadEdge *, void *>>> {
            struct __hash_node_base<std::__hash_node<GEORoadEdge *, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<GEORoadEdge *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<GEORoadEdge *>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> {
    struct __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *>*>, std::allocator<std::__hash_node<_GEOTileKey, void *>>> {
            struct __hash_node_base<std::__hash_node<_GEOTileKey, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<GEOTileKey>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<GEOTileKey>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> {
    struct __hash_table<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*>, std::allocator<std::__hash_node<geo::TransitEdgePiece, void *>>> {
            struct __hash_node_base<std::__hash_node<geo::TransitEdgePiece, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<geo::TransitEdgePiece>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<geo::TransitEdgePiece>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> {
    struct Timestamp *__begin_;
    struct Timestamp *__end_;
    struct __compressed_pair<(anonymous namespace)::Timestamp *, std::allocator<(anonymous namespace)::Timestamp>> {
        struct Timestamp *__value_;
    } __end_cap_;
};

struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<GEOLocationCoordinate3D *, std::allocator<GEOLocationCoordinate3D>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> {
    struct ControlPoint *__begin_;
    struct ControlPoint *__end_;
    struct __compressed_pair<zilch::ControlPoint *, std::allocator<zilch::ControlPoint>> {
        struct ControlPoint *__value_;
    } __end_cap_;
};

struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> {
    struct GeometryPathElement *_field1;
    struct GeometryPathElement *_field2;
    struct __compressed_pair<zilch::GeometryPathElement *, std::allocator<zilch::GeometryPathElement>> {
        struct GeometryPathElement *_field1;
    } _field3;
};

struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> {
    struct Entry *_field1;
    struct Entry *_field2;
    struct __compressed_pair<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry *, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> {
        struct Entry *_field1;
    } _field3;
};

struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>*, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> {
        void *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int identifier;
    void *metadata;
} CDStruct_065526f1;

typedef struct {
    unsigned int _field1;
    float _field2;
} CDStruct_f48a8b00;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    unsigned long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_62a50c50;

typedef struct {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_8bf61218;

typedef struct {
    float *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_fae3dc92;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    double latitude;
    double longitude;
    double altitude;
} CDStruct_071ac149;

typedef struct CDStruct_183601bc;

typedef struct {
    int type;
    union {
        int raw;
        int tile;
        int placeRequest;
    } subtype;
} CDStruct_d1a7ebee;

typedef struct {
    CDStruct_071ac149 _field1;
    CDStruct_071ac149 _field2;
} CDStruct_0d04b6a8;

typedef struct {
    CDStruct_34734122 origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    CDUnion_20bcf645 _field1;
    double _field2;
} CDStruct_4e27301a;

// Ambiguous groups
typedef struct {
    unsigned int has_operatingHoursRange:1;
    unsigned int has_includeRealTimeDepartures:1;
    unsigned int read_unknownFields:1;
    unsigned int read_departurePredicateCountdown:1;
    unsigned int read_departurePredicateStamp:1;
    unsigned int wrote_anyField:1;
} CDStruct_dc7e0232;

typedef struct {
    unsigned int has_filterType:1;
    unsigned int read_unknownFields:1;
    unsigned int read_filterAddress:1;
    unsigned int read_filterKeyword:1;
    unsigned int wrote_anyField:1;
} CDStruct_85060554;

typedef struct {
    unsigned int read_index:1;
    unsigned int read_layer:1;
    unsigned int read_sourceVersion:1;
    unsigned int read_targetVersion:1;
    unsigned int wrote_anyField:1;
} CDStruct_b651aedb;

typedef struct {
    unsigned int read_unknownFields:1;
    unsigned int read_field:1;
    unsigned int read_operands:1;
    unsigned int read_value:1;
    unsigned int wrote_anyField:1;
} CDStruct_dc56225f;

typedef struct {
    unsigned int read_unknownFields:1;
    unsigned int read_image:1;
    unsigned int read_name:1;
    unsigned int wrote_anyField:1;
} CDStruct_9fa62941;

typedef struct {
    unsigned int read_key:1;
    unsigned int read_value:1;
    unsigned int wrote_anyField:1;
} CDStruct_d2d52b7f;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_8a1bf2a3;

typedef struct {
    unsigned int duration:1;
    unsigned int startTime:1;
} CDStruct_beabc505;

typedef struct {
    unsigned int has_key:1;
    unsigned int has_value:1;
} CDStruct_a4cc0a70;

typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

typedef struct {
    unsigned int has_score:1;
} CDStruct_f58e6c32;

typedef struct {
    unsigned int has_statusCode:1;
} CDStruct_ade9d5f7;

typedef struct {
    unsigned int has_value:1;
} CDStruct_38ef1b98;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct Box<float, 2> {
    Matrix_8746f91e _field1;
    Matrix_8746f91e _field2;
} Box_3fb92e00;

typedef struct Matrix<float, 2, 1> {
    float _e[2];
} Matrix_8746f91e;

typedef struct Path<std::shared_ptr<geo::MapEdge>> {
    struct GeoCoordinates _field1;
    struct GeoCoordinates _field2;
    struct vector<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>, std::allocator<zilch::RoadPathElement<std::shared_ptr<geo::MapEdge>>>> _field3;
    struct vector<zilch::GeometryPathElement, std::allocator<zilch::GeometryPathElement>> _field4;
    struct vector<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry, std::allocator<zilch::Path<std::shared_ptr<geo::MapEdge>>::Entry>> _field5;
} Path_3f73a495;

typedef struct Sphere<float, 2, std::enable_if<true>> {
    Matrix_8746f91e _field1;
    float _field2;
} Sphere_67aef8b0;

typedef struct __wrap_iter<(anonymous namespace)::RequesterTileKeys *> {
    struct RequesterTileKeys *_field1;
} __wrap_iter_9a08789a;

typedef struct shared_ptr<geo::MapAccessPointFeature> {
    struct MapAccessPointFeature *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_4792c490;

typedef struct shared_ptr<geo::MapEdge> {
    struct MapEdge *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_035a2da2;

typedef struct shared_ptr<geo::MapEdgeRoad> {
    struct MapEdgeRoad *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_92bc9970;

typedef struct shared_ptr<geo::MapEdgeTransit> {
    struct MapEdgeTransit *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_24ebf3c0;

typedef struct shared_ptr<geo::MapNodeTransit> {
    struct MapNodeTransit *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_52e51bdf;

typedef struct shared_ptr<zilch::Message> {
    struct Message *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_27244a92;

#pragma mark Named Unions

union _GEOPlaceDataComponentKey {
    struct {
        unsigned long long _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned int _field4;
    } _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field2;
};

#pragma mark Typedef'd Unions

typedef union {
    unsigned int value;
    struct {
        unsigned int type:8;
        union {
            struct {
                unsigned int style:14;
                unsigned int size:4;
                unsigned int scale:4;
                unsigned int padding:2;
            } standard;
            struct {
                unsigned int style:8;
                unsigned int region:16;
            } flyoverRegion;
        } ;
    } structured;
} CDUnion_20bcf645;

