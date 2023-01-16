//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableDictionary, NSString;

@interface CLDuetMonitor : CLIntersiloService
{
    NSMutableDictionary *_registeredEvents;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0020000000467307
+ (id)getSilo;	// IMP=0x00100000004672ab
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000467292
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000467235
@property(retain, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
- (void)notifyClient:(id)arg1 ofNowPlaying:(id)arg2;	// IMP=0x0010000000469900
- (void)notifyClient:(id)arg1 ofHomeKitAppView:(id)arg2;	// IMP=0x001000000046961a
- (void)notifyClient:(id)arg1 ofHomeKitAccessory:(id)arg2;	// IMP=0x0010000000469243
- (void)notifyClient:(id)arg1 ofHomeKitScene:(id)arg2;	// IMP=0x0010000000468ed7
- (void)notifyClient:(id)arg1 ofForegroundAppWithValue:(id)arg2;	// IMP=0x0010000000468cac
- (void)notifyClient:(id)arg1 ofEvent:(long long)arg2 withValue:(id)arg3;	// IMP=0x0010000000468bfa
- (long long)eventTypeFromNSNumber:(id)arg1;	// IMP=0x0010000000468bcb
- (id)streamForEvent:(long long)arg1;	// IMP=0x0010000000468b9c
- (id)predicateForEvent:(long long)arg1 withKeyPath:(id)arg2;	// IMP=0x0010000000468af4
- (id)keypathForEvent:(long long)arg1;	// IMP=0x0010000000468a4c
- (void)stopMonitoringForClient:(byref id)arg1;	// IMP=0x00100000004687fb
- (void)stopMonitoringEvent:(long long)arg1 withPredicate:(id)arg2 forClient:(byref id)arg3;	// IMP=0x00100000004685e8
- (void)stopMonitoringEvents:(id)arg1 forClient:(byref id)arg2;	// IMP=0x001000000046842d
- (void)registerWithDuetForEvent:(long long)arg1 andPredicate:(id)arg2;	// IMP=0x0010000000467f47
- (void)registerClient:(id)arg1 forEvent:(long long)arg2 withPredicate:(id)arg3;	// IMP=0x0010000000467d31
- (void)stopMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x0010000000467cb8
- (void)startMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x0010000000467c3f
- (void)stopMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x0010000000467bc6
- (void)startMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x0010000000467b4d
- (void)stopMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x0010000000467ad4
- (void)startMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x0010000000467a5b
- (void)stopMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x00100000004679e2
- (void)startMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x0010000000467969
- (void)stopMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x00100000004678f0
- (void)startMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x0010000000467877
- (void)stopMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x00100000004677fe
- (void)startMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x0010000000467785
- (void)stopMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x001000000046770c
- (void)startMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x0010000000467693
- (void)stopMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x001000000046763f
- (void)startMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x00100000004675eb
- (void)stopMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x0010000000467572
- (void)startMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x00100000004674fe
- (id)init;	// IMP=0x00100000004674c1
- (void)endService;	// IMP=0x0010000000467484
- (void)beginService;	// IMP=0x0010000000467435
- (void)dealloc;	// IMP=0x00100000004673f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
