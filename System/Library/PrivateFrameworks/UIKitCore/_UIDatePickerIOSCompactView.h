//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString, UIDatePicker, UILayoutGuide, UIPanGestureRecognizer, _UIDatePickerCompactDateLabel, _UIDatePickerCompactTimeLabel, _UIDatePickerDataModel, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerIOSCompactView : UIControl
{
    struct {
        unsigned int isEnabled:1;
        unsigned int implementsCustomDidSelectComponent:1;
    } _flags;	// 176 = 0xb0
    NSDateFormatter *_dateFormatterMedium;	// 184 = 0xb8
    NSDateFormatter *_dateFormatterShort;	// 192 = 0xc0
    UILayoutGuide *_timeViewLayoutGuide;	// 200 = 0xc8
    UILayoutGuide *_contentLayoutGuide;	// 208 = 0xd0
    NSDateFormatter *_layoutFormatter;	// 216 = 0xd8
    _Bool _dateOnLeadingSide;	// 224 = 0xe0
    NSArray *_dateTimeConstraints;	// 232 = 0xe8
    _UIDatePickerOverlayPresentation *_presentation;	// 240 = 0xf0
    long long _activeComponent;	// 248 = 0xf8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 256 = 0x100
    UIDatePicker *_datePicker;	// 264 = 0x108
    _UIDatePickerDataModel *_data;	// 272 = 0x110
    _UIDatePickerCompactDateLabel *_dateView;	// 280 = 0x118
    _UIDatePickerCompactTimeLabel *_timeView;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000fe794a
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // @synthesize timeView=_timeView;
@property(readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (_Bool)hasDefaultSize;	// IMP=0x0000000000fe78e2
- (struct CGSize)defaultSize;	// IMP=0x0000000000fe78cc
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000fe78b6
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0000000000fe7892
- (_Bool)usesAutoLayout;	// IMP=0x0000000000fe788a
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x0000000000fe7882
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeToday;	// IMP=0x0000000000fe785d
- (void)didReset;	// IMP=0x0000000000fe782f
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x0000000000fe776f
- (void)didChangeMinuteInterval;	// IMP=0x0000000000fe76b1
- (void)didChangeMaximumDate;	// IMP=0x0000000000fe762e
- (void)didChangeMinimumDate;	// IMP=0x0000000000fe75ab
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x0000000000fe7523
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000fe740b
- (void)didChangeCalendar;	// IMP=0x0000000000fe7371
- (void)didChangeTimeZone;	// IMP=0x0000000000fe72d7
- (void)didChangeLocale;	// IMP=0x0000000000fe723d
- (void)didChangeMode;	// IMP=0x0000000000fe71fd
@property(readonly, nonatomic) long long datePickerStyle;
- (void)_reloadTimeViewTimeFormat;	// IMP=0x0000000000fe7002
- (void)updateTimeZoneDisplay;	// IMP=0x0000000000fe6ff0
@property(retain, nonatomic) NSDictionary *overrideAttributes;
- (void)_resignActiveComponentAnimated:(_Bool)arg1;	// IMP=0x0000000000fe6f00
- (void)setActiveComponent:(long long)arg1;	// IMP=0x0000000000fe6ea3
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;	// IMP=0x0000000000fe6dd6
- (void)didChangeCompactStyleDelegate;	// IMP=0x0000000000fe6d36
- (id)createDatePickerForCompactDateLabel:(id)arg1;	// IMP=0x0000000000fe6b42
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x0000000000fe6a8d
- (void)compactDateLabelDidEndEditing:(id)arg1;	// IMP=0x0000000000fe6a59
- (void)compactDateLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000000fe6a25
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000fe6985
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000fe693e
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000000fe68b2
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000000fe687e
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x0000000000fe656b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000fe6557
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000fe6533
- (void)_didReceivePanGestureRecognizer:(id)arg1;	// IMP=0x0000000000fe651c
- (void)updateConstraints;	// IMP=0x0000000000fe34ca
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000fe33d0
- (void)tintColorDidChange;	// IMP=0x0000000000fe3328
@property(readonly, nonatomic) _Bool alignConstraintsToLayoutGuide;
- (void)_updateDateViewTextAlignment;	// IMP=0x0000000000fe3260
- (void)_updateEnabledStyling;	// IMP=0x0000000000fe31b6
- (void)_updateUI;	// IMP=0x0000000000fe2d80
- (void)_updateDateBeforeTimeValue;	// IMP=0x0000000000fe29b9
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000fe296a
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000fe291b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000fe25ba
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x0000000000fe254c

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end
