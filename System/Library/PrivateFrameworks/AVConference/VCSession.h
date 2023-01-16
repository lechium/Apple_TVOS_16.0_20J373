//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCRateController, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, VCAudioCaptionsCoordinator, VCControlChannelMultiWay, VCNetworkFeedbackController, VCRateControlMediaController, VCSecurityKeyManager, VCSessionBitrateArbiter, VCSessionConfiguration, VCSessionDownlinkBandwidthAllocator, VCSessionMessaging, VCSessionParticipant, VCSessionParticipantLocal, VCSessionParticipantRemote, VCSessionPresentationInfo, VCSessionStatsController, VCSwitchManager, VCTransportSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_activity, VCConnectionProtocol, VCSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCSession
{
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    id <VCSessionDelegate> _delegate;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
    NSString *_idsDestination;	// 64 = 0x40
    VCControlChannelMultiWay *_controlChannel;	// 72 = 0x48
    VCSessionMessaging *_sessionMessaging;	// 80 = 0x50
    VCSessionConfiguration *_configuration;	// 88 = 0x58
    VCSessionParticipantLocal *_localParticipant;	// 96 = 0x60
    NSMutableDictionary *_remoteParticipantsMapByUUID;	// 104 = 0x68
    NSMutableDictionary *_remoteParticipantsMapByServerID;	// 112 = 0x70
    int _reportUpdateInterval;	// 120 = 0x78
    int _reportReportFrequency;	// 124 = 0x7c
    VCSessionStatsController *_sessionStatsController;	// 128 = 0x80
    VCNetworkFeedbackController *_feedbackController;	// 136 = 0x88
    NSMutableArray *_startingParticipants;	// 144 = 0x90
    NSMutableSet *_stoppingParticipants;	// 152 = 0x98
    NSMutableArray *_initializingParticipants;	// 160 = 0xa0
    VCSecurityKeyManager *_securityKeyManager;	// 168 = 0xa8
    VCTransportSession *_transportSession;	// 176 = 0xb0
    id <VCConnectionProtocol> _currentActiveConnection;	// 184 = 0xb8
    unsigned int _transportSessionID;	// 192 = 0xc0
    _Bool _localSourceNeedsReset;	// 196 = 0xc4
    struct _VCSessionOneToOneSettings _oneToOneSettings;	// 200 = 0xc8
    _Bool _switchFromGFTToOneToOneEnabled;	// 232 = 0xe8
    double _remoteMediaStallReconnectTimeout;	// 240 = 0xf0
    double _oneToOneSwitchStartTime;	// 248 = 0xf8
    _Bool _isOneToOneInitiator;	// 256 = 0x100
    _Bool _oneToOneModeEnabled;	// 257 = 0x101
    _Bool _isReconnectPending;	// 258 = 0x102
    _Bool _isOneToOneRemoteMediaStalling;	// 259 = 0x103
    unsigned short _maxConnectionMTU;	// 260 = 0x104
    _Bool _useReducedSizeRTCP;	// 262 = 0x106
    AVCRateController *_uplinkRateController;	// 264 = 0x108
    AVCRateController *_downlinkRateController;	// 272 = 0x110
    unsigned int _uplinkTargetBitrate;	// 280 = 0x118
    unsigned int _downlinkTargetBitrate;	// 284 = 0x11c
    VCRateControlMediaController *_uplinkMediaController;	// 288 = 0x120
    unsigned int _basebandFlushTransactionID;	// 296 = 0x128
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;	// 304 = 0x130
    NSMutableDictionary *_optInDictionary;	// 312 = 0x138
    double _sessionStartTime;	// 320 = 0x140
    struct tagVCMediaQueue *_mediaQueue;	// 328 = 0x148
    _Bool _forceDisableMediaPriority;	// 336 = 0x150
    NSError *_stopError;	// 344 = 0x158
    void *_spatialMetadata;	// 352 = 0x160
    _Bool _isGKVoiceChat;	// 360 = 0x168
    double _remoteMediaStallDisconnectTimeout;	// 368 = 0x170
    int _reportingModuleID;	// 376 = 0x178
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 384 = 0x180
    NSObject<OS_nw_activity> *_parentNWActivity;	// 392 = 0x188
    NSObject<OS_nw_activity> *_nwActivity;	// 400 = 0x190
    NSObject<OS_nw_activity> *_nwActivityActiveSession;	// 408 = 0x198
    VCSessionPresentationInfo *_presentationInfo;	// 416 = 0x1a0
    VCSessionBitrateArbiter *_bitrateArbiter;	// 424 = 0x1a8
    NSString *_conversationID;	// 432 = 0x1b0
    NSDate *_conversationTimeBase;	// 440 = 0x1b8
    NSDate *_conversationTimeBaseTruncated;	// 448 = 0x1c0
    _Bool _forceFixedEncryptionLabel;	// 456 = 0x1c8
    VCSwitchManager *_switchManager;	// 464 = 0x1d0
    int _currentConnectionType;	// 472 = 0x1d8
    _Bool _sharingEnabled;	// 476 = 0x1dc
    struct __CFDictionary *_mediaTypeToSpatialMetadataEntryMap;	// 480 = 0x1e0
    unsigned long long _siriSpatialAudioSourceID;	// 488 = 0x1e8
    NSObject<OS_dispatch_semaphore> *_stopCompletedSemaphore;	// 496 = 0x1f0
    _Bool _didServerDie;	// 504 = 0x1f8
    _Bool _isServerPacketRetransmissionForVideoEnabled;	// 505 = 0x1f9
}

+ (_Bool)isServerPacketRetransmissionEnabledForVideo;	// IMP=0x0010000000218c92
+ (void)cleanupControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1;	// IMP=0x001000000020fde8
+ (void)addUUIDToMutableData:(id)arg1 fromUUIDString:(id)arg2;	// IMP=0x001000000020fbea
+ (int)deviceRoleForSessionMode:(long long)arg1;	// IMP=0x001000000020cc6c
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000205174
+ (unsigned int)mediaStateForMediaStateMessageValue:(id)arg1;	// IMP=0x0010000000388dbc
+ (id)mediaStateMessageValueForMediaState:(unsigned int)arg1;	// IMP=0x0010000000388da0
+ (unsigned int)mediaTypeForMediaStateMessageKey:(id)arg1;	// IMP=0x0010000000388ce1
+ (id)mediaStateMessageKeyForMediaType:(unsigned int)arg1;	// IMP=0x0010000000388cb8
+ (id)mediaStateMessageStreamGroupKeysForMediaType:(unsigned int)arg1;	// IMP=0x0010000000388b27
@property(nonatomic) _Bool isOneToOneRemoteMediaStalling; // @synthesize isOneToOneRemoteMediaStalling=_isOneToOneRemoteMediaStalling;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(readonly, nonatomic) VCSessionStatsController *sessionStatsController; // @synthesize sessionStatsController=_sessionStatsController;
@property(retain, nonatomic) VCSessionMessaging *sessionMessaging; // @synthesize sessionMessaging=_sessionMessaging;
@property(readonly, nonatomic) AVCRateController *downlinkRateController; // @synthesize downlinkRateController=_downlinkRateController;
@property(readonly, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // @synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID;
@property(retain) NSMutableDictionary *optInDictionary; // @synthesize optInDictionary=_optInDictionary;
@property(retain, nonatomic) id <VCConnectionProtocol> currentActiveConnection; // @synthesize currentActiveConnection=_currentActiveConnection;
@property(readonly, nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)additionalFlushCountToOneToOneRateController:(unsigned int)arg1;	// IMP=0x0000000000218fa6
- (void)didReceiveMomentsRequest:(id)arg1;	// IMP=0x0000000000218f65
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x0000000000218cca
- (void)mediaQualityDegraded:(_Bool)arg1;	// IMP=0x0000000000218be2
- (void)preWarmStateChanged:(_Bool)arg1;	// IMP=0x0000000000218ad3
- (void)reportingIntervalChanged:(double)arg1;	// IMP=0x0000000000218ab6
- (void)recommendedSettingsChanged:(id)arg1;	// IMP=0x0000000000218a7b
- (void)unregisterReportingTask;	// IMP=0x0000000000218a39
- (void)registerReportingTask;	// IMP=0x0000000000218871
- (void)generateReportDictionary:(struct __CFDictionary *)arg1;	// IMP=0x0000000000217a51
- (id)newNetworkBitrateString:(const CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000002179c0
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000217707
- (void)processDidStop;	// IMP=0x00000000002174f5
- (void)setupOneToOneVideoStreamDelegate;	// IMP=0x00000000002174aa
- (void)setupOneToOneVideoReceiverDelegate;	// IMP=0x00000000002173cd
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000216924
- (void)stopAllParticipants;	// IMP=0x00000000002167b5
- (void)dispatchedUpdateConfiguration:(id)arg1;	// IMP=0x0000000000216050
- (void)tearDown;	// IMP=0x0000000000215efb
- (void)dispatchedTransportStop;	// IMP=0x0000000000215ec5
- (void)dispatchedStopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x0000000000215427
- (void)dispatchedStopWithError:(id)arg1;	// IMP=0x0000000000215413
- (void)dispatchedStart;	// IMP=0x000000000021465b
- (void)dispatchedRemoveParticipant:(id)arg1;	// IMP=0x000000000021419b
- (void)dispatchedAddParticipantConfigurations:(id)arg1;	// IMP=0x0000000000214073
- (_Bool)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2;	// IMP=0x0000000000213d4c
- (void)dispatchedAddParticipantWithConfig:(id)arg1;	// IMP=0x0000000000212b70
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;	// IMP=0x00000000002128c8
- (void)collectSessionEventKeyFields:(struct __CFDictionary *)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;	// IMP=0x000000000021226a
- (void)reportingMomentsToGreenTeaWithRequest:(id)arg1;	// IMP=0x0000000000212264
- (void)reportingMomentsWithRequest:(id)arg1 recipientID:(id)arg2;	// IMP=0x000000000021210f
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;	// IMP=0x0000000000211d42
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;	// IMP=0x0000000000211d20
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;	// IMP=0x0000000000211cf6
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;	// IMP=0x0000000000211cce
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;	// IMP=0x0000000000211ca8
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x0000000000211be7
- (id)computeConversationTimeBaseTruncated;	// IMP=0x0000000000211b83
- (void)didEncryptionKeyRollTimeout;	// IMP=0x0000000000211b0d
- (void)resetDecryptionTimeout;	// IMP=0x0000000000211989
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x0000000000211675
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000002113ee
- (void)mediaStream:(id)arg1 didReceiveFlushRequestWithPayloads:(id)arg2;	// IMP=0x00000000002113e8
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x000000000021121f
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x0000000000211037
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x000000000021101a
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x0000000000210ffd
- (void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg1;	// IMP=0x0000000000210ec2
- (void)registerMediaStreamNotificationDelegateForParticipant:(id)arg1;	// IMP=0x0000000000210d7b
- (void)setupMultiwayABTesting;	// IMP=0x0000000000210c2b
- (void)cleanupNwActivity;	// IMP=0x0000000000210be0
- (void)cleanupVCRC;	// IMP=0x0000000000210b9f
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;	// IMP=0x00000000002107c9
- (void)unregisterRemoteParticipantFromSession:(id)arg1;	// IMP=0x00000000002105da
- (void)removeDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x00000000002105aa
- (_Bool)registerRemoteParticipantToSession:(id)arg1;	// IMP=0x00000000002101af
- (_Bool)composeControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1 withRemoteParticipant:(id)arg2;	// IMP=0x000000000020fe35
- (id)newEncryptionLabelWithLocalUUID:(id)arg1 remoteUUID:(id)arg2;	// IMP=0x000000000020fc92
- (void)broadcastInitialMediaState;	// IMP=0x000000000020fa16
- (void)messageMediaInitialStateToParticipant:(id)arg1;	// IMP=0x000000000020f79b
- (void)setDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x000000000020f758
- (void)handleMembershipChangeInfoEvent:(id)arg1;	// IMP=0x000000000020f645
- (void)handleEncryptionInfoEvent:(id)arg1;	// IMP=0x000000000020f374
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;	// IMP=0x000000000020f05e
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x000000000020efa0
- (void)optInStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x000000000020eee2
- (void)updateLocalStreamConfiguration;	// IMP=0x000000000020ebc0
- (void)updateLocalVideoCaptureFrameRate;	// IMP=0x000000000020e872
- (int)maxRemoteParticipants30fps;	// IMP=0x000000000020e7f4
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;	// IMP=0x000000000020e733
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 streamID:(unsigned int)arg2 type:(int)arg3;	// IMP=0x000000000020e32d
- (void)createMediaQueue;	// IMP=0x000000000020e13f
- (void)setupUplinkBitrateCaps;	// IMP=0x000000000020e0d6
- (void)startRateControllersMultiwayFromOneToOne:(_Bool)arg1;	// IMP=0x000000000020df3a
- (void)updateMultiwayRateControllerWithActiveConnection:(id)arg1 isScreenEnabled:(_Bool)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000020ddec
- (void)cleanupSpatialAudio;	// IMP=0x000000000020dc51
- (int)reserveAudioChannelForMediaType:(unsigned int)arg1 spatialAudioSourceID:(unsigned long long)arg2;	// IMP=0x000000000020da73
- (int)setupSpatialAudio;	// IMP=0x000000000020d5dd
- (void)didRemoveSpatialMetadataEntry;	// IMP=0x000000000020d552
- (void)setupRateControllersMultiway;	// IMP=0x000000000020d346
- (id)vcrcServerBagWithOperatingMode:(int)arg1;	// IMP=0x000000000020d190
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;	// IMP=0x000000000020cfc9
- (void)setSessionInfoSynchronizerErrorResponseCallback;	// IMP=0x000000000020ccb8
- (void)setSessionInfoSynchronizerCallbacks;	// IMP=0x000000000020cc8a
- (void)reportingSessionStopEventWithError:(id)arg1;	// IMP=0x000000000020c9c9
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;	// IMP=0x000000000020c493
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(_Bool)arg1;	// IMP=0x000000000020bc03
- (void)updateParticipantConfigurations:(id)arg1;	// IMP=0x000000000020b6f5
- (void)updateParticipantWindowState;	// IMP=0x000000000020b497
- (void)sendRateControlConfigToRemoteParticipant:(id)arg1;	// IMP=0x000000000020b352
- (void)applySpatialMetadata;	// IMP=0x000000000020ad6c
- (void)updatePresentationInfo:(id)arg1;	// IMP=0x000000000020aa29
- (int)flushBasebandWithPayloads:(id)arg1;	// IMP=0x000000000020aa21
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;	// IMP=0x000000000020a9b1
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;	// IMP=0x000000000020a985
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000020a407
- (void)updateNetworkFeedbackControllerReport:(CDStruct_4b4d87a1 *)arg1;	// IMP=0x000000000020a26a
- (void)didReceivedSessionStatsAtTime:(double)arg1;	// IMP=0x000000000020a1d7
- (void)didServerDie;	// IMP=0x000000000020a0ac
- (void)vcSessionParticipant:(id)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;	// IMP=0x0000000000209f2b
- (void)vcSessionParticipant:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000209bee
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;	// IMP=0x0000000000209b18
- (void)vcSessionParticipant:(id)arg1 oneToOneModeDidChange:(_Bool)arg2;	// IMP=0x0000000000209a2d
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg1 duration:(double)arg2;	// IMP=0x000000000020964e
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x0000000000209266
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;	// IMP=0x0000000000208eba
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;	// IMP=0x0000000000208e05
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;	// IMP=0x0000000000208d50
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(_Bool)arg2;	// IMP=0x0000000000208c46
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x0000000000208ba7
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x00000000002089ca
- (void)vcSessionParticipant:(id)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;	// IMP=0x00000000002089ad
- (void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;	// IMP=0x00000000002087ca
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(_Bool)arg2;	// IMP=0x000000000020861a
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;	// IMP=0x00000000002084cb
- (void)vcSessionParticipant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000208129
- (void)vcSessionParticipant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000207d45
- (void)vcSessionParticipant:(id)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;	// IMP=0x0000000000207baf
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x0000000000207a39
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x000000000020791c
- (void)vcSessionParticipantFetchStreamGroupState:(id)arg1;	// IMP=0x0000000000207836
- (void)vcSessionParticipant:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000020747b
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000207053
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000206cb1
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000206be7
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000206abe
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;	// IMP=0x00000000002069d8
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;	// IMP=0x000000000020670c
- (void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x00000000002065ad
- (void)handleActiveConnectionChangeForMultiway:(id)arg1;	// IMP=0x0000000000206327
- (void)dispatchedHandleActiveConnectionChange:(id)arg1;	// IMP=0x00000000002060b6
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x0000000000206020
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;	// IMP=0x0000000000205fc6
- (void)handlePrimaryConnectionChanged:(id)arg1;	// IMP=0x0000000000205ead
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;	// IMP=0x0000000000205daa
- (void)notifyRemoteOfCellTechChange:(id)arg1 remoteParticipant:(id)arg2;	// IMP=0x0000000000205c4e
- (void)applyRemoteLinkConstrains:(id)arg1;	// IMP=0x0000000000205ba5
- (void)applyLinkConstrains:(id)arg1;	// IMP=0x0000000000205a98
- (void)setTransportSessionEventHandler;	// IMP=0x0000000000205188
- (void)sendStreamGroupStateToParticipant:(id)arg1;	// IMP=0x00000000002050c5
- (void)dispatchedSetSharingEnabled:(_Bool)arg1;	// IMP=0x0000000000204a9d
- (void)setOneToOneModeEnabledFromRemoteSignal:(_Bool)arg1;	// IMP=0x0000000000204971
- (void)reportingSetUserInfo;	// IMP=0x00000000002046aa
@property(readonly, nonatomic) NSArray *remoteParticipants;
- (void)mediaStateChangedForParticipant:(id)arg1;	// IMP=0x0000000000204538
- (id)participantForID:(id)arg1;	// IMP=0x00000000002043ba
- (void)updateConfiguration:(id)arg1;	// IMP=0x000000000020430b
- (void)stopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x000000000020426e
- (void)stopWithError:(id)arg1;	// IMP=0x0000000000204235
- (void)start;	// IMP=0x0000000000204193
@property(readonly, nonatomic) VCSessionParticipantRemote *oneToOneRemoteParticipant;
- (void)removeParticipant:(id)arg1;	// IMP=0x00000000002040d2
- (void)addParticipantConfigurations:(id)arg1;	// IMP=0x0000000000204039
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;	// IMP=0x0000000000203fde
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;	// IMP=0x0000000000203f1b
- (void)setState:(unsigned int)arg1;	// IMP=0x0000000000203cac
- (void)setupTransportSessionWithDestination:(id)arg1;	// IMP=0x0000000000203ad3
- (int)selectDataPath;	// IMP=0x0000000000203998
- (void)setTransportConnectionSelectionVersionWithLocalFrameWorkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x000000000020392b
@property(readonly, nonatomic) NSDictionary *transportMetadata;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (void)startDeallocTimer;	// IMP=0x0000000000203562
- (void)stopTimeoutTimer;	// IMP=0x00000000002034fe
- (void)dealloc;	// IMP=0x0000000000202ef2
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(_Bool)arg6;	// IMP=0x0000000000201498
- (void)handleActiveConnectionChangeForOneToOne:(id)arg1;	// IMP=0x000000000037b806
- (void)notifyDelegateActiveConnectionDidChange;	// IMP=0x000000000037b603
- (void)reportActiveConnectionOneToOne;	// IMP=0x000000000037b4b5
- (void)startOneToOne;	// IMP=0x000000000037a982
- (void)setupOneToOneABTesting;	// IMP=0x0000000000379087
- (void)applyNegotiatedOneToOneFaceTimeSettings;	// IMP=0x0000000000378f47
- (void)dispatchedSetOneToOneModeEnabled:(_Bool)arg1 isLocal:(_Bool)arg2;	// IMP=0x00000000003784db
- (void)completionHandlerOneToOneEnabled:(_Bool)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000378027
- (_Bool)completeTransitionToOneToOneEnabled:(_Bool)arg1;	// IMP=0x0000000000377da9
- (_Bool)addOneToOneParticipant:(id)arg1;	// IMP=0x0000000000377540
- (unsigned int)vcrcServerBagProfileNumber;	// IMP=0x00000000003772d4
- (void)configureOneToOneRateController:(id)arg1 isUsingVideo:(_Bool)arg2;	// IMP=0x0000000000376efa
- (_Bool)negotiateOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x000000000037668f
- (void)setupOneToOneAdaptiveLearning;	// IMP=0x0000000000376311
- (void)renewOneToOneMediaQueue;	// IMP=0x00000000003762ca
- (void)startReportingForOneToOneEnabled:(_Bool)arg1;	// IMP=0x0000000000375aaa
- (void)cleanUpOneToOneVideoStreamDelegate;	// IMP=0x0000000000375a66
- (void)cleanupOneToOneVideoReceiverDelegate;	// IMP=0x0000000000375a22
- (void)cleanupOneToOneDelegates;	// IMP=0x00000000003759f4
- (void)cleanupOneToOne;	// IMP=0x0000000000375975
- (void)cleanupOneToOneMediaQueue;	// IMP=0x0000000000375939
- (_Bool)switchFromMultiwayToOneToOne;	// IMP=0x00000000003755cd
- (_Bool)multiwayToOneToOneSwitchConfigure;	// IMP=0x000000000037527a
- (void)multiwayToOneToOneSwitchResume;	// IMP=0x000000000037518d
- (void)multiwayToOneToOneSwitchSuspend;	// IMP=0x00000000003750b1
- (void)messageExistingParticipantsPostUpgrade;	// IMP=0x0000000000374f4c
- (_Bool)switchFromOneToOneToMultiway;	// IMP=0x0000000000374d3f
- (void)oneToOneToMultiwaySwitchConfigure;	// IMP=0x00000000003749af
- (void)oneToOneToMultiwaySwitchResume;	// IMP=0x0000000000374896
- (void)oneToOneToMultiwaySwitchSuspend;	// IMP=0x0000000000374840
- (void)reportSwitchingError:(_Bool)arg1 errorEvent:(unsigned int)arg2;	// IMP=0x0000000000374794
- (void)reportCompletedSwitchingToOneToOne:(_Bool)arg1;	// IMP=0x00000000003744d0
- (void)reportExistingParticipantsAnew;	// IMP=0x00000000003741ef
- (_Bool)configureRemoteParticipantForOneToOne:(id)arg1;	// IMP=0x0000000000373bdf
- (_Bool)isOneToOneUsingVideo;	// IMP=0x0000000000373b83
- (void)stopRateControllerOneToOne;	// IMP=0x0000000000373b63
- (void)startRateControllerOneToOne;	// IMP=0x0000000000373b00
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(_Bool)arg2 mediaControlInfoVersion:(unsigned char)arg3 videoEnabled:(_Bool)arg4 screenEnabled:(_Bool)arg5 remoteParticipant:(id)arg6;	// IMP=0x0000000000373624
- (int)setupOneToOneMediaControlInfoGeneratorsWithVersion:(unsigned char)arg1 oneToOneConfig:(id)arg2 videoEnabled:(_Bool)arg3;	// IMP=0x000000000037321a
- (_Bool)configureLocalParticipantWithOneToOneRemoteParticipant:(id)arg1 isInitialConfiguration:(_Bool)arg2;	// IMP=0x0000000000372bb5
- (void)cleanupRateControllerOneToOne;	// IMP=0x0000000000372b72
- (void)initWithRelevantStorebagEntries;	// IMP=0x0000000000372ac8
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1;	// IMP=0x00000000003729df
- (int)setupRateControllerOneToOne;	// IMP=0x000000000037212f
- (_Bool)setOneToOneConfigOnRemoteParticipant:(id)arg1;	// IMP=0x0000000000371ec0
- (id)newNegotiatorForOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x000000000037171d
- (int)setupOneToOneMediaQueue;	// IMP=0x000000000037154e
- (int)setupOneToOne;	// IMP=0x000000000037122b
- (void)processMediaStateMessage:(id)arg1 remoteParticipantID:(id)arg2;	// IMP=0x000000000038a325
- (void)processMediaTypeStatesWithMessage:(id)arg1 mediaTypeStates:(id)arg2;	// IMP=0x0000000000389e5b
- (void)processStreamGroupStateMessageKey:(id)arg1 value:(id)arg2 mediaTypeStates:(id)arg3;	// IMP=0x0000000000389947
- (void)setupMediaStateUpdateMessage;	// IMP=0x0000000000389852
- (_Bool)validateStreamGroup:(id)arg1 state:(id)arg2;	// IMP=0x00000000003897ea
- (void)sendMediaStateUpdateMessageToRemoteParticipant:(id)arg1;	// IMP=0x0000000000389786
- (void)broadcastMediaStateUpdateMessage;	// IMP=0x0000000000389595
- (id)stateMessageDictionary;	// IMP=0x0000000000388ddd
- (void)setupLinkConstrainsChangedMessages;	// IMP=0x00000000003889ef
- (void)setupCellTechChangeMessages;	// IMP=0x00000000003887a9
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;	// IMP=0x000000000038856c
- (void)setupRateControlConfigMessage;	// IMP=0x0000000000388122
- (void)setupMediaQualityDegradedMessage;	// IMP=0x0000000000387dac
- (void)setupDisconnectMessage;	// IMP=0x0000000000387b79
- (void)setupPiPStateChangeMessage;	// IMP=0x000000000038784a
- (void)setupPreferredInterfaceMessage;	// IMP=0x00000000003874af
- (void)setupVideoRedundancyMessages;	// IMP=0x000000000038725a
- (void)generateKeyFrameWithReceivedMessage:(id)arg1;	// IMP=0x0000000000387119
- (void)setupMomentsMessages;	// IMP=0x0000000000386ee4
- (void)setupWRMAlertUpdateMessage;	// IMP=0x0000000000386b6e
- (void)setupSymptomEnabledMessages;	// IMP=0x00000000003868ed
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(_Bool)arg3 isLocalSideOnly:(_Bool)arg4;	// IMP=0x00000000003865ca
- (void)setupKeyFrameGenerationMessages;	// IMP=0x000000000038636c
- (void)setupVideoPausedMessages;	// IMP=0x00000000003860ea
- (void)setupOneToOneEnabledMessages;	// IMP=0x0000000000385e54
- (void)setupAudioPausedMessages;	// IMP=0x0000000000385bd2
- (void)setupStreamGroupStateFetchMessage;	// IMP=0x000000000038588a
- (void)setupVideoEnabledMessages;	// IMP=0x0000000000385608
- (void)setupAudioEnabledMessages;	// IMP=0x0000000000385384
- (void)broadcastSingleStateMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x00000000003851c8
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2 toVersion:(int)arg3;	// IMP=0x0000000000384ff9
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000384e6e
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000384ce3
- (void)stopSessionMessaging;	// IMP=0x0000000000384c77
- (void)startSessionMessaging;	// IMP=0x0000000000384c30
- (void)destroySessionMessaging;	// IMP=0x0000000000384bd8
- (void)createSessionMessaging;	// IMP=0x0000000000384a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
