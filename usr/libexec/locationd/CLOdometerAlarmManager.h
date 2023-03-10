//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLOdometerAlarm, NSMutableArray, NSString;

@interface CLOdometerAlarmManager : CLIntersiloService
{
    NSMutableArray *fAlarms;	// 8 = 0x8
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> fLocationClient;	// 16 = 0x10
    struct unique_ptr<CLGnssProvider_Type::Client, std::default_delete<CLGnssProvider_Type::Client>> fGpsClient;	// 24 = 0x18
    CLOdometerAlarm *currentlyScheduled;	// 32 = 0x20
    double lastOdometer;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x00200000007c3db8
- (id).cxx_construct;	// IMP=0x00200000007c4c33
- (void).cxx_destruct;	// IMP=0x00100000007c4be1
@property(nonatomic) double lastOdometer; // @synthesize lastOdometer;
@property(nonatomic) CLOdometerAlarm *currentlyScheduled; // @synthesize currentlyScheduled;
@property(readonly, nonatomic) CLOdometerAlarm *firstAlarm;
- (void)reset;	// IMP=0x00100000007c4967
- (void)handleOdometer:(double)arg1;	// IMP=0x00100000007c481b
- (void)handleOdometerData:(const void *)arg1;	// IMP=0x00100000007c45f5
- (void)handleLocationData:(const void *)arg1;	// IMP=0x00100000007c4271
- (void)reschedule;	// IMP=0x00100000007c426b
- (void)removeAlarm:(id)arg1;	// IMP=0x00100000007c420f
- (void)addAlarm:(id)arg1;	// IMP=0x00100000007c4118
- (void)endService;	// IMP=0x00100000007c409a
- (void)beginService;	// IMP=0x00100000007c3e22
- (id)init;	// IMP=0x00100000007c3de5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

