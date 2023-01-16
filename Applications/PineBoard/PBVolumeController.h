//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPVolumeController, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet, NSString, PBApplicationProcessStateMonitor, PBBulletinService, PBSBulletin;
@protocol PBVolumeControllerDelegate;

@interface PBVolumeController : NSObject
{
    NSMutableOrderedSet *_appsWithVolumeHUDAssertion;	// 8 = 0x8
    NSMutableSet *_suspendedAppsWithVolumeHUDAssertion;	// 16 = 0x10
    NSString *_focusedSceneBundleIdentifier;	// 24 = 0x18
    PBApplicationProcessStateMonitor *_applicationStateMonitor;	// 32 = 0x20
    _Bool _isReady;	// 40 = 0x28
    _Bool _systemMusicVolumeSupported;	// 41 = 0x29
    _Bool _systemAudioVolumeSupported;	// 42 = 0x2a
    _Bool _systemMusicVolumeNotificationsEnabled;	// 43 = 0x2b
    _Bool _systemAudioVolumeNotificationsEnabled;	// 44 = 0x2c
    _Bool _updatingVolumeValues;	// 45 = 0x2d
    id <PBVolumeControllerDelegate> _delegate;	// 48 = 0x30
    PBBulletinService *_bulletinService;	// 56 = 0x38
    PBSBulletin *_volumeBulletin;	// 64 = 0x40
    MPAVRoutingController *_systemMusicRoutingController;	// 72 = 0x48
    MPAVRoutingController *_systemAudioRoutingController;	// 80 = 0x50
    MPVolumeController *_systemMusicVolumeController;	// 88 = 0x58
    MPVolumeController *_systemAudioVolumeController;	// 96 = 0x60
    NSNumber *_systemMusicVolume;	// 104 = 0x68
    NSNumber *_systemMusicVolume_unmuted;	// 112 = 0x70
    NSNumber *_systemAudioVolume;	// 120 = 0x78
    NSNumber *_systemAudioVolume_unmuted;	// 128 = 0x80
    NSSet *_systemMusicRoutes;	// 136 = 0x88
    NSSet *_systemAudioRoutes;	// 144 = 0x90
    NSString *_appWithVolumeHUDAssertion;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000057892
@property(copy, nonatomic) NSString *appWithVolumeHUDAssertion; // @synthesize appWithVolumeHUDAssertion=_appWithVolumeHUDAssertion;
@property(readonly, nonatomic) _Bool updatingVolumeValues; // @synthesize updatingVolumeValues=_updatingVolumeValues;
@property(readonly, nonatomic) _Bool systemAudioVolumeNotificationsEnabled; // @synthesize systemAudioVolumeNotificationsEnabled=_systemAudioVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemMusicVolumeNotificationsEnabled; // @synthesize systemMusicVolumeNotificationsEnabled=_systemMusicVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemAudioVolumeSupported; // @synthesize systemAudioVolumeSupported=_systemAudioVolumeSupported;
@property(readonly, nonatomic) _Bool systemMusicVolumeSupported; // @synthesize systemMusicVolumeSupported=_systemMusicVolumeSupported;
@property(readonly, nonatomic) NSSet *systemAudioRoutes; // @synthesize systemAudioRoutes=_systemAudioRoutes;
@property(readonly, nonatomic) NSSet *systemMusicRoutes; // @synthesize systemMusicRoutes=_systemMusicRoutes;
@property(readonly, nonatomic) NSNumber *systemAudioVolume_unmuted; // @synthesize systemAudioVolume_unmuted=_systemAudioVolume_unmuted;
@property(readonly, nonatomic) NSNumber *systemAudioVolume; // @synthesize systemAudioVolume=_systemAudioVolume;
@property(readonly, nonatomic) NSNumber *systemMusicVolume_unmuted; // @synthesize systemMusicVolume_unmuted=_systemMusicVolume_unmuted;
@property(readonly, nonatomic) NSNumber *systemMusicVolume; // @synthesize systemMusicVolume=_systemMusicVolume;
@property(readonly, nonatomic) MPVolumeController *systemAudioVolumeController; // @synthesize systemAudioVolumeController=_systemAudioVolumeController;
@property(readonly, nonatomic) MPVolumeController *systemMusicVolumeController; // @synthesize systemMusicVolumeController=_systemMusicVolumeController;
@property(readonly, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *systemMusicRoutingController; // @synthesize systemMusicRoutingController=_systemMusicRoutingController;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) __weak id <PBVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationProcessStateMonitor:(id)arg1 updatedProcessState:(id)arg2;	// IMP=0x0010000000057764
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0010000000057676
- (void)_updateAppVolumeHUDAssertions;	// IMP=0x001000000005758c
- (void)_updateApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x0010000000057536
- (void)_updateApplicationState:(id)arg1;	// IMP=0x00100000000570cf
- (float)odeonVolumeStepForCurrentVolume:(float)arg1 isIncrementing:(_Bool)arg2;	// IMP=0x001000000005703f
- (_Bool)bluetoothActiveForRoutingController:(id)arg1;	// IMP=0x0010000000056f4b
- (_Bool)odeonActiveForRoutingController:(id)arg1;	// IMP=0x0010000000056eb0
- (void)_presentVolumeBulletinForRoutes:(id)arg1 volumeLevel:(float)arg2;	// IMP=0x0010000000056de7
- (void)_updateVolumeWithReason:(id)arg1;	// IMP=0x0010000000056235
- (void)_setNeedsVolumeUpdateWithReason:(id)arg1;	// IMP=0x00100000000560b1
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0010000000056076
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x0010000000055f8a
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;	// IMP=0x0010000000055e1d
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0010000000055cb6
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x0010000000055b57
- (void)setSystemVolumeHUDSuppressed:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x0010000000055965
- (void)setVolumeNotificationsEnabled:(_Bool)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x001000000005589f
- (_Bool)odeonActiveForOutputContext:(unsigned long long)arg1;	// IMP=0x001000000005582e
- (_Bool)volumeSupportedForOutputContext:(unsigned long long)arg1;	// IMP=0x001000000005581d
- (CDStruct_e6eb8490)currentVolumeStateForOutputContext:(unsigned long long)arg1;	// IMP=0x00100000000556a3
- (void)setVolumeMuted:(_Bool)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x001000000005517a
- (void)decreaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x0010000000054d6f
- (void)increaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x00100000000548d8
- (void)dealloc;	// IMP=0x0010000000054896
- (void)_initMediaPlayer;	// IMP=0x0010000000054611
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000054464
- (id)init;	// IMP=0x0010000000054456

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
