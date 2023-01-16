//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
    CDUnknownBlockType _connectionHandler;	// 8 = 0x8
    NSString *_serviceBundleIdentifier;	// 16 = 0x10
    _UIRemoteViewService *_service;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _isCancelled;	// 40 = 0x28
    NSError *_cancellationError;	// 48 = 0x30
    _UIAsyncInvocation *_cancellationInvocation;	// 56 = 0x38
    int _sessionRequestNotifyToken;	// 64 = 0x40
    BKSProcessAssertion *_serviceProcessAssertion;	// 72 = 0x48
    NSXPCConnection *_serviceSessionConnection;	// 80 = 0x50
    _Bool _serviceSessionConnectionResumed;	// 88 = 0x58
}

+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000010247a5
+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000010240d3
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000010240bc
+ (void)initialize;	// IMP=0x0060000001024015
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000102550b
- (void)_cancelWithError:(id)arg1;	// IMP=0x00000000010254d7
- (void)_didConnectToService;	// IMP=0x000000000102543f
- (void)_establishConnection;	// IMP=0x0000000001025248
- (void)_createAndEstablishConnection;	// IMP=0x0000000001025154
- (void)_createPlugInProcessAssertion;	// IMP=0x0000000001024fa3
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001024e18
- (void)_createProcessAssertion;	// IMP=0x0000000001024c6b
- (void)_launchService;	// IMP=0x000000000102491c
- (void)dealloc;	// IMP=0x00000000010247bf
- (void)_objc_initiateDealloc;	// IMP=0x0000000001024044

@end

