//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PCSIDSReplyContext : NSObject
{
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 8 = 0x8
    CDUnknownBlockType _replyBlock;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000001f46
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy) CDUnknownBlockType replyBlock; // @synthesize replyBlock=_replyBlock;
@property(retain) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
- (void)runReplyHandlerWithMessage:(id)arg1 error:(id)arg2;	// IMP=0x0010000000001dac
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 logDescription:(id)arg3 sentID:(id)arg4 replyHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000001a08

@end

