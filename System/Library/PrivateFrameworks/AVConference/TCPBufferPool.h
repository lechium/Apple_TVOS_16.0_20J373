//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCPBufferPool : NSObject
{
    int poolSize;	// 8 = 0x8
    struct tagBufferNode *head;	// 16 = 0x10
    struct tagBufferNode *tail;	// 24 = 0x18
    struct tagBufferNode *avail;	// 32 = 0x20
    int poolLock;	// 40 = 0x28
}

- (void)monitorBufferPool;	// IMP=0x0000000000196379
- (void)returnBufferToPool:(char *)arg1;	// IMP=0x000000000019624f
- (char *)getBufferFromPool:(int)arg1;	// IMP=0x0000000000195e24
- (void)dealloc;	// IMP=0x0000000000195d8d
- (id)init;	// IMP=0x0000000000195ca6

@end

