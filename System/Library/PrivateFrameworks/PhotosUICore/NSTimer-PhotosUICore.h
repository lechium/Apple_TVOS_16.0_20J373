//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (PhotosUICore)
+ (void)blockInvoke:(id)arg1;	// IMP=0x00800000005cc6f3
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00800000005cc670
+ (id)px_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00800000005cc5b4
+ (id)px_timerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000005cc4df
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000005cc40a
@end

