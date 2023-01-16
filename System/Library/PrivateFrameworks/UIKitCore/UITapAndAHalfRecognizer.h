//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSMutableSet, UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;	// 16 = 0x10
    double _allowableMovement;	// 32 = 0x20
    int _numberOfFullTaps;	// 40 = 0x28
    double _minimumFinalPressDuration;	// 48 = 0x30
    NSMutableSet *_activeTouches;	// 56 = 0x38
    int _currentNumberOfTaps;	// 64 = 0x40
    UITouch *_touch;	// 72 = 0x48
    UIDelayedAction *_tapTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000eefb7e
@property(nonatomic) double minimumFinalPressDuration; // @synthesize minimumFinalPressDuration=_minimumFinalPressDuration;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) int numberOfFullTaps; // @synthesize numberOfFullTaps=_numberOfFullTaps;
@property(readonly, nonatomic) struct CGPoint locationOfFirstTap;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eefa8e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef8e8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef7e5
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef3fd
- (struct CGPoint)translationInWindowCoordinates;	// IMP=0x0000000000eef37f
- (void)_verifyMovementInAllowableRange;	// IMP=0x0000000000eef2a2
- (void)recognized:(id)arg1;	// IMP=0x0000000000eef26f
- (void)tooSlow:(id)arg1;	// IMP=0x0000000000eef23c
- (void)startTapTimer:(double)arg1;	// IMP=0x0000000000eef1c6
- (void)startRecognitionTimer:(double)arg1;	// IMP=0x0000000000eef150
- (void)clearTapTimer;	// IMP=0x0000000000eef0e7
- (void)_resetGestureRecognizer;	// IMP=0x0000000000eef06f
- (void)dealloc;	// IMP=0x0000000000eef01a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000eeef75

@end
