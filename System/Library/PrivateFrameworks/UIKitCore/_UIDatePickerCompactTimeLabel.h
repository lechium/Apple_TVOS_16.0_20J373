//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSDictionary, NSString, NSTextContentStorage, UILabel, UIView, _UIDatePickerCalendarTime, _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction, _UITextLayoutControllerBase;
@protocol _UIDatePickerCompactTimeLabelDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCompactTimeLabel
{
    struct {
        unsigned int needsLabelUpdateOnResignFirstResponder:1;
        unsigned int deferringHoverStateUpdate:1;
        unsigned int highlightedForTouch:1;
    } _flags;	// 176 = 0xb0
    struct CGRect _hourRect;	// 184 = 0xb8
    struct CGRect _minuteRect;	// 216 = 0xd8
    struct CGRect _timeOfDayRect;	// 248 = 0xf8
    NSDateFormatter *_formatter;	// 280 = 0x118
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 288 = 0x120
    NSTextContentStorage *_textContentStorage;	// 296 = 0x128
    long long _highlightedScope;	// 304 = 0x130
    UIView *_touchHighlightedView;	// 312 = 0x138
    _Bool _tapInteractionControlledExternally;	// 320 = 0x140
    id <_UIDatePickerCompactTimeLabelDelegate> _selectionDelegate;	// 328 = 0x148
    _UIDatePickerOverlayPresentation *_overlayPresentation;	// 336 = 0x150
    _UIDatePickerCalendarTime *_selectedTime;	// 344 = 0x158
    NSDictionary *_overrideAttributes;	// 352 = 0x160
    UILabel *_label;	// 360 = 0x168
    UILabel *_hourLabel;	// 368 = 0x170
    UILabel *_minuteLabel;	// 376 = 0x178
    UILabel *_timeOfDayLabel;	// 384 = 0x180
    UIView *_inputBackgroundView;	// 392 = 0x188
    unsigned long long _currentState;	// 400 = 0x190
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x0000000000c9c748
@property(readonly, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(readonly, nonatomic) UILabel *timeOfDayLabel; // @synthesize timeOfDayLabel=_timeOfDayLabel;
@property(readonly, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(readonly, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSDictionary *overrideAttributes; // @synthesize overrideAttributes=_overrideAttributes;
@property(nonatomic) _Bool tapInteractionControlledExternally; // @synthesize tapInteractionControlledExternally=_tapInteractionControlledExternally;
@property(readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation; // @synthesize overlayPresentation=_overlayPresentation;
@property(nonatomic) __weak id <_UIDatePickerCompactTimeLabelDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (long long)_inputScopeForPointerLocation:(struct CGPoint)arg1;	// IMP=0x0000000000c9c567
- (void)_expandedComponentRectForHours:(struct CGRect *)arg1 minuteRect:(struct CGRect *)arg2 timeOfDayRect:(struct CGRect *)arg3;	// IMP=0x0000000000c9c0f8
- (void)timeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000000c9c0ac
- (void)timeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000000c9c060
- (void)timeLabelDidResignFirstResponder:(id)arg1;	// IMP=0x0000000000c9c008
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000c9bff4
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000c9bfdd
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000c9bf91
- (_Bool)timeLabelCanBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000c9bf89
- (_Bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000c9bf81
- (long long)keyboardTypeForTimeLabel:(id)arg1;	// IMP=0x0000000000c9bf76
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;	// IMP=0x0000000000c9bf64
- (_Bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;	// IMP=0x0000000000c9bbdf
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000000c9bb45
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x0000000000c9bb33
@property(nonatomic, getter=isPassthroughInteractionEnabled) _Bool passthroughInteractionEnabled;
- (void)_updateSelectedDateComponentsFromInput;	// IMP=0x0000000000c9b942
- (void)_updateInputFieldFromSelectedDateComponents;	// IMP=0x0000000000c9b6d5
- (void)willBeginWritingInScribbleInteraction;	// IMP=0x0000000000c9b696
- (void)_reloadWithDate:(id)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000c9b58e
- (void)reloadWithDate:(id)arg1;	// IMP=0x0000000000c9b57a
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 displaysTimeZone:(_Bool)arg3;	// IMP=0x0000000000c9b2c1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000c9b0d2
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000c9b033
- (void)activateLabel;	// IMP=0x0000000000c9af6c
- (void)didTapInputLabel:(id)arg1;	// IMP=0x0000000000c9aece
- (id)_currentDateForInput;	// IMP=0x0000000000c9ad60
- (void)_updateLayoutRectsForRanges:(CDStruct_a33ff3ce)arg1;	// IMP=0x0000000000c9a797
- (void)_updateInputFieldLayoutForCurrentState;	// IMP=0x0000000000c9a4f6
- (void)_updateTimeFormatIfNeeded;	// IMP=0x0000000000c9a33c
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0000000000c9a2db
- (void)pushCurrentStateIntoUIAndNotify;	// IMP=0x0000000000c9a25f
- (void)pushCurrentStateIntoUI;	// IMP=0x0000000000c9a0aa
- (id)updateHoverLabelForAttributedString:(id)arg1 ranges:(CDStruct_a33ff3ce)arg2;	// IMP=0x0000000000c99df0
- (void)_updateHoverStateLabelsIfNeeded;	// IMP=0x0000000000c99bcb
- (void)setHighlightedForTouch:(_Bool)arg1;	// IMP=0x0000000000c99a7f
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x0000000000c9990d
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000c998f8
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c996ff
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)_updateEnabledStyling;	// IMP=0x0000000000c99424
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000c993e3
- (id)font;	// IMP=0x0000000000c99393
- (void)setFont:(id)arg1;	// IMP=0x0000000000c99314
- (struct CGRect)timeOfDayRect;	// IMP=0x0000000000c99287
- (struct CGRect)minuteRect;	// IMP=0x0000000000c991fa
- (struct CGRect)hourRect;	// IMP=0x0000000000c9916d
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;	// IMP=0x0000000000c986f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
