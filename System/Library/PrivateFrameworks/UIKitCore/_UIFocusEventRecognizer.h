//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSSet, NSString, NSTimer, UIMoveEvent, UIScrollView, UITapGestureRecognizer, UIView, _UIFocusEffectsController, _UIFocusEnableOnSelectGestureRecognizer, _UIFocusEngineJoystickGestureRecognizer, _UIFocusEnginePanGestureRecognizer, _UIFocusEngineRepeatingPressGestureRecognizer, _UIFocusFastScrollingRecognizer, _UIFocusLinearMovementDebugGestureRecognizer, _UIFocusLinearMovementDebugView, _UIFocusMovementInfo, _UIFocusSelectObserverGestureRecognizer, _UIRotaryGestureRecognizer;
@protocol _UIFocusEventRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEventRecognizer : NSObject
{
    _UIFocusEnginePanGestureRecognizer *_panGestureRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    _UIFocusEnableOnSelectGestureRecognizer *_selectGestureRecognizer;	// 24 = 0x18
    _UIFocusSelectObserverGestureRecognizer *_selectObserverGestureRecognizer;	// 32 = 0x20
    _UIRotaryGestureRecognizer *_rotaryGestureRecognizer;	// 40 = 0x28
    double _panDeadBand;	// 48 = 0x30
    _UIFocusLinearMovementDebugGestureRecognizer *_linearDebugGestureRecognizer;	// 56 = 0x38
    _UIFocusLinearMovementDebugView *_linearDebugView;	// 64 = 0x40
    struct CGPoint _touchBeganPoint;	// 72 = 0x48
    struct CGPoint _lastKnownTouchPoint;	// 88 = 0x58
    struct CGPoint _previousPoints[5];	// 104 = 0x68
    int _numFrames;	// 184 = 0xb8
    struct CGVector _progressAccumulator;	// 192 = 0xc0
    struct CGVector _unlockedAccumulator;	// 208 = 0xd0
    double _lastButtonPressTime;	// 224 = 0xe0
    unsigned long long _failedContinuousMovementHeading;	// 232 = 0xe8
    _UIFocusFastScrollingRecognizer *_fastScrollingRecognizer;	// 240 = 0xf0
    struct CGPoint _firstMomentumTouchPoint;	// 248 = 0xf8
    struct CGPoint _lastMomentumTouchPoint;	// 264 = 0x108
    struct CGPoint _momentumVelocity;	// 280 = 0x118
    double _momentumFriction;	// 296 = 0x128
    unsigned long long _focusUpdateCountSinceLastContinuousMovementBegan;	// 304 = 0x130
    CADisplayLink *_momentumDisplayLink;	// 312 = 0x138
    NSArray *_arrowButtonGestures;	// 320 = 0x140
    NSArray *_pageButtonGestures;	// 328 = 0x148
    _UIFocusEngineRepeatingPressGestureRecognizer *_tabulatorGesture;	// 336 = 0x150
    NSSet *_gesturesForFailureRequirements;	// 344 = 0x158
    _UIFocusEngineJoystickGestureRecognizer *_joystickGestureRecognizer;	// 352 = 0x160
    NSTimer *_joystickModeExitTimer;	// 360 = 0x168
    NSTimer *_joystickModeRepeatTimer;	// 368 = 0x170
    double _previousJoystickFocusMovementTime;	// 376 = 0x178
    double _previousJoystickRegionEntryTime;	// 384 = 0x180
    unsigned long long _joystickRepeatingHeading;	// 392 = 0x188
    CADisplayLink *_joystickFocusDirectionDisplayLink;	// 400 = 0x190
    _UIFocusMovementInfo *_previousJoystickFocusMovementInfo;	// 408 = 0x198
    long long _joystickRepeatCount;	// 416 = 0x1a0
    UIScrollView *_lastScrolledScroll;	// 424 = 0x1a8
    double _lastEdgeScrollEdgeValue;	// 432 = 0x1b0
    unsigned long long _inputType;	// 440 = 0x1b8
    struct {
        unsigned int isEligibleToCrossSpeedBump:1;
        unsigned int isContinuingTouchWithMomentum:1;
        unsigned int isPerformingJoystickRollback:1;
        unsigned int isJoystickInRepeatMode:1;
        unsigned int isPendingJoystickRepeat:1;
        unsigned int isFastScrolling:1;
        unsigned int shouldApplyAcceleration:1;
        unsigned int shouldSupressActiveIndirectMotionUpdates:1;
    } _flags;	// 448 = 0x1c0
    _Bool _enabled;	// 452 = 0x1c4
    _Bool _supportsFastScrolling;	// 453 = 0x1c5
    UIView *_owningView;	// 456 = 0x1c8
    NSArray *_keyCommands;	// 464 = 0x1d0
    id <_UIFocusEventRecognizerDelegate> _delegate;	// 472 = 0x1d8
    UIMoveEvent *_moveEvent;	// 480 = 0x1e0
    _UIFocusEffectsController *_motionEffectsController;	// 488 = 0x1e8
}

+ (_Bool)_canSupportFastScrolling;	// IMP=0x00100000006100e8
- (void).cxx_destruct;	// IMP=0x0000000000610775
@property(readonly, nonatomic, getter=_motionEffectsController) _UIFocusEffectsController *motionEffectsController; // @synthesize motionEffectsController=_motionEffectsController;
@property(retain, nonatomic, getter=_moveEvent, setter=_setMoveEvent:) UIMoveEvent *moveEvent; // @synthesize moveEvent=_moveEvent;
@property(nonatomic) __weak id <_UIFocusEventRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsFastScrolling; // @synthesize supportsFastScrolling=_supportsFastScrolling;
@property(readonly, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
- (void)_uiktest_handlePanGesture:(id)arg1;	// IMP=0x00000000006106be
- (id)_uiktest_panGestureRecognizer;	// IMP=0x00000000006106b0
- (void)_uiktest_setPanGestureRecognizer:(id)arg1;	// IMP=0x000000000061069f
- (void)_sendGestureBeginNotification;	// IMP=0x000000000061063f
- (_Bool)_isRotaryFastScrolling;	// IMP=0x00000000006105f0
- (void)_fastScrollingEnded;	// IMP=0x00000000006105c0
- (void)_fastScrollingBeganInScrollView:(id)arg1;	// IMP=0x000000000061052f
- (void)fastScrollingRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;	// IMP=0x00000000006101e9
- (void)_createFastScrollingRecognizerIfNeeded;	// IMP=0x0000000000610155
- (void)_setSupportsFastScrolling:(_Bool)arg1;	// IMP=0x0000000000610113
- (void)_sendMomentumEndNotificationsAndAnimateRollback:(_Bool)arg1;	// IMP=0x00000000006100a5
- (void)_stopMomentumAndPerformRollback;	// IMP=0x0000000000610053
- (_Bool)_shouldPerformFocusUpdateWithCurrentMomentumStatus;	// IMP=0x000000000060ffda
- (void)_momentumHeartbeat:(id)arg1;	// IMP=0x000000000060fce7
- (id)_momentumMovementRequestWithHeading:(unsigned long long)arg1;	// IMP=0x000000000060fbe3
- (unsigned long long)_momentumFocusHeadingForAccumulator:(struct CGVector)arg1;	// IMP=0x000000000060fb8a
- (void)_beginMomentumImmediatelyWithVelocity:(struct CGPoint)arg1 friction:(double)arg2;	// IMP=0x000000000060fa65
- (void)_continueTouchWithMomentum;	// IMP=0x000000000060f8a8
- (void)_recordMomentumForPoint:(struct CGPoint)arg1 reportedVelocity:(struct CGPoint)arg2;	// IMP=0x000000000060f826
- (void)_resetMomentum;	// IMP=0x000000000060f7c0
- (struct CGSize)_momentumReferenceSize;	// IMP=0x000000000060f623
- (void)_resetMotionEffects;	// IMP=0x000000000060f60a
- (void)_resetJoystick;	// IMP=0x000000000060f563
- (void)_joystickDisplayLinkHeartbeat:(id)arg1;	// IMP=0x000000000060f30f
- (unsigned long long)_headingForJoystickPosition:(struct CGPoint)arg1 usingMinimumRadius:(double)arg2;	// IMP=0x000000000060f27f
- (struct CGVector)_joystickVelocityForHeading:(unsigned long long)arg1;	// IMP=0x000000000060f24f
- (id)_focusMovementForJoystickPosition:(struct CGPoint)arg1 usingMinimumRadius:(double)arg2 focusMovementStyle:(long long)arg3;	// IMP=0x000000000060f107
- (_Bool)_joystickFocusMovement:(id)arg1 shouldBeConsideredEqualToFocusMovement:(id)arg2;	// IMP=0x000000000060eff5
- (double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1;	// IMP=0x000000000060ee28
- (void)_joystickPerformRepeat:(id)arg1;	// IMP=0x000000000060ee1b
- (_Bool)_joystickAttemptFocusMovementWithRequest:(id)arg1;	// IMP=0x000000000060ed76
- (void)_handleJoystickTiltMode:(id)arg1;	// IMP=0x000000000060ea54
- (void)_handleJoystickRepeatMode:(id)arg1;	// IMP=0x000000000060e6d1
- (void)_exitJoystickModeForReal:(id)arg1;	// IMP=0x000000000060e68d
- (void)_joystickGestureEnded:(id)arg1;	// IMP=0x000000000060e54f
- (void)_joystickGestureUpdated:(id)arg1;	// IMP=0x000000000060e528
- (void)_joystickGestureBegan:(id)arg1;	// IMP=0x000000000060e3cb
- (void)_resetFailedMovementHeading;	// IMP=0x000000000060e3ba
- (void)_resetContinuousMovementState;	// IMP=0x000000000060e3a2
- (void)_resetProgressAccumulatorWithHeading:(unsigned long long)arg1;	// IMP=0x000000000060e291
- (void)_panGestureCancelled:(id)arg1;	// IMP=0x000000000060e25f
- (void)_panGestureEnd:(id)arg1;	// IMP=0x000000000060e22a
- (void)_cleanupPanMomentumWithAccumulator:(struct CGVector)arg1 movementSuccess:(_Bool)arg2;	// IMP=0x000000000060e1e8
- (void)_continuousMovementFailedWithPrimaryHeading:(unsigned long long)arg1;	// IMP=0x000000000060e161
- (void)_continuousMovementSucceededWithDirectionalHeading:(unsigned long long)arg1;	// IMP=0x000000000060e098
- (_Bool)_attemptToRecognizeContinuousMovementRequest:(id)arg1;	// IMP=0x000000000060e004
- (id)_createMovementInfoForHeading:(unsigned long long)arg1 groupFilter:(long long)arg2 acceleratedVelocity:(struct CGPoint)arg3;	// IMP=0x000000000060df88
- (_Bool)_attemptPanFocusMovementWithHeading:(unsigned long long)arg1 request:(id)arg2 acceleratedVelocity:(struct CGPoint)arg3 studyLogData:(id)arg4;	// IMP=0x000000000060de7f
- (unsigned long long)_calculateDirectionalHeadingForAccumulator:(struct CGVector)arg1 studyLogData:(id)arg2;	// IMP=0x000000000060de0a
- (void)_updateMotionEffectsControllerWithProgressAccumulator:(struct CGVector)arg1 unlockedAccumulator:(struct CGVector)arg2;	// IMP=0x000000000060ddcf
- (void)_updateAccumulatorsWithScaledDelta:(struct CGPoint)arg1 unlockedDelta:(struct CGPoint)arg2 studyLogData:(id)arg3;	// IMP=0x000000000060dd99
- (struct CGVector)_accelerationFactorForCurrentVelocity:(struct CGPoint)arg1 isRotaryGesture:(_Bool)arg2 isFocusInKeyboard:(_Bool)arg3 remoteTouchSurfaceType:(unsigned long long)arg4;	// IMP=0x000000000060db12
- (struct CGPoint)_applyButtonMaskTimeToValue:(struct CGPoint)arg1 remoteTouchSurfaceType:(unsigned long long)arg2;	// IMP=0x000000000060dad2
- (struct CGPoint)_applyAxisLockingForNormalizedPoint:(struct CGPoint)arg1 toDelta:(struct CGPoint)arg2;	// IMP=0x000000000060d9b5
- (struct CGPoint)_applyHorizontalFlipForFocusItemInfo:(id)arg1 toDelta:(struct CGPoint)arg2;	// IMP=0x000000000060d974
- (struct CGPoint)_applyPanDeadbandToValue:(struct CGPoint)arg1 startPoint:(struct CGPoint)arg2 currentPoint:(struct CGPoint)arg3 remoteTouchSurfaceType:(unsigned long long)arg4;	// IMP=0x000000000060d82f
- (struct CGPoint)_calculateDeltaForNormalizedPoint:(struct CGPoint)arg1 studyLogData:(id)arg2;	// IMP=0x000000000060d806
- (id)_createStudyLogDataForPanNormalizedPoint:(struct CGPoint)arg1 reportedVelocity:(struct CGPoint)arg2;	// IMP=0x000000000060d7fe
- (id)_createPanMovementRequestWithFocusSystem:(id)arg1;	// IMP=0x000000000060d759
- (void)_updatePanLocation:(struct CGPoint)arg1 reportedVelocity:(struct CGPoint)arg2 remoteTouchSurfaceType:(unsigned long long)arg3;	// IMP=0x000000000060d0e5
- (void)_panGestureStart:(id)arg1;	// IMP=0x000000000060cfe0
- (_Bool)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)arg1;	// IMP=0x000000000060cfd0
- (void)_resetPanDeadband;	// IMP=0x000000000060cf8b
- (_Bool)_attemptRotaryFocusMovementWithLinearHeading:(unsigned long long)arg1 directionalHeading:(unsigned long long)arg2 request:(id)arg3 acceleratedVelocity:(struct CGPoint)arg4 studyLogData:(id)arg5;	// IMP=0x000000000060ce56
- (unsigned long long)_calculateLinearHeadingForAccumulator:(struct CGVector)arg1 studyLogData:(id)arg2;	// IMP=0x000000000060ce14
- (struct CGPoint)_pointForLinearValue:(double)arg1;	// IMP=0x000000000060cdc9
- (id)_createRotaryMovementRequestWithFocusSystem:(id)arg1;	// IMP=0x000000000060cd24
- (id)_createStudyLogDataForRotaryDistance:(double)arg1 delta:(double)arg2 reportedVelocity:(double)arg3;	// IMP=0x000000000060cd1c
- (void)_updateRotaryDistance:(double)arg1 delta:(double)arg2 reportedVelocity:(double)arg3 remoteTouchSurfaceType:(unsigned long long)arg4;	// IMP=0x000000000060c798
- (void)_handleRotaryCancelled:(id)arg1;	// IMP=0x000000000060c766
- (void)_handleRotaryEnd:(id)arg1;	// IMP=0x000000000060c71c
- (void)_handleRotaryBegin:(id)arg1;	// IMP=0x000000000060c6b0
- (void)_handleRotaryGesture:(id)arg1;	// IMP=0x000000000060c463
- (void)_resetProgressAccumulator;	// IMP=0x000000000060c44c
- (id)_globalCoordinateSpace;	// IMP=0x000000000060c3fc
- (id)_focusSystemSceneComponent;	// IMP=0x000000000060c35b
- (_Bool)_canFastScrollWithRotaryInputInCurrentFocusContext;	// IMP=0x000000000060c2f8
- (_Bool)_canMoveFocusWithRotaryInputInFocusContext:(id)arg1;	// IMP=0x000000000060c263
- (_Bool)_shouldAcceptInputType:(unsigned long long)arg1;	// IMP=0x000000000060c0a4
- (struct CGSize)_touchSensitivityForItem:(id)arg1 remoteTouchSurfaceType:(unsigned long long)arg2;	// IMP=0x000000000060ba76
- (int)_touchRegionForDigitizerLocation:(struct CGPoint)arg1;	// IMP=0x000000000060b926
- (_Bool)_buttonMaskTimeHasExpired;	// IMP=0x000000000060b8ce
- (id)currentFocusBehavior;	// IMP=0x000000000060b888
- (void)rotaryGestureRecognizerFailedToBeginFromRest:(id)arg1;	// IMP=0x000000000060b86f
- (void)rotaryGestureRecognizerIsAttemptingToBeginFromRest:(id)arg1;	// IMP=0x000000000060b851
- (_Bool)rotaryGestureRecognizerMustBeginFromRest:(id)arg1;	// IMP=0x000000000060b7e9
- (_Bool)rotaryGestureRecognizerCanBeginFromRest:(id)arg1;	// IMP=0x000000000060b78f
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000060b749
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000060b739
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000060b5be
- (_Bool)_hideLinearDebugOverlayIfNecessary:(_Bool)arg1;	// IMP=0x000000000060b45c
- (void)_showLinearDebugOverlay:(_Bool)arg1;	// IMP=0x000000000060afca
- (void)_handleLinearDebugOverlayGesture:(id)arg1;	// IMP=0x000000000060af0e
- (void)_handleJoystickGesture:(id)arg1;	// IMP=0x000000000060ae61
- (void)_handleTapGesture:(id)arg1;	// IMP=0x000000000060ad58
- (void)_handlePanGesture:(id)arg1;	// IMP=0x000000000060ab4f
- (void)_handleTabulatorGesture:(id)arg1;	// IMP=0x000000000060a8b7
- (void)_handlePageButtonGesture:(id)arg1;	// IMP=0x000000000060a663
- (void)_handleArrowButtonGesture:(id)arg1;	// IMP=0x000000000060a360
- (void)_handleSelectObserverGesture:(id)arg1;	// IMP=0x000000000060a2eb
- (void)_handleSelectGesture:(id)arg1;	// IMP=0x000000000060a2ae
- (_Bool)_moveInDirection:(unsigned long long)arg1 groupFilter:(long long)arg2 withEvaluator:(CDUnknownBlockType)arg3;	// IMP=0x000000000060a225
- (_Bool)_moveInDirection:(unsigned long long)arg1 groupFilter:(long long)arg2 withSearchInfo:(id)arg3;	// IMP=0x000000000060a0c8
- (_Bool)_moveInDirection:(unsigned long long)arg1 groupFilter:(long long)arg2;	// IMP=0x000000000060a0b3
- (_Bool)_moveWithEvent:(id)arg1;	// IMP=0x0000000000609fa0
- (_Bool)_didRecognizeFocusMovementRequest:(id)arg1;	// IMP=0x0000000000609ea7
- (id)_focusMovementSystem;	// IMP=0x0000000000609db5
- (void)_focusSystemEnabledStateDidChange:(id)arg1;	// IMP=0x0000000000609cc9
- (void)_focusBehaviorDidChange:(id)arg1;	// IMP=0x0000000000609cb5
@property(readonly, nonatomic) NSSet *gesturesForFailureRequirements;
- (void)_updateGestureRecognizersForcingRemoval:(_Bool)arg1;	// IMP=0x0000000000609aaf
- (void)_pageButtonGesturesUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x00000000006093dc
- (void)_rotaryGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x0000000000609081
- (void)_arrowButtonGesturesUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x00000000006089ab
- (void)_tabulatorGestureUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x0000000000608673
- (void)_joystickGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x000000000060832c
- (void)_tapGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x0000000000607f9f
- (void)_selectObserverGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x0000000000607c96
- (void)_selectGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x000000000060798d
- (void)_panGestureRecognizerUpdateForcingRemoval:(_Bool)arg1 studyLogData:(id)arg2;	// IMP=0x0000000000607630
- (void)reset;	// IMP=0x00000000006075ad
- (void)dealloc;	// IMP=0x000000000060748e
- (id)initWithOwningView:(id)arg1;	// IMP=0x00000000006070a3
- (id)init;	// IMP=0x000000000060701c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

