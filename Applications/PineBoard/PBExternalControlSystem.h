//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSExternalControlSystem, PBSystemGestureHandle, PBVolumeController, TVSStateMachine;

@interface PBExternalControlSystem : NSObject
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    PBVolumeController *_volumeController;	// 16 = 0x10
    TVSStateMachine *_volumeBehaviorStateMachine;	// 24 = 0x18
    PBSystemGestureHandle *_volumeMuteButtonGesture;	// 32 = 0x20
    PBSystemGestureHandle *_volumeIncrementGesture;	// 40 = 0x28
    PBSystemGestureHandle *_volumeDecrementGesture;	// 48 = 0x30
    PBSystemGestureHandle *_switchToATVGesture;	// 56 = 0x38
}

+ (void)performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x00200000001b88fe
+ (void)performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001b88aa
+ (void)sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00100000001b8856
+ (id)volumeController;	// IMP=0x00100000001b87fe
+ (_Bool)isAppleIRRemotePaired;	// IMP=0x00100000001b87b2
+ (void)unpairAppleIRRemote;	// IMP=0x00100000001b8760
+ (void)pairAppleIRRemote;	// IMP=0x00100000001b870e
+ (_Bool)volumeControlNeedsConfiguring;	// IMP=0x00100000001b84e2
+ (id)sharedSystem;	// IMP=0x00100000001b848a
+ (id)_sharedInstance;	// IMP=0x00100000001ba638
- (void).cxx_destruct;	// IMP=0x00100000001ba5d8
@property(readonly, nonatomic) PBSystemGestureHandle *switchToATVGesture; // @synthesize switchToATVGesture=_switchToATVGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeDecrementGesture; // @synthesize volumeDecrementGesture=_volumeDecrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeIncrementGesture; // @synthesize volumeIncrementGesture=_volumeIncrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeMuteButtonGesture; // @synthesize volumeMuteButtonGesture=_volumeMuteButtonGesture;
@property(retain, nonatomic) TVSStateMachine *volumeBehaviorStateMachine; // @synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine;
@property(retain, nonatomic) PBVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void)_initializeVolumeBehaviorStateMachine;	// IMP=0x00100000001b99e0
- (void)_listenForNowPlayingAppNotifications;	// IMP=0x00100000001b995c
- (void)_listenForVolumeButtonOverrideUpdates;	// IMP=0x00100000001b98f7
- (void)_sendAction:(long long)arg1 orShowUnconfiguredAlert:(_Bool)arg2;	// IMP=0x00100000001b9562
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00100000001b954a
- (void)_performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001b93fe
- (void)_performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001b92b2
- (void)_initializeVolumeButtonGestures;	// IMP=0x00100000001b8dec
- (void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x00100000001b8da7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001b8bed
- (void)dealloc;	// IMP=0x00100000001b8b7e
- (id)init;	// IMP=0x00100000001b8a97
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00100000001b89a4
- (id)DisplayModeBinding;	// IMP=0x00100000001b8952
- (void)_pauseOnResignedActiveSource;	// IMP=0x00100000001ba872
- (_Bool)_shouldSuppressWakeForRemoteControlButton:(long long)arg1;	// IMP=0x00100000001ba862
- (void)_handleDisplayModeDidChange;	// IMP=0x00100000001ba68f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

