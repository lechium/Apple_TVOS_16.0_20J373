//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSProxyConnection, NSString, __CFN_SocksHandshake;
@protocol OS_dispatch_queue;

@interface _NSCFSocksProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _outPort;	// 16 = 0x10
    NSString *_outHost;	// 24 = 0x18
    __CFN_SocksHandshake *_socksHandshake;	// 32 = 0x20
    NSProxyConnection *_inbound;	// 40 = 0x28
    NSProxyConnection *_outbound;	// 48 = 0x30
    NSDictionary *_configuration;	// 56 = 0x38
}

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;	// IMP=0x001000000011a32b
- (void).cxx_destruct;	// IMP=0x000000000011a043
- (void)outboundConnectionCompleteWithError:(int)arg1;	// IMP=0x000000000011a00f
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000119f6e
- (void)dealloc;	// IMP=0x0000000000119ea3
- (void)cleanup;	// IMP=0x0000000000119e27
- (void)connected:(int)arg1;	// IMP=0x0000000000119d8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
