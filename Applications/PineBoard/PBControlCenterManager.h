//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTransaction, NSHashTable, NSString, PBCoordinatedTransitionToken, PBSimpleRemoteViewController, PBSystemGestureHandle, PBSystemOverlayController, UIApplicationSceneDeactivationAssertion;
@protocol BSInvalidatable;

@interface PBControlCenterManager : NSObject
{
    _Bool _fullScreenOverlayActive;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBSimpleRemoteViewController *_remoteViewController;	// 24 = 0x18
    id <BSInvalidatable> _idleAction;	// 32 = 0x20
    UIApplicationSceneDeactivationAssertion *_fullScreenOverlaySceneDeactivationAssertion;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    PBSystemGestureHandle *_presentGesture;	// 56 = 0x38
    PBSystemGestureHandle *_dismissGesture;	// 64 = 0x40
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 72 = 0x48
    BSTransaction *_dismissalTransaction;	// 80 = 0x50
    id <BSInvalidatable> _teachableMomentIdleAction;	// 88 = 0x58
    id <BSInvalidatable> _systemHomeUIServicePreheatAssertion;	// 96 = 0x60
}

+ (id)_controlCenterPresentationOptionsForOptions:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00200000001a2a2c
+ (_Bool)isControlCenterEnabled;	// IMP=0x00100000001a16a2
+ (id)sharedInstance;	// IMP=0x00100000001a161b
+ (id)dependencyDescription;	// IMP=0x00100000001a14f4
- (void).cxx_destruct;	// IMP=0x00200000001a39ad
@property(readonly, nonatomic) id <BSInvalidatable> systemHomeUIServicePreheatAssertion; // @synthesize systemHomeUIServicePreheatAssertion=_systemHomeUIServicePreheatAssertion;
@property(retain, nonatomic) id <BSInvalidatable> teachableMomentIdleAction; // @synthesize teachableMomentIdleAction=_teachableMomentIdleAction;
@property(readonly, nonatomic) BSTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *presentGesture; // @synthesize presentGesture=_presentGesture;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullScreenOverlaySceneDeactivationAssertion; // @synthesize fullScreenOverlaySceneDeactivationAssertion=_fullScreenOverlaySceneDeactivationAssertion;
@property(readonly, nonatomic) id <BSInvalidatable> idleAction; // @synthesize idleAction=_idleAction;
@property(retain, nonatomic) PBSimpleRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic, getter=isFullScreenOverlayActive) _Bool fullScreenOverlayActive; // @synthesize fullScreenOverlayActive=_fullScreenOverlayActive;
- (void)_invalidateTeachableMomentIdleTimer;	// IMP=0x00100000001a38d7
- (void)_startTeachableMomentTimer;	// IMP=0x00100000001a3810
- (void)_invalidateIdleTimer;	// IMP=0x00100000001a37dd
- (void)_startIdleTimer;	// IMP=0x00100000001a36d8
- (void)_notifyObserversFullScreenOverlayDidDeactivate;	// IMP=0x00100000001a358c
- (void)_notifyObserversFullScreenOverlayDidActivate;	// IMP=0x00100000001a3440
- (void)_notifyObserversDidDismiss;	// IMP=0x00100000001a32f4
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001a32dd
- (void)addObserver:(id)arg1;	// IMP=0x00100000001a32c6
- (void)distributedAssertion:(id)arg1 didChangeState:(id)arg2;	// IMP=0x00100000001a31f4
- (id)_createDismissalTransactionAnimated:(_Bool)arg1;	// IMP=0x00100000001a2e7a
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001a2d60
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x00100000001a2cce
- (void)controlCenterContentPresentingViewController:(id)arg1 handleDismissWithResult:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a27e8
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000001a27ba
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001a2788
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000001a26f1
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a23a7
- (void)requestTeachableMomentOverlayDismissal;	// IMP=0x00100000001a22fd
- (void)_showTeachableMomentOverlayIfNeeded;	// IMP=0x00100000001a2161
- (_Bool)_dismissControlCenterAnimated:(_Bool)arg1;	// IMP=0x00100000001a20d9
- (_Bool)dismissControlCenter;	// IMP=0x00100000001a20c1
- (void)presentControlCenterForReason:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x00100000001a1d63
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x00100000001a1b9b
- (id)init;	// IMP=0x00100000001a16ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
