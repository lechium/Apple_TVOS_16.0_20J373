//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSThread.h>

@interface NSThread (_IMThreadBlockSupport)
+ (void)_im_runBlock:(CDUnknownBlockType)arg1;	// IMP=0x008000000000c249
- (void)__im_performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 modes:(id)arg3;	// IMP=0x001000000000c55c
- (void)__im_performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x001000000000c4ca
- (void)__im_performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2 modes:(id)arg3;	// IMP=0x001000000000c441
- (void)__im_performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x001000000000c3db
- (void)__im_performBlock:(CDUnknownBlockType)arg1 modes:(id)arg2;	// IMP=0x001000000000c3ce
- (void)__im_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c2e6
@end
