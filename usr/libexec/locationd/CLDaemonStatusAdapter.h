//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDaemonStatusAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001cbcc7
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cbcae
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001cbc51
- (_Bool)syncgetBatterySaverMode;	// IMP=0x00200000001cc314
- (int)syncgetThermalLevel;	// IMP=0x00100000001cc2e1
- (void)triggerMetricHeartbeatNotification;	// IMP=0x00100000001cc1ee
- (_Bool)syncgetRegisterPowerKeepAlive:(_Bool)arg1 client:(unsigned long long)arg2 dbgMessage:(id)arg3;	// IMP=0x00100000001cc1b7
- (void)notifyMigrationPerformed;	// IMP=0x00100000001cc0ca
- (_Bool)syncgetIsSleeping;	// IMP=0x00100000001cc0a5
- (_Bool)syncgetHasLingerClients;	// IMP=0x00100000001cc06e
- (int)syncgetReachability;	// IMP=0x00100000001cc042
- (_Bool)syncgetAirplaneMode:(_Bool *)arg1;	// IMP=0x00100000001cc010
- (void)fetchWirelessModemClientCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbfb2
- (void)fetchIsBatteryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbf58
- (void)fetchReachabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbf19
- (void)fetchIsAirplaneModeEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbeda
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbeb2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cbe85
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cbe5d
- (void *)adaptee;	// IMP=0x00100000001cbe2a
- (void)endService;	// IMP=0x00100000001cbe0f
- (void)beginService;	// IMP=0x00100000001cbd60
- (id)init;	// IMP=0x00100000001cbd23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
