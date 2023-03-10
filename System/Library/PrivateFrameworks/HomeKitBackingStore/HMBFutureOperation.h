//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NAFuture;

__attribute__((visibility("hidden")))
@interface HMBFutureOperation : HMFOperation
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NAFuture *_future;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0060000000055d36
- (void).cxx_destruct;	// IMP=0x0000000000055c68
@property(readonly) NAFuture *future; // @synthesize future=_future;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void)main;	// IMP=0x0000000000055b56
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000055ac2
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000055a27

@end

