//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UISwitchVisualElement.h"

@class NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwitchMVEGestureTrackingSession, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UISwitchModernVisualElement : UISwitchVisualElement
{
    UIView *_switchWellView;	// 176 = 0xb0
    UIView *_leftSwitchWellView;	// 184 = 0xb8
    UIView *_switchWellContainerView;	// 192 = 0xc0
    UIView *_leftSwitchWellContainerView;	// 200 = 0xc8
    UIImageView *_switchWellImageView;	// 208 = 0xd0
    UIView *_switchWellImageViewContainer;	// 216 = 0xd8
    UIImageView *_switchWellOffImageView;	// 224 = 0xe0
    UIImageView *_switchWellOnImageView;	// 232 = 0xe8
    UIImageView *_knobView;	// 240 = 0xf0
    UIColor *_onTintColor;	// 248 = 0xf8
    UIColor *_tintColor;	// 256 = 0x100
    _Bool _on;	// 264 = 0x108
    _Bool _pressed;	// 265 = 0x109
    _Bool _isAlwaysAccessible;	// 266 = 0x10a
    _Bool _showsOnOffLabel;	// 267 = 0x10b
    UIColor *_thumbTintColor;	// 272 = 0x110
    UIImage *_onImage;	// 280 = 0x118
    UIImage *_offImage;	// 288 = 0x120
    UISwitchMVEGestureTrackingSession *_gestureTrackingSession;	// 296 = 0x128
    UILongPressGestureRecognizer *_longPress;	// 304 = 0x130
    UIPanGestureRecognizer *_pan;	// 312 = 0x138
    UITapGestureRecognizer *_selectGestureRecognizer;	// 320 = 0x140
}

+ (id)_modernThumbImageWithColor:(id)arg1 mask:(unsigned long long)arg2 traitCollection:(id)arg3;	// IMP=0x0010000000559e62
+ (id)_modernGradientImageWithOnColor:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0010000000559971
+ (struct UIEdgeInsets)preferredAlignmentRectInsets;	// IMP=0x0010000000555018
+ (struct CGSize)preferredContentSize;	// IMP=0x0010000000555002
- (void).cxx_destruct;	// IMP=0x000000000055aebf
@property(retain, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // @synthesize selectGestureRecognizer=_selectGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) UISwitchMVEGestureTrackingSession *gestureTrackingSession; // @synthesize gestureTrackingSession=_gestureTrackingSession;
@property(nonatomic) _Bool showsOnOffLabel; // @synthesize showsOnOffLabel=_showsOnOffLabel;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x000000000055ab40
- (void)_uninstallSelectGestureRecognizer;	// IMP=0x000000000055aa82
- (void)_installSelectGestureRecognizer;	// IMP=0x000000000055a923
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000055a8d8
- (void)setSwitchControl:(id)arg1;	// IMP=0x000000000055a835
- (id)_settings;	// IMP=0x000000000055a81c
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000055a7a0
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 shouldAnimateLabels:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000055a6a5
- (void)_updateDisplayAnimated:(_Bool)arg1;	// IMP=0x000000000055a5f4
- (void)_updateDisplayWithAnimationIfNeeded;	// IMP=0x000000000055a5b2
- (id)_effectiveOffImageTintColor;	// IMP=0x000000000055a54e
- (id)_effectiveOnImageTintColor;	// IMP=0x000000000055a4db
- (_Bool)_shouldUseLightTintOverColor:(id)arg1;	// IMP=0x000000000055a450
- (id)_accessibleOffImage;	// IMP=0x000000000055a3fd
- (id)_accessibleOnImage;	// IMP=0x000000000055a3aa
- (id)_effectiveOffImage;	// IMP=0x000000000055a366
- (id)_effectiveOnImage;	// IMP=0x000000000055a322
- (id)_effectiveThumbImage;	// IMP=0x000000000055a2a7
- (id)_effectiveGradientImage;	// IMP=0x0000000000559d90
- (id)_effectiveOffTextColor;	// IMP=0x0000000000559913
- (id)_effectiveTintColor;	// IMP=0x00000000005598a9
- (id)_defaultOnTintColor;	// IMP=0x0000000000559890
- (id)_effectiveOnTintColor;	// IMP=0x0000000000559853
- (id)_labelOpacityAnimation;	// IMP=0x00000000005597b8
- (id)_switchTrackPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x00000000005595d1
- (id)_switchKnobWidthSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 pressed:(_Bool)arg3;	// IMP=0x00000000005593ea
- (id)_switchKnobPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2;	// IMP=0x0000000000559256
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(_Bool)arg4;	// IMP=0x0000000000559073
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;	// IMP=0x0000000000558f36
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x0000000000558d60
- (id)_switchTrackPositionAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x0000000000558b8a
- (struct CGPoint)_onImagePosition;	// IMP=0x0000000000558a9d
- (struct CGPoint)_offImagePosition;	// IMP=0x00000000005589ae
- (struct CGColor *)_wellColorOn:(_Bool)arg1;	// IMP=0x0000000000558952
- (double)_wellBorderWidthPressed:(_Bool)arg1 on:(_Bool)arg2;	// IMP=0x000000000055892e
- (struct CGPoint)_wellPositionOn:(_Bool)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x00000000005587db
- (struct CGPoint)_leftSwitchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x0000000000558713
- (struct CGRect)_leftSwitchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000055860a
- (struct CGPoint)_switchWellPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005584ed
- (struct CGPoint)_switchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000055843c
- (struct CGRect)_switchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005583a6
- (struct CGPoint)_knobPositionOn:(_Bool)arg1 pressed:(_Bool)arg2 forBounds:(struct CGRect)arg3;	// IMP=0x0000000000558243
- (struct CGRect)_knobBoundsPressed:(_Bool)arg1;	// IMP=0x00000000005581d5
- (void)_transitionImagesToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000558072
- (void)_transitionWellViewToOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000557ddb
- (void)_transitionWellViewToPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000557b3a
- (void)_transitionWellViewToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000055783c
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000055781f
- (void)_transitionKnobToOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005577fd
- (void)_transitionKnobToPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005577dd
- (void)_transitionKnobToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000556a4c
- (void)tintColorDidChange;	// IMP=0x0000000000556970
- (void)setTintColor:(id)arg1;	// IMP=0x000000000055680f
- (void)setOnTintColor:(id)arg1;	// IMP=0x0000000000556749
- (void)_orderSubviews;	// IMP=0x00000000005566b0
- (void)_invalidateOnOffImages;	// IMP=0x0000000000556415
- (void)_invalidateKnob;	// IMP=0x0000000000556331
- (void)_invalidateWell;	// IMP=0x0000000000555f19
- (void)_switchToStaticMode:(_Bool)arg1;	// IMP=0x0000000000555e0a
- (void)_invalidateControl;	// IMP=0x0000000000555c4f
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000555c11
- (void)_handlePanWithGestureLocationInBounds:(struct CGPoint)arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000555b31
- (void)_handlePan:(id)arg1;	// IMP=0x0000000000555a0f
- (void)_handleLongPressWithGestureLocationInBounds:(struct CGPoint)arg1 gestureState:(long long)arg2;	// IMP=0x00000000005555bd
- (void)_handleLongPress:(id)arg1;	// IMP=0x000000000055553a
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000555475
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000055536c
- (_Bool)displayedOn;	// IMP=0x000000000055535a
- (void)interactiveChangeToDisplayedOn:(_Bool)arg1;	// IMP=0x00000000005552f5
- (void)sendStateChangeActions;	// IMP=0x0000000000555299
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005550b4
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000055503d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

