//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;	// IMP=0x008000000057be52
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x008000000057bdc3
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x008000000057bd55
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000057bcb3
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000057bc32
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x008000000057bb85
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x008000000057baf9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000057bacc
- (double)_cffireTime;	// IMP=0x001000000057c1af
- (CDStruct_e097db04)context;	// IMP=0x001000000057c194
- (void)setFireTime:(double)arg1;	// IMP=0x001000000057c15c
- (double)fireTime;	// IMP=0x001000000057c131
- (double)interval;	// IMP=0x001000000057c11f
- (long long)order;	// IMP=0x001000000057c117
- (struct __CFString *)copyDebugDescription;	// IMP=0x001000000057c0fc
- (id)userInfo;	// IMP=0x001000000057c0f4
- (void)setFireDate:(id)arg1;	// IMP=0x001000000057c0c9
- (id)fireDate;	// IMP=0x001000000057c09b
- (void)fire;	// IMP=0x001000000057c070
- (void)setTolerance:(double)arg1;	// IMP=0x001000000057c045
- (double)tolerance;	// IMP=0x001000000057c016
- (double)timeInterval;	// IMP=0x001000000057bfe7
- (_Bool)isValid;	// IMP=0x001000000057bfb9
- (void)invalidate;	// IMP=0x001000000057bf8e
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x001000000057bf81
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000057beac
@end

