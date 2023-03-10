//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AWAttentionEvent;

@interface SleepSM
{
    unsigned long long _suppressWakeForHIDEventsTimeRangeStart;	// 32 = 0x20
    unsigned long long _suppressTimeInTicks;	// 40 = 0x28
    _Bool _sleepAllowed;	// 48 = 0x30
    AWAttentionEvent *_attentionalEvent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000d345
@property(retain, nonatomic) AWAttentionEvent *attentionalEvent; // @synthesize attentionalEvent=_attentionalEvent;
- (void)_temporarilySuppressWakeForHIDEvents;	// IMP=0x001000000000d2ff
- (void)_enterOffStateForced;	// IMP=0x001000000000d2ea
- (void)_enterOnStateForced;	// IMP=0x001000000000d251
- (void)_enterOffStateAutomatically;	// IMP=0x001000000000d115
- (void)_enterOnStateAutomatically;	// IMP=0x001000000000cec1
- (_Bool)_canEnterOffStateAutomatically;	// IMP=0x001000000000ce90
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x001000000000cb7f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000c9ce
- (id)init;	// IMP=0x001000000000c6c7

@end

