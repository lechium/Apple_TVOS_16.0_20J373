//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIDatePicker, _UIDatePickerStyle, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerOverlayPlatterView : UIView
{
    _Bool _accessoryViewIgnoresDefaultInsets;	// 176 = 0xb0
    UIDatePicker *_datePicker;	// 184 = 0xb8
    _UIRoundedRectShadowView *_shadowView;	// 192 = 0xc0
    UIView *_backgroundView;	// 200 = 0xc8
    UIView *_accessoryView;	// 208 = 0xd0
    UIView *_previousContentView;	// 216 = 0xd8
    UIView *_contentView;	// 224 = 0xe0
    NSLayoutConstraint *_contentWidthConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_contentHeightConstraint;	// 240 = 0xf0
    _UIDatePickerStyle *_datePickerStyle;	// 248 = 0xf8
    struct CGRect _contentBounds;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000010619eb
@property(readonly, nonatomic) _UIDatePickerStyle *datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
@property(readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *previousContentView; // @synthesize previousContentView=_previousContentView;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) _UIRoundedRectShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) _Bool accessoryViewIgnoresDefaultInsets; // @synthesize accessoryViewIgnoresDefaultInsets=_accessoryViewIgnoresDefaultInsets;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)datePickerTransitionCompletion;	// IMP=0x000000000106187d
- (void)datePickerTransitionAnimation;	// IMP=0x00000000010617ba
- (void)prepareDatePickerTransitionWithDatePicker:(id)arg1;	// IMP=0x00000000010616f6
- (struct CGSize)preferredPlatterSize;	// IMP=0x00000000010613d8
- (struct CGSize)preferredContentSize;	// IMP=0x0000000001061195
- (void)layoutSubviews;	// IMP=0x00000000010610a5
- (void)replaceDatePicker:(id)arg1;	// IMP=0x0000000001060b13
- (id)initWithDatePicker:(id)arg1 accessoryView:(id)arg2;	// IMP=0x0000000001060907

@end

