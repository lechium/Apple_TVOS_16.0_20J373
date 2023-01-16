//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIRepeatingGestureClockDelegate;

__attribute__((visibility("hidden")))
@interface _UIRepeatingGestureClock : NSObject
{
    unsigned long long _delayIndex;	// 8 = 0x8
    _Bool _timerOn;	// 16 = 0x10
    id <_UIRepeatingGestureClockDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000525330
@property(nonatomic) __weak id <_UIRepeatingGestureClockDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performTick:(id)arg1;	// IMP=0x000000000052529b
- (void)_createTick:(id)arg1;	// IMP=0x00000000005251f8
- (void)_scheduleTimer;	// IMP=0x000000000052511b
- (void)_cancelTimer;	// IMP=0x00000000005250b7
- (void)stopClock;	// IMP=0x00000000005250a5
- (void)startClock;	// IMP=0x000000000052508b
- (void)dealloc;	// IMP=0x000000000052504d

@end

