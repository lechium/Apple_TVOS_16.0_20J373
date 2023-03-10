//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5ExecutionStreamPool : NSObject
{
    NSMutableSet *_pool;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006e0f6
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) NSMutableSet *pool; // @synthesize pool=_pool;
- (void)putBack:(id)arg1;	// IMP=0x000000000006e00d
- (id)takeOut;	// IMP=0x000000000006df09
- (id)init;	// IMP=0x000000000006de68

@end

