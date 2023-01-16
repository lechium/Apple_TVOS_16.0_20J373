//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView, UISlider, UISliderDataModel;

__attribute__((visibility("hidden")))
@interface _UISlideriOSVisualElement : UIView
{
    UIImageView *_innerThumbView;	// 176 = 0xb0
    UIImageView *_minValueImageView;	// 184 = 0xb8
    UIImageView *_maxValueImageView;	// 192 = 0xc0
    UIImageView *_thumbView;	// 200 = 0xc8
    UIImageView *_minTrackView;	// 208 = 0xd0
    UIImageView *_maxTrackView;	// 216 = 0xd8
    UIView *_minTrackClipView;	// 224 = 0xe0
    UIView *_maxTrackClipView;	// 232 = 0xe8
    struct {
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
    } _sliderFlags;	// 240 = 0xf0
    double _hitOffset;	// 248 = 0xf8
    UIView *_thumbViewNeue;	// 256 = 0x100
    NSArray *_trackColors;	// 264 = 0x108
    _Bool _trackIsArtworkBased;	// 272 = 0x110
    _Bool _thumbIsArtworkBased;	// 273 = 0x111
    _Bool _maxColorIsValid;	// 274 = 0x112
    UISliderDataModel *_data;	// 280 = 0x118
    UISlider *_slider;	// 288 = 0x120
}

+ (CDStruct_6024001e)drawingMetricsForPlatform;	// IMP=0x0010000000b42172
+ (id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2;	// IMP=0x0010000000b4022a
- (void).cxx_destruct;	// IMP=0x0000000000b45e69
@property(nonatomic) __weak UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UISliderDataModel *data; // @synthesize data=_data;
- (id)thumbViewNeue;	// IMP=0x0000000000b45e16
- (id)thumbView;	// IMP=0x0000000000b45e01
- (id)minValueImageView;	// IMP=0x0000000000b45dec
- (id)maxValueImageView;	// IMP=0x0000000000b45dd7
- (void)didSetValues;	// IMP=0x0000000000b45dc5
- (void)didSetShowValue;	// IMP=0x0000000000b45db3
- (void)didSetContinuous;	// IMP=0x0000000000b45dad
- (void)didSetSelected;	// IMP=0x0000000000b45d9b
- (void)didSetHighlighted;	// IMP=0x0000000000b45d89
- (void)didSetEnabled;	// IMP=0x0000000000b45d30
- (id)maxTrackView;	// IMP=0x0000000000b45d1b
- (id)minTrackView;	// IMP=0x0000000000b45d06
- (struct UIEdgeInsets)thumbHitEdgeInsets;	// IMP=0x0000000000b45c75
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;	// IMP=0x0000000000b45b03
- (void)didSetThumbEnabled;	// IMP=0x0000000000b459ea
- (void)didSetMaximumTrackImageForStates;	// IMP=0x0000000000b459bc
- (void)didSetMinimumTrackImageForStates;	// IMP=0x0000000000b4598e
- (void)didSetThumbImageForStates;	// IMP=0x0000000000b45960
- (id)createThumbView;	// IMP=0x0000000000b457b4
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b456e3
- (void)showValueDidChange;	// IMP=0x0000000000b456b5
- (_Bool)isAnimatingValueChange;	// IMP=0x0000000000b456a3
- (_Bool)cancelTouchTracking;	// IMP=0x0000000000b455a0
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b4559a
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b45594
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b454bf
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b453e6
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b45232
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b44d3b
- (_Bool)_shouldBeginTrackingAtPoint:(struct CGPoint)arg1 pointInKnob:(struct CGPoint *)arg2 inKnob:(_Bool *)arg3;	// IMP=0x0000000000b44bf3
- (_Bool)cancelMouseTracking;	// IMP=0x0000000000b44b36
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b44ac4
- (void)_sliderAnimationDidStop:(_Bool)arg1;	// IMP=0x0000000000b44a9f
- (void)_sliderAnimationWillStart;	// IMP=0x0000000000b44a86
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;	// IMP=0x0000000000b4480c
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000b4443b
- (void)_updateAppearanceForEnabled:(_Bool)arg1;	// IMP=0x0000000000b44413
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;	// IMP=0x0000000000b437b0
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;	// IMP=0x0000000000b43351
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x0000000000b43313
- (void)_setSliderNeedsLayout;	// IMP=0x0000000000b432df
- (void)didPerformLayout;	// IMP=0x0000000000b43285
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000b431ee
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000b43157
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000b42f85
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000b42f73
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000b42b18
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000b42b10
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000b42931
- (double)thumbDimensionNeue;	// IMP=0x0000000000b42902
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b424da
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b423cd
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000b422c0
- (void)didUpdateTraitCollection;	// IMP=0x0000000000b422ba
- (unsigned long long)state;	// IMP=0x0000000000b420fa
- (id)currentMaximumTrackImage;	// IMP=0x0000000000b4208e
- (id)currentMinimumTrackImage;	// IMP=0x0000000000b42022
- (id)currentThumbImage;	// IMP=0x0000000000b41fb6
- (void)tintColorDidChange;	// IMP=0x0000000000b41f73
- (id)maximumValueImage;	// IMP=0x0000000000b41f56
- (void)didSetMaximumValueImage;	// IMP=0x0000000000b41e53
- (void)didSetMinimumValueImage;	// IMP=0x0000000000b41d50
- (void)didSetMaximumTrackTintColor;	// IMP=0x0000000000b41d15
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b41bf4
- (void)didSetMinimumTrackTintColor;	// IMP=0x0000000000b41bc6
- (void)_updateMinimumTrackTintColor;	// IMP=0x0000000000b41970
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b41853
- (void)didSetThumbTintColor;	// IMP=0x0000000000b4181e
- (id)thumbTintColor;	// IMP=0x0000000000b41801
- (void)didSetThumbImageForState:(unsigned long long)arg1;	// IMP=0x0000000000b41727
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000b4146b
- (void)dealloc;	// IMP=0x0000000000b413e9
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;	// IMP=0x0000000000b41211
- (void)_buildTrackArtwork;	// IMP=0x0000000000b40eb7
- (double)_cornerRadiusForRect:(struct CGRect)arg1;	// IMP=0x0000000000b40e9f
- (void)_initSubviews;	// IMP=0x0000000000b40dff
- (void)_initImages;	// IMP=0x0000000000b40af1
- (id)createThumbViewNeue;	// IMP=0x0000000000b407de
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x0000000000b40218
- (void)_listenForContentSizeCategoryChangesIfNecessary;	// IMP=0x0000000000b40193
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b40097
- (id)init;	// IMP=0x0000000000b40020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

