//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, CloudPendingChangesCoordinator, ICConnectionConfiguration, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CloudLibrary : NSObject
{
    _Bool _failedToConnect;	// 8 = 0x8
    _Bool _loginRequestInFlight;	// 9 = 0x9
    NSString *_libraryIdentifier;	// 16 = 0x10
    CloudLibraryConnection *_underlyingConnection;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
    CloudPendingChangesCoordinator *_pendingChangesCoordinator;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_connectionGroup;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_asynchronousRequestsAccessQueue;	// 64 = 0x40
    CDUnknownBlockType _connectionCompletionHandler;	// 72 = 0x48
}

+ (id)oversizeLogCategory;	// IMP=0x0040000000065eea
+ (id)logCategory;	// IMP=0x0010000000065dd3
- (void).cxx_destruct;	// IMP=0x00200000000639c1
@property(copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asynchronousRequestsAccessQueue; // @synthesize asynchronousRequestsAccessQueue=_asynchronousRequestsAccessQueue;
@property(nonatomic) _Bool loginRequestInFlight; // @synthesize loginRequestInFlight=_loginRequestInFlight;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *connectionGroup; // @synthesize connectionGroup=_connectionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) _Bool failedToConnect; // @synthesize failedToConnect=_failedToConnect;
@property(readonly, nonatomic) CloudPendingChangesCoordinator *pendingChangesCoordinator; // @synthesize pendingChangesCoordinator=_pendingChangesCoordinator;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CloudLibraryConnection *underlyingConnection; // @synthesize underlyingConnection=_underlyingConnection;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (void)_executeBlockForAllOperations:(CDUnknownBlockType)arg1;	// IMP=0x00100000000636df
- (void)_continueConnectingToLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006360a
- (void)_connectToLibraryWithCompletionHandler:(CDUnknownBlockType)arg1 allowRetry:(_Bool)arg2 forceBagReload:(_Bool)arg3;	// IMP=0x0010000000063450
- (void)_ensureConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006339f
- (void)_enqueuePendingOperation:(id)arg1;	// IMP=0x0010000000063112
- (void)_enqueueFailedOperation:(id)arg1;	// IMP=0x0010000000062fd7
- (void)_performPendingOperations;	// IMP=0x0010000000062eb1
- (_Bool)_isEnabledWithURLBag:(id)arg1;	// IMP=0x0010000000062ea9
- (id)_bagKey;	// IMP=0x0010000000062e7a
- (id)_userIdentity;	// IMP=0x0010000000062e61
- (void)cancelAllOperations;	// IMP=0x0010000000062d4f
- (void)increasePriorityForAllOperations;	// IMP=0x0010000000062c3d
- (void)decreasePriorityForAllOperations;	// IMP=0x0010000000062b2b
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000062a4f
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000062973
- (void)dealloc;	// IMP=0x0010000000062944
- (id)_initWithConfiguration:(id)arg1 pendingChangesCoordinator:(id)arg2;	// IMP=0x0010000000062548
- (id)init;	// IMP=0x0010000000062506

@end

