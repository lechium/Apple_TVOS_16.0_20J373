//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface ASCModalViewGestureRecognizer : UIGestureRecognizer
{
    UIView *_targetView;	// 8 = 0x8
    NSMutableSet *_activeTouches;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000030034
@property(readonly, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(readonly, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002ff48
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002fe7e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002fbf7
- (_Bool)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3;	// IMP=0x000000000002fa3b
- (void)reset;	// IMP=0x000000000002f9d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f9bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f991
- (id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002f8ee

@end

