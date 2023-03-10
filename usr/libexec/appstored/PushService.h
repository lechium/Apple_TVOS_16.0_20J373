//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, NSMapTable, NSMutableDictionary, NSString, PushConnection, PushDiagnostic;
@protocol OS_dispatch_queue;

@interface PushService : NSObject
{
    PushConnection *_connection;	// 8 = 0x8
    NSMapTable *_consumers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
    NSMutableDictionary *_pendingMessages;	// 40 = 0x28
    AMSPushHandler *_pushHandler;	// 48 = 0x30
    PushDiagnostic *_pushDiagnostic;	// 56 = 0x38
    unsigned long long _stateHandle;	// 64 = 0x40
}

+ (id)_pushHandlerWithBagContract:(id)arg1;	// IMP=0x002000000014280c
+ (id)sharedInstance;	// IMP=0x0010000000141e4d
- (void).cxx_destruct;	// IMP=0x002000000014389b
- (void)_unitTest_waitForSetup;	// IMP=0x0010000000143880
- (void)_queuePendingAppStoreMessage:(id)arg1 withActionType:(id)arg2;	// IMP=0x00100000001437a8
- (void)_processReceivedAppStoreMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x0010000000143372
- (void)_processReceivedTestFlightMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000014336c
- (void)_initializeConnectionsAndSkipEnvironmentCheck:(_Bool)arg1;	// IMP=0x0010000000143092
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x0010000000142dee
- (void)_handleAccountDidChangeNotification:(id)arg1;	// IMP=0x0010000000142c65
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x0010000000142c02
- (void)_flushPendingMessagesWithActionType:(id)arg1;	// IMP=0x0010000000142930
- (void)pushConnection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(unsigned long long)arg3;	// IMP=0x0010000000142806
- (void)pushConnection:(id)arg1 didReceiveRawMessage:(id)arg2;	// IMP=0x0010000000142615
- (void)pushPayload:(id)arg1 withBadgeRequest:(id)arg2;	// IMP=0x001000000014250a
- (void)unregisterConsumerForActionType:(unsigned long long)arg1;	// IMP=0x00100000001423ba
- (void)registerConsumer:(id)arg1 forActionType:(unsigned long long)arg2;	// IMP=0x00100000001421c7
- (id)initWithConnection:(id)arg1 testFlightConsumer:(id)arg2;	// IMP=0x0010000000141ecc
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000141eb8
- (id)init;	// IMP=0x0010000000141ea2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

