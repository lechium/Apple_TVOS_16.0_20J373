//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, VKNotificationObserverDelegate;

__attribute__((visibility("hidden")))
@interface VKNotificationObserver : NSObject
{
    id <VKNotificationObserverDelegate> _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003445d1
- (void)_receivedLocalChangedNotification;	// IMP=0x00000000003444ab
- (void)_receivedFlushTileCachesNotification;	// IMP=0x0000000000344385
- (void)_receivedMemoryNotification;	// IMP=0x000000000034425f
- (void)dealloc;	// IMP=0x00000000003440de
- (id)initWithTarget:(id)arg1 taskContext:(const void *)arg2;	// IMP=0x0000000000343e37

@end

