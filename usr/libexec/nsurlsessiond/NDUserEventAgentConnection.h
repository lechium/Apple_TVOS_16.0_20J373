//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NDUserEventAgentConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    NSDictionary *_registeredClients;	// 32 = 0x20
    NSMutableDictionary *_pendingWakes;	// 40 = 0x28
}

+ (id)sharedUserEventAgentConnection;	// IMP=0x00400000000304ba
- (void).cxx_destruct;	// IMP=0x002000000002fb04
- (void)removePendingWakeForClient:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x001000000002fa4d
- (void)performWake:(CDUnknownBlockType)arg1 uponNotification:(id)arg2 sessionIdentifier:(id)arg3;	// IMP=0x001000000002f964
- (void)launchProcessWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x001000000002f8ad
- (_Bool)canLaunchProcessWithIdentifier:(id)arg1;	// IMP=0x001000000002f876
- (void)handleNewConnection:(id)arg1;	// IMP=0x001000000002f74a
- (void)start;	// IMP=0x001000000002f65a
- (id)init;	// IMP=0x001000000002f580

@end
