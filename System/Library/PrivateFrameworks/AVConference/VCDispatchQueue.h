//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCDispatchQueue : NSObject
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    NSMutableArray *_rootQueues;	// 72 = 0x48
}

+ (id)defaultManager;	// IMP=0x00600000000d4225
- (id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(_Bool)arg2;	// IMP=0x00000000000d435f
- (void)dealloc;	// IMP=0x00000000000d42e7
- (id)init;	// IMP=0x00000000000d426a

@end

