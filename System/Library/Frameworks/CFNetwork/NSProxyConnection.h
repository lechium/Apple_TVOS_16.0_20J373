//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSProxyConnectionDelegate, OS_tcp_connection;

@interface NSProxyConnection : NSObject
{
    _Bool _doCleanupWhenWritesCompleted;	// 8 = 0x8
    NSObject<OS_tcp_connection> *_connection;	// 16 = 0x10
    id <NSProxyConnectionDelegate> _delegate;	// 24 = 0x18
    long long _pendingWrites;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a0d15
- (void)dealloc;	// IMP=0x00000000001a0cd7
- (void)cancel;	// IMP=0x00000000001a0ca1
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0bff
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0b68
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;	// IMP=0x00000000001a099a

@end

