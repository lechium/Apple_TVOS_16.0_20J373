//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning, UITextModernLoupeSession, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;	// 8 = 0x8
    struct CGPoint _lastTapLocation;	// 16 = 0x10
    UITextGestureTuning *_gestureTuning;	// 32 = 0x20
    _Bool _indirectSelectionType;	// 40 = 0x28
    _Bool _viewConformsToTextInput;	// 41 = 0x29
    struct CGRect _originalCaretRect;	// 48 = 0x30
    _Bool _wasOriginallyFirstResponder;	// 80 = 0x50
    long long _granularityToHandOff;	// 88 = 0x58
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 96 = 0x60
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;	// 104 = 0x68
    UITextModernLoupeSession *_activeLoupeSession;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000f02443
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000f02304
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000f022fc
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000000f020e8
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f01f0a
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000f01d78
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f01c6c
- (void)twoFingerRangedSelectGesture:(id)arg1;	// IMP=0x0000000000f01963
- (void)tapAndAHalf:(id)arg1;	// IMP=0x0000000000f00f23
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000f00dfb
- (void)confirmMarkedText:(id)arg1;	// IMP=0x0000000000f00d9c
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;	// IMP=0x0000000000f00d13
- (void)didUpdateSelectionWithGesture:(id)arg1;	// IMP=0x0000000000f007c9
- (void)willUpdateSelectionWithGesture:(id)arg1;	// IMP=0x0000000000f0076b
- (void)_handleMultiTapGesture:(id)arg1;	// IMP=0x0000000000f0058d
- (void)oneFingerTapSelectsAll:(id)arg1;	// IMP=0x0000000000f003f0
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f0030f
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f0007b
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000efffce
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000000effa89
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1;	// IMP=0x0000000000effa45
- (long long)handOffGranularity;	// IMP=0x0000000000effa2c
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x0000000000eff8e8
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;	// IMP=0x0000000000eff85a
- (_Bool)_isNowWithinRepeatedTapTime;	// IMP=0x0000000000eff846
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;	// IMP=0x0000000000eff7fb
- (_Bool)_usesPencilSelectionBehaviorForGesture:(id)arg1;	// IMP=0x0000000000eff6bd
- (_Bool)_usesIndirectSelectionBehavior;	// IMP=0x0000000000eff6ad
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;	// IMP=0x0000000000eff5f2
- (void)toggleSelectionCommands;	// IMP=0x0000000000eff51f
- (void)_applyTransientState:(id)arg1;	// IMP=0x0000000000eff441
- (id)_transientState;	// IMP=0x0000000000eff336
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000eff29a
- (void)finishSetup;	// IMP=0x0000000000efef5c
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000000efef54
- (id)initWithMode:(long long)arg1 indirect:(_Bool)arg2;	// IMP=0x0000000000efecf0
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000000efecdc

@end

