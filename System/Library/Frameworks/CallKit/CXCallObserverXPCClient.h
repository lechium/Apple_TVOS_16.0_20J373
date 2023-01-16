//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallObserverXPCClient : NSObject
{
    _Bool _clientsShouldConnect;	// 8 = 0x8
    int _clientsShouldConnectToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 16 = 0x10
    NSMutableDictionary *_mutableCallUUIDToCallMap;	// 24 = 0x18
    NSHashTable *_delegates;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
}

+ (void)releaseSharedXPCClient;	// IMP=0x00100000000402ec
+ (id)sharedXPCClient;	// IMP=0x0010000000040231
+ (id)sharedXPCClientSemaphore;	// IMP=0x00100000000401de
- (void).cxx_destruct;	// IMP=0x0000000000041f9e
@property(nonatomic) _Bool clientsShouldConnect; // @synthesize clientsShouldConnect=_clientsShouldConnect;
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap; // @synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (oneway void)removeCall:(id)arg1;	// IMP=0x0000000000041e86
- (oneway void)addOrUpdateCall:(id)arg1;	// IMP=0x0000000000041db8
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(_Bool)arg2;	// IMP=0x0000000000041d14
- (void)_invalidate;	// IMP=0x00000000000417fb
- (void)_requestCalls;	// IMP=0x0000000000041499
- (void)_removeCall:(id)arg1;	// IMP=0x00000000000411e7
- (void)_addOrUpdateCall:(id)arg1;	// IMP=0x0000000000040f0f
- (void)_markAllCallsAsEnded;	// IMP=0x0000000000040cc7
- (void)invalidate;	// IMP=0x0000000000040c6c
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000409f7
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000004095f
- (void)addDelegate:(id)arg1;	// IMP=0x00000000000408c7
@property(readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
- (void)dealloc;	// IMP=0x0000000000040732
- (id)_init;	// IMP=0x00000000000403ce
- (id)init;	// IMP=0x0000000000040393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

