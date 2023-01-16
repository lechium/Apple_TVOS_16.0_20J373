//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBPeripheralManager, FMXPCServiceDescription, FMXPCSession, NSString, SPBeaconManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPOfflineAdvertisingKeysDelegate : NSObject
{
    _Bool _inLowPowerMode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SPBeaconManager *_beaconManager;	// 24 = 0x18
    CBPeripheralManager *_peripheralManager;	// 32 = 0x20
    FMXPCServiceDescription *_serviceDescription;	// 40 = 0x28
    FMXPCSession *_session;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000236c5
@property(nonatomic) _Bool inLowPowerMode; // @synthesize inLowPowerMode=_inLowPowerMode;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(retain, nonatomic) CBPeripheralManager *peripheralManager; // @synthesize peripheralManager=_peripheralManager;
@property(retain, nonatomic) SPBeaconManager *beaconManager; // @synthesize beaconManager=_beaconManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)peripheralManager:(id)arg1 offlineAdvPayloadRequestedWithReason:(long long)arg2;	// IMP=0x000000000002349c
- (void)processKeyResponse:(id)arg1;	// IMP=0x0000000000022fb5
- (long long)transformReason:(long long)arg1;	// IMP=0x0000000000022f64
- (void)enterLowPowerMode;	// IMP=0x0000000000022e57
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000022c67
- (id)userAgentSyncProxy;	// IMP=0x0000000000022c55
- (id)syncProxy;	// IMP=0x00000000000229ea
- (id)userAgentProxy;	// IMP=0x00000000000229d8
- (id)proxy;	// IMP=0x00000000000227d6
- (id)remoteInterface;	// IMP=0x00000000000226b6
- (id)initWithBeaconManager:(id)arg1;	// IMP=0x000000000002248e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
