//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSUUID;
@protocol OS_os_transaction, OS_xpc_object;

@interface GTLocalXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSMutableArray *_connectionHandlers;	// 24 = 0x18
    NSMutableDictionary *_dispatchers;	// 32 = 0x20
    NSMutableDictionary *_observers;	// 40 = 0x28
    NSObject<OS_xpc_object> *_error;	// 48 = 0x30
    unsigned long long _originPort;	// 56 = 0x38
    NSUUID *_originDeviceUUID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000058d06
@property(retain, nonatomic) NSObject<OS_xpc_object> *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
- (void)removeProxyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058c9a
- (void)registerProxyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058c11
@property(readonly) NSArray *proxyHandlers;
- (id)sendMessageWithReplySync:(id)arg1;	// IMP=0x0010000000058bea
- (void)sendMessage:(id)arg1 queue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058bd3
- (void)sendMessage:(id)arg1;	// IMP=0x0010000000058bc2
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property(readonly) NSUUID *originDeviceUUID; // @synthesize originDeviceUUID=_originDeviceUUID;
@property(readonly) unsigned long long originPort; // @synthesize originPort=_originPort;
- (void)setupDeviceUUID:(id)arg1;	// IMP=0x0010000000058b8b
- (void)setupPort:(unsigned long long)arg1;	// IMP=0x0010000000058b81
- (void)dispatchMessage:(id)arg1;	// IMP=0x0010000000058ad1
- (void)registerDispatcher:(id)arg1 forServicePort:(unsigned long long)arg2;	// IMP=0x0010000000058a4f
- (id)initWithTransactionScopedXPCConnection:(id)arg1;	// IMP=0x00100000000589ca
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000005892a

@end

