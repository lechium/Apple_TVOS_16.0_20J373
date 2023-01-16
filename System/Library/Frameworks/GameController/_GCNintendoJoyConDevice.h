//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceBattery, GCHapticCapabilityGraph, NSArray, NSMapTable, NSSet, NSString, _GCDeviceConfiguration, _GCHIDServiceInfo, _GCNintendoFusedJoyConDevice, _GCNintendoJoyConDeviceManager;
@protocol GCBatteryServiceServerInterface, NSObject><NSCopying><NSSecureCoding, _GCDeviceDriverConnection, _GCDeviceManager, _GCGamepadEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConDevice : NSObject
{
    _GCNintendoJoyConDeviceManager *_manager;	// 8 = 0x8
    _GCHIDServiceInfo *_serviceInfo;	// 16 = 0x10
    id <_GCDeviceDriverConnection> _driverConnection;	// 24 = 0x18
    id _driverConnectionInvalidationRegistration;	// 32 = 0x20
    NSMapTable *_clients;	// 40 = 0x28
    long long _indicatedPlayerIndex;	// 48 = 0x30
    NSMapTable *_clientPlayerIndicatorEndpoints;	// 56 = 0x38
    CDUnknownBlockType _batteryComponentBatteryUpdatedHandler;	// 64 = 0x40
    id <GCBatteryServiceServerInterface> _batteryServiceServer;	// 72 = 0x48
    GCDeviceBattery *_battery;	// 80 = 0x50
    NSMapTable *_clientBatteryEndpoints;	// 88 = 0x58
    NSArray *_hapticEngines;	// 96 = 0x60
    GCHapticCapabilityGraph *_hapticCapabilityGraph;	// 104 = 0x68
    unsigned char _type;	// 112 = 0x70
    unsigned char _inputMode;	// 113 = 0x71
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 120 = 0x78
    _GCDeviceConfiguration *_configuration;	// 128 = 0x80
    _GCNintendoFusedJoyConDevice *_fusionDevice;	// 136 = 0x88
}

+ (id)getHapticCapabilityGraph:(_Bool)arg1;	// IMP=0x00100000000324e9
+ (id)getHapticActuators:(_Bool)arg1;	// IMP=0x001000000003242c
- (void).cxx_destruct;	// IMP=0x0000000000033418
@property(nonatomic) __weak _GCNintendoFusedJoyConDevice *fusionDevice; // @synthesize fusionDevice=_fusionDevice;
@property(retain, nonatomic) _GCDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <_GCDeviceDriverConnection> driverConnection; // @synthesize driverConnection=_driverConnection;
@property(nonatomic) unsigned char inputMode; // @synthesize inputMode=_inputMode;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly) __weak id <_GCDeviceManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)activateLogical;	// IMP=0x000000000003336e
@property(readonly) NSSet *underlyingDevices;
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000000332fc
@property(readonly) NSSet *components;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)arg1 didReceivePlayerIndexChange:(long long)arg2;	// IMP=0x000000000003318a
@property(readonly, nonatomic) CDStruct_f4b747e6 buttonsColor;
@property(readonly, nonatomic) CDStruct_f4b747e6 bodyColor;
- (void)setDriverConnection:(id)arg1;	// IMP=0x0000000000032961
- (id)init;	// IMP=0x0000000000032936
- (id)initWithHIDDevice:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000032555
- (id)makeControllerForClient:(id)arg1;	// IMP=0x000000000003387c
- (void)_removeClient:(id)arg1;	// IMP=0x0000000000033764
- (void)_addClient:(id)arg1;	// IMP=0x00000000000334d1
@property(readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property(readonly, nonatomic) NSArray *hapticEngines;
@property(readonly, nonatomic) GCDeviceBattery *battery;
- (void)propagateBattery:(id)arg1;	// IMP=0x0000000000034612
- (id)readBattery;	// IMP=0x0000000000034423
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryServiceConnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryComponentBatteryUpdatedHandler;
@property long long indicatedPlayerIndex;
@property(readonly) id <_GCGamepadEventSourceDescription> gamepadEventSource;
- (void)homeButtonLongPressGesture:(_Bool)arg1;	// IMP=0x00000000000348d7
- (void)updateBattery:(unsigned char)arg1 isCharging:(_Bool)arg2;	// IMP=0x000000000003496d
- (id)hapticDriver;	// IMP=0x00000000000349c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

