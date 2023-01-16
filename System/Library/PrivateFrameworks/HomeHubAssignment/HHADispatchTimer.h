//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HHADispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    unsigned long long _timeout;	// 24 = 0x18
    unsigned long long _leeway;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000aa07
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long leeway; // @synthesize leeway=_leeway;
@property(readonly, nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
- (void)start;	// IMP=0x000000000000a8c8
- (void)cancel;	// IMP=0x000000000000a892
- (void)_handleTimerFired;	// IMP=0x000000000000a85d
- (void)dealloc;	// IMP=0x000000000000a81f
- (id)initWithDuration:(unsigned long long)arg1 leeway:(unsigned long long)arg2 queue:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a754

@end

