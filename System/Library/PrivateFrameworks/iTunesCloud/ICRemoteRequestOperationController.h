//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ICRemoteRequestOperationController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    unsigned long long _numberOfActiveRequests;	// 16 = 0x10
    NSXPCConnection *_clientConnection;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;	// 32 = 0x20
}

+ (id)sharedRemoteRequestOperationController;	// IMP=0x0040000000059152
- (void).cxx_destruct;	// IMP=0x0000000000058ceb
- (void)_willBeginExecutingRemoteRequestOperation;	// IMP=0x0000000000058ca0
- (void)_scheduleInvalidationOfClientConnection;	// IMP=0x0000000000058bef
- (void)_clientConnectionInvalidationTimerDidExpire;	// IMP=0x0000000000058bb5
- (id)_clientConnection;	// IMP=0x0000000000058afc
- (void)_invalidateClientConnection;	// IMP=0x0000000000058a66
- (void)_didEndExecutingRemoteRequestOperation;	// IMP=0x0000000000058a1b
- (void)_cancelClientConnectionInvalidationTimer;	// IMP=0x00000000000589dc
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058873
- (id)_init;	// IMP=0x000000000005881b

@end
