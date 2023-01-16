//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, CBPeripheral, MISSING_TYPE, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>

@optional
- (void)centralManager:(CBCentralManager *)arg1 didUpdateFindMyPeripherals:(NSArray *)arg2;
- (NSArray *)retrieveConnectingPeripherals;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateUsageStatisticEvent:(CBPeripheral *)arg2 results:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateRSSIStatisticsDetectionForPeripheral:(CBPeripheral *)arg2 results:(NSDictionary *)arg3 error:(NSError *)arg4;
- (MISSING_TYPE *)centralManager:didUpdateControllerBTClockDictForPeripheral:results: /* Error: Ran out of types for this method. */;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateControllerBTClockForPeripheral:(CBPeripheral *)arg2 eventType:(NSNumber *)arg3 seconds:(NSNumber *)arg4 microseconds:(NSNumber *)arg5 localClock:(NSNumber *)arg6 remoteClock:(NSNumber *)arg7;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateScanParams:(NSDictionary *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateMTUForPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didFailToScanWithError:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 canSendDataToPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverMultiplePeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didReceiveData:(NSData *)arg2 fromPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didSendBytes:(NSNumber *)arg2 toPeripheral:(CBPeripheral *)arg3 withError:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 application:(NSString *)arg2 isActive:(_Bool)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateConnectionParameters:(CBPeripheral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didLoseZone:(NSData *)arg2 mask:(NSData *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLosePeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFindPeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdatePeripheralConnectionState:(CBPeripheral *)arg2;
@end

