//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class MRNowPlayingAudioFormatController, NSIndexPath, NSMutableDictionary, NSString, NSTimer, TVCSSpatialTutorialStateObserver, TVNPEndpointRouteConnection, TVNPOutputDeviceRoute, TVSBluetoothDevice, TVSMCAPackageView, UICollectionViewDiffableDataSource;
@protocol NSCopying;

@interface TVSMAirPodsModuleHeadsetSettingsCollectionViewController : UICollectionViewController
{
    _Bool _isSharingAudio;	// 8 = 0x8
    _Bool _spatialAudioFocused;	// 9 = 0x9
    _Bool _headTrackingEnabled;	// 10 = 0xa
    _Bool _isSpatialEnabledGlobally;	// 11 = 0xb
    _Bool _isContentEligibleForSpatialization;	// 12 = 0xc
    _Bool _isMusicApp;	// 13 = 0xd
    TVNPOutputDeviceRoute *_route;	// 16 = 0x10
    long long _focusedSetting;	// 24 = 0x18
    NSString *_foregroundAppBundleID;	// 32 = 0x20
    UICollectionViewDiffableDataSource *_settingsDataSource;	// 40 = 0x28
    NSMutableDictionary *_settings;	// 48 = 0x30
    long long _currentListeningMode;	// 56 = 0x38
    long long _currentSpatialMode;	// 64 = 0x40
    NSString *_nowPlayingApp;	// 72 = 0x48
    NSString *_nowPlayingBundleID;	// 80 = 0x50
    NSString *_spatialAudioSettingTitle;	// 88 = 0x58
    NSString *_audioFormat;	// 96 = 0x60
    MRNowPlayingAudioFormatController *_audioFormatController;	// 104 = 0x68
    TVSMCAPackageView *_spatialWhitePackageView;	// 112 = 0x70
    TVSMCAPackageView *_spatialBlackPackageView;	// 120 = 0x78
    long long _bestAvailableFormat;	// 128 = 0x80
    TVSBluetoothDevice *_bluetoothDevice;	// 136 = 0x88
    NSTimer *_spatialModeChangedTimer;	// 144 = 0x90
    NSTimer *_listeningModeChangedTimer;	// 152 = 0x98
    TVCSSpatialTutorialStateObserver *_tutorialStateObserver;	// 160 = 0xa0
    NSIndexPath *_focusedIndexPath;	// 168 = 0xa8
    TVNPEndpointRouteConnection *_routeConnection;	// 176 = 0xb0
    id <NSCopying> _metadataObserverToken;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000002c6c0
@property(readonly, nonatomic) id <NSCopying> metadataObserverToken; // @synthesize metadataObserverToken=_metadataObserverToken;
@property(readonly, nonatomic) TVNPEndpointRouteConnection *routeConnection; // @synthesize routeConnection=_routeConnection;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) TVCSSpatialTutorialStateObserver *tutorialStateObserver; // @synthesize tutorialStateObserver=_tutorialStateObserver;
@property(retain, nonatomic) NSTimer *listeningModeChangedTimer; // @synthesize listeningModeChangedTimer=_listeningModeChangedTimer;
@property(retain, nonatomic) NSTimer *spatialModeChangedTimer; // @synthesize spatialModeChangedTimer=_spatialModeChangedTimer;
@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(nonatomic) long long bestAvailableFormat; // @synthesize bestAvailableFormat=_bestAvailableFormat;
@property(nonatomic) _Bool isMusicApp; // @synthesize isMusicApp=_isMusicApp;
@property(retain, nonatomic) TVSMCAPackageView *spatialBlackPackageView; // @synthesize spatialBlackPackageView=_spatialBlackPackageView;
@property(retain, nonatomic) TVSMCAPackageView *spatialWhitePackageView; // @synthesize spatialWhitePackageView=_spatialWhitePackageView;
@property(retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // @synthesize audioFormatController=_audioFormatController;
@property(nonatomic) _Bool isContentEligibleForSpatialization; // @synthesize isContentEligibleForSpatialization=_isContentEligibleForSpatialization;
@property(nonatomic) _Bool isSpatialEnabledGlobally; // @synthesize isSpatialEnabledGlobally=_isSpatialEnabledGlobally;
@property(retain, nonatomic) NSString *audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain, nonatomic) NSString *spatialAudioSettingTitle; // @synthesize spatialAudioSettingTitle=_spatialAudioSettingTitle;
@property(retain, nonatomic) NSString *nowPlayingBundleID; // @synthesize nowPlayingBundleID=_nowPlayingBundleID;
@property(retain, nonatomic) NSString *nowPlayingApp; // @synthesize nowPlayingApp=_nowPlayingApp;
@property(nonatomic) _Bool headTrackingEnabled; // @synthesize headTrackingEnabled=_headTrackingEnabled;
@property(nonatomic) long long currentSpatialMode; // @synthesize currentSpatialMode=_currentSpatialMode;
@property(nonatomic) long long currentListeningMode; // @synthesize currentListeningMode=_currentListeningMode;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *settingsDataSource; // @synthesize settingsDataSource=_settingsDataSource;
@property(retain, nonatomic) NSString *foregroundAppBundleID; // @synthesize foregroundAppBundleID=_foregroundAppBundleID;
@property(nonatomic) _Bool spatialAudioFocused; // @synthesize spatialAudioFocused=_spatialAudioFocused;
@property(nonatomic) long long focusedSetting; // @synthesize focusedSetting=_focusedSetting;
@property(nonatomic) _Bool isSharingAudio; // @synthesize isSharingAudio=_isSharingAudio;
@property(retain, nonatomic) TVNPOutputDeviceRoute *route; // @synthesize route=_route;
- (id)_headsetSettingsLayout;	// IMP=0x000000000002aed0
- (id)_descriptionForListeningMode:(long long)arg1;	// IMP=0x000000000002ae20
- (id)_descriptionForSpatialMode:(long long)arg1;	// IMP=0x000000000002ad50
- (id)_analyticsDictionaryWithMode:(long long)arg1;	// IMP=0x000000000002abe0
- (void)_recordListeningModeChangeAnalyticsEventWithMode:(long long)arg1;	// IMP=0x000000000002a9a0
- (void)_recordSpatialChangeAnalyticsEventWithMode:(long long)arg1 headTrackingEnabled:(_Bool)arg2;	// IMP=0x000000000002a6f0
- (void)_recordSpatialChangeAnalyticsEventWithMode:(long long)arg1;	// IMP=0x000000000002a600
- (id)_resolvedDetailText;	// IMP=0x0000000000029e60
- (id)_resolvedAudioFormat;	// IMP=0x0000000000029bf0
- (_Bool)_deviceSupportsSpatial;	// IMP=0x0000000000029bd0
- (_Bool)_currentAppSupportsSpatial;	// IMP=0x0000000000029b40
- (id)_currentAppBundleID;	// IMP=0x0000000000029a80
- (void)_didSelectHeadsetListeningModeSetting:(long long)arg1;	// IMP=0x0000000000029a00
- (void)_didSelectSpatializeStereo;	// IMP=0x00000000000297c0
- (void)_didSelectSpatialSetting:(long long)arg1;	// IMP=0x0000000000029450
- (id)_stringForAirPodsSettingType:(long long)arg1;	// IMP=0x0000000000029090
- (id)_stringForSpatialEnabledState;	// IMP=0x0000000000028bd0
- (id)_packageViewWithName:(id)arg1 activeStateName:(id)arg2;	// IMP=0x0000000000028a40
- (id)_packageNameForSetting:(long long)arg1;	// IMP=0x00000000000288c0
- (id)_packageViewForSetting:(long long)arg1 white:(_Bool)arg2;	// IMP=0x0000000000028740
- (void)_updateCurrentlyPlayingAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028380
- (_Bool)_currentGlobalSpatialSetting;	// IMP=0x00000000000282f0
- (long long)_currentEnabledSettingForListeningMode;	// IMP=0x00000000000282b0
- (long long)_currentEnabledSpatialMode;	// IMP=0x0000000000028240
- (void)_setSpatialAudioMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000281a0
- (void)_setListeningMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028130
- (long long)_listeningModeForSetting:(long long)arg1;	// IMP=0x0000000000028020
- (_Bool)_shouldShowSettingAsDisabled:(long long)arg1;	// IMP=0x0000000000027e40
- (_Bool)_shouldShowSettingAsSelected:(long long)arg1;	// IMP=0x0000000000027c80
- (_Bool)_headTrackingDisabled;	// IMP=0x0000000000027c60
- (_Bool)_dolbyAtmosActive;	// IMP=0x00000000000279b0
- (_Bool)_spatializeStereoEnabled;	// IMP=0x0000000000027810
- (_Bool)_spatialAndHeadTrackingEnabled;	// IMP=0x0000000000027790
- (_Bool)_spatialFixedEnabled;	// IMP=0x0000000000027710
- (_Bool)_musicHeadTrackingAvailable;	// IMP=0x0000000000027640
- (_Bool)_spatialUnavailable;	// IMP=0x0000000000027550
- (_Bool)_spatialEnabled;	// IMP=0x0000000000027500
- (_Bool)_isMusicSpatialEnabled;	// IMP=0x00000000000274a0
- (_Bool)_isMultichannelAvailable;	// IMP=0x0000000000027400
- (_Bool)isSpatialEnabled;	// IMP=0x00000000000270a0
- (void)_updateSpatialCell:(id)arg1;	// IMP=0x0000000000026be0
- (void)_updateSpatialSections;	// IMP=0x0000000000026660
- (void)_updateCurrentSpatialMode;	// IMP=0x00000000000264b0
- (void)_optimisticallyUpdateSpatialMode:(long long)arg1 headTrackingEnabled:(_Bool)arg2;	// IMP=0x0000000000026210
- (void)_updateCurrentListeningMode;	// IMP=0x00000000000261a0
- (void)_optimisticallyUpdateListeningMode:(long long)arg1;	// IMP=0x0000000000025fa0
- (void)_updateCurrentSettings;	// IMP=0x0000000000025f20
- (void)_updateAudioFormat;	// IMP=0x0000000000025870
- (void)_updateSpatialOption;	// IMP=0x0000000000025030
- (id)_musicAppAudioFormat;	// IMP=0x0000000000024e00
- (id)_spatialAudioSubtitleText;	// IMP=0x0000000000024300
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeIsEligibleForSpatialization:(_Bool)arg2;	// IMP=0x00000000000241b0
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeBundleID:(id)arg2 displayName:(id)arg3;	// IMP=0x0000000000023fc0
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeBestAvailableAudioFormat:(long long)arg2;	// IMP=0x0000000000023e00
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatDescription:(id)arg2;	// IMP=0x0000000000023cc0
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeMultichannel:(_Bool)arg2;	// IMP=0x0000000000023b80
- (long long)_destinationMode;	// IMP=0x0000000000023990
- (void)didSelectHeadsetSetting:(long long)arg1;	// IMP=0x0000000000023070
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000022ce0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000022ac0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000226c0
@property(readonly, nonatomic) _Bool musicHeadTrackingAvailable;
@property(readonly, nonatomic) NSString *currentAppBundleID;
- (void)updateListeningModeSection;	// IMP=0x00000000000220f0
- (void)updateSnapshot;	// IMP=0x0000000000021e80
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000021cc0
- (void)viewDidLoad;	// IMP=0x0000000000020310
- (void)dealloc;	// IMP=0x0000000000020260
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x000000000001fd60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

