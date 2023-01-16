//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, RMConnectionDataDelegate, RMConnectionLifecycleDelegate;

__attribute__((visibility("hidden")))
@interface RMConnectionEndpoint : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <RMConnectionLifecycleDelegate> _connectionDelegate;	// 16 = 0x10
    id <RMConnectionDataDelegate> _dataDelegate;	// 24 = 0x18
    NSObject<OS_xpc_object> *_streamingServerConnection;	// 32 = 0x20
    NSObject<OS_xpc_object> *_streamingClientConnection;	// 40 = 0x28
    NSObject<OS_xpc_object> *_streamingClientListener;	// 48 = 0x30
    NSObject<OS_xpc_object> *_messagingConnection;	// 56 = 0x38
    NSObject<OS_xpc_object> *_priorityBoostReplyMessage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000007064

@end

