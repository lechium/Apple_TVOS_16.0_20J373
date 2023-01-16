//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, BSTransaction, MISSING_TYPE, NSHashTable, NSString, PBCoordinatedTransitionToken, PBSceneDeferralTargetAssertion, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSiriScreenActionManager, PBSystemGestureHandle, PBSystemOverlayController, SiriBluetoothKeyboardActivationSource, SiriPresentationPineBoardMainScreenViewController, SiriTVActivationSource, SiriTestingSource, UIApplicationSceneDeactivationAssertion;
@protocol SiriAssertion;

@interface PBSiriManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    PBSiriScreenActionManager *_screenActionManager;	// 24 = 0x18
    SiriPresentationPineBoardMainScreenViewController *_mainScreenSiriPresentation;	// 32 = 0x20
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 40 = 0x28
    PBSystemOverlayController *_overlayController;	// 48 = 0x30
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 56 = 0x38
    NSString *_unhideBundleIdentifier;	// 64 = 0x40
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 72 = 0x48
    PBSystemGestureHandle *_presentUIGesture;	// 80 = 0x50
    PBSystemGestureHandle *_preheatGesture;	// 88 = 0x58
    PBSystemGestureHandle *_listenGesture;	// 96 = 0x60
    SiriTVActivationSource *_siriActivationSource;	// 104 = 0x68
    SiriBluetoothKeyboardActivationSource *_keyboardActivationSource;	// 112 = 0x70
    id <SiriAssertion> _siriPreheatAssertion;	// 120 = 0x78
    id <SiriAssertion> _siriButtonDownAssertion;	// 128 = 0x80
    id <SiriAssertion> _siriActivationAssertion;	// 136 = 0x88
    SiriTestingSource *_testingSource;	// 144 = 0x90
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 152 = 0x98
    BSCompoundAssertion *_siriSuppressionAssertion;	// 160 = 0xa0
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 168 = 0xa8
    BSTransaction *_dismissalTransaction;	// 176 = 0xb0
    NSHashTable *_observers;	// 184 = 0xb8
}

+ (_Bool)_isSiriEnabled;	// IMP=0x00200000001c15fb
+ (id)sharedInstance;	// IMP=0x00100000001bd2a5
+ (id)dependencyDescription;	// IMP=0x00100000001bd108
- (void).cxx_destruct;	// IMP=0x00200000001c2ac9
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) BSTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) BSCompoundAssertion *siriSuppressionAssertion; // @synthesize siriSuppressionAssertion=_siriSuppressionAssertion;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(retain, nonatomic) SiriTestingSource *testingSource; // @synthesize testingSource=_testingSource;
@property(retain, nonatomic) id <SiriAssertion> siriActivationAssertion; // @synthesize siriActivationAssertion=_siriActivationAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(retain, nonatomic) SiriBluetoothKeyboardActivationSource *keyboardActivationSource; // @synthesize keyboardActivationSource=_keyboardActivationSource;
@property(retain, nonatomic) SiriTVActivationSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(readonly, nonatomic) PBSystemGestureHandle *listenGesture; // @synthesize listenGesture=_listenGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *preheatGesture; // @synthesize preheatGesture=_preheatGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *presentUIGesture; // @synthesize presentUIGesture=_presentUIGesture;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) NSString *unhideBundleIdentifier; // @synthesize unhideBundleIdentifier=_unhideBundleIdentifier;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) SiriPresentationPineBoardMainScreenViewController *mainScreenSiriPresentation; // @synthesize mainScreenSiriPresentation=_mainScreenSiriPresentation;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(readonly, nonatomic) PBSiriScreenActionManager *screenActionManager; // @synthesize screenActionManager=_screenActionManager;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversSiriWindowDidUnhide;	// IMP=0x00100000001c27b2
- (void)_notifyObserversSiriWindowDidHide;	// IMP=0x00100000001c2663
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x00100000001c2503
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001c24e9
- (void)addObserver:(id)arg1;	// IMP=0x00100000001c24cf
- (void)_setupGesturesWithManager:(id)arg1;	// IMP=0x00100000001c21d1
- (void)_launchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c1bd3
- (void)_stopProvidingScreenActionContext;	// IMP=0x00100000001c1b5b
- (void)_startProvidingScreenActionContext;	// IMP=0x00100000001c198f
- (void)_updateShouldPreferDictation;	// IMP=0x00100000001c17e6
- (id)_createOverlayDismissalTransactionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c11a9
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001c103d
- (MISSING_TYPE *)appTransitioner:willStartAnimationForAppTransition: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001c0f2f
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x00100000001c0f21
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001c0ead
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00100000001c0e9a
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00100000001c0e87
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001c0d70
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x00100000001c0d38
- (void)siriPresentationDidDeactivateScene:(id)arg1;	// IMP=0x00100000001c0c0d
- (void)siriPresentation:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;	// IMP=0x00100000001c0a54
- (void)siriPresentation:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x00100000001c098a
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c05e7
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;	// IMP=0x00100000001c0559
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c01db
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bffd8
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bff70
- (unsigned long long)_remoteTypeFromContext:(id)arg1;	// IMP=0x00100000001bfec3
- (_Bool)showAssistantIfNecessaryAfterApplication:(id)arg1;	// IMP=0x00100000001bfe77
- (void)hideAssistantViewForApplication:(id)arg1;	// IMP=0x00100000001bfe34
- (_Bool)_dismissAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfd15
- (_Bool)dismissAssistant;	// IMP=0x00100000001bfc87
- (void)_unhideSiriWindow;	// IMP=0x00100000001bfbc2
- (void)_hideSiriWindow;	// IMP=0x00100000001bfa21
- (void)_presentAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bf7cc
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00100000001bf7b5
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00100000001bf79e
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (long long)stopSiriWithContext:(id)arg1;	// IMP=0x00100000001bf18b
- (long long)startSiriWithContext:(id)arg1;	// IMP=0x00100000001bea7b
- (void)_cancelSiriActivation;	// IMP=0x00100000001be9dd
- (void)_stopSiriActivation;	// IMP=0x00100000001be92f
- (void)_cancelPreheating;	// IMP=0x00100000001be89d
- (void)cancelActivation;	// IMP=0x00100000001be88a
- (id)suppressSiriWithReason:(id)arg1;	// IMP=0x00100000001be860
- (long long)presentSiriAccessibilityUI;	// IMP=0x00100000001be6e1
- (long long)prepareSiriWithContext:(id)arg1;	// IMP=0x00100000001be30e
- (long long)activateSiriWithContext:(id)arg1;	// IMP=0x00100000001bdda4
- (void)preheatIfNecessary;	// IMP=0x00100000001bdb8c
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x00100000001bd841
- (void)dealloc;	// IMP=0x00100000001bd75f
- (id)_init;	// IMP=0x00100000001bd37d
- (id)init;	// IMP=0x00100000001bd33c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
