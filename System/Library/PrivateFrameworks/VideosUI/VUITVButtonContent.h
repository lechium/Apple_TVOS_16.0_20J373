//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIFloatingContentView.h>

@class NSString, UIColor, UIView, UIVisualEffectView, VUIImageView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUITVButtonContent : _UIFloatingContentView
{
    UIColor *__backgroundColor;	// 8 = 0x8
    _Bool _focused;	// 16 = 0x10
    _Bool _blurEnabled;	// 17 = 0x11
    _Bool _imageTrailsTextContent;	// 18 = 0x12
    _Bool _disabled;	// 19 = 0x13
    double _cornerRadius;	// 24 = 0x18
    UIView *_overlayView;	// 32 = 0x20
    UIVisualEffectView *_backdropView;	// 40 = 0x28
    long long _backdropStyle;	// 48 = 0x30
    UIColor *_highlightColor;	// 56 = 0x38
    UIColor *_tintColor;	// 64 = 0x40
    VUILabel *_textContentView;	// 72 = 0x48
    long long _textAlignment;	// 80 = 0x50
    VUIImageView *_imageView;	// 88 = 0x58
    double _focusSizeIncrease;	// 96 = 0x60
    NSString *_groupName;	// 104 = 0x68
    struct UIEdgeInsets _padding;	// 112 = 0x70
    struct UIEdgeInsets _textContentViewMargin;	// 144 = 0x90
    struct UIEdgeInsets _imageViewMargin;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000005c056
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) _Bool imageTrailsTextContent; // @synthesize imageTrailsTextContent=_imageTrailsTextContent;
@property(nonatomic) struct UIEdgeInsets imageViewMargin; // @synthesize imageViewMargin=_imageViewMargin;
@property(retain, nonatomic) VUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct UIEdgeInsets textContentViewMargin; // @synthesize textContentViewMargin=_textContentViewMargin;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) VUILabel *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(readonly, nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)_updateFocusStateWithCoordinator:(id)arg1;	// IMP=0x000000000005bc09
- (void)_updateFloatingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;	// IMP=0x000000000005bbf1
- (void)_setFocused:(_Bool)arg1 animationCoordinator:(id)arg2;	// IMP=0x000000000005bbcb
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000005bbb6
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000005bb3b
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000005bb24
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000005bb0d
- (double)_imageMarginFromText;	// IMP=0x000000000005ba1e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005b94c
- (void)pressesEnded;	// IMP=0x000000000005b8f9
- (void)pressesCancelled;	// IMP=0x000000000005b8a6
- (void)pressesBegan;	// IMP=0x000000000005b88a
- (_Bool)canBecomeFocused;	// IMP=0x000000000005b882
- (void)layoutSubviews;	// IMP=0x000000000005b13f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005b063
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;	// IMP=0x000000000005ad43
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000005ad05
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000005ac80
- (id)backgroundColor;	// IMP=0x000000000005ac6b
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2;	// IMP=0x000000000005a8e3

@end

