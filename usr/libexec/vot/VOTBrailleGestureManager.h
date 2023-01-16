//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer, BKSAccelerometer, MISSING_TYPE, NSArray, NSDictionary, NSMutableDictionary, NSString, VOTBrailleGestureSpellingSuggestionHandler, VOTBrailleGestureTranslator, VOTTextMovementManager;
@protocol BSInvalidatable, VOTBrailleGestureManagerDelegate;

@interface VOTBrailleGestureManager
{
    VOTBrailleGestureTranslator *_gestureTranslator;	// 8 = 0x8
    VOTBrailleGestureSpellingSuggestionHandler *_spellingSuggestionHandler;	// 16 = 0x10
    BKSAccelerometer *_accelerometer;	// 24 = 0x18
    NSMutableDictionary *_allTouchLocationsByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_firstTouchLocationsByIdentifier;	// 40 = 0x28
    _Bool _shouldUpdateDotPositions;	// 48 = 0x30
    _Bool _exploring;	// 49 = 0x31
    _Bool _splitting;	// 50 = 0x32
    _Bool _didMoveFingersTooFarForInput;	// 51 = 0x33
    _Bool _didAnnounceExplorationMode;	// 52 = 0x34
    _Bool _didAnnounceBrailleTypingProperties;	// 53 = 0x35
    _Bool _didStartFullGesture;	// 54 = 0x36
    _Bool _didEnterInvalidGesture;	// 55 = 0x37
    id <VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;	// 56 = 0x38
    long long _typingMode;	// 64 = 0x40
    long long _keyboardOrientation;	// 72 = 0x48
    NSString *_lastPrintBrailleCharacter;	// 80 = 0x50
    NSDictionary *_lastTouchLocationsByIdentifier;	// 88 = 0x58
    AXDispatchTimer *_speakingDelayTimer;	// 96 = 0x60
    AXDispatchTimer *_brailleTypingPropertiesAnnouncementTimer;	// 104 = 0x68
    AXDispatchTimer *_warningTonesTimer;	// 112 = 0x70
    AXDispatchTimer *_lockScreenDimmingTimer;	// 120 = 0x78
    AXDispatchTimer *_logBSIUsageTimer;	// 128 = 0x80
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 136 = 0x88
    VOTTextMovementManager *_movementManager;	// 144 = 0x90
    NSArray *_calibrationStartTouchPoints;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000112e3b
// Error: Property attributes should begin with the type ('T') attribute, property name: calibrationStartTouchPoints
// Property attributes: (null)

@property(retain, nonatomic) VOTTextMovementManager *movementManager; // @synthesize movementManager=_movementManager;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) AXDispatchTimer *logBSIUsageTimer; // @synthesize logBSIUsageTimer=_logBSIUsageTimer;
@property(retain, nonatomic) AXDispatchTimer *lockScreenDimmingTimer; // @synthesize lockScreenDimmingTimer=_lockScreenDimmingTimer;
@property(nonatomic) _Bool didEnterInvalidGesture; // @synthesize didEnterInvalidGesture=_didEnterInvalidGesture;
@property(nonatomic) _Bool didStartFullGesture; // @synthesize didStartFullGesture=_didStartFullGesture;
@property(retain, nonatomic) AXDispatchTimer *warningTonesTimer; // @synthesize warningTonesTimer=_warningTonesTimer;
@property(retain, nonatomic) AXDispatchTimer *brailleTypingPropertiesAnnouncementTimer; // @synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer;
@property(retain, nonatomic) AXDispatchTimer *speakingDelayTimer; // @synthesize speakingDelayTimer=_speakingDelayTimer;
@property(retain, nonatomic) NSDictionary *lastTouchLocationsByIdentifier; // @synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier;
@property(copy, nonatomic) NSString *lastPrintBrailleCharacter; // @synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter;
@property(nonatomic) long long keyboardOrientation; // @synthesize keyboardOrientation=_keyboardOrientation;
@property(nonatomic) _Bool didAnnounceBrailleTypingProperties; // @synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties;
@property(nonatomic) _Bool didAnnounceExplorationMode; // @synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode;
@property(nonatomic) _Bool didMoveFingersTooFarForInput; // @synthesize didMoveFingersTooFarForInput=_didMoveFingersTooFarForInput;
@property(nonatomic, getter=isSplitting) _Bool splitting; // @synthesize splitting=_splitting;
@property(nonatomic, getter=isExploring) _Bool exploring; // @synthesize exploring=_exploring;
@property(nonatomic) _Bool shouldUpdateDotPositions; // @synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions;
@property(nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic) __weak id <VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate; // @synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x0010000000112ac6
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x0010000000112ac0
- (void)_cancelWarningTones;	// IMP=0x0010000000112a66
- (void)_playWarningTones:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001127b1
- (void)_playWarningTone;	// IMP=0x0010000000112739
- (void)_playBonk;	// IMP=0x00100000001126c1
- (id)_outputRequestForText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x00100000001120e4
- (void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x001000000011207a
- (void)_speakText:(id)arg1 hint:(id)arg2;	// IMP=0x0010000000112051
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3 isInsert:(_Bool)arg4 isDelete:(_Bool)arg5 speakLiterally:(_Bool)arg6;	// IMP=0x0010000000112017
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3;	// IMP=0x0010000000111ff9
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2;	// IMP=0x0010000000111fe4
- (void)_flashInsertedTextIfAllowed:(id)arg1;	// IMP=0x0010000000111f47
- (void)_updateBrailleUI;	// IMP=0x0010000000111e1d
- (void)_handleTouchPoints:(id)arg1;	// IMP=0x0010000000111ce3
- (void)_handlePrintBraille:(id)arg1;	// IMP=0x001000000011165d
- (void)_handleBrailleGestureWithLeftPatternDictionary:(id)arg1 rightPatternDictionary:(id)arg2;	// IMP=0x0010000000111558
- (_Bool)_handleCarriageReturnSwipe;	// IMP=0x00100000001114bc
- (id)_languageCodeForSpeakingAndBrailleTranslation;	// IMP=0x001000000011122a
- (id)_languageCodeForSpellChecking;	// IMP=0x00100000001111cc
- (id)_languageCodeForBrailleTable;	// IMP=0x00100000001110ff
- (void)_handleTranslateImmediately;	// IMP=0x0010000000110f64
- (void)_handleChangeBrailleMode:(_Bool)arg1;	// IMP=0x0010000000110b71
- (id)_printBrailleForTouchPoints:(id)arg1;	// IMP=0x0010000000110a81
- (void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1;	// IMP=0x0010000000110a14
- (void)_inputBrailleFromTouchPoints:(id)arg1;	// IMP=0x0010000000110965
- (_Bool)_isAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x00100000001108b2
- (_Bool)_isAdjustTextSegmentEvent:(id)arg1;	// IMP=0x00100000001107ff
- (_Bool)_isSelectEvent:(id)arg1;	// IMP=0x001000000011074c
- (_Bool)_isCarriageReturnSwipeEvent:(id)arg1;	// IMP=0x00100000001106fb
- (_Bool)_isToggleLockedConfigurationEvent:(id)arg1;	// IMP=0x00100000001106aa
- (_Bool)_isTranslateImmediatelyEvent:(id)arg1;	// IMP=0x0010000000110659
- (_Bool)_isPreviousBrailleModeEvent:(id)arg1;	// IMP=0x0010000000110608
- (_Bool)_isNextBrailleModeEvent:(id)arg1;	// IMP=0x00100000001105b7
- (void)_scheduleExploringModeIfNeeded;	// IMP=0x00100000001103f9
- (void)_updateDotNumberCirclesForPrintBraille:(id)arg1;	// IMP=0x001000000011029d
- (id)_newBrailleInput;	// IMP=0x001000000011023c
- (long long)valueChangeOriginator;	// IMP=0x0010000000110231
- (void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(_Bool)arg2;	// IMP=0x001000000010fb71
- (void)_cleanUpTouchesIncludingCalibrationStartPoints:(_Bool)arg1;	// IMP=0x001000000010fa91
- (_Bool)_handleAllFingersLifted;	// IMP=0x001000000010f7e0
- (void)_handleCalibrationTimeout;	// IMP=0x001000000010f739
- (id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(_Bool)arg2;	// IMP=0x001000000010f4f9
- (id)_spokenStringForPrintBraille:(id)arg1;	// IMP=0x001000000010f4e5
- (void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000010f39c
- (void)_speakPrintBrailleForExploration;	// IMP=0x001000000010f105
- (void)_calibrateWithTouchPoints:(id)arg1;	// IMP=0x001000000010f05f
- (id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2;	// IMP=0x001000000010f037
- (void)_endExploringDotPatterns;	// IMP=0x001000000010eff8
- (void)_beginExploringDotPatterns;	// IMP=0x001000000010ef4b
- (id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2;	// IMP=0x001000000010eec1
- (_Bool)_isCalibrationEndPattern:(id)arg1;	// IMP=0x001000000010ee53
- (_Bool)_isCalibrationStartPattern:(id)arg1;	// IMP=0x001000000010ede5
- (_Bool)_patternIncludesEveryFinger:(id)arg1;	// IMP=0x001000000010ed56
- (_Bool)_deviceSupportsMoreThanFiveTouches;	// IMP=0x001000000010ed4c
- (_Bool)_requiresLaTeXInput;	// IMP=0x001000000010ec4b
- (_Bool)_shouldUseContractedBraille;	// IMP=0x001000000010ec2e
- (_Bool)_hasContractedBraillePreference;	// IMP=0x001000000010ebde
- (_Bool)_canUseContractedBraille;	// IMP=0x001000000010eb9a
- (void)_updateShouldUseContractedBraille;	// IMP=0x001000000010eb4b
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1 forUnlockConfiguration:(_Bool)arg2;	// IMP=0x001000000010e657
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1;	// IMP=0x001000000010e643
- (void)_announceBrailleTypingPropertiesIncludingOrientation:(_Bool)arg1 typingMode:(_Bool)arg2 brailleMode:(_Bool)arg3 forUnlockConfiguration:(_Bool)arg4;	// IMP=0x001000000010e322
- (id)_descriptionForCurrentBrailleMode;	// IMP=0x001000000010e246
- (void)_appendOrientationToAnnouncement:(id)arg1;	// IMP=0x001000000010df29
- (unsigned long long)_numberOfDots;	// IMP=0x001000000010df0c
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x001000000010de9a
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x001000000010ddf3
- (id)hintForAppLaunch;	// IMP=0x001000000010ddd6
- (_Bool)shouldAllowRotorEvents;	// IMP=0x001000000010ddaf
- (void)didInputWordBackspace;	// IMP=0x001000000010dd92
- (void)didInputBackspace;	// IMP=0x001000000010dd51
- (_Bool)performCustomWordBackspace;	// IMP=0x001000000010db59
- (_Bool)performCustomBackspace;	// IMP=0x001000000010d9cf
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000010d9b8
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000010d9a1
- (void)_applySuggestionToElement:(id)arg1 direction:(long long)arg2;	// IMP=0x001000000010d7b4
- (void)_outputChosenSuggestion:(id)arg1;	// IMP=0x001000000010d6f3
- (void)_insertCurrentSelectedSuggestion:(id)arg1;	// IMP=0x001000000010d5e2
- (MISSING_TYPE *)performNextBrailleTableCommand;	// IMP=0x001000000010d4ee
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000010d49d
- (_Bool)performNextKeyboardLanguage;	// IMP=0x001000000010d456
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000010d405
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000010d37e
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000010d32d
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000010d2dc
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000010d28b
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000010d23a
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000010d1e9
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000010d198
@property(readonly, nonatomic) unsigned long long mode;
- (_Bool)_handleAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x001000000010d027
- (_Bool)_shouldReverseDots;	// IMP=0x001000000010cfdc
- (void)updateWithString:(id)arg1;	// IMP=0x001000000010cf4f
- (void)_handleWordBreak:(id)arg1;	// IMP=0x001000000010ce77
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x001000000010cdde
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x001000000010cbf6
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x001000000010c9be
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000010c818
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000010c810
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000010c330
- (void)clearCurrentString;	// IMP=0x001000000010c2e7
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000010bc8d
- (void)dealloc;	// IMP=0x001000000010bc25
- (id)init;	// IMP=0x001000000010bac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

