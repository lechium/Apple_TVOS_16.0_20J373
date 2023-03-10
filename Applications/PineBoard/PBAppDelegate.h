//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, PBAppInfoController, PBBulletinService, PBConstantAudioOutputController, PBLanguageChangeObserver, PBLargeGameInstallMonitor, PBSBulletin, PBSafeAreaWindow, PBSystemGestureCompatibilityShim, PBSystemGestureHandle, PBUserNotificationHandler, TVSBackgroundTask, UIWindow;

@interface PBAppDelegate : UIResponder
{
    PBUserNotificationHandler *_userNotificationHandler;	// 8 = 0x8
    PBSafeAreaWindow *_safeAreaWindow;	// 16 = 0x10
    _Bool _tooHot;	// 24 = 0x18
    double _homeLongPressStartTime;	// 32 = 0x20
    _Bool _appLaunchDisabled;	// 40 = 0x28
    _Bool _awaitingSiriOptInOfferResponse;	// 41 = 0x29
    _Bool __kioskRelaunchDisabled;	// 42 = 0x2a
    TVSBackgroundTask *_programmingGuideBackgroundTask;	// 48 = 0x30
    PBLanguageChangeObserver *_languageChangeObserver;	// 56 = 0x38
    unsigned long long _regionChangeTimestamp;	// 64 = 0x40
    PBAppInfoController *_appInfoController;	// 72 = 0x48
    PBLargeGameInstallMonitor *_largeGameInstallMonitor;	// 80 = 0x50
    PBConstantAudioOutputController *_constantAudioOutputController;	// 88 = 0x58
    PBBulletinService *_bulletinService;	// 96 = 0x60
    PBSystemGestureHandle *_powerOffHintGesture;	// 104 = 0x68
    PBSystemGestureHandle *_powerOffGesture;	// 112 = 0x70
    PBSBulletin *_powerOffBulletin;	// 120 = 0x78
    PBSystemGestureHandle *_accessibilityShortcutGesture;	// 128 = 0x80
    PBSystemGestureCompatibilityShim *_systemGestureCompatibilityShim;	// 136 = 0x88
    NSString *_initialLaunchApplicationBundleID;	// 144 = 0x90
}

+ (id)_newApplicationInitializationContext;	// IMP=0x0020000000193dfe
+ (id)_defaultSceneIdentity;	// IMP=0x0010000000193dd4
+ (id)sharedApplicationDelegate;	// IMP=0x0010000000193d7c
- (void).cxx_destruct;	// IMP=0x00200000001a13f6
@property(readonly, nonatomic) NSString *initialLaunchApplicationBundleID; // @synthesize initialLaunchApplicationBundleID=_initialLaunchApplicationBundleID;
@property(readonly, nonatomic) PBSystemGestureCompatibilityShim *systemGestureCompatibilityShim; // @synthesize systemGestureCompatibilityShim=_systemGestureCompatibilityShim;
@property(readonly, nonatomic) PBSystemGestureHandle *accessibilityShortcutGesture; // @synthesize accessibilityShortcutGesture=_accessibilityShortcutGesture;
@property(retain, nonatomic) PBSBulletin *powerOffBulletin; // @synthesize powerOffBulletin=_powerOffBulletin;
@property(readonly, nonatomic) PBSystemGestureHandle *powerOffGesture; // @synthesize powerOffGesture=_powerOffGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *powerOffHintGesture; // @synthesize powerOffHintGesture=_powerOffHintGesture;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) PBConstantAudioOutputController *constantAudioOutputController; // @synthesize constantAudioOutputController=_constantAudioOutputController;
@property(readonly, nonatomic) PBLargeGameInstallMonitor *largeGameInstallMonitor; // @synthesize largeGameInstallMonitor=_largeGameInstallMonitor;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(nonatomic) _Bool _kioskRelaunchDisabled; // @synthesize _kioskRelaunchDisabled=__kioskRelaunchDisabled;
@property(nonatomic) _Bool awaitingSiriOptInOfferResponse; // @synthesize awaitingSiriOptInOfferResponse=_awaitingSiriOptInOfferResponse;
@property(readonly, nonatomic) unsigned long long regionChangeTimestamp; // @synthesize regionChangeTimestamp=_regionChangeTimestamp;
@property(retain, nonatomic) PBLanguageChangeObserver *languageChangeObserver; // @synthesize languageChangeObserver=_languageChangeObserver;
@property(retain, nonatomic) TVSBackgroundTask *programmingGuideBackgroundTask; // @synthesize programmingGuideBackgroundTask=_programmingGuideBackgroundTask;
@property(nonatomic) _Bool appLaunchDisabled; // @synthesize appLaunchDisabled=_appLaunchDisabled;
- (_Bool)_applicationForPIDIsPlaying:(int)arg1;	// IMP=0x00100000001a11f0
- (_Bool)_requestSleepForReason:(id)arg1;	// IMP=0x00100000001a1090
- (_Bool)_requestWakeForReason:(id)arg1;	// IMP=0x00100000001a0f0f
- (void)stopSiriWithContext:(id)arg1;	// IMP=0x00100000001a0d9a
- (void)startSiriWithContext:(id)arg1;	// IMP=0x00100000001a0b39
- (void)activateSiriWithContext:(id)arg1;	// IMP=0x00100000001a08cf
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x00100000001a081b
- (void)_handleDisableLateNightModeNotification:(id)arg1;	// IMP=0x00100000001a0806
- (void)_handleEnableLateNightModeNotification:(id)arg1;	// IMP=0x00100000001a07ee
- (void)_performObliterationOnBootIfNeeded;	// IMP=0x00100000001a0317
- (_Bool)_wakeDeviceForSiriInteractionWithContext:(id)arg1;	// IMP=0x00100000001a0225
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a0219
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a019f
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00100000001a015d
- (void)_showPowerOffBulletin;	// IMP=0x001000000019ffe3
- (void)_setupPowerOffSystemGestures;	// IMP=0x001000000019faff
- (void)_updateEventMaskingWindow;	// IMP=0x001000000019fa63
- (_Bool)_keyboardFocusedInApp:(id)arg1;	// IMP=0x001000000019f98c
- (_Bool)_shouldShowSiri;	// IMP=0x001000000019f63a
- (void)_setupWebinspector;	// IMP=0x001000000019f5ec
- (void)_stopAllOdeonActivity;	// IMP=0x001000000019f59b
- (void)_resumeActivity;	// IMP=0x001000000019f505
- (void)_stopAllActivity;	// IMP=0x001000000019f327
- (void)_pausePlaybackWithReason:(id)arg1;	// IMP=0x001000000019f2b2
- (void)_handleThermalNotification;	// IMP=0x001000000019f2ac
- (void)_registerForThermalNotifications;	// IMP=0x001000000019f2a6
- (void)triggerThermalNotification;	// IMP=0x001000000019f293
- (void)_presentSiriOptInDialogWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019f07a
- (_Bool)_shouldOfferEnableDataSharing;	// IMP=0x001000000019f02b
- (_Bool)_suggestUserEnableDataSharing;	// IMP=0x001000000019ed47
- (_Bool)_suggestUserEnableDictation;	// IMP=0x001000000019e9aa
- (_Bool)_suggestUserEnableAssistantAndDictation;	// IMP=0x001000000019e775
- (void)_launchAppSwitcher;	// IMP=0x001000000019e4c5
- (void)_launchTVSettingsWithOpenURL:(id)arg1;	// IMP=0x001000000019e3e5
- (_Bool)_launchConferenceRoomDisplayAppWithReason:(unsigned long long)arg1;	// IMP=0x001000000019e380
- (_Bool)_isPurpleBuddyActiveScene;	// IMP=0x001000000019e2da
- (void)_handlePurpleBuddyExit;	// IMP=0x001000000019e1a9
- (void)_launchPurpleBuddyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019e1a3
- (void)_launchPurpleBuddy;	// IMP=0x001000000019e18e
- (_Bool)_launchTVWatchList;	// IMP=0x001000000019dea1
- (_Bool)_launchTVSearch;	// IMP=0x001000000019dd27
- (void)_startSteadyStateServices;	// IMP=0x001000000019dbc4
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019daf0
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019d9fb
- (void)launchPostSetupApp;	// IMP=0x001000000019d510
- (void)launchPostWakeDefaultApp;	// IMP=0x001000000019d43d
- (void)_handleKioskAppLaunchFailure;	// IMP=0x001000000019d3e8
- (void)openKioskApplicationWithReason:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000019ce29
- (void)enableKioskRelaunchForPPT;	// IMP=0x001000000019ce18
- (void)disableKioskRelaunchForPPT;	// IMP=0x001000000019ce07
- (void)_createInitialAppScene;	// IMP=0x001000000019c9d2
- (_Bool)_checkForBulletinActivationForAction:(unsigned long long)arg1;	// IMP=0x001000000019c939
- (void)_startBulletinBoardServer;	// IMP=0x001000000019c75a
- (void)_handleStoreAccountChangedNotification;	// IMP=0x001000000019c68a
- (void)_resetProgrammingGuideRefreshTaskWithTimeIntervalInSeconds:(double)arg1;	// IMP=0x001000000019c56d
- (void)_updateProgrammingGuide;	// IMP=0x001000000019c30f
- (void)_updateWhatsNewCheckTimeInterval;	// IMP=0x001000000019c11d
- (void)_startURLBagMonitoring;	// IMP=0x001000000019c09b
- (void)_startSoftwareUpdateService;	// IMP=0x001000000019c056
- (void)_handleURLBagChangedNotification:(id)arg1;	// IMP=0x001000000019be8d
- (void)observerDidObserveRegionWillChange:(id)arg1;	// IMP=0x001000000019be14
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3 source:(long long)arg4;	// IMP=0x001000000019b890
- (void)_setupLanguageChangeObserving;	// IMP=0x001000000019b6bc
- (void)mediaRemoteObserverNowPlayingRateDidChange:(id)arg1;	// IMP=0x001000000019b5c1
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(id)arg1 nowPlayingInfo:(id)arg2;	// IMP=0x001000000019b4c6
- (void)mediaRemoteObserverNowPlayingAppDidChange:(id)arg1;	// IMP=0x001000000019b38e
- (void)mediaRemoteObserverIsPlayingDidChange:(id)arg1;	// IMP=0x001000000019b1db
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(id)arg1;	// IMP=0x001000000019b055
- (void)mediaRemoteObserverRemotePlaybackStateDidChange:(id)arg1;	// IMP=0x001000000019af85
- (_Bool)_wouldExpectPlayPauseButtonUpShouldPause;	// IMP=0x001000000019af59
- (_Bool)_wouldExpectPlayPauseButtonDownShouldPause;	// IMP=0x001000000019af33
- (_Bool)_wouldExpectPlayPauseButtonShouldPause:(_Bool *)arg1;	// IMP=0x001000000019ad7d
- (void)handleBlackScreenRecoveryEvent:(id)arg1;	// IMP=0x001000000019ac21
- (void)handleScreenshotEvent:(id)arg1;	// IMP=0x001000000019ab03
- (void)handleSysdiagnoseEvent:(id)arg1;	// IMP=0x001000000019a9ef
- (void)handleChannelGuideLongPressEvent:(id)arg1;	// IMP=0x001000000019a969
- (void)handleChannelGuideTapEvent:(id)arg1;	// IMP=0x001000000019a8f9
- (void)handleExposeAllTapEvent;	// IMP=0x001000000019a854
- (void)handleTVLongPressEvent:(id)arg1;	// IMP=0x001000000019a517
- (void)handleTVTripleTapEvent;	// IMP=0x001000000019a3f1
- (void)handleTVDoubleTapEvent;	// IMP=0x0010000000199e9f
- (void)handleTVTapEventAsThirdTapEventInAppSwitcher;	// IMP=0x0010000000199d1c
- (void)_handleTVTapEventWithHIDRef:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000019956a
- (void)handleTVTapEvent:(id)arg1;	// IMP=0x0010000000199537
- (void)handlePowerOffTapEvent:(id)arg1;	// IMP=0x0010000000199434
- (void)handlePowerOnTapEvent:(id)arg1;	// IMP=0x001000000019934e
- (void)handlePowerToggleTapEvent:(id)arg1;	// IMP=0x00100000001991c3
- (void)handlePowerOffExternalEvent;	// IMP=0x0010000000199114
- (void)handlePowerOnExternalEvent;	// IMP=0x0010000000199065
- (void)handlePowerToggleExternalEvent:(id)arg1;	// IMP=0x0010000000198eda
- (void)handleMuteTapEvent:(id)arg1;	// IMP=0x0010000000198d86
- (void)handleVolumeDownLongPressEvent:(id)arg1;	// IMP=0x0010000000198c2a
- (void)handleVolumeUpLongPressEvent:(id)arg1;	// IMP=0x0010000000198ace
- (void)handleFastForwardLongPressEvent:(id)arg1;	// IMP=0x00100000001989b0
- (void)handleRewindLongPressEvent:(id)arg1;	// IMP=0x0010000000198892
- (void)handleSkipBackwardsRepeatingPressEvent:(id)arg1;	// IMP=0x0010000000198779
- (void)handleSkipForwardsRepeatingPressEvent:(id)arg1;	// IMP=0x0010000000198660
- (void)handlePreviousTrackTapEvent;	// IMP=0x0010000000198586
- (void)handleNextTrackTapEvent;	// IMP=0x00100000001984ac
- (void)handleFastForwardTapEvent;	// IMP=0x001000000019838b
- (void)handleRewindTapEvent;	// IMP=0x001000000019826a
- (void)handleStopTapEvent;	// IMP=0x0010000000198190
- (void)handlePauseTapEvent;	// IMP=0x00100000001980b6
- (void)handlePlayTapEvent;	// IMP=0x0010000000197fdc
- (void)handlePlayPauseTapEvent;	// IMP=0x0010000000197ef0
- (_Bool)shouldTogglePlayPauseOnButtonUp;	// IMP=0x0010000000197e2b
- (_Bool)shouldTogglePlayPauseOnButtonDown;	// IMP=0x0010000000197d66
- (void)_configureMediaRemoteCommandCenter;	// IMP=0x00100000001979cf
- (void)handleMicrophoneButtonDownEvent:(id)arg1;	// IMP=0x00100000001978b8
- (void)handleMicrophoneLongPressEvent:(id)arg1;	// IMP=0x00100000001976cb
- (void)handleMicrophoneTapEvent:(id)arg1;	// IMP=0x00100000001975d8
- (_Bool)handleUnhandledMenuEvent;	// IMP=0x001000000019734f
- (void)_updateTripleTapMenu;	// IMP=0x00100000001970f0
- (void)handleQuadrupleMenuTapEvent;	// IMP=0x0010000000197020
- (void)_handleMenuOrACHomeLongPressEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x0010000000196d5b
- (_Bool)_cleanUpUIStackAndLaunchKioskAppWithReason:(id)arg1;	// IMP=0x0010000000196970
- (void)handleACHomeLongPressEvent:(id)arg1;	// IMP=0x001000000019688d
- (void)handleMenuLongPressEvent:(id)arg1;	// IMP=0x00100000001967a7
- (void)handleACHomeSingleTapEvent:(id)arg1;	// IMP=0x0010000000196672
- (void)handleMenuSingleTapEvent:(id)arg1;	// IMP=0x001000000019653a
- (_Bool)_handleMenuOrACHomeSingleTapEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x0010000000195e57
- (void)handleACHomeDoubleTapEvent:(id)arg1;	// IMP=0x0010000000195cf7
- (void)handleMenuDoubleTapEvent;	// IMP=0x0010000000195c69
- (void)handleMenuTripleTapEvent;	// IMP=0x0010000000195a95
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000195a50
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x001000000019588e
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000195702
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000019425e
- (void)tvs_bindAccessibilityMenuOptionsBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x001000000019416b
- (id)AccessibilityMenuOptionsBinding;	// IMP=0x0010000000194119
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001940d2
- (void)dealloc;	// IMP=0x0010000000193fbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

