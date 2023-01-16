//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSXPCInterface *_remoteInterface;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    CDUnknownBlockType _errorBlock;	// 32 = 0x20
    unsigned long long _proxyNumber;	// 40 = 0x28
    unsigned long long _generationCount;	// 48 = 0x30
    unsigned long long _flags;	// 56 = 0x38
    double _timeout;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000066390e
@property(copy) NSDictionary *_userInfo; // @synthesize _userInfo;
@property(readonly, retain) NSXPCConnection *_connection; // @synthesize _connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000663fd3
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000663f5a
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000663edd
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000663e79
- (id)_unboostingRemoteObjectProxy;	// IMP=0x0000000000663e21
- (id)remoteObjectProxy;	// IMP=0x0000000000663dc2
- (void)_forwardStackInvocation:(id)arg1;	// IMP=0x0000000000663d95
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000663d68
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000663ce4
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000663c70
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000663bd7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000663ad6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000663916
- (void)dealloc;	// IMP=0x0000000000663877
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;	// IMP=0x0000000000663811
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x000000000066375c

@end

