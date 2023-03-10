//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSMutableArray, NSMutableDictionary, NSString, VCConnectionHealthMonitor, VCConnectionSelector, VCCoreMotionManager, VCDuplicationHandler, VCLinkProbingHandler, VCStatsRecorder, VCWRMHandler, VCWifiAssistManager;
@protocol OS_dispatch_queue, VCConnectionManagerDelegate, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject
{
    _Bool _isStarted;	// 8 = 0x8
    unsigned int _callID;	// 12 = 0xc
    int _connectionSelectionVersion;	// 16 = 0x10
    int _relayServerProvider;	// 20 = 0x14
    struct _opaque_pthread_rwlock_t _stateRWlock;	// 24 = 0x18
    id <VCConnectionProtocol> _primaryConnection;	// 224 = 0xe0
    id <VCConnectionProtocol> _secondaryConnection;	// 232 = 0xe8
    id <VCConnectionProtocol> _connectionForDuplication;	// 240 = 0xf0
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;	// 248 = 0xf8
    NSMutableArray *_connectionArray;	// 256 = 0x100
    struct opaqueRTCReporting *_reportingAgent;	// 264 = 0x108
    _Bool _isInitialConnectionEstablished;	// 272 = 0x110
    unsigned long long _mediaExcessiveCellularTxBytes;	// 280 = 0x118
    unsigned long long _mediaExcessiveCellularRxBytes;	// 288 = 0x120
    unsigned long long _signalingExcessiveCellularTxBytes;	// 296 = 0x128
    unsigned long long _signalingExcessiveCellularRxBytes;	// 304 = 0x130
    unsigned long long _budgetConsumingCellularTxBytes;	// 312 = 0x138
    unsigned long long _budgetConsumingCellularRxBytes;	// 320 = 0x140
    unsigned long long _mediaCellularTxBytes;	// 328 = 0x148
    unsigned long long _mediaCellularRxBytes;	// 336 = 0x150
    unsigned long long _mediaWifiTxBytes;	// 344 = 0x158
    unsigned long long _mediaWifiRxBytes;	// 352 = 0x160
    id _delegate;	// 360 = 0x168
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 368 = 0x170
    CDUnknownFunctionPointerType _duplicationCallback;	// 376 = 0x178
    _Bool _enableDuplication;	// 384 = 0x180
    double _lastConnectionUnstableTime;	// 392 = 0x188
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 400 = 0x190
    void *_duplicationContext;	// 408 = 0x198
    _Bool _duplicationPending;	// 416 = 0x1a0
    _Bool _supportDuplication;	// 417 = 0x1a1
    unsigned char _preferredLocalInterfaceForDuplication;	// 418 = 0x1a2
    unsigned char _preferredRemoteInterfaceForDuplication;	// 419 = 0x1a3
    _Bool _isPrimaryLocalUsingCell;	// 420 = 0x1a4
    _Bool _isPreWarmStateEnabled;	// 421 = 0x1a5
    _Bool _remotePreWarmStateEnabled;	// 422 = 0x1a6
    VCWifiAssistManager *_vcWifiAssist;	// 424 = 0x1a8
    _Bool _hasAssertedCell;	// 432 = 0x1b0
    VCConnectionHealthMonitor *_connectionHealthMonitor;	// 440 = 0x1b8
    CDStruct_50492349 _localConnectionStats;	// 448 = 0x1c0
    CDStruct_50492349 _remoteConnectionStats;	// 496 = 0x1f0
    VCWRMHandler *_wrmHandler;	// 544 = 0x220
    VCDuplicationHandler *_duplicationHandler;	// 552 = 0x228
    VCConnectionSelector *_connectionSelector;	// 560 = 0x230
    double _noRemotePacketInterval;	// 568 = 0x238
    double _remoteNoRemotePacketInterval;	// 576 = 0x240
    double _lastDefaultCheckTime;	// 584 = 0x248
    double _lastTransitionToFECTime;	// 592 = 0x250
    _Bool _isAudioOnly;	// 600 = 0x258
    double _lastiRATCheckTime;	// 608 = 0x260
    double _iRATNotificationRequestTime;	// 616 = 0x268
    int _localWRMLinkTypeFromDefaults;	// 624 = 0x270
    _Bool _allowRequestForWRMNotification;	// 628 = 0x274
    _Bool _forceHandoverToCell;	// 629 = 0x275
    _Bool _disableRemoteInterfaceInference;	// 630 = 0x276
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;	// 632 = 0x278
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;	// 640 = 0x280
    void *_wrmCallbacksContext;	// 648 = 0x288
    VCStatsRecorder *_statsRecorder;	// 656 = 0x290
    _Bool _preferRelayOverP2PEnabled;	// 664 = 0x298
    _Bool _fastMediaDuplicationEnabled;	// 665 = 0x299
    _Bool _cellPrimaryInterfaceChangeEnabled;	// 666 = 0x29a
    _Bool _duplicateImportantPktsEnabled;	// 667 = 0x29b
    _Bool _lowNetworkModeEnabled;	// 668 = 0x29c
    _Bool _duplicationEnhancementEnabled;	// 669 = 0x29d
    CDStruct_155bd25f _connectionSelectionPolicy;	// 670 = 0x29e
    int _localRATTypeOverride;	// 676 = 0x2a4
    int _localWRMAlertFromDefaults;	// 680 = 0x2a8
    unsigned int _realRATType;	// 684 = 0x2ac
    unsigned char _linkProbingCapabilityVersion;	// 688 = 0x2b0
    unsigned char _remoteLinkProbingCapabilityVersion;	// 689 = 0x2b1
    VCLinkProbingHandler *_linkProbingHandler;	// 696 = 0x2b8
    struct tagVCNWConnectionMonitor *_nwMonitor;	// 704 = 0x2c0
    int _mediaHealthStatisticsHandlerIndex;	// 712 = 0x2c8
    AVCStatisticsCollector *_statisticsCollector;	// 720 = 0x2d0
    VCCoreMotionManager *_coreMotionManager;	// 728 = 0x2d8
    _Bool _isNWConnectionMonitorEnabled;	// 736 = 0x2e0
    _Bool _ignoreNWConnectionMonitorNotification;	// 737 = 0x2e1
    NSString *_nwMonitorInterfaceName;	// 744 = 0x2e8
    CDStruct_10897a60 _lastNWStatistics;	// 752 = 0x2f0
    id <VCConnectionProtocol> _lastActivePrimaryConnection;	// 864 = 0x360
    NSMutableDictionary *_mediaDegradedHistories;	// 872 = 0x368
    NSMutableDictionary *_mediaDegradedHistoryIndices;	// 880 = 0x370
    NSMutableDictionary *_aggregateStallTimeDuration;	// 888 = 0x378
    _Bool _isDuplicationAllowed;	// 896 = 0x380
    _Bool _isDuplicationAllowedForMediaDegraded;	// 897 = 0x381
    int _endToEndConnectionStatisticsHandlerIndex;	// 900 = 0x384
    int _serverBasedConnectionStatisticsHandlerIndex;	// 904 = 0x388
    _Bool _isVideoExpected;	// 908 = 0x38c
    _Bool _isOneToOneModeEnabled;	// 909 = 0x38d
    _Bool _isPrimaryLinkUsable;	// 910 = 0x38e
    _Bool _useMediaDrivenDuplication;	// 911 = 0x38f
    _Bool _resetMediaHealthStats;	// 912 = 0x390
    int _wrmPendingBitrateCapDelta;	// 916 = 0x394
    _Bool _isWRMNotificationPending;	// 920 = 0x398
    CDStruct_cd8cfafa _savedWRMNotification;	// 928 = 0x3a0
    unsigned int _downlinkTargetBitrate;	// 1088 = 0x440
    unsigned int _downlinkTargetCellBitrateCap;	// 1092 = 0x444
    _Bool _useMediaDrivenDuplicationFeatureFlag;	// 1096 = 0x448
    double _mediaDegradedThreshold;	// 1104 = 0x450
    _Bool _enableCoreMotionDetection;	// 1112 = 0x458
    _Bool _previousNoRemoteInProgress;	// 1113 = 0x459
    long long _initialSentBytes;	// 1120 = 0x460
    long long _initialReceivedBytes;	// 1128 = 0x468
    _Bool _startConnectionHealthMonitoring;	// 1136 = 0x470
    _Bool _isRemoteMediaQualityDegraded;	// 1137 = 0x471
    _Bool _dropLinkRecommendation;	// 1138 = 0x472
    unsigned char _linkPreferSuggestion;	// 1139 = 0x473
    unsigned char _linkConfidenceScore;	// 1140 = 0x474
    unsigned char _linkPreferDecision;	// 1141 = 0x475
    _Bool _reportLinkPreferSuggestion;	// 1142 = 0x476
    unsigned char _linkIPPreference;	// 1143 = 0x477
    _Bool _useIDSLinkSuggestionFeatureFlag;	// 1144 = 0x478
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 1152 = 0x480
    _Bool _isOneToOneRemoteParticipantAdded;	// 1160 = 0x488
    _Atomic unsigned int _sendSuccessCountSinceLastCheck;	// 1164 = 0x48c
    _Atomic unsigned int _sendFailureCountSinceLastCheck;	// 1168 = 0x490
    _Bool _iRATDuplicationEnabled;	// 1172 = 0x494
    _Bool _optIntoExistingSubscribedStreams;	// 1173 = 0x495
    double _noRemoteDuplicationThresholdFast;	// 1176 = 0x498
}

@property _Bool optIntoExistingSubscribedStreams; // @synthesize optIntoExistingSubscribedStreams=_optIntoExistingSubscribedStreams;
@property(readonly) unsigned long long budgetConsumingCellularRxBytes; // @synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes;
@property(readonly) unsigned long long budgetConsumingCellularTxBytes; // @synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes;
@property _Bool isOneToOneRemoteParticipantAdded; // @synthesize isOneToOneRemoteParticipantAdded=_isOneToOneRemoteParticipantAdded;
@property(nonatomic) _Bool isRemoteMediaQualityDegraded; // @synthesize isRemoteMediaQualityDegraded=_isRemoteMediaQualityDegraded;
@property(nonatomic) _Bool startConnectionHealthMonitoring; // @synthesize startConnectionHealthMonitoring=_startConnectionHealthMonitoring;
@property(nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(readonly, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // @synthesize connectionHealthMonitor=_connectionHealthMonitor;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned char remoteLinkProbingCapabilityVersion; // @synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion;
@property(readonly) unsigned char linkProbingCapabilityVersion; // @synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion;
@property unsigned int realRATType; // @synthesize realRATType=_realRATType;
@property(nonatomic, setter=setiRATDuplicationEnabled:) _Bool iRATDuplicationEnabled; // @synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled;
@property _Bool duplicationEnhancementEnabled; // @synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled;
@property _Bool lowNetworkModeEnabled; // @synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled;
@property double noRemoteDuplicationThresholdFast; // @synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast;
@property _Bool duplicateImportantPktsEnabled; // @synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled;
@property _Bool cellPrimaryInterfaceChangeEnabled; // @synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled;
@property _Bool fastMediaDuplicationEnabled; // @synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled;
@property(nonatomic, setter=setPreferRelayOverP2PEnabled:) _Bool preferRelayOverP2PEnabled; // @synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled;
@property(nonatomic) _Bool remotePreWarmStateEnabled; // @synthesize remotePreWarmStateEnabled=_remotePreWarmStateEnabled;
@property(readonly) _Bool isPreWarmStateEnabled; // @synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled;
@property(readonly, nonatomic) VCStatsRecorder *statsRecorder; // @synthesize statsRecorder=_statsRecorder;
@property(readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property(readonly) double noRemotePacketInterval; // @synthesize noRemotePacketInterval=_noRemotePacketInterval;
@property _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly) unsigned long long mediaWifiRxBytes; // @synthesize mediaWifiRxBytes=_mediaWifiRxBytes;
@property(readonly) unsigned long long mediaWifiTxBytes; // @synthesize mediaWifiTxBytes=_mediaWifiTxBytes;
@property(readonly) unsigned long long mediaCellularRxBytes; // @synthesize mediaCellularRxBytes=_mediaCellularRxBytes;
@property(readonly) unsigned long long mediaCellularTxBytes; // @synthesize mediaCellularTxBytes=_mediaCellularTxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property(nonatomic) _Bool isDuplicationAllowed; // @synthesize isDuplicationAllowed=_isDuplicationAllowed;
@property _Bool supportDuplication; // @synthesize supportDuplication=_supportDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> primaryConnection; // @synthesize primaryConnection=_primaryConnection;
@property unsigned char preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property unsigned char preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property unsigned int callID; // @synthesize callID=_callID;
- (void)didChangeWifiAssistAvailable:(_Bool)arg1 reason:(unsigned char)arg2;	// IMP=0x0000000000174af2
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;	// IMP=0x0000000000174998
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;	// IMP=0x000000000017498b
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x000000000017492a
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000001748c9
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000174868
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000174807
- (void)reselectPrimaryConnection;	// IMP=0x0000000000174801
- (void)applyRemoteLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;	// IMP=0x000000000017456f
- (void)applyLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;	// IMP=0x0000000000174300
- (void)reportLinkSuggestion;	// IMP=0x0000000000174115
- (void)applyLinkRecommendation;	// IMP=0x0000000000173f58
- (void)updateLinkPreferSuggestion:(id)arg1;	// IMP=0x0000000000173ca8
- (_Bool)isDuplicationConnectionCandidate:(id)arg1;	// IMP=0x0000000000173b2a
- (_Bool)areAllLinkProbingTriggersInactive;	// IMP=0x0000000000173af8
- (void)updateProbingResults:(id)arg1;	// IMP=0x0000000000173adf
- (void)setActiveLinkProbingEnabled:(_Bool)arg1;	// IMP=0x00000000001738c8
- (_Bool)shouldDuplicatePacket:(_Bool)arg1;	// IMP=0x0000000000173864
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;	// IMP=0x000000000017385c
- (void)updateConnectionHealthWithVCStatisticsMessage:(CDStruct_7df19fcb)arg1;	// IMP=0x000000000017370b
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_50492349 *)arg1;	// IMP=0x0000000000173549
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_50492349 *)arg1;	// IMP=0x000000000017350a
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001731fc
- (void)updateConnectionStatsWithIndicatorNoPacket:(CDStruct_50492349 *)arg1;	// IMP=0x0000000000172c6b
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(_Bool)arg2;	// IMP=0x0000000000172c31
- (void)reportNoPacketUpdateUsingCurrentTime:(double)arg1 lastReceivedPacketTime:(double)arg2;	// IMP=0x0000000000172bc6
- (void)updateDuplicationStateWithEventType:(unsigned char)arg1;	// IMP=0x0000000000172b71
- (void)useCellPrimayInterface:(_Bool)arg1;	// IMP=0x00000000001728be
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x000000000017285d
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;	// IMP=0x00000000001727fc
- (void)updateConnectionForDuplication;	// IMP=0x000000000017279b
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x000000000017273a
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;	// IMP=0x00000000001726d9
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;	// IMP=0x0000000000172678
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x0000000000172617
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001725b6
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x0000000000172555
- (void)updateCellularMTU:(int)arg1;	// IMP=0x00000000001724f4
- (int)removeConnection:(id)arg1;	// IMP=0x0000000000172493
- (int)addConnection:(id)arg1;	// IMP=0x0000000000172432
- (void)useConnectionAsPrimary:(id)arg1;	// IMP=0x00000000001723f5
- (int)processConnectionHealthFromControlInfo:(void *)arg1;	// IMP=0x000000000017234e
- (int)setConnectionHealthOnControlInfo:(void *)arg1;	// IMP=0x00000000001722d3
- (void)updateCellularExcessiveBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytes:(int)arg2 isMediaData:(_Bool)arg3 isOutgoing:(_Bool)arg4;	// IMP=0x0000000000172199
- (void)updateReceivedBytes:(int)arg1 isOnCell:(_Bool)arg2 isIPv6:(_Bool)arg3;	// IMP=0x000000000017213b
- (void)updateTransmittedBytes:(int)arg1 isOnCell:(_Bool)arg2 isIPv6:(_Bool)arg3;	// IMP=0x00000000001720dd
- (void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(_Bool)arg2 isIPv6:(_Bool)arg3;	// IMP=0x000000000017204e
- (void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(_Bool)arg2 isIPv6:(_Bool)arg3;	// IMP=0x0000000000171fbf
@property(readonly) double primaryConnHealthAllowedDelay;
- (void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg1;	// IMP=0x0000000000171c92
- (void)reportConnectionUpdateWithResponseCode:(unsigned short)arg1 delay:(double)arg2;	// IMP=0x0000000000171bbe
- (void)reportConnectionUpdateWithRespCode:(unsigned short)arg1;	// IMP=0x0000000000171b22
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x0000000000171ad7
@property(readonly) _Bool isLocalCellularInterfaceUsed;
- (void)checkActivelyRequestWRMRecommendation:(double)arg1 isLocalUsingCellular:(_Bool)arg2;	// IMP=0x00000000001719ae
- (void)checklocalRATTypeOverrideDefaultValue:(_Bool)arg1;	// IMP=0x0000000000171747
- (void)checkWRMSuggestionDefaultValue;	// IMP=0x0000000000171633
- (_Bool)shouldUseServerBasedConnection:(id)arg1 isEndToEnd:(_Bool)arg2;	// IMP=0x000000000017160c
- (struct tagVCSourceDestinationInfo *)createSourceDestinationInfoListWithForceDuplication:(_Bool)arg1 isEndToEnd:(_Bool)arg2;	// IMP=0x0000000000171295
- (void)updateWRMDuplicationForHandover;	// IMP=0x0000000000170f98
- (id)copyConnectionForQuality:(int)arg1;	// IMP=0x0000000000170f47
- (id)connectionForQualityInternal:(int)arg1;	// IMP=0x0000000000170e75
- (_Bool)isOptimalConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3;	// IMP=0x0000000000170bf5
- (_Bool)isBetterConnection:(id)arg1 asPrimary:(_Bool)arg2;	// IMP=0x0000000000170b67
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;	// IMP=0x0000000000170b13
- (int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1;	// IMP=0x0000000000170a9a
- (void)disableRemotePreferredInterfaceInference:(_Bool)arg1;	// IMP=0x00000000001709b6
- (void)destroyNWMonitorInternal;	// IMP=0x000000000017098f
- (void)destroyNWMonitor;	// IMP=0x00000000001708fb
- (void)setVCNWConnectionMonitorStatisticsHandler;	// IMP=0x00000000001708cc
- (void)renewNWMonitor;	// IMP=0x000000000017073c
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;	// IMP=0x000000000017053e
- (void)checkpointPrimaryConnection:(id)arg1;	// IMP=0x00000000001702f5
- (void)configureNWConnectionMonitor:(id)arg1;	// IMP=0x0000000000170223
- (id)suggestedLinkTypeCombo;	// IMP=0x000000000016ff21
- (id)activeConnectionRegistry;	// IMP=0x000000000016fce7
- (void)resetMediaHealthStats;	// IMP=0x000000000016fad8
- (void)updateWithRemoteMediaHealthDuplication:(_Bool)arg1;	// IMP=0x000000000016fab2
- (void)updateMediaDegradedHistoryWithCurrentAudioErasure:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x000000000016f7f4
- (void)updateMediaDegradedHistoryWithCurrentVideoStallDuration:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x000000000016f560
- (_Bool)isDuplicationAllowedForParticipantID:(id)arg1 bucketsToSum:(int)arg2 threshold:(double)arg3;	// IMP=0x000000000016f360
- (void)updateMediaDegradedHistoryWithValue:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x000000000016f276
- (void)updateMediaHealthStats:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;	// IMP=0x000000000016ef60
- (void)checkMediaQualityDegradedForParticipantID:(id)arg1;	// IMP=0x000000000016ecf9
- (void)aggregateStallTimeDuration:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;	// IMP=0x000000000016ec77
- (void)duplicationStateUpdateWithEvent:(CDStruct_9629e118)arg1;	// IMP=0x000000000016eae3
- (void)removeMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;	// IMP=0x000000000016ea1f
- (void)addMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;	// IMP=0x000000000016e92f
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;	// IMP=0x000000000016e929
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;	// IMP=0x000000000016e923
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x000000000016e8c2
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x000000000016e861
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x000000000016e800
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x000000000016e79f
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;	// IMP=0x000000000016e73e
- (void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesReceived:(int)arg2 isMediaData:(_Bool)arg3 shouldCountPacket:(_Bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(_Bool)arg6;	// IMP=0x000000000016e539
- (void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesSent:(int)arg2 isMediaData:(_Bool)arg3 shouldCountPacket:(_Bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(_Bool)arg6;	// IMP=0x000000000016e4cb
- (_Bool)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;	// IMP=0x000000000016e48f
- (_Bool)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;	// IMP=0x000000000016e453
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;	// IMP=0x000000000016e417
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000016e3be
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000016e362
- (void)getSentBytes:(long long *)arg1 receivedBytes:(long long *)arg2;	// IMP=0x000000000016e2c5
- (_Bool)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000016e26c
- (int)getNumberOfConnectionsInternal;	// IMP=0x000000000016e223
- (void)requestWRMNotification;	// IMP=0x000000000016e192
@property(readonly) int connectionCount;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(_Bool)arg2;	// IMP=0x000000000016e084
- (void)processWRMCoexMetrics:(id)arg1;	// IMP=0x000000000016e069
- (int)processWRMNotification:(CDStruct_cd8cfafa *)arg1;	// IMP=0x000000000016de6f
- (int)setWRMNotification:(CDStruct_cd8cfafa *)arg1;	// IMP=0x000000000016db6d
- (void)checkForCachedWRMNotification;	// IMP=0x000000000016d945
- (void)setDuplicationDownlinkCellBitrateCap:(unsigned int)arg1 currentBitrate:(unsigned int)arg2;	// IMP=0x000000000016d927
- (CDStruct_7641bd18)processDuplicationStateUpdateEvent:(CDStruct_9629e118)arg1 didLocalHandover:(_Bool)arg2 timeDurationMs:(unsigned int)arg3 linkType:(int)arg4 wrmCallbackScenario:(unsigned char)arg5;	// IMP=0x000000000016d583
- (void)resetMediaByteCounters;	// IMP=0x000000000016d557
- (void)alertStateUpdated:(_Bool)arg1 isLocal:(_Bool)arg2;	// IMP=0x000000000016d4f5
- (void)setPreWarmState:(_Bool)arg1;	// IMP=0x000000000016d089
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000016cfc3
- (const char *)reasonStringWithDuplicationReason:(unsigned char)arg1;	// IMP=0x000000000016cfa1
- (void)setDuplicationEnabledInternal:(_Bool)arg1;	// IMP=0x000000000016ca55
- (void)addLinkProbingTelemetry:(id)arg1;	// IMP=0x000000000016ca4f
- (void)addDuplicationSelectionLogicTelemetryForConnection:(id)arg1 suggestedLinkTypeCombo:(id)arg2 payload:(id)arg3;	// IMP=0x000000000016c828
- (void)addTelemetryForConnection:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000000016c691
- (void)setDuplicationEnabled:(_Bool)arg1;	// IMP=0x000000000016c650
- (_Bool)isDuplicationEnabled;	// IMP=0x000000000016c637
- (void)setConnectionPause:(_Bool)arg1 isLocalConnection:(_Bool)arg2;	// IMP=0x000000000016c4a7
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x000000000016c40a
- (_Bool)isBetterPrimaryConnectionAvailable;	// IMP=0x000000000016c2f6
- (void)checkAndUpdatePrimaryConnection;	// IMP=0x000000000016c292
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x000000000016c13c
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x000000000016c0a1
- (void)periodicTask:(void *)arg1;	// IMP=0x000000000016bd4a
- (void)deregisterPeriodicTask;	// IMP=0x000000000016bd34
- (void)registerPeriodicTask;	// IMP=0x000000000016bcf7
@property id <VCConnectionManagerDelegate> delegate;
- (void)stop;	// IMP=0x000000000016bc5e
- (void)start;	// IMP=0x000000000016bbed
@property(nonatomic) _Bool useMediaDrivenDuplication; // @synthesize useMediaDrivenDuplication=_useMediaDrivenDuplication;
- (void)resetConnectionStatTimers;	// IMP=0x000000000016ba16
@property(readonly) unsigned int sendFailureCountSinceLastCheck;
@property(readonly) unsigned int sendSuccessCountSinceLastCheck;
- (void)setupConnectionHealthMonitor;	// IMP=0x000000000016b5da
- (void)setupConnectionHealthMonitorMultiway;	// IMP=0x000000000016b339
- (void)unregisterStatisticsHandlers;	// IMP=0x000000000016b2ca
- (void)registerStatisticsHandlers;	// IMP=0x000000000016ae50
- (void)dealloc;	// IMP=0x000000000016aa74
- (id)init;	// IMP=0x000000000016a50c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

