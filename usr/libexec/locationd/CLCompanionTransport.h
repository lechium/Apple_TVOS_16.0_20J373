//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, MISSING_TYPE, NSString;

@interface CLCompanionTransport : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    IDSDevice *_pairedDevice;	// 16 = 0x10
    double _pairedDeviceLastSeenTimestamp;	// 24 = 0x18
    CDUnknownBlockType _receivedMessageHandler;	// 32 = 0x20
    CDUnknownBlockType _connectionUpdateHandler;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
}

+ (id)computeMD5:(id)arg1;	// IMP=0x00200000004ccecd
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property(copy) CDUnknownBlockType connectionUpdateHandler; // @synthesize connectionUpdateHandler=_connectionUpdateHandler;
@property(copy) CDUnknownBlockType receivedMessageHandler; // @synthesize receivedMessageHandler=_receivedMessageHandler;
@property double pairedDeviceLastSeenTimestamp; // @synthesize pairedDeviceLastSeenTimestamp=_pairedDeviceLastSeenTimestamp;
@property(retain) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00100000004ccdc1
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000004ccc1f
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000004ccc19
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000004ccc07
- (MISSING_TYPE *)service:account:incomingUnhandledProtobuf:fromID:context: /* Error: Ran out of types for this method. */;	// IMP=0x00100000004cca7b
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc96f
- (void)handleContextConfigurationUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc917
- (void)handleVO2MaxCloudKitDailyStats:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc8bf
- (void)handleCompanionPingDataForAbsoluteAltitude:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc867
- (void)handlePredictedWalkDistanceBout:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc80f
- (void)handleAbsoluteAltitudeSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc7b7
- (void)handleAbsoluteAltitudeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc75f
- (void)handleRemoteAppLaunch:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc707
- (void)handleMotionStateUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc6af
- (void)handleCompanionPingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc657
- (void)handleMotionCalsUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc5ff
- (void)handleOdometerCoarseElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc5a7
- (void)handleOdometerCoarseElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc56b
- (void)handleOdometerCoarseElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc52f
- (void)handleStrideCalDataUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc4f3
- (void)handleStrideCalDataSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc49b
- (void)handleOdometerElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc443
- (void)handleOdometerElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc407
- (void)handleOdometerElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc3cb
- (void)handleOdometerCyclingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc373
- (void)handleOdometerCyclingUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc337
- (void)handleOdometerCyclingSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc2fe
- (void)handleKappaStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc2c2
- (void)handleKappaCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc26a
- (void)receivedMessage:(unsigned short)arg1 data:(id)arg2 identifierString:(id)arg3;	// IMP=0x00100000004cbf6b
- (void)sendMessage:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 fireAndForget:(_Bool)arg4 encrypt:(_Bool)arg5 bypassConnectionCheck:(_Bool)arg6 timeout:(double)arg7 nonWaking:(_Bool)arg8;	// IMP=0x00100000004cba9f
- (void)updateIDSStatusAndNotify;	// IMP=0x00100000004cb893
- (void)updateIDSStatus;	// IMP=0x00100000004cb464
- (void)dealloc;	// IMP=0x00100000004cb40c
- (id)initWithSilo:(id)arg1 iDSService:(id)arg2;	// IMP=0x00100000004cafb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

