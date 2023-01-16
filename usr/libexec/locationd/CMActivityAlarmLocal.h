//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMActivityAlarm.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmLocal : CMActivityAlarm
{
    void *fConcentrator;	// 8 = 0x8
    _Bool fIsValid;	// 16 = 0x10
    struct __CFRunLoop *fRunLoop;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    CDUnknownBlockType fHandler;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    NSString *_executable;	// 56 = 0x38
}

+ (id)activityAlarmInfo;	// IMP=0x0040000000981797
+ (_Bool)activityAlarmAvailable;	// IMP=0x0010000000981786
@property(copy, nonatomic) NSString *executable; // @synthesize executable=_executable;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)fire;	// IMP=0x0010000000981ddc
- (_Bool)isValid;	// IMP=0x0010000000981db2
- (void)invalidate;	// IMP=0x0010000000981cc0
- (void)dealloc;	// IMP=0x0010000000981c58
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000981b5b
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 forClient:(const void *)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000009819dc
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000009817ba

@end

