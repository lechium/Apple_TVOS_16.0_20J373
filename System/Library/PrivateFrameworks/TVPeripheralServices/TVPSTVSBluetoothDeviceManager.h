//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, NSString, TVPSBluetoothDeviceManagerConfiguration;
@protocol OS_dispatch_queue_serial, TVPSBluetoothDeviceManagingPairingDelegate;

__attribute__((visibility("hidden")))
@interface TVPSTVSBluetoothDeviceManager : NSObject
{
    TVPSBluetoothDeviceManagerConfiguration *_configuration;	// 8 = 0x8
    id <TVPSBluetoothDeviceManagingPairingDelegate> _pairingDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue_serial> *_accessQueue;	// 24 = 0x18
    NSHashTable *_pairedDevicesObservers;	// 32 = 0x20
    NSHashTable *_pairableDevicesObservers;	// 40 = 0x28
    NSDictionary *_pairedDevicesDictionary;	// 48 = 0x30
    NSDictionary *_pairableDevicesDictionary;	// 56 = 0x38
    NSDictionary *_backingDevicesDictionary;	// 64 = 0x40
}

+ (id)_processNewBackingDevices:(id)arg1 currentDevicesDictionary:(id)arg2 devicesUpdate:(id *)arg3;	// IMP=0x001000000000be80
- (void).cxx_destruct;	// IMP=0x000000000000c980
@property(retain, nonatomic) NSDictionary *backingDevicesDictionary; // @synthesize backingDevicesDictionary=_backingDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairableDevicesDictionary; // @synthesize pairableDevicesDictionary=_pairableDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairedDevicesDictionary; // @synthesize pairedDevicesDictionary=_pairedDevicesDictionary;
@property(readonly, nonatomic) NSHashTable *pairableDevicesObservers; // @synthesize pairableDevicesObservers=_pairableDevicesObservers;
@property(readonly, nonatomic) NSHashTable *pairedDevicesObservers; // @synthesize pairedDevicesObservers=_pairedDevicesObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) TVPSBluetoothDeviceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_backingDeviceForDevice:(id)arg1;	// IMP=0x000000000000b820
- (id)_deviceForBackingDevice:(id)arg1;	// IMP=0x000000000000b740
- (void)_notifyPairableDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b460
- (void)_notifyPairedDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b180
- (void)_updateDeviceSets;	// IMP=0x0000000000009ff0
- (void)_performWorkOnCalloutQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009ec0
- (void)_performBluetoothManagerDeviceWorkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009bc0
- (void)_performBluetoothManagerWorkWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009a90
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000009970
- (void)_handleBluetoothManagerDidUpdateNotification:(id)arg1;	// IMP=0x0000000000009850
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x0000000000009680
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000000000094b0
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x0000000000008dd0
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000000008a70
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x00000000000089f0
- (void)unpairDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008630
- (void)disconnectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008270
- (void)connectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e50
- (id)deviceForUniqueIdentifier:(id)arg1;	// IMP=0x0000000000007aa0
- (void)removePairableDevicesObserver:(id)arg1;	// IMP=0x0000000000007810
- (void)addPairableDevicesObserver:(id)arg1;	// IMP=0x00000000000075a0
@property(readonly, copy, nonatomic) NSSet *pairableDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectingPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectingPairedDevices;
- (void)removePairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006e70
- (void)addPairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006d00
@property(readonly, copy, nonatomic) NSSet *pairedDevices;
@property(nonatomic) __weak id <TVPSBluetoothDeviceManagingPairingDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (void)dealloc;	// IMP=0x0000000000006640
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000062c0
- (id)init;	// IMP=0x0000000000006280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

