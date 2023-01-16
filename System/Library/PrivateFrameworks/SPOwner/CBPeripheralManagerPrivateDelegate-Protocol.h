//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentral, CBPeripheralManager, NSArray, NSDictionary, NSError, NSNumber;

@protocol CBPeripheralManagerPrivateDelegate <CBPeripheralManagerDelegate>

@optional
- (void)peripheralManager:(CBPeripheralManager *)arg1 offlineAdvPayloadRequestedWithReason:(long long)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUpdateControllerBTClockDict:(NSDictionary *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUpdateControllerBTClock:(NSNumber *)arg2 seconds:(NSNumber *)arg3 microseconds:(NSNumber *)arg4 localClock:(NSNumber *)arg5 remoteClock:(NSNumber *)arg6;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didStopPeriodicAdvertising:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didStartPeriodicAdvertising:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didUpdateANCSAuthorization:(_Bool)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didStopAdvertisingWithError:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUpdateConnectionParameters:(CBCentral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didConnectWithServiceUUIDs:(NSArray *)arg3;
@end

