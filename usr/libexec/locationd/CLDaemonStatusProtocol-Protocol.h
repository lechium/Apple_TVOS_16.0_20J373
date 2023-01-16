//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class MISSING_TYPE, NSString;

@protocol CLDaemonStatusProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetBatterySaverMode;
- (MISSING_TYPE *)syncgetThermalLevel;
- (void)triggerMetricHeartbeatNotification;
- (_Bool)syncgetRegisterPowerKeepAlive:(_Bool)arg1 client:(unsigned long long)arg2 dbgMessage:(NSString *)arg3;
- (void)notifyMigrationPerformed;
- (_Bool)syncgetIsSleeping;
- (_Bool)syncgetHasLingerClients;
- (int)syncgetReachability;
- (_Bool)syncgetAirplaneMode:(_Bool *)arg1;
- (void)fetchWirelessModemClientCountWithReply:(void (^)(long long))arg1;
- (void)fetchIsBatteryConnectedWithReply:(void (^)(_Bool))arg1;
- (void)fetchReachabilityWithReply:(void (^)(int))arg1;
- (void)fetchIsAirplaneModeEnabledWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
