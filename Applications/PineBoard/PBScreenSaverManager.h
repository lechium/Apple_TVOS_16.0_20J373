//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PBDialogHiddenAssertion, PBScreenSaverContentPresentingViewController, PBSystemGestureHandle, PBSystemOverlayController, TVSPreferences;
@protocol BSInvalidatable;

@interface PBScreenSaverManager : NSObject
{
    _Bool _holdOffForMusicEnabled;	// 8 = 0x8
    double _screenSaverActivationDelayInMinutes;	// 16 = 0x10
    TVSPreferences *_screenSaverPrefs;	// 24 = 0x18
    PBScreenSaverContentPresentingViewController *_contentViewController;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    PBSystemOverlayController *_overlayController;	// 48 = 0x30
    PBDialogHiddenAssertion *_hideDialogAssertion;	// 56 = 0x38
    id <BSInvalidatable> _suppressSiriAssertion;	// 64 = 0x40
    PBSystemGestureHandle *_dismissGesture;	// 72 = 0x48
}

+ (id)_sceneWorkspace;	// IMP=0x0020000000030397
+ (id)sharedInstance;	// IMP=0x0010000000030340
+ (id)dependencyDescription;	// IMP=0x00100000000301cc
- (void).cxx_destruct;	// IMP=0x0020000000032194
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) id <BSInvalidatable> suppressSiriAssertion; // @synthesize suppressSiriAssertion=_suppressSiriAssertion;
@property(readonly, nonatomic) PBDialogHiddenAssertion *hideDialogAssertion; // @synthesize hideDialogAssertion=_hideDialogAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) TVSPreferences *screenSaverPrefs; // @synthesize screenSaverPrefs=_screenSaverPrefs;
@property(nonatomic) _Bool holdOffForMusicEnabled; // @synthesize holdOffForMusicEnabled=_holdOffForMusicEnabled;
@property(nonatomic) double screenSaverActivationDelayInMinutes; // @synthesize screenSaverActivationDelayInMinutes=_screenSaverActivationDelayInMinutes;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000003210a
- (void)_handleSiriDidChangeVisibleState:(long long)arg1;	// IMP=0x0010000000031f99
- (void)siriManagerDidUnhideSiriWindow:(id)arg1;	// IMP=0x0010000000031f66
- (void)siriManager:(id)arg1 didUpdateVisibleState:(long long)arg2;	// IMP=0x0010000000031f50
- (void)_notifyPhotosSourcesDaemon;	// IMP=0x0010000000031f3e
- (void)_updateActivationDelay;	// IMP=0x0010000000031e91
- (id)_processIdentity;	// IMP=0x0010000000031db5
- (id)_screenSaverAppBundleID;	// IMP=0x0010000000031d47
- (void)_postSystemDidChangeIdleState:(_Bool)arg1;	// IMP=0x0010000000031bad
- (void);	// IMP=0x0010000000031b9f
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000031b88
- (void)addObserver:(id)arg1;	// IMP=0x0010000000031b71
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0010000000031a62
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000000318a8
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000031750
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00100000000315bc
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000000313ce
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (_Bool)shouldDismissScreenSaverOnPlayPauseButtonPress;	// IMP=0x00100000000312a2
- (_Bool)dismissScreenSaverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031002
- (_Bool)dismissScreenSaver;	// IMP=0x0010000000030fed
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030c95
- (void)activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030b4c
- (void)fetchInitialPhotoAssets;	// IMP=0x0010000000030b39
- (void)dealloc;	// IMP=0x0010000000030a3a
- (id)init;	// IMP=0x001000000003045e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

