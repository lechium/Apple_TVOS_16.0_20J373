//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSUTunConnection, IDSUTunPeerServiceMap, IMDispatchTimer, MISSING_TYPE, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSUTunPeerDelegate, OS_dispatch_source;

@interface IDSUTunPeer : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_btUUID;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    NSString *_originalbtUUID;	// 32 = 0x20
    _Bool _shouldUseIPsecLink;	// 40 = 0x28
    NSArray *_directConnections;	// 48 = 0x30
    NSArray *_urgentDirectConnections;	// 56 = 0x38
    NSArray *_defaultDirectConnections;	// 64 = 0x40
    NSArray *_syncDirectConnections;	// 72 = 0x48
    NSMutableDictionary *_connectedStates;	// 80 = 0x50
    NSMutableDictionary *_emptyStates;	// 88 = 0x58
    IDSUTunConnection *_urgentConnectionForAck;	// 96 = 0x60
    MISSING_TYPE *_defaultConnectionForAck;	// 104 = 0x68
    IDSUTunConnection *_syncConnectionForAck;	// 112 = 0x70
    IDSUTunConnection *_urgentCloudConnectionForAck;	// 120 = 0x78
    IDSUTunConnection *_defaultCloudConnectionForAck;	// 128 = 0x80
    _Bool _isCloudConnected;	// 136 = 0x88
    _Bool _isNearby;	// 137 = 0x89
    _Bool _isMagnetIndicatingPeerIsAwake;	// 138 = 0x8a
    _Bool _localSetupInProgress;	// 139 = 0x8b
    _Bool _isPeerAlwaysConnected;	// 140 = 0x8c
    _Bool _isDefaultPairedDevice;	// 141 = 0x8d
    _Bool _waitForDefaultPairedDevice;	// 142 = 0x8e
    _Bool _supportsCloudConnections;	// 143 = 0x8f
    _Bool _pendingCloudEnable;	// 144 = 0x90
    id <IDSUTunPeerDelegate> _delegate;	// 152 = 0x98
    NSMutableSet *_servicesPreferringInfraWiFi;	// 160 = 0xa0
    unsigned long long _totalDeliveredMessagesInfraWiFi;	// 168 = 0xa8
    unsigned long long _totalPacketsReceivedInfraWiFi;	// 176 = 0xb0
    unsigned long long _totalPacketsReceivedClientSockets;	// 184 = 0xb8
    unsigned int _dispatchCounterInfraWiFi;	// 192 = 0xc0
    _Bool _hadInfraWiFiTraffic;	// 196 = 0xc4
    IMDispatchTimer *_disableTimer;	// 200 = 0xc8
    IMDispatchTimer *_cloudDisableTimer;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_powerLogTimerUrgent;	// 216 = 0xd8
    NSObject<OS_dispatch_source> *_powerLogTimerDefault;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_powerLogTimerSync;	// 232 = 0xe8
    NSObject<OS_dispatch_source> *_powerLogTimerSockets;	// 240 = 0xf0
    int _continuityConnectCount;	// 248 = 0xf8
    IDSUTunPeerServiceMap *_incomingServiceMap;	// 256 = 0x100
    IDSUTunPeerServiceMap *_outgoingServiceMap;	// 264 = 0x108
    _Bool _isClassCConnected;	// 272 = 0x110
    unsigned char _linkType;	// 273 = 0x111
    struct os_unfair_lock_s _emptyStatesLock;	// 276 = 0x114
}

- (void).cxx_destruct;	// IMP=0x002000000008f640
@property(nonatomic) struct os_unfair_lock_s emptyStatesLock; // @synthesize emptyStatesLock=_emptyStatesLock;
@property(nonatomic) unsigned char linkType; // @synthesize linkType=_linkType;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(copy, nonatomic) NSString *originalbtUUID; // @synthesize originalbtUUID=_originalbtUUID;
@property(nonatomic) int continuityConnectCount; // @synthesize continuityConnectCount=_continuityConnectCount;
@property(nonatomic) _Bool isPeerAlwaysConnected; // @synthesize isPeerAlwaysConnected=_isPeerAlwaysConnected;
@property(nonatomic) _Bool pendingCloudEnable; // @synthesize pendingCloudEnable=_pendingCloudEnable;
@property(nonatomic) _Bool supportsCloudConnections; // @synthesize supportsCloudConnections=_supportsCloudConnections;
@property(nonatomic) _Bool isMagnetIndicatingPeerIsAwake; // @synthesize isMagnetIndicatingPeerIsAwake=_isMagnetIndicatingPeerIsAwake;
@property(nonatomic) _Bool localSetupInProgress; // @synthesize localSetupInProgress=_localSetupInProgress;
@property(nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(nonatomic) _Bool isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *btUUID; // @synthesize btUUID=_btUUID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSUTunPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldLogTransportStats;	// IMP=0x001000000008f210
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x001000000008f0d0
- (void)forceOTRNegotiationForTopic:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e210
- (void)_cloudDisableTimerFired:(id)arg1;	// IMP=0x001000000008dbf0
- (void)_startCloudDisableTimerIfNecessary;	// IMP=0x001000000008da20
- (void)_clearCloudDisableTimer;	// IMP=0x001000000008d9d0
- (_Bool)_allCloudConnectionsAreIdle;	// IMP=0x001000000008d1b0
- (void)_disableTimerFired:(id)arg1;	// IMP=0x001000000008cfe0
- (void)_startDisableTimerIfNecessary;	// IMP=0x001000000008ce70
- (void)_clearDisableTimer;	// IMP=0x001000000008ce20
- (_Bool)_allConnectionsAreIdle;	// IMP=0x001000000008c300
- (_Bool)manager:(id)arg1 cbuuidDidDiscover:(id)arg2;	// IMP=0x001000000008c1d0
- (void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2;	// IMP=0x001000000008be80
- (void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2 withReason:(id)arg3;	// IMP=0x001000000008bc00
- (void)_handleCBUUIDFailToConnect:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000008b840
- (void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(_Bool)arg3;	// IMP=0x001000000008aad0
- (void)_handleCBUUIDDidConnect:(id)arg1 isDefaultPairedDevice:(_Bool)arg2 isAlwaysConnected:(_Bool)arg3;	// IMP=0x001000000008a450
- (void)connectionIsEmptyOfCloudMessages:(id)arg1;	// IMP=0x0010000000089d60
- (void)connectionIsEmpty:(id)arg1;	// IMP=0x0010000000089930
- (void)connectionHasSpaceForMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x0010000000089600
- (void)connection:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5;	// IMP=0x0010000000089400
- (void)connection:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x0010000000089050
- (void)connection:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x0010000000088ca0
- (void)connection:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x00100000000888f0
- (void)connection:(id)arg1 connectivityChanged:(_Bool)arg2;	// IMP=0x0010000000088110
- (long long)_connectionTypeForConnection:(id)arg1;	// IMP=0x0010000000088080
- (long long)_priorityForConnection:(id)arg1;	// IMP=0x0010000000088020
- (_Bool)_messageTypeSupportedForCloudConnection:(long long)arg1;	// IMP=0x0010000000087fb0
- (id)_connectionForPriority:(long long)arg1 messageType:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0010000000087d50
- (id)rapportClient;	// IMP=0x0010000000087d20
- (void)sendMessage:(id)arg1 priority:(long long)arg2 messageType:(long long)arg3;	// IMP=0x00100000000869c0
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x0010000000086870
- (void)cancelMessageID:(id)arg1;	// IMP=0x0010000000086720
- (void)clearStats;	// IMP=0x0010000000086660
- (void)trafficClassesChanged;	// IMP=0x00100000000865d0
- (void)dropDisallowedMessages;	// IMP=0x0010000000086540
- (void)unpairStart;	// IMP=0x0010000000086480
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00100000000861c0
- (void)setPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x00100000000859d0
- (void)_checkServicesPreferringInfraWiFi:(unsigned int)arg1;	// IMP=0x00100000000847e0
- (void)_powerLogServices:(id)arg1 prefersInfraWifi:(_Bool)arg2;	// IMP=0x0010000000084560
- (void)setEnableOTR:(_Bool)arg1;	// IMP=0x0010000000084390
- (void)disableCloudConnectionForReason:(long long)arg1;	// IMP=0x0010000000083dd0
- (void)disableConnectionForReason:(long long)arg1 shouldWait:(_Bool)arg2;	// IMP=0x0010000000083400
- (void)enableCloudConnection;	// IMP=0x0010000000082c40
- (void)enableConnection;	// IMP=0x00100000000829f0
- (void)logCurrentTransportStatsAndResetTimers;	// IMP=0x0010000000081f10
- (void)_startPowerLogTimersForAllPriorities;	// IMP=0x00100000000816e0
- (void)_powerlogTransportStats;	// IMP=0x00100000000812c0
- (void)_powerlogDictionaryForSockets;	// IMP=0x0010000000080890
- (void)_powerlogDictionaryForPriority:(long long)arg1;	// IMP=0x001000000007ff60
- (id)_copyPowerlogDictionaryWithOutgoingStats:(id)arg1 incomingStats:(id)arg2;	// IMP=0x001000000007f250
- (void)_accumulateStats:(id)arg1 intoMessages:(unsigned long long *)arg2 andBytes:(unsigned long long *)arg3;	// IMP=0x001000000007f0f0
- (id)syncCloudPriorityMessageStatistics;	// IMP=0x001000000007f0e0
- (id)defaultCloudPriorityMessageStatistics;	// IMP=0x001000000007ee40
@property(readonly, nonatomic) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *syncPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *sendingMessageStatistics;
- (id)_copyStatisticsDict:(id)arg1;	// IMP=0x001000000007c970
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x001000000007c5e0
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2 messageType:(long long)arg3;	// IMP=0x001000000007bf60
- (_Bool)sendAckForMessageWithSequenceNumber:(unsigned int)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 connectionType:(long long)arg4;	// IMP=0x001000000007ba40
- (void)performBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x001000000007adb0
- (void)performBlockSynchronouslyForAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a970
- (void)performBlockForAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a530
- (void)performBlockForDirectConnections:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a1e0
- (void)dealloc;	// IMP=0x0010000000079f80
- (id)initWithIdentifier:(id)arg1 btUUID:(id)arg2 uniqueID:(id)arg3 shouldUseIPsecLink:(_Bool)arg4 isNearby:(_Bool)arg5 isClassCConnected:(_Bool)arg6;	// IMP=0x00100000000795b0
- (id)createConnectionWithIdentifier:(id)arg1 priority:(long long)arg2 shouldUseIPsecLink:(_Bool)arg3 dataProtectionClass:(unsigned int)arg4;	// IMP=0x0010000000078f80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
