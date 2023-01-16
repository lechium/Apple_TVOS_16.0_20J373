//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CFPrefsSynchronizer : NSObject
{
    NSObject<OS_dispatch_source> *_synchTimer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_synchQueue;	// 16 = 0x10
    struct __CFSet *_dirtySources;	// 24 = 0x18
    struct os_unfair_lock_s _CFPrefsDirtySourcesLock;	// 32 = 0x20
    _Bool _active;	// 36 = 0x24
}

- (id)init;	// IMP=0x0000000000179bc2

@end

