//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLLocation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCConnection, NSXPCListener, RTRoutineManager;
@protocol OS_dispatch_source;

@interface CLRoutineMonitor : CLIntersiloService
{
    NSObject<OS_dispatch_source> *_wakeRoutinedTimer;	// 8 = 0x8
    void *_serviceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;	// 24 = 0x18
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 32 = 0x20
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::default_delete<CLFilteredLocationController_Type::Client>> _filteredLocationClient;	// 40 = 0x28
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 48 = 0x30
    struct unique_ptr<CLLocationAwarenessProvider_Type::Client, std::default_delete<CLLocationAwarenessProvider_Type::Client>> _awarenessClient;	// 56 = 0x38
    struct RegInfo _awarenessRegInfo;	// 64 = 0x40
    _Bool _updating;	// 112 = 0x70
    _Bool _updatingPredictedApplications;	// 113 = 0x71
    _Bool _authorized;	// 114 = 0x72
    _Bool _armed;	// 115 = 0x73
    _Bool _diminishedMode;	// 116 = 0x74
    NSXPCConnection *_connection;	// 120 = 0x78
    NSMutableArray *_locations;	// 128 = 0x80
    CLLocation *_lastLocation;	// 136 = 0x88
    NSXPCListener *_listener;	// 144 = 0x90
    RTRoutineManager *_routineManager;	// 152 = 0x98
    NSMutableSet *_visitClients;	// 160 = 0xa0
    NSMutableSet *_leechClients;	// 168 = 0xa8
    NSMutableSet *_lowConfidenceVisitLeechClients;	// 176 = 0xb0
    NSMutableDictionary *_scenarioTriggerClients;	// 184 = 0xb8
}

+ (id)bundlePath;	// IMP=0x00100000005ed5d2
+ (id)getSilo;	// IMP=0x00100000005ed576
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ed55d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005ed500
+ (_Bool);	// IMP=0x00100000005ed468
- (id).cxx_construct;	// IMP=0x00200000005f4b2d
- (void).cxx_destruct;	// IMP=0x00100000005f4a81
@property(retain, nonatomic) NSMutableDictionary *scenarioTriggerClients; // @synthesize scenarioTriggerClients=_scenarioTriggerClients;
@property(retain, nonatomic) NSMutableSet *lowConfidenceVisitLeechClients; // @synthesize lowConfidenceVisitLeechClients=_lowConfidenceVisitLeechClients;
@property(retain, nonatomic) NSMutableSet *leechClients; // @synthesize leechClients=_leechClients;
@property(retain, nonatomic) NSMutableSet *visitClients; // @synthesize visitClients=_visitClients;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(nonatomic) _Bool diminishedMode; // @synthesize diminishedMode=_diminishedMode;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
@property(nonatomic) _Bool updatingPredictedApplications; // @synthesize updatingPredictedApplications=_updatingPredictedApplications;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)enumerateStoredLocationsWithOptions:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005f489f
- (void)fetchLookbackWindowStartDateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000005f486e
- (void)fetchEstimatedLocationAtDate:(id)arg1 options:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000005f4445
- (void)fetchEstimatedLocationAtDate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005f40d6
- (void)zipperedStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 custeredWithVisits:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000005f29bd
- (void)getStoredLocationsBetweenStartTime:(double)arg1 endTime:(double)arg2 apartFromEachOther:(double)arg3 lyingWithinTimeIntervals:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000005f2552
- (void)fetchStoredVisitsWithOptions:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005f24e7
- (void)fetchFormattedPostalAddressesFromMeCardWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000005f24b6
- (void)fetchPlaceInferencesWithOptions:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005f2476
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x00100000005f22dd
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x00100000005f1cd2
- (void)checkDiminishedMode;	// IMP=0x00100000005f1c5f
- (void)onWakeRoutinedTimer;	// IMP=0x00100000005f18bc
- (void)stopWakeRoutinedTimer;	// IMP=0x00100000005f17c4
- (void)startWakeRoutinedTimer;	// IMP=0x00100000005f16b9
- (void)sendLocationsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000005f1343
- (void)sendLocations;	// IMP=0x00100000005f12ab
- (void)stopUpdatingLocation;	// IMP=0x00100000005f11c1
- (void)startUpdatingLocation;	// IMP=0x00100000005f10c3
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000005f09a8
- (void)checkAuthorization;	// IMP=0x00000000005f0814
- (void)flush;	// IMP=0x00100000005f070c
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000005f0411
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000005f020d
- (void)addLocation:(id)arg1;	// IMP=0x00100000005efc78
- (void)dealloc;	// IMP=0x00100000005efc03
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000005efb92
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005efb27
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000005efaac
- (void)fetchRecentLocationsOfInterestWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000005efa29
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef9ae
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000005ef929
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef8ae
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef833
- (void)setHintForRegionState:(long long)arg1 significantRegion:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000005ef79f
- (void)fetchLocationOfInterestForRegion:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef710
- (void)fetchRoutineModeFromLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef695
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005ef655
- (void)stopLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x00100000005ef51a
- (void)startLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x00100000005eefd8
- (void)stopLeechingVisitsForClient:(byref id)arg1;	// IMP=0x00100000005eee9e
- (void)startLeechingVisitsForClient:(byref id)arg1;	// IMP=0x00100000005eea56
- (void)stopMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x00100000005ee8bd
- (void)startMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x00100000005ee3e9
- (void)endService;	// IMP=0x00100000005ee183
- (void)beginService;	// IMP=0x00100000005ed88f
- (id)init;	// IMP=0x00100000005ed852

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

