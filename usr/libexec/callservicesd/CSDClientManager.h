//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClient, NSArray, NSMapTable, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSDClientManager : NSObject
{
    _Bool _localClientActive;	// 8 = 0x8
    _Bool _supportsClientAssertions;	// 9 = 0x9
    NSXPCInterface *_remoteObjectInterface;	// 16 = 0x10
    NSXPCInterface *_exportedInterface;	// 24 = 0x18
    CDUnknownBlockType _interruptionHandler;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
    id _asynchronousExportedObjectProxy;	// 48 = 0x30
    id _synchronousExportedObjectProxy;	// 56 = 0x38
    id _exportedObject;	// 64 = 0x40
    NSString *_requiredConnectionCapability;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSMapTable *_clientsByObject;	// 88 = 0x58
    NSString *_machServiceName;	// 96 = 0x60
    NSXPCListener *_xpcListener;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001bbbb4
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(readonly, nonatomic) NSMapTable *clientsByObject; // @synthesize clientsByObject=_clientsByObject;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool supportsClientAssertions; // @synthesize supportsClientAssertions=_supportsClientAssertions;
@property(copy, nonatomic) NSString *requiredConnectionCapability; // @synthesize requiredConnectionCapability=_requiredConnectionCapability;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001bb7fc
- (void)handleInvocation:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x00100000001bb684
- (CDUnknownBlockType)_updatedQOSBlockForBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bb63a
- (CDUnknownBlockType)_connectionEndedHandlerForXPCClient:(id)arg1 withCustomBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bb412
- (id)_xpcClientForConnection:(id)arg1;	// IMP=0x00100000001bb1af
- (void)_performBlock:(CDUnknownBlockType)arg1 onClients:(id)arg2 coalescedByIdentifier:(id)arg3;	// IMP=0x00100000001bafcb
- (void)_performBlock:(CDUnknownBlockType)arg1 onClients:(id)arg2;	// IMP=0x00100000001bae43
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;	// IMP=0x00100000001bad91
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bad7d
@property(readonly, nonatomic) void *queueContext;
- (void)filterClientsUsingPredicate:(CDUnknownBlockType)arg1 andPerformBlock:(CDUnknownBlockType)arg2 coalescedByIdentifier:(id)arg3;	// IMP=0x00100000001bac99
- (void)performBlockOnClients:(CDUnknownBlockType)arg1 coalescedByIdentifier:(id)arg2;	// IMP=0x00100000001babdf
- (void)filterClientsEntitledForCapability:(id)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bab34
- (void)filterClientsUsingPredicate:(CDUnknownBlockType)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001baa77
- (void)performBlockOnClients:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba9d9
- (id)clientsEntitledForCapability:(id)arg1;	// IMP=0x00100000001ba933
- (id)clientsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ba7fe
- (void)removeClient:(id)arg1;	// IMP=0x00100000001ba743
- (void)addClient:(id)arg1;	// IMP=0x00100000001ba68a
- (void)removeLocalClientObject:(id)arg1;	// IMP=0x00100000001ba5cc
- (void)addLocalClientObject:(id)arg1;	// IMP=0x00100000001ba4fe
- (void)invalidate;	// IMP=0x00100000001ba45d
- (void)startListeningOnMachServiceWithName:(id)arg1;	// IMP=0x00100000001ba356
- (_Bool)isClientAllowed:(id)arg1;	// IMP=0x00100000001ba28c
@property(readonly, nonatomic) CSDClient *currentClient;
@property(readonly, nonatomic) NSArray *clients;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) id synchronousExportedObjectProxy; // @synthesize synchronousExportedObjectProxy=_synchronousExportedObjectProxy;
@property(retain, nonatomic) id asynchronousExportedObjectProxy; // @synthesize asynchronousExportedObjectProxy=_asynchronousExportedObjectProxy;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(nonatomic, getter=isLocalClientActive) _Bool localClientActive; // @synthesize localClientActive=_localClientActive;
- (void)dealloc;	// IMP=0x00100000001b9871
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00100000001b9798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

