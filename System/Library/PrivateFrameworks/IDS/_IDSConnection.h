//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSDirectMessageConnection, IMOrderedMutableDictionary, NSDictionary, NSMapTable, NSSet, NSString;

@interface _IDSConnection : NSObject
{
    id _messageContext;	// 8 = 0x8
    id _delegateContext;	// 16 = 0x10
    unsigned char _incomingMessageLoggingSequence;	// 24 = 0x18
    unsigned char _outgoingMessageLoggingSequence;	// 25 = 0x19
    NSMapTable *_delegateToInfo;	// 32 = 0x20
    IDSAccount *_account;	// 40 = 0x28
    NSSet *_commands;	// 48 = 0x30
    NSString *_serviceToken;	// 56 = 0x38
    IMOrderedMutableDictionary *_pendingSends;	// 64 = 0x40
    unsigned int _delegateCapabilities;	// 72 = 0x48
    _Bool _indirectDelegateCallouts;	// 76 = 0x4c
    unsigned int _wakingDowngradeCount;	// 80 = 0x50
    IDSDirectMessageConnection *_directMessageConnection;	// 88 = 0x58
    NSDictionary *_directMessagingMetadata;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000007572c
@property(retain, nonatomic) NSDictionary *directMessagingMetadata; // @synthesize directMessagingMetadata=_directMessagingMetadata;
@property(retain, nonatomic) IDSDirectMessageConnection *directMessageConnection; // @synthesize directMessageConnection=_directMessageConnection;
@property(nonatomic) unsigned int wakingDowngradeCount; // @synthesize wakingDowngradeCount=_wakingDowngradeCount;
- (void)sendXPCObject:(id)arg1;	// IMP=0x00000000000756de
- (void)_sendMissingMessageMetric:(id)arg1;	// IMP=0x0000000000075639
- (void)checkTransportLogWithReason:(long long)arg1;	// IMP=0x000000000007543a
- (void)updateDeviceIdentity:(id)arg1 error:(id)arg2;	// IMP=0x00000000000751d4
- (void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000074990
- (void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;	// IMP=0x00000000000746b6
- (void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000074360
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;	// IMP=0x0000000000073ce6
- (void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000073872
- (void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;	// IMP=0x0000000000073577
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x0000000000073299
- (void)receivedMetadataForDirectMessaging:(id)arg1;	// IMP=0x00000000000731a8
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00000000000724b0
- (void)incomingInvitationUpdate:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00000000000721a4
- (void)incomingInvitation:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000071e98
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;	// IMP=0x0000000000071622
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000070cde
- (void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000070423
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000006f8d3
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x000000000006ea03
- (void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x000000000006e7fc
- (_Bool)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg1;	// IMP=0x000000000006e7e0
- (_Bool)_isAccountInValidRegistrationStateToAcceptMessages;	// IMP=0x000000000006e6e5
- (_Bool)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 validateAliases:(_Bool)arg5 guid:(id)arg6;	// IMP=0x000000000006d81e
- (void)_setTemporaryMessageContext:(id)arg1;	// IMP=0x000000000006d7d3
- (void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3;	// IMP=0x000000000006d4d0
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;	// IMP=0x000000000006ce08
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;	// IMP=0x000000000006c8ac
- (void)messageIdentifierInner:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 context:(id)arg7 isDirectMessage:(_Bool)arg8;	// IMP=0x000000000006bd27
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 context:(id)arg7;	// IMP=0x000000000006bd01
- (void)daemonConnected;	// IMP=0x000000000006bc55
- (void)_resendPendingSends;	// IMP=0x000000000006b861
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;	// IMP=0x000000000006b7bc
- (void)_connect;	// IMP=0x000000000006b58b
- (void)account:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000000006b3cf
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000000006b213
- (void)account:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000006b057
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x000000000006aee4
- (void)connection:(id)arg1 messageSendFailed:(id)arg2 responseCode:(long long)arg3;	// IMP=0x000000000006aded
- (void)connection:(id)arg1 incomingGUIDAckFromDirectConnection:(id)arg2;	// IMP=0x000000000006ad14
- (void)connection:(id)arg1 incomingProtobufFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x000000000006ab87
- (void)connection:(id)arg1 incomingMessageFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x000000000006a9f5
- (void)connection:(id)arg1 incomingDataFromDirectConnection:(id)arg2 withGUID:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x000000000006a851
- (void)connection:(id)arg1 incomingAckWithIdentifier:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 hasBeenDeliveredWithContext:(id)arg6 isAppAck:(_Bool)arg7;	// IMP=0x000000000006a5ea
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2;	// IMP=0x000000000006a3b3
- (_Bool)sendInvitationUpdate:(id)arg1 toDestination:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000069a8e
- (_Bool)sendInvitation:(id)arg1 toDestination:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000069169
- (_Bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000068b40
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000068185
- (_Bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x0000000000067b01
- (void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2;	// IMP=0x00000000000679c3
- (_Bool)_isDestinationSingleLocalAddress:(id)arg1;	// IMP=0x0000000000067857
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4;	// IMP=0x000000000006504d
- (void)sendAppAckForDirectMessage:(id)arg1;	// IMP=0x0000000000065037
- (void)setDelegateCapabilities:(unsigned int)arg1;	// IMP=0x0000000000064f95
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x0000000000064776
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064753
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x000000000006472a
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064716
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000646a8
- (void)addDelegate:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006428b
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000064276
- (id)_defaultPairedDevice;	// IMP=0x00000000000640db
- (id)_activeDevice;	// IMP=0x0000000000063f40
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) IDSAccount *account;
- (id)daemonListener;	// IMP=0x0000000000063d75
- (id)daemonController;	// IMP=0x0000000000063d5c
- (void)createDirectMessageConnectionIfNeeded;	// IMP=0x0000000000063ae6
- (void)dealloc;	// IMP=0x00000000000639b5
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(_Bool)arg3 delegateContext:(id)arg4;	// IMP=0x00000000000635c4
- (id)_init;	// IMP=0x0000000000063595

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

