//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLLocation, CLLocationManager, CLSettingsMirror, CLTimer, NSString;

@interface CLCountryTracker : CLIntersiloService
{
    _Bool fAtLeastOneValidLocation;	// 8 = 0x8
    _Bool fAtLeastOneAuthDetermination;	// 9 = 0x9
    CLTimer *fLocationUnknownTimer;	// 16 = 0x10
    CLTimer *fActiveLocationDeregisterTimer;	// 24 = 0x18
    struct CLDistanceCalc fDistanceCalc;	// 32 = 0x20
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> fClientManagerClient;	// 72 = 0x48
    _Bool _skipUpdatingRegulatoryDomain;	// 80 = 0x50
    _Bool _allowSimulatedLocations;	// 81 = 0x51
    int _minimumConfidence;	// 84 = 0x54
    int _countryCodeDebounceInterval;	// 88 = 0x58
    int _authStatus;	// 92 = 0x5c
    CLSettingsMirror *_settings;	// 96 = 0x60
    double _maximumCountryLocationChangeSpeed;	// 104 = 0x68
    double _maximumCountryLocationChangeAccuracy;	// 112 = 0x70
    double _minimumMoveDistance;	// 120 = 0x78
    double _debounceTime;	// 128 = 0x80
    double _stalenessTime;	// 136 = 0x88
    double _timeToUnknown;	// 144 = 0x90
    double _timeToActiveGiveup;	// 152 = 0x98
    CLLocationManager *_locManager;	// 160 = 0xa0
    CLLocation *_previousLocation;	// 168 = 0xa8
    NSString *_previousCountryCode;	// 176 = 0xb0
    double _previousCountryCodeTimeStamp;	// 184 = 0xb8
}

+ (_Bool)isSupported;	// IMP=0x00200000002c5ce5
+ (id)getSilo;	// IMP=0x00100000002c3e06
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c3ded
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002c3d90
- (id).cxx_construct;	// IMP=0x00200000002c752a
- (void).cxx_destruct;	// IMP=0x00100000002c7502
@property(nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
@property(nonatomic) double previousCountryCodeTimeStamp; // @synthesize previousCountryCodeTimeStamp=_previousCountryCodeTimeStamp;
@property(retain, nonatomic) NSString *previousCountryCode; // @synthesize previousCountryCode=_previousCountryCode;
@property(retain, nonatomic) CLLocation *previousLocation; // @synthesize previousLocation=_previousLocation;
@property(retain, nonatomic) CLLocationManager *locManager; // @synthesize locManager=_locManager;
@property(nonatomic) int countryCodeDebounceInterval; // @synthesize countryCodeDebounceInterval=_countryCodeDebounceInterval;
@property(nonatomic) _Bool allowSimulatedLocations; // @synthesize allowSimulatedLocations=_allowSimulatedLocations;
@property(nonatomic) _Bool skipUpdatingRegulatoryDomain; // @synthesize skipUpdatingRegulatoryDomain=_skipUpdatingRegulatoryDomain;
@property(nonatomic) double timeToActiveGiveup; // @synthesize timeToActiveGiveup=_timeToActiveGiveup;
@property(nonatomic) double timeToUnknown; // @synthesize timeToUnknown=_timeToUnknown;
@property(nonatomic) double stalenessTime; // @synthesize stalenessTime=_stalenessTime;
@property(nonatomic) double debounceTime; // @synthesize debounceTime=_debounceTime;
@property(nonatomic) double minimumMoveDistance; // @synthesize minimumMoveDistance=_minimumMoveDistance;
@property(nonatomic) double maximumCountryLocationChangeAccuracy; // @synthesize maximumCountryLocationChangeAccuracy=_maximumCountryLocationChangeAccuracy;
@property(nonatomic) double maximumCountryLocationChangeSpeed; // @synthesize maximumCountryLocationChangeSpeed=_maximumCountryLocationChangeSpeed;
@property(nonatomic) int minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
@property(retain, nonatomic) CLSettingsMirror *settings; // @synthesize settings=_settings;
- (double)calculateDistance:(id)arg1 b:(id)arg2;	// IMP=0x00100000002c6f87
- (void)onManagerNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x00100000002c6e03
- (void)checkLocationServicesStatus;	// IMP=0x00100000002c6cd7
- (void)requestExpensiveLocation:(_Bool)arg1;	// IMP=0x00100000002c6b89
- (void)onLocationUnknownTimer;	// IMP=0x00100000002c6a67
- (void)updateLocationUnknown;	// IMP=0x00100000002c69a9
- (void)handleNewLocation:(id)arg1;	// IMP=0x00100000002c5dd8
- (void)sendUpdateToRDIfAllowed:(id)arg1;	// IMP=0x00100000002c5ced
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000002c5bbe
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000002c5aa2
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000002c518c
- (_Bool)locationIsUsable:(id)arg1;	// IMP=0x00100000002c4bc3
- (void)refreshSettings;	// IMP=0x00100000002c4777
- (void)endService;	// IMP=0x00100000002c45b4
- (void)beginService;	// IMP=0x00100000002c3e9f
- (id)init;	// IMP=0x00100000002c3e62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

