//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, IDSService, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol CLClientManagerPublicProtocol;

@interface CLUsageSyncManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    int _lastStatusBarIconState;	// 16 = 0x10
    _Bool _coalescingUpdates;	// 20 = 0x14
    _Bool _dirtyUsageSyncState;	// 21 = 0x15
    _Bool _needFullResync;	// 22 = 0x16
    _Bool _retryTimerSet;	// 23 = 0x17
    int _activeDeviceNearbyStatus;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
    NSUUID *_pairedDeviceID;	// 40 = 0x28
    id _pairedDeviceRegistry;	// 48 = 0x30
    CLTimer *_retryTimer;	// 56 = 0x38
    NSMutableArray *_errorQueue;	// 64 = 0x40
    NSMutableDictionary *_messagesWaitingForAck;	// 72 = 0x48
}

+ (_Bool)isSupported;	// IMP=0x00200000003727cb
+ (id)getSilo;	// IMP=0x001000000037276f
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000372756
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003726f9
- (id).cxx_construct;	// IMP=0x0020000000377818
- (void).cxx_destruct;	// IMP=0x00100000003777f0
@property(nonatomic) int activeDeviceNearbyStatus; // @synthesize activeDeviceNearbyStatus=_activeDeviceNearbyStatus;
@property(retain, nonatomic) NSMutableDictionary *messagesWaitingForAck; // @synthesize messagesWaitingForAck=_messagesWaitingForAck;
@property(retain, nonatomic) NSMutableArray *errorQueue; // @synthesize errorQueue=_errorQueue;
@property(retain, nonatomic) CLTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool retryTimerSet; // @synthesize retryTimerSet=_retryTimerSet;
@property(retain, nonatomic) id pairedDeviceRegistry; // @synthesize pairedDeviceRegistry=_pairedDeviceRegistry;
@property(retain, nonatomic) NSUUID *pairedDeviceID; // @synthesize pairedDeviceID=_pairedDeviceID;
@property(nonatomic) _Bool needFullResync; // @synthesize needFullResync=_needFullResync;
@property(nonatomic) _Bool dirtyUsageSyncState; // @synthesize dirtyUsageSyncState=_dirtyUsageSyncState;
@property(retain) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000003774f8
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000037707a
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000376db2
- (void)handleMessageResyncResponseWithMessageData:(id)arg1;	// IMP=0x0010000000376913
- (void)handleMessageResyncRequestWithMessageData:(id)arg1;	// IMP=0x001000000037683b
- (void)handleMessageUsageUpdateWithMessageData:(id)arg1;	// IMP=0x00100000003763ff
- (void)handleMessageSendSuccessForIdentifier:(id)arg1;	// IMP=0x0010000000376334
- (void)handleMessageSendError:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000003760c6
@property(readonly, nonatomic) id <CLClientManagerPublicProtocol> manager;
- (id)mungedUsageDataForPotentiallyOldUsageData:(id)arg1;	// IMP=0x00100000003760a8
- (void)sendAllUsageSyncData;	// IMP=0x0010000000375c06
- (void)onStatusBarIconChangeInternal:(int)arg1;	// IMP=0x00100000003758d7
- (void)onStatusBarIconChange:(int)arg1;	// IMP=0x00100000003756dc
- (void)client:(id)arg1 didChangeUsageDataInternal:(id)arg2;	// IMP=0x00100000003752cb
- (void)client:(id)arg1 didChangeUsageData:(id)arg2;	// IMP=0x0010000000375138
- (void)requestFullResync;	// IMP=0x0010000000374f45
- (void)sendMessageWithMessageType:(id)arg1 dataPayload:(id)arg2 priority:(long long)arg3 idsOptions:(id)arg4;	// IMP=0x0010000000374e8c
- (void)sendMessage:(id)arg1;	// IMP=0x0010000000374ba2
- (void)handleMessageError:(id)arg1;	// IMP=0x0010000000374697
- (void)messageFailedToSend:(id)arg1 withError:(id)arg2 recoverable:(_Bool)arg3;	// IMP=0x0010000000374484
- (void)drainErrorQueue;	// IMP=0x00100000003741e3
- (void)addMessageToErrorQueue:(id)arg1;	// IMP=0x001000000037400c
- (_Bool)_sendMessage:(id)arg1 identifier:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000373d85
- (_Bool)isPaired;	// IMP=0x0010000000373d7d
- (void)handleInactiveNotification_bounce:(id)arg1;	// IMP=0x0010000000373cf4
- (void)handleActiveNotification_bounce:(id)arg1;	// IMP=0x0010000000373c6b
- (void)handlePair;	// IMP=0x0010000000373a32
- (void)handleUnpair;	// IMP=0x00100000003736fa
- (void)handlePairNotification_bounce:(id)arg1;	// IMP=0x0010000000373671
- (void)handleUnpairNotification_bounce:(id)arg1;	// IMP=0x00100000003735e8
- (void)onClientManagerNotification:(int)arg1 data:(const void *)arg2;	// IMP=0x00100000003735ba
- (void)endService;	// IMP=0x0010000000373427
- (void)beginService;	// IMP=0x0010000000372c23
- (void)setSilo:(id)arg1;	// IMP=0x0010000000372870
- (id)init;	// IMP=0x0010000000372833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
