//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView, UIViewPropertyAnimator;
@protocol UIStepperControl;

__attribute__((visibility("hidden")))
@interface UIStepperHorizontalVisualElement : UIView
{
    _Bool _isRtoL;	// 176 = 0xb0
    UIImageView *_leftBackground;	// 184 = 0xb8
    UIImageView *_rightBackground;	// 192 = 0xc0
    UIImageView *_leftHighlight;	// 200 = 0xc8
    UIImageView *_rightHighlight;	// 208 = 0xd0
    UIImageView *_middleView;	// 216 = 0xd8
    UIButton *_plusButton;	// 224 = 0xe0
    UIButton *_minusButton;	// 232 = 0xe8
    NSTimer *_repeatTimer;	// 240 = 0xf0
    long long _repeatCount;	// 248 = 0xf8
    NSMutableDictionary *_dividerImages;	// 256 = 0x100
    UIViewPropertyAnimator *_leftAlphaAnimator;	// 264 = 0x108
    UIViewPropertyAnimator *_rightAlphaAnimator;	// 272 = 0x110
    UIViewPropertyAnimator *_leftFrameAnimator;	// 280 = 0x118
    UIViewPropertyAnimator *_rightFrameAnimator;	// 288 = 0x120
    _Bool _autorepeat;	// 296 = 0x128
    _Bool _continuous;	// 297 = 0x129
    _Bool _enabled;	// 298 = 0x12a
    _Bool _wraps;	// 299 = 0x12b
    double _value;	// 304 = 0x130
    double _maximumValue;	// 312 = 0x138
    double _minimumValue;	// 320 = 0x140
    id <UIStepperControl> _stepperControl;	// 328 = 0x148
    double _stepValue;	// 336 = 0x150
}

+ (id)_highlightOpacityAnimation;	// IMP=0x0010000001015d30
+ (id)_highlightSizeAnimation;	// IMP=0x0010000001015cbf
+ (struct UIEdgeInsets)initialAlignmentRectInsets;	// IMP=0x001000000101569c
+ (struct CGSize)initialIntrinsicSize;	// IMP=0x001000000101568a
+ (struct CGSize)initialSize;	// IMP=0x0010000001015665
- (void).cxx_destruct;	// IMP=0x0000000001017fe4
@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) __weak id <UIStepperControl> stepperControl; // @synthesize stepperControl=_stepperControl;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) _Bool autorepeat; // @synthesize autorepeat=_autorepeat;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)setTintColor:(id)arg1;	// IMP=0x0000000001017eb9
- (id)decrementImageForState:(unsigned long long)arg1;	// IMP=0x0000000001017e9c
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000001017de8
- (id)incrementImageForState:(unsigned long long)arg1;	// IMP=0x0000000001017d6e
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000001017cba
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;	// IMP=0x0000000001017be9
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;	// IMP=0x0000000001017ab0
- (id)backgroundImageForState:(unsigned long long)arg1;	// IMP=0x0000000001017a93
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000001017546
- (void)layoutSubviews;	// IMP=0x00000000010171df
- (void)_updateCount:(id)arg1;	// IMP=0x0000000001016f36
- (void)_stopTimer;	// IMP=0x0000000001016efe
- (void)_startTimer;	// IMP=0x0000000001016e86
- (struct UIEdgeInsets)alignmentRectInsetsForControl:(id)arg1;	// IMP=0x0000000001016e4f
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000001016ddb
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001016d5a
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001016cf6
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001016c59
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001016bca
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001016a86
- (void)_updateDividerImageForButtonState;	// IMP=0x0000000001016931
- (void)_updateBackgroundForButtonState;	// IMP=0x000000000101691d
- (void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(_Bool)arg6;	// IMP=0x0000000001016535
- (void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(_Bool)arg3;	// IMP=0x00000000010160b3
- (id)_alphaAnimator:(_Bool)arg1;	// IMP=0x0000000001015ff3
- (struct CGRect)_rightHighlightInsetFrame;	// IMP=0x0000000001015fa1
- (struct CGRect)_rightHighlightFrame;	// IMP=0x0000000001015ec6
- (struct CGRect)_leftHighlightInsetFrame;	// IMP=0x0000000001015e74
- (struct CGRect)_leftHighlightFrame;	// IMP=0x0000000001015db9
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000001015c81
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001015b4f
- (void)_updateButtonEnabled;	// IMP=0x0000000001015a2f
- (void)_commonStepperInit;	// IMP=0x00000000010157e0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000010157b2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forControl:(id)arg2;	// IMP=0x00000000010157a0
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1 forControl:(id)arg2;	// IMP=0x000000000101578e
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000010156af
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000101533e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
