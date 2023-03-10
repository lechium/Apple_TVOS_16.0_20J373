//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SSPromiseCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;	// 8 = 0x8
    _Bool _shouldCallImmediately;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017a67c
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;	// IMP=0x000000000017a443
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017a396
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017a2e6
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017a242
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017a19f
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017a0f9
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017a062
- (id)init;	// IMP=0x000000000017a00c

@end

