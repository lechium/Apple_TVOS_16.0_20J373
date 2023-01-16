//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDClient : NSObject
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c9a9e
@property(readonly, retain) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)didHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c9a84
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c9a7e
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000000c9a02
- (void)handleXPCInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c9afc
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000c9ac6

@end

