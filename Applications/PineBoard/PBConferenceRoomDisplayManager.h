//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemGestureHandle, PBSystemOverlayController, TVSStateMachine;

@interface PBConferenceRoomDisplayManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    TVSStateMachine *_stateMachine;	// 16 = 0x10
    PBSystemOverlayController *_instructionsOverlayController;	// 24 = 0x18
    PBSystemOverlayController *_loadingOverlayController;	// 32 = 0x20
    NSString *_lastFocusedAppBundleIdentifier;	// 40 = 0x28
    PBSystemGestureHandle *_dismissCRDInstructionsGesture;	// 48 = 0x30
    PBSystemGestureHandle *_dismissCRDLoadingGesture;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00200000001c373f
+ (id)dependencyDescription;	// IMP=0x00100000001c35cb
- (void).cxx_destruct;	// IMP=0x00200000001c68f5
@property(readonly, nonatomic) PBSystemGestureHandle *dismissCRDLoadingGesture; // @synthesize dismissCRDLoadingGesture=_dismissCRDLoadingGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissCRDInstructionsGesture; // @synthesize dismissCRDInstructionsGesture=_dismissCRDInstructionsGesture;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(copy, nonatomic) NSString *lastFocusedAppBundleIdentifier; // @synthesize lastFocusedAppBundleIdentifier=_lastFocusedAppBundleIdentifier;
@property(readonly, nonatomic) PBSystemOverlayController *loadingOverlayController; // @synthesize loadingOverlayController=_loadingOverlayController;
@property(readonly, nonatomic) PBSystemOverlayController *instructionsOverlayController; // @synthesize instructionsOverlayController=_instructionsOverlayController;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)_dismissCRDLoading;	// IMP=0x00100000001c67dc
- (void)_presentCRDLoading;	// IMP=0x00100000001c6722
- (void)_dismissCRDInstructions;	// IMP=0x00100000001c6667
- (void)_presentCRDInsructions;	// IMP=0x00100000001c6530
- (void)_updateIfCRDDisabledWhileActive;	// IMP=0x00100000001c64b3
- (void)_updateIfCRDForcedOnWhileIdle;	// IMP=0x00100000001c6363
- (void)_handleLoadingTimeout;	// IMP=0x00100000001c631e
- (id)_showCRDWaitingScreen;	// IMP=0x00100000001c62c7
- (void)exitCRDApp;	// IMP=0x00100000001c5e79
- (id)_launchCRDApp;	// IMP=0x00100000001c5cb8
- (void)_initializeStateMachine;	// IMP=0x00100000001c494f
- (void)_handleSettingsChanged;	// IMP=0x00100000001c490a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001c48b2
- (id)_dismissCRDLoadingGestureCreatingIfNeeded;	// IMP=0x00100000001c4771
- (id)_dismissCRDInstructionsGestureCreatingIfNeeded;	// IMP=0x00100000001c4575
- (id)_dismissGestureHandleForOverlayController:(id)arg1;	// IMP=0x00100000001c43c2
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000001c4384
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000001c4346
- (void)appTransitioner:(id)arg1 didInterruptAppTransition:(id)arg2 becauseOfOtherAppTransition:(id)arg3;	// IMP=0x00100000001c426c
- (void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2;	// IMP=0x00100000001c4192
- (void)appTransitioner:(id)arg1 willLaunchProcessForAppTransition:(id)arg2;	// IMP=0x00100000001c405c
- (void)screenSaverManagerDidDismissScreenSaver:(id)arg1;	// IMP=0x00100000001c403e
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00100000001c4020
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00100000001c4002
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x00100000001c3fe4
- (_Bool)dismissCRDWaitingScreen;	// IMP=0x00100000001c3f2f
- (void)handleTermination;	// IMP=0x00100000001c3f11
- (void)canStopCRDWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c3d99
- (void)endStopCRD;	// IMP=0x00100000001c3d7b
- (void)beginStopCRD;	// IMP=0x00100000001c3d5d
- (_Bool)startCRDWithReason:(unsigned long long)arg1;	// IMP=0x00100000001c3c69
@property(readonly, nonatomic) _Bool shouldLaunchCRD;
- (void)dealloc;	// IMP=0x00100000001c3b0e
- (id)_init;	// IMP=0x00100000001c3817
- (id)init;	// IMP=0x00100000001c37d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

