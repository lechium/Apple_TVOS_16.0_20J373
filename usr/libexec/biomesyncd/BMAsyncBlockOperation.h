//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface BMAsyncBlockOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003a8d1
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (_Bool)isAsynchronous;	// IMP=0x001000000003a8b8
- (_Bool)isExecuting;	// IMP=0x001000000003a8a8
- (_Bool)isFinished;	// IMP=0x001000000003a898
- (void)start;	// IMP=0x001000000003a740
- (id)initWithAsyncOperationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a6b0

@end
