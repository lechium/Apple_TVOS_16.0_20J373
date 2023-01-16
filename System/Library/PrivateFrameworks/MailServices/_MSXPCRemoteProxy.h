//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _MSXPCRemoteProxy : NSObject
{
    struct os_unfair_lock_s _selectorLock;	// 8 = 0x8
    struct __CFDictionary *_knownSelectors;	// 16 = 0x10
    MSXPCConnection *_connection;	// 24 = 0x18
    NSXPCInterface *_remoteInterface;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
    id ____nsxpc_remoteObjectProxy;	// 48 = 0x30
}

@property(retain, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id ___nsxpc_remoteObjectProxy; // @synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000005a35
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000059f5
- (id)remoteObjectProxy;	// IMP=0x00000000000059b7
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000005869
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000000580d
- (void)dealloc;	// IMP=0x00000000000057a7
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005706

@end
