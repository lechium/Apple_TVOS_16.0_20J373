//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSData, NSString, PushConnectionMessageHistory, TaskQueue;
@protocol OS_dispatch_queue, PushConnectionDelegate;

@interface PushConnection : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    PushConnectionMessageHistory *_appStoreMessageHistory;	// 40 = 0x28
    PushConnectionMessageHistory *_testFlightMessageHistory;	// 48 = 0x30
    _Bool _testFlightTopicEnabled;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
    id <PushConnectionDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001abef
@property __weak id <PushConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTopicsInConnection:(id)arg1;	// IMP=0x001000000001aa5f
- (void)_retryAddPushTypeRequestForAccountID:(id)arg1 isSandboxAccount:(_Bool)arg2 forEnvironment:(id)arg3;	// IMP=0x001000000001a68c
- (void)_sendPushTypesRequest:(long long)arg1 accountID:(id)arg2 forEnvironment:(id)arg3 isSandboxAccount:(_Bool)arg4;	// IMP=0x0010000000019f7d
@property(readonly, copy) NSString *description;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000019d4f
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000019c27
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000019aaf
- (void)_unitTest_sendFakeRawMessage:(id)arg1;	// IMP=0x00100000000199e5
- (void)invalidateTokenForTopic:(unsigned long long)arg1;	// IMP=0x001000000001984b
- (void)requestTokenForTopic:(unsigned long long)arg1;	// IMP=0x0010000000019658
- (void)shutdown;	// IMP=0x0010000000019642
- (void)removePushTypeForSandboxAccountId:(id)arg1;	// IMP=0x00100000000195c2
- (void);	// IMP=0x001000000001956c
- (void)removePushTypeForAccountId:(id)arg1;	// IMP=0x00100000000194ef
- (void)addPushTypeForCurrentAccount;	// IMP=0x001000000001949c
@property _Bool testFlightTopicEnabled;
@property(readonly) NSData *publicToken;
@property(readonly) NSString *environment;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2 apsConnection:(id)arg3;	// IMP=0x00100000000192b4
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000019210
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000191ad
- (id)init;	// IMP=0x0010000000019191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

