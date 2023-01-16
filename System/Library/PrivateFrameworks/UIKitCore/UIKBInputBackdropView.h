//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;	// 176 = 0xb0
    UIKBBackdropView *_inputBackdropLeftView;	// 184 = 0xb8
    UIKBBackdropView *_inputBackdropRightView;	// 192 = 0xc0
    unsigned long long _innerCorners;	// 200 = 0xc8
    _Bool _isTransitioning;	// 208 = 0xd0
    double _transitionGap;	// 216 = 0xd8
    double _transitionLeftOffset;	// 224 = 0xe0
    double _transitionRightOffset;	// 232 = 0xe8
    long long _style;	// 240 = 0xf0
    _Bool _hasStartRect;	// 248 = 0xf8
    _Bool _hasEndRect;	// 249 = 0xf9
    struct CGRect _savedStartRect;	// 256 = 0x100
    struct CGRect _savedEndRect;	// 288 = 0x120
    _UIVisualEffectBackdropView *_captureView;	// 320 = 0x140
    NSArray *_splitConstraints;	// 328 = 0x148
    NSArray *_fullWidthConstraints;	// 336 = 0x150
    NSLayoutConstraint *_leftWidthConstraint;	// 344 = 0x158
    NSLayoutConstraint *_rightWidthConstraint;	// 352 = 0x160
    NSLayoutConstraint *_heightConstraint;	// 360 = 0x168
    double _leftWidthDiff;	// 368 = 0x170
    double _rightWidthDiff;	// 376 = 0x178
    double _tallHeight;	// 384 = 0x180
    double _heightDiff;	// 392 = 0x188
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0060000000a14577
- (void).cxx_destruct;	// IMP=0x0000000000a16691
@property(nonatomic) double heightDiff; // @synthesize heightDiff=_heightDiff;
@property(nonatomic) double tallHeight; // @synthesize tallHeight=_tallHeight;
@property(nonatomic) double rightWidthDiff; // @synthesize rightWidthDiff=_rightWidthDiff;
@property(nonatomic) double leftWidthDiff; // @synthesize leftWidthDiff=_leftWidthDiff;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightWidthConstraint; // @synthesize rightWidthConstraint=_rightWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftWidthConstraint; // @synthesize leftWidthConstraint=_leftWidthConstraint;
@property(retain, nonatomic) NSArray *fullWidthConstraints; // @synthesize fullWidthConstraints=_fullWidthConstraints;
@property(retain, nonatomic) NSArray *splitConstraints; // @synthesize splitConstraints=_splitConstraints;
@property(retain, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
@property(readonly) long long style; // @synthesize style=_style;
- (_Bool)_isTransitioning;	// IMP=0x0000000000a16493
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;	// IMP=0x0000000000a1633d
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000a162f8
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a16248
- (void)setGestureProgressForSplit:(double)arg1;	// IMP=0x0000000000a15e2b
- (void)_updateForLeftOffset:(double)arg1 rightOffset:(double)arg2;	// IMP=0x0000000000a15d5f
- (void)_prepareWithLeftOffset:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000a15ce3
- (void)setProgress:(double)arg1 withFrame:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;	// IMP=0x0000000000a15ad7
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0000000000a15abe
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;	// IMP=0x0000000000a15399
- (void)layoutInputBackdropToSplitWithHeight:(double)arg1 innerCorners:(unsigned long long)arg2;	// IMP=0x0000000000a152b8
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;	// IMP=0x0000000000a15075
- (void)createSplitBackdropIfNeeded;	// IMP=0x0000000000a14777
- (void)restoreFromSnapshotting;	// IMP=0x0000000000a146ff
- (void)prepareForSnapshotting;	// IMP=0x0000000000a14684
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;	// IMP=0x0000000000a14609
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000a1457f
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000a1456c
- (void)dealloc;	// IMP=0x0000000000a144e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a14378

@end
