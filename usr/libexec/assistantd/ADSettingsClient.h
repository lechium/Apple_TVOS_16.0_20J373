//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreEmbeddedSpeechRecognizer, MISSING_TYPE, NSString, NSXPCConnection;

@interface ADSettingsClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002bfd49
- (void)fileARadarWithReason:(id)arg1 room:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bf42e
- (oneway void)getCurrentActiveLanguageCodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bf394
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bf323
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bf299
- (oneway void);	// IMP=0x00100000002bf223
- (oneway void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x00100000002bf1d0
- (oneway void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bf106
- (void)adSyncVerificationServerReport:(id)arg1;	// IMP=0x00100000002bf094
- (void)adSyncVerificationPartialResult:(id)arg1;	// IMP=0x00100000002bf022
- (oneway void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bed95
- (oneway void)getPlatformBiasValue:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bed1f
- (oneway void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bec95
- (oneway void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bec0b
- (oneway void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002beb95
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002beb1f
- (oneway void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002bea76
- (oneway void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002be9ec
- (oneway void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000002be9b8
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002be982
- (void)_postWatchNotificationWithContext:(id)arg1 withError:(id)arg2;	// IMP=0x00100000002be85f
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x00100000002be80c
- (oneway void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bdd5d
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bdd29
- (oneway void)sendSampledAudioToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bdcf1
- (oneway void)setIsHomePodInHH2Mode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bdc2a
- (oneway void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bdb38
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bdb02
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002bd85a
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd76d
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bd63c
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x00100000002bd632
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x00100000002bd625
- (oneway void)clearMessageWithoutConfirmationHeadphonesEnabled;	// IMP=0x00100000002bd61b
- (oneway void)setMessageWithoutConfirmationHeadphonesEnabled:(_Bool)arg1;	// IMP=0x00100000002bd60f
- (oneway void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd5dd
- (oneway void)clearMessageWithoutConfirmationInCarPlayEnabled;	// IMP=0x00100000002bd5d3
- (oneway void)setMessageWithoutConfirmationInCarPlayEnabled:(_Bool)arg1;	// IMP=0x00100000002bd5c7
- (oneway void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd595
- (oneway void)clearMessageWithoutConfirmationEnabled;	// IMP=0x00100000002bd58b
- (oneway void)setMessageWithoutConfirmationEnabled:(_Bool)arg1;	// IMP=0x00100000002bd57f
- (oneway void)getMessageWithoutConfirmationEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd54d
- (oneway void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(_Bool)arg1;	// IMP=0x00100000002bd541
- (oneway void)updateAnnounceNotificationsOnHearingAidSupportedStatus;	// IMP=0x00100000002bd537
- (oneway void)setAnnounceNotificationsOnHearingAidsSupported:(_Bool)arg1;	// IMP=0x00100000002bd52b
- (oneway void)setAnnounceNotificationsOnHearingAidsEnabled:(_Bool)arg1;	// IMP=0x00100000002bd51f
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x00100000002bd476
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x00100000002bd386
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd354
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x00100000002bd2ca
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x00100000002bd224
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd1f2
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x00100000002bd1df
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bd178
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x00100000002bd168
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bd111
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x00100000002bd107
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x00100000002bd0fb
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd0c9
- (oneway void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x00100000002bd0bd
- (oneway void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd08b
- (oneway void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x00100000002bd07f
- (oneway void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bd04d
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x00100000002bd043
- (oneway void)stopObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000002bcfff
- (oneway void)startObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000002bcfbb
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bcec0
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bceb3
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc9d6
- (oneway void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bc8ca
- (oneway void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bc7be
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bc6c5
- (oneway void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bc5db
- (oneway void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc50a
- (oneway void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc439
- (oneway void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc34c
- (oneway void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc20b
- (oneway void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bc0ca
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbf52
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbedd
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbec7
- (oneway void)getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbe0e
- (oneway void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bbd30
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbc65
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbb9a
- (oneway void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002bbada
- (oneway void)showHomeProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bba0f
- (oneway void)resetProfileNames:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bb98c
- (oneway void)showLocalProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bb8f0
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bb871
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bb7f4
- (oneway void)showMultiUserCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bb385
- (oneway void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bb308
- (oneway void)removeMultiUserUserWithSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bb237
- (oneway void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bb166
- (oneway void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000002bb009
- (oneway void)getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000002baf98
- (oneway void)setNanoAlwaysShowRecognizedSpeech:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf86
- (oneway void)setNanoSiriResponseShouldAlwaysPrint:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf74
- (oneway void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf62
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf50
- (oneway void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf3e
- (oneway void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf2c
- (oneway void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf1a
- (oneway void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baf08
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baef6
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baee4
- (oneway void)setNanoDictationAutoPunctuationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baed2
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baec0
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002baeae
- (oneway void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bae3d
- (oneway void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000002badcc
- (oneway void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bacd2
- (oneway void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002bac64
- (oneway void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002babf6
- (oneway void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bab88
- (oneway void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bab1a
- (oneway void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002baaae
- (oneway void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002baa42
- (oneway void)postTestResultSelectedWithRcId:(id)arg1;	// IMP=0x00100000002ba9cc
- (oneway void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00100000002ba942
- (oneway void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ba83f
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x00100000002ba7c7
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00100000002ba72d
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ba67b
- (oneway void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ba47a
- (oneway void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ba264
- (void)_createMockServerIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ba010
- (oneway void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b9c70
- (oneway void)dismissUI;	// IMP=0x00100000002b9c2c
- (oneway void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x00100000002b9aca
- (oneway void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002b9807
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b9673
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b9515
- (oneway void)setSpeechProfileExternalOfflineModelRootPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b9485
- (oneway void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b93f5
- (oneway void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002b932e
- (oneway void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b929a
- (oneway void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b921e
- (id)_localSpeechRecognizer;	// IMP=0x00100000002b91ca
- (oneway void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002b906b
- (oneway void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b8f33
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b8e3c
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b84e5
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b81c8
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b812a
- (oneway void)getCurrentNWActivityIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b805b
- (oneway void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b7fd1
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b7f5b
- (oneway void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b7d98
- (oneway void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b7ba4
- (oneway void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b7835
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b77bb
- (oneway void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x00100000002b7789
- (oneway void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b744a
- (oneway void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b73c0
- (oneway void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b734a
- (oneway void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b72d4
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002b72be
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b72a6
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b7290
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b71e5
- (oneway void)_runServiceMaintenance;	// IMP=0x00100000002b719f
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002b6e6d
- (oneway void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b6df5
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002b6a27
- (oneway void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x00100000002b6989
- (oneway void)_setSyncNeededForReason:(id)arg1;	// IMP=0x00100000002b697c
- (oneway void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b68e4
- (oneway void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b6850
- (oneway void)barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b6845
- (oneway void)_shutdownSessionIfIdle;	// IMP=0x00100000002b6783
- (oneway void)_killDaemon;	// IMP=0x00100000002b66c1
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;	// IMP=0x00100000002b6565
- (oneway void)setDictationAutoPunctuationEnabled:(_Bool)arg1;	// IMP=0x00100000002b6512
- (oneway void)setDictationEnabled:(_Bool)arg1;	// IMP=0x00100000002b6098
- (MISSING_TYPE *)setAssistantEnabled: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002b5f79
- (oneway void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b5d94
- (oneway void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000002b5d1e
- (oneway void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x00100000002b5ca8
- (void)_saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000002b5c00
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000002b5955
- (oneway void)retrieveAccountMessageDictionariesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b5468
- (oneway void)fetchSupportedLanguagesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b5389
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b5373
- (id)_serviceDelegate;	// IMP=0x00100000002b535d
- (void)connectionDisconnected;	// IMP=0x00100000002b5313
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000002b52a8
- (id)_appIdentifierfromConnection:(id)arg1;	// IMP=0x00100000002b5192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
