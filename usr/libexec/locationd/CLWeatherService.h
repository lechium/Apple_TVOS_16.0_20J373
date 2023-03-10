//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLWeatherService : CLIntersiloService
{
    NSMutableSet *_clients;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0020000000637e9a
+ (id)getSilo;	// IMP=0x0010000000637d8e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000637d75
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000637d18
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)localLocationForecastUpdatedForConditions:(id)arg1;	// IMP=0x0010000000637f16
- (void)weatherForecastUpdated:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 location:(id)arg5;	// IMP=0x0010000000637f10
- (void)unregisterForWeatherUpdates:(byref id)arg1;	// IMP=0x0010000000637edf
- (void)registerForWeatherUpdates:(byref id)arg1;	// IMP=0x0010000000637eae
- (void)endService;	// IMP=0x0010000000637ea8
- (void)beginService;	// IMP=0x0010000000637ea2
- (void)dealloc;	// IMP=0x0010000000637e53
- (id)init;	// IMP=0x0010000000637dea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

