//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation, NSArray, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;	// 8 = 0x8
    MNLocation *_location;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSTimer *_minuteTimer;	// 32 = 0x20
    MNActiveRouteInfo *_mainRoute;	// 40 = 0x28
    unsigned long long _currentLogType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a88d2
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logDisplayETAInfo:(id)arg1 logType:(unsigned long long)arg2;	// IMP=0x00000000000a86fd
- (void)_startTimerToNextMinute;	// IMP=0x00000000000a8338
- (id)_batteryChargeInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000a7fe3
- (id)_routeDistanceInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000a7dfe
- (id)_displayETAInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000a7218
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000a68e1
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;	// IMP=0x00000000000a6655
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000a62da
- (void)stopUpdating;	// IMP=0x00000000000a62c4
- (void)startUpdating;	// IMP=0x00000000000a62b2
- (void)dealloc;	// IMP=0x00000000000a6274

@end

