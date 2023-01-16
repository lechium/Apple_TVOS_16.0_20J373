//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSTokenState, NSData, NSSet, NSString;
@protocol APSConnectionServerDelegate><APSConnectionServerTokenDelegate, OS_dispatch_queue, OS_xpc_object;

@interface APSConnectionServer : NSObject
{
    id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    unsigned int _connectionMachPort;	// 40 = 0x28
    NSString *_connectionPortName;	// 48 = 0x30
    int _clientPID;	// 56 = 0x38
    NSSet *_enabledTopics;	// 64 = 0x40
    NSSet *_ignoredTopics;	// 72 = 0x48
    NSSet *_opportunisticTopics;	// 80 = 0x50
    NSSet *_nonWakingTopics;	// 88 = 0x58
    long long _publicTokenDeliveryRetries;	// 96 = 0x60
    unsigned long long _messageSize;	// 104 = 0x68
    unsigned long long _largeMessageSize;	// 112 = 0x70
    NSObject<OS_xpc_object> *_connection;	// 120 = 0x78
    APSTokenState *_tokenState;	// 128 = 0x80
    NSString *_processName;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    unsigned long long _enqueuedBlockCount;	// 152 = 0x98
    _Bool _isQueueSuspended;	// 160 = 0xa0
    _Bool _enableCriticalReliability;	// 161 = 0xa1
    _Bool _usesAppLaunchStats;	// 162 = 0xa2
    _Bool _enableStatusChangeNotifications;	// 163 = 0xa3
    _Bool _freshMachPort;	// 164 = 0xa4
    _Bool _isPublicTokenAcknowledged;	// 165 = 0xa5
    _Bool _isClosed;	// 166 = 0xa6
    _Bool _trackActivityPresence;	// 167 = 0xa7
}

+ (void)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 withMode:(unsigned long long)arg3 returnServers:(id)arg4;	// IMP=0x0020000000055bc6
+ (id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000055a2f
+ (void)serverEnvironmentNames:(id)arg1 withMode:(unsigned long long)arg2;	// IMP=0x00100000000557a5
+ (id)serverEnvironmentNames;	// IMP=0x00100000000556f8
- (void).cxx_destruct;	// IMP=0x002000000005b360
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(nonatomic) _Bool trackActivityPresence; // @synthesize trackActivityPresence=_trackActivityPresence;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
@property(nonatomic) _Bool usesAppLaunchStats; // @synthesize usesAppLaunchStats=_usesAppLaunchStats;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *tokenName;
- (void)_savePersistentConnectionWithMode:(unsigned long long)arg1;	// IMP=0x001000000005adc8
- (void)_savePersistentConnectionTopics;	// IMP=0x001000000005ad97
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(readonly, nonatomic) _Bool hasIdentity; // @dynamic hasIdentity;
- (void)saveAndUpdateDelegate;	// IMP=0x001000000005a97b
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x001000000005a4ef
- (void)handleChannelSubscriptionFailures:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000005a308
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x0010000000059d57
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x0010000000059bbf
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x00100000000598dc
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x0010000000059657
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x00100000000595ba
- (void)_handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x001000000005954e
- (void)handleInvalidatePerAppTokenForInfo:(id)arg1;	// IMP=0x0010000000059475
- (void)handleInvalidateURLTokenForTopic:(id)arg1;	// IMP=0x001000000005936f
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000592dd
- (void)handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x00100000000592cb
- (void)_sendClientToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000058e37
- (void)handleCurrentURLTokenForInfo:(id)arg1;	// IMP=0x0010000000058ddb
- (void)handleCurrentTokenForInfo:(id)arg1;	// IMP=0x0010000000058d7f
- (void)handleReceivedTokenError:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000058b9c
- (void)handleReceivedToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000058a77
- (void)_handleRequestTokenForInfo:(id)arg1;	// IMP=0x0010000000058a0b
- (void)handleRequestURLTokenForInfo:(id)arg1;	// IMP=0x0010000000058932
- (void)handleRequestTokenForInfo:(id)arg1;	// IMP=0x0010000000058859
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000587c7
- (void)handleFakeMessage:(id)arg1;	// IMP=0x001000000005876b
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x0010000000058726
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x001000000005867c
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 sendRTT:(unsigned long long)arg3 ackTimestamp:(unsigned long long)arg4;	// IMP=0x00100000000584d1
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x00100000000584b9
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x001000000005840f
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x00100000000581a6
- (void)_initiateConnectionIfNecessary;	// IMP=0x0010000000057acf
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x0010000000057a08
- (id)connectionPortName;	// IMP=0x00100000000579fa
- (void)connectionInvalidated;	// IMP=0x00100000000579ab
- (void)_suspendQueue;	// IMP=0x001000000005797a
- (void)_resumeQueue;	// IMP=0x0010000000057949
- (void)connectionHandshakeDidComplete;	// IMP=0x00100000000578d9
- (void)_migratePersistentTopicsFromOldMode:(unsigned long long)arg1;	// IMP=0x00100000000573fc
@property(readonly, copy) NSString *debugDescription;
- (id)processNameWithLabels:(_Bool)arg1;	// IMP=0x0010000000057200
- (void)close;	// IMP=0x0010000000057195
- (void);	// IMP=0x0010000000057049
- (void)dealloc;	// IMP=0x0010000000056fda
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2 environmentName:(id)arg3 connectionPortName:(id)arg4 processName:(id)arg5 connection:(id)arg6;	// IMP=0x0010000000056b85
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000565df
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x00100000000565ca

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
