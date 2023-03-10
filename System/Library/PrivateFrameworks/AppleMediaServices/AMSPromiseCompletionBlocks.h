//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSPromiseCompletionBlocks : NSObject
{
    struct os_unfair_lock_s _completionBlockLock;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    _Bool _shouldCallImmediately;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026e307
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;	// IMP=0x000000000026e0f3
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000026e046
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000026df96
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000026def2
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000026ddf1
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000026dcf0
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000026dc74
- (id)init;	// IMP=0x000000000026dc17

@end

