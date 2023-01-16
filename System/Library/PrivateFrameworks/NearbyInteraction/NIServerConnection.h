//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableSet, NSUUID;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NIServerConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _resumed;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    NSObject<OS_xpc_object> *_conn;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSData *_tokenData;	// 40 = 0x28
    NSMutableSet *_peerTokens;	// 48 = 0x30
    NSMutableDictionary *_simulators;	// 56 = 0x38
    _Bool _xpcActive;	// 64 = 0x40
    _Bool _shouldInvalidateSessionOnXPCError;	// 65 = 0x41
    _Bool _isInterruptionReason_ApplicationNotVisible;	// 66 = 0x42
    _Bool _isDistanceUpdateRequestScheduled;	// 67 = 0x43
    _Bool _isAllowedToSimulateDirection;	// 68 = 0x44
    CDUnknownBlockType _interruptionHandler;	// 72 = 0x48
    CDUnknownBlockType _invalidationHandler;	// 80 = 0x50
    NSUUID *_sessionID;	// 88 = 0x58
    id _exportedObject;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001bdf2
@property(retain) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(readonly) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (double)simulateErrorWithMaximum:(double)arg1 sigma:(double)arg2 maximum:(double)arg3;	// IMP=0x000000000001bd1a
- (double)randomUnivariateGaussian:(double)arg1 sigma:(double)arg2;	// IMP=0x000000000001bc8e
- (double)simulateAngleError;	// IMP=0x000000000001bc85
- (double)simulateRangeError;	// IMP=0x000000000001bc7c
- (void)setRangingPriorityPolicy:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bc21
- (void)getRangingPriorityPolicy:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bbc4
- (void)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2 eventCounter:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bb69
- (void)processDCKMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bb0c
- (void)_removeObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bafc
- (void)_addObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baec
- (void)notifySystemShutdownWithReason:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001badc
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b9b5
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b3f2
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aecb
- (void)_createAndActivateXPCConnectionToSimulatorIfNeededWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a6be
- (id)generateDiscoveryTokenData;	// IMP=0x000000000001a625
- (void)queryDeviceCapabilities:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a456
- (id)_internalDeviceCapabilities;	// IMP=0x0000000000019bd8
- (void)handleMessageFromSimulator:(id)arg1;	// IMP=0x00000000000198e2
- (void)handleErrorMessageFromSimulator:(id)arg1;	// IMP=0x000000000001986b
- (void)handleEventFromSimulatorOnQueue:(id)arg1;	// IMP=0x0000000000019617
- (void)handleDeviceShutdown:(id)arg1;	// IMP=0x0000000000019394
- (void)handleNewToken:(id)arg1;	// IMP=0x00000000000191ae
- (void)handleNewDevice:(id)arg1;	// IMP=0x0000000000018fc8
- (void)handleCancelToken:(id)arg1;	// IMP=0x0000000000018eb6
- (void)removeFromPeerTokensAndNotifyIfNecessary:(id)arg1;	// IMP=0x0000000000018ce8
- (id)nearbyObjectFromBase64EncodedString:(id)arg1;	// IMP=0x0000000000018c59
- (id)discoveryTokenFromBase64EncodedString:(id)arg1;	// IMP=0x0000000000018bc9
- (void)requestDistanceUpdate;	// IMP=0x0000000000018975
- (void)handleDistanceUpdate:(id)arg1;	// IMP=0x0000000000018651
- (void)_sendDistanceUpdateForRequestedPeer:(id)arg1 forPeer:(id)arg2;	// IMP=0x0000000000017dfe
- (id)_findRequestedPeerDevicesInUpdates:(id)arg1;	// IMP=0x0000000000017a9f
- (id)_findSelfDeviceInUpdates:(id)arg1;	// IMP=0x00000000000176a5
- (_Bool)areContinuousUpdatesRequired;	// IMP=0x000000000001741c
- (void)handleXPCConnectionInvalid;	// IMP=0x00000000000173e5
- (void)handleXPCConnectionTermination;	// IMP=0x00000000000173cb
- (void)handleXPCConnectionInterrupted;	// IMP=0x00000000000173b1
- (void)handleXPCConnectionError;	// IMP=0x0000000000017397
- (CDStruct_6ad76789)auditTokenForConnection;	// IMP=0x0000000000017384
- (void)invalidate;	// IMP=0x000000000001718f
- (void)resume;	// IMP=0x0000000000017179
- (id)findUDIDForToken:(id)arg1;	// IMP=0x0000000000016f49
- (void)_simXPCCancelAndInvalidateSessionOnError:(_Bool)arg1;	// IMP=0x0000000000016ef0
- (void)_simXPCActivateIfAllowed;	// IMP=0x0000000000016e98
- (void)_simXPCResumeIfAllowed;	// IMP=0x0000000000016e40
- (void)_simXPCSuspendIfAllowed;	// IMP=0x0000000000016de8
- (id)synchronousRemoteObjectProxy;	// IMP=0x0000000000016ddf
- (id)remoteObjectProxy;	// IMP=0x0000000000016dd6
- (void)dealloc;	// IMP=0x0000000000016d96
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000016ba3

@end

