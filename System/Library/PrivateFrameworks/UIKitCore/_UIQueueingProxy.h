//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned long long _suspensionCount;	// 16 = 0x10
    NSMutableArray *_queuedInvocations;	// 24 = 0x18
    CDUnknownBlockType _shouldSuspendInvocationBlock;	// 32 = 0x20
}

+ (id)proxyWithTarget:(id)arg1;	// IMP=0x0060000001044a1d
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000001044958
- (void).cxx_destruct;	// IMP=0x0000000001044f24
- (id)description;	// IMP=0x0000000001044e73
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000001044e28
- (void)removeAllEnqueuedInvocations;	// IMP=0x0000000001044de8
- (void)resume;	// IMP=0x0000000001044d88
- (void)_dispatchSuspendedMessages;	// IMP=0x0000000001044bec
- (void)suspend;	// IMP=0x0000000001044bb9
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000001044a31

@end
