//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject
{
    id m_target;	// 8 = 0x8
    SEL m_action;	// 16 = 0x10
    id m_userInfo;	// 24 = 0x18
    double m_delay;	// 32 = 0x20
    NSTimer *m_timer;	// 40 = 0x28
    _Bool m_canceled;	// 48 = 0x30
    NSString *m_runLoopMode;	// 56 = 0x38
    NSDate *m_startDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000001636
@property(readonly) _Bool _canceled; // @synthesize _canceled=m_canceled;
@property(readonly) NSDate *_startDate; // @synthesize _startDate=m_startDate;
@property(retain) id userInfo; // @synthesize userInfo=m_userInfo;
@property(retain) id target; // @synthesize target=m_target;
- (void)timerFired:(id)arg1;	// IMP=0x000000000000159a
- (double)delay;	// IMP=0x000000000000158f
- (_Bool)scheduled;	// IMP=0x000000000000156f
- (void)unschedule;	// IMP=0x000000000000153d
- (void)cancel;	// IMP=0x0000000000001527
- (void)touchWithDelay:(double)arg1;	// IMP=0x0000000000001408
- (void)touch;	// IMP=0x00000000000013ed
- (void)dealloc;	// IMP=0x0000000000001399
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4;	// IMP=0x000000000000137a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5;	// IMP=0x000000000000127f
- (id)init;	// IMP=0x00000000000011f3

@end

