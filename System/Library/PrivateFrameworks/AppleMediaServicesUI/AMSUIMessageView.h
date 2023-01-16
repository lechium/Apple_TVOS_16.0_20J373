//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class AMSDialogAction, AMSUICommonImageView, AMSUICommonTextView, AMSUIMessageViewLayoutContext, AMSUIPopoverShapeLayerView, NSArray, NSAttributedString, UIColor, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface AMSUIMessageView : AMSUICommonView
{
    _Bool _isSizing;	// 8 = 0x8
    _Bool _preLayoutImageView;	// 9 = 0x9
    UIView *_accessoryView;	// 16 = 0x10
    UIView *_accessorySecondaryView;	// 24 = 0x18
    NSArray *_footerButtonViews;	// 32 = 0x20
    NSAttributedString *_message;	// 40 = 0x28
    UIColor *_separatorColor;	// 48 = 0x30
    NSAttributedString *_title;	// 56 = 0x38
    UIImageView *_backgroundImageView;	// 64 = 0x40
    AMSUICommonImageView *_imageView;	// 72 = 0x48
    AMSUICommonTextView *_textView;	// 80 = 0x50
    AMSDialogAction *_bodyAction;	// 88 = 0x58
    unsigned long long _imageStyle;	// 96 = 0x60
    unsigned long long _style;	// 104 = 0x68
    UIScrollView *_containerView;	// 112 = 0x70
    UIView *_imageContainerView;	// 120 = 0x78
    AMSUIMessageViewLayoutContext *_layoutContext;	// 128 = 0x80
    NSArray *_separatorViews;	// 136 = 0x88
    AMSUIPopoverShapeLayerView *_maskShapeView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000003042b
@property(retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView; // @synthesize maskShapeView=_maskShapeView;
@property(retain, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) _Bool preLayoutImageView; // @synthesize preLayoutImageView=_preLayoutImageView;
@property(readonly, nonatomic) AMSDialogAction *bodyAction; // @synthesize bodyAction=_bodyAction;
@property(readonly, nonatomic) AMSUICommonTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isSizing; // @synthesize isSizing=_isSizing;
@property(readonly, nonatomic) AMSUICommonImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)_setTextAlignment;	// IMP=0x000000000003018a
- (id)_makeSeparatorView;	// IMP=0x0000000000030125
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) NSArray *footerButtonViews; // @synthesize footerButtonViews=_footerButtonViews;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000002f85f
@property(retain, nonatomic) UIView *accessorySecondaryView; // @synthesize accessorySecondaryView=_accessorySecondaryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_syncRectsFromContext;	// IMP=0x000000000002e3d4
- (id)_defaultTitleFont;	// IMP=0x000000000002e23c
- (id)_defaultTitleColor;	// IMP=0x000000000002e223
- (id)_defaultMessageFont;	// IMP=0x000000000002e163
- (id)_defaultMessageColor;	// IMP=0x000000000002e14a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002e0da
- (_Bool)_layoutHeightDependsOnWidth;	// IMP=0x000000000002e0d2
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;	// IMP=0x000000000002e0c7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002e021
- (void)layoutSubviews;	// IMP=0x000000000002dfe0
- (void)setNeedsLayout;	// IMP=0x000000000002df76
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002de2f
- (void)_endObservations;	// IMP=0x000000000002dddc
- (void)_startObservations;	// IMP=0x000000000002dd80
- (void)removeBubbleArrowMaskView;	// IMP=0x000000000002dd17
- (void)setupBubbleArrowMaskView;	// IMP=0x000000000002dc47
- (void)setFooterForDialogActions:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002dabd
- (void)setBodyDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002da0f
- (void)setAccessorySecondaryViewForDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002d947
- (void)setAccessoryViewForDialogAction:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000002d87f
- (void)_setTextViewText;	// IMP=0x000000000002d640
- (void)_setAccessibility;	// IMP=0x000000000002cfc0
- (void)_setupImageView;	// IMP=0x000000000002c890
- (void)_setBackground;	// IMP=0x000000000002c6ba
- (void)_setShadow;	// IMP=0x000000000002c48b
- (void)_setupInitialLayout;	// IMP=0x000000000002c320
- (void)_setupDefaults;	// IMP=0x000000000002bf5d
- (void)dealloc;	// IMP=0x000000000002bf1f
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x000000000002bce8

@end

