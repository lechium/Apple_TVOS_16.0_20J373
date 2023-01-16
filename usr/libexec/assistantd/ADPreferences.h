//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, MISSING_TYPE, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _needToPostLanguageNotification;	// 16 = 0x10
    _Bool _needToPostOutputLanguageNotification;	// 17 = 0x11
    NSMutableDictionary *_redirects;	// 24 = 0x18
    NSMutableDictionary *_keychainCache;	// 32 = 0x20
    AFInstanceContext *_instanceContext;	// 40 = 0x28
}

+ (id)sharedPreferences;	// IMP=0x00400000001ed67d
- (void).cxx_destruct;	// IMP=0x00200000001f0598
- (id)syncMetadata;	// IMP=0x00100000001f0579
- (void)setSyncMetadata:(id)arg1;	// IMP=0x00100000001f0554
- (id)bootMuxSyncStatus;	// IMP=0x00100000001f0535
- (void)setBootMuxSyncStatus:(id)arg1;	// IMP=0x00100000001f0510
- (id)lastDeviceExperimentCheckDate;	// IMP=0x00100000001f04f1
- (void)setLastDeviceExperimentCheckDate:(id)arg1;	// IMP=0x00100000001f04cc
- (id)lastServerExperimentCheckDate;	// IMP=0x00100000001f04ad
- (void)setLastServerExperimentCheckDate:(id)arg1;	// IMP=0x00100000001f0488
- (id)useDeviceAuthenticationVersion;	// IMP=0x00100000001f0469
- (double)myriadDeviceVTEndTimeDistanceThreshold;	// IMP=0x00100000001f0412
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)arg1;	// IMP=0x00100000001f03bc
- (void)setMultiUserSetUpCompleteTimes:(id)arg1;	// IMP=0x00100000001f0397
- (id)multiUserSetupCompleteTimes;	// IMP=0x00100000001f0378
- (void)setMultiUserSetUpStartTimes:(id)arg1;	// IMP=0x00100000001f0353
- (id)multiUserSetupStartTimes;	// IMP=0x00100000001f0334
- (id)singleUserCompanionACEHost;	// IMP=0x00100000001f0315
- (void)setSingleUserCompanionACEHost:(id)arg1;	// IMP=0x00100000001f02ea
- (id)singleUserMeCard;	// IMP=0x00100000001f02cb
- (void)setSingleUserMeCard:(id)arg1;	// IMP=0x00100000001f02a0
- (id)_keychainCache;	// IMP=0x00100000001f025c
- (void)_cacheAndSetKeychainString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001effe4
- (id)_keychainStringForKey:(id)arg1;	// IMP=0x00100000001eff4c
- (id)_cachedKeychainStringForKey:(id)arg1;	// IMP=0x00100000001efdd8
- (_Bool)dictationLanguageDetectorEnabled;	// IMP=0x00100000001efdce
- (void)setAllowExplicitContent:(_Bool)arg1;	// IMP=0x00100000001efd78
- (_Bool)allowExplicitContent;	// IMP=0x00100000001efd2d
- (void)setServerAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(id)arg1;	// IMP=0x00100000001efd08
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;	// IMP=0x00100000001efca4
- (void)setServerMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(id)arg1;	// IMP=0x00100000001efc7f
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;	// IMP=0x00100000001efc1b
- (void)setServerAudioSessionActivationDelay:(id)arg1;	// IMP=0x00100000001efbf6
- (id)serverAudioSessionActivationDelay;	// IMP=0x00100000001efb92
- (id)overrideAudioSessionActiveDelay;	// IMP=0x00100000001efb3c
- (_Bool)getAudioSessionActiveDelay:(double *)arg1;	// IMP=0x00100000001efaaf
- (_Bool)getMinimumOutputVolume:(float *)arg1;	// IMP=0x00100000001efa23
- (_Bool)getMaximumOutputVolume:(float *)arg1;	// IMP=0x00100000001ef997
- (void)setLastKnownAnalyticsStoreState:(unsigned long long)arg1;	// IMP=0x00100000001ef944
- (unsigned long long)lastKnownAnalyticsStoreState;	// IMP=0x00100000001ef8d4
- (_Bool)proxyConnectionDisabled;	// IMP=0x00100000001ef884
- (_Bool)metricsSenderDisabled;	// IMP=0x00100000001ef82a
- (void)setExperimentState:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x00100000001ef7c3
- (id)getExperimentStateForConfigurationIdentifier:(id)arg1;	// IMP=0x00100000001ef775
- (void)setExperimentIdentifier:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x00100000001ef70e
- (id)experimentIdentifierForConfigurationIdentifier:(id)arg1;	// IMP=0x00100000001ef6c0
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1;	// IMP=0x00100000001ef6b0
- (_Bool)siriDataSharingHomePodSetupDeviceIsValid;	// IMP=0x00100000001ef6a2
- (void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001ef51d
- (void)setSiriDataSharingOptInStatus:(long long)arg1;	// IMP=0x00100000001ef4ee
- (long long)siriDataSharingOptInStatus;	// IMP=0x00100000001ef4e0
- (void)setLastCompanionRemoteDataFetchDate:(id)arg1;	// IMP=0x00100000001ef4bb
- (id)lastCompanionRemoteDataFetchDate;	// IMP=0x00100000001ef457
- (void)setCompanionIdentifier:(id)arg1;	// IMP=0x00100000001ef31b
- (id)companionIdentifier;	// IMP=0x00100000001ef21d
- (void)setSharedUserIdentifier:(id)arg1 loggingSharedUserIdentifier:(id)arg2;	// IMP=0x00100000001ef0a6
- (id)loggingSharedUserIdentifier;	// IMP=0x00100000001eefa8
- (id)sharedUserIdentifier;	// IMP=0x00100000001eee85
- (id)multiUserHomeUUIDsForDeletion;	// IMP=0x00100000001eee21
- (void)removeMultiUserHomeUUID:(id)arg1;	// IMP=0x00100000001eed22
- (void)setMultiUserHomeUUIDsForDeletion:(id)arg1;	// IMP=0x00100000001eebba
- (void)setIsMultiUserSyncerMeDevice:(_Bool)arg1;	// IMP=0x00100000001eeb67
- (_Bool)isMultiUserSyncerMeDevice;	// IMP=0x00100000001eeb46
- (void)setMultiUserSyncerBackupIdentifiersAnchor:(id)arg1;	// IMP=0x00100000001eeb21
- (id)multiUserSyncerBackupIdentifiersAnchor;	// IMP=0x00100000001eeb02
- (void)setMultiUserSyncerIdentifiersAnchor:(id)arg1;	// IMP=0x00100000001eeadd
- (id)multiUserSyncerIdentifiersAnchor;	// IMP=0x00100000001eeabe
- (void)setMultiUserSyncerSADAnchor:(id)arg1;	// IMP=0x00100000001eea99
- (id)multiUserSyncerSADAnchor;	// IMP=0x00100000001eea7a
- (MISSING_TYPE *)setMultiUserIsOnboardingDevice: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001ee994
- (_Bool)multiUserIsOnboardingDevice;	// IMP=0x00100000001ee973
- (void)setMultiUserSharedUsers:(id)arg1;	// IMP=0x00100000001ee94e
- (id)multiUserSharedUsers;	// IMP=0x00100000001ee8ea
- (void)setDeviceOwner:(id)arg1;	// IMP=0x00100000001ee8c5
- (id)deviceOwner;	// IMP=0x00100000001ee861
- (void)setMultiUserPrimaryUser:(id)arg1;	// IMP=0x00100000001ee83c
- (id)multiUserPrimaryUser;	// IMP=0x00100000001ee7d8
- (void)setHasSetupMultiUserSharedRecordZoneSubscription:(_Bool)arg1;	// IMP=0x00100000001ee785
- (_Bool)hasSetUpMultiUserSharedRecordZoneSubscription;	// IMP=0x00100000001ee735
- (void)setMultiUserSharedDataServerChangeToken:(id)arg1;	// IMP=0x00100000001ee710
- (id)multiUserSharedDataServerChangeToken;	// IMP=0x00100000001ee6ac
- (void)setDeviceWasRedirectedToProduction:(_Bool)arg1;	// IMP=0x00100000001ee5eb
- (_Bool)deviceWasRedirectedToProduction;	// IMP=0x00100000001ee59b
- (void)setMultiUserVoiceIdentification:(_Bool)arg1;	// IMP=0x00100000001ee437
- (_Bool)multiUserVoiceIdentification;	// IMP=0x00100000001ee3eb
- (void)setLastMetricsUploadFailureReportedOnDate:(id)arg1;	// IMP=0x00100000001ee3c6
- (id)lastMetricsUploadFailureReportedOnDate;	// IMP=0x00100000001ee3a7
- (void)setLastMetricsUploadDate:(id)arg1;	// IMP=0x00100000001ee382
- (id)lastMetricsUploadDate;	// IMP=0x00100000001ee363
- (void)setLastSyncVerificationDate:(id)arg1;	// IMP=0x00100000001ee33e
- (id)lastSyncVerificationDate;	// IMP=0x00100000001ee31f
- (void)setLastKnownProxyStreamId:(id)arg1;	// IMP=0x00100000001ee2fa
- (id)lastKnownProxyStreamId;	// IMP=0x00100000001ee296
- (void)setRedirect:(id)arg1 forServerURLString:(id)arg2;	// IMP=0x00100000001ee163
- (id)redirectForServerURLString:(id)arg1;	// IMP=0x00100000001ee05f
- (id)productTypePrefix;	// IMP=0x00100000001edffb
- (id)serverOverride;	// IMP=0x00100000001edf97
- (_Bool)ignoreLocationWiFiStatus;	// IMP=0x00100000001edf3d
- (void)setCountryCode:(id)arg1;	// IMP=0x00100000001edf30
- (id)countryCode;	// IMP=0x00100000001edf26
- (void)setIsUsingDefaultLanguageSettings:(_Bool)arg1;	// IMP=0x00100000001edeaa
- (_Bool)isUsingDefaultLanguageSettings;	// IMP=0x00100000001ede89
- (void)setOutputVoice:(id)arg1;	// IMP=0x00100000001eddb7
- (id)outputVoiceWithFallback:(_Bool)arg1;	// IMP=0x00100000001edd51
- (id)outputVoice;	// IMP=0x00100000001edd3a
- (void)setLanguageCode:(id)arg1;	// IMP=0x00100000001edc5b
- (id)languageCodeWithFallback:(_Bool)arg1;	// IMP=0x00100000001edbf5
- (id)languageCode;	// IMP=0x00100000001edbde
- (double)serverTimeoutInterval;	// IMP=0x00100000001edb7a
- (_Bool)statisticsRecordingEnabled;	// IMP=0x00100000001edb59
- (void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000001edb34
- (id)accountIdentifiers;	// IMP=0x00100000001edad8
- (id)activeAccountIdentifier;	// IMP=0x00100000001edab9
- (void)setAccountInfo:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001ed98f
- (id)accountInfoForIdentifier:(id)arg1;	// IMP=0x00100000001ed90c
- (void)synchronize;	// IMP=0x00100000001ed80e
- (id)init;	// IMP=0x00100000001ed7fa
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000001ed723

@end

