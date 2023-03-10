//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISObservable.h"

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

__attribute__((visibility("hidden")))
@interface ISAnimatedImageTimer : ISObservable
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

+ (id)sharedTimer;	// IMP=0x0060000000022978
- (void).cxx_destruct;	// IMP=0x000000000002280f
@property(nonatomic, setter=_setTimestamp:) double timestamp; // @synthesize timestamp=_timestamp;
- (void)_iosDealloc;	// IMP=0x00000000000227c5
- (void)_iosAnimationTimerFired:(id)arg1;	// IMP=0x0000000000022794
- (void)_iosUpdateDisplayLink;	// IMP=0x0000000000022672
- (void)_iosInitialization;	// IMP=0x000000000002262f
- (void)_fireTimerWithInterval:(double)arg1;	// IMP=0x000000000002252e
- (void)_updateDisplayLink;	// IMP=0x00000000000224cf
- (id)mutableChangeObject;	// IMP=0x00000000000224c6
- (void)hasObserversDidChange;	// IMP=0x0000000000022485
- (void)dealloc;	// IMP=0x0000000000022447
- (id)init;	// IMP=0x00000000000223fb

@end

