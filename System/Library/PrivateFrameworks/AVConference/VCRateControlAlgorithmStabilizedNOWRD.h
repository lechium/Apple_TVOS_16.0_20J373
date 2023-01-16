//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD
{
    unsigned short _echoedTimestamp;	// 4746 = 0x128a
    unsigned short _previousTimestamp;	// 4748 = 0x128c
    unsigned short _queuingDelayTimestamp;	// 4750 = 0x128e
    unsigned int _receiveTimestamp;	// 4752 = 0x1290
    unsigned int _timestampWrapAroundCounter;	// 4756 = 0x1294
    unsigned int _lastRateChangeCounter;	// 4760 = 0x1298
    unsigned int _newOWRDSampleCollected;	// 4764 = 0x129c
    _Bool _isRemoteBandwidthEstimationStable;	// 4768 = 0x12a0
    struct {
        double owrd;
        double roundTripTime;
        double roundTripTimeMinEnvelope;
        double packetLossRate;
        int tierIndex;
    } _history[500];	// 4776 = 0x12a8
    int _currentHistorySize;	// 24776 = 0x60c8
    int _currentHistoryIndex;	// 24780 = 0x60cc
    double _previousNOWRD;	// 24784 = 0x60d0
    double _firstOWRDFrozenTime;	// 24792 = 0x60d8
    double _sendBitrateLimitedStartTime;	// 24800 = 0x60e0
    double _rampUpFrozenDuration;	// 24808 = 0x60e8
    double _extendedRampUpFrozenExitTime;	// 24816 = 0x60f0
    double _stabilizationTime;	// 24824 = 0x60f8
    double _rateChangeSystemTime;	// 24832 = 0x6100
    double _lastPositiveOWRDTime;	// 24840 = 0x6108
    double _lastAllowRampUpTime;	// 24848 = 0x6110
    _Bool _isRampUpSettling;	// 24856 = 0x6118
    _Bool _isStable;	// 24857 = 0x6119
    double _inVideoBitrate;	// 24864 = 0x6120
    double _outVideoBitrate;	// 24872 = 0x6128
    double _inAudioBitrate;	// 24880 = 0x6130
    double _outAudioBitrate;	// 24888 = 0x6138
    unsigned int _fastRampDownBitrateRange;	// 24896 = 0x6140
    double _rampUpSettleDuration;	// 24904 = 0x6148
    _Bool _shouldSuppressRampDown;	// 24912 = 0x6150
    unsigned int _rampDownSuppressionBitrateThreshold;	// 24916 = 0x6154
    double _basebandNotificationArrivalTime;	// 24920 = 0x6158
    unsigned int _basebandAverageBitrate;	// 24928 = 0x6160
    unsigned int _basebandTotalQueueDepth;	// 24932 = 0x6164
    double _basebandExpectedQueuingDelay;	// 24936 = 0x6168
    double _basebandNormalizedBDCD;	// 24944 = 0x6170
    double _basebandNormalizedQueuingDelay;	// 24952 = 0x6178
    double _basebandLTEOrGreaterRATSwitchTime;	// 24960 = 0x6180
    int _basebandRadioTechnology;	// 24968 = 0x6188
    _Bool _isWaitingForBasebandRampDown;	// 24972 = 0x618c
    double _lastBasebandRampDownTime;	// 24976 = 0x6190
    double _lastHighNBDCDTime;	// 24984 = 0x6198
    int _basebandAdditionalTiersForRampUp;	// 24992 = 0x61a0
    _Bool _basebandAdaptationEnabled;	// 24996 = 0x61a4
    unsigned int _packetReceivedVideo;	// 25000 = 0x61a8
    unsigned int _packetBurstLoss;	// 25004 = 0x61ac
    unsigned int _roundTripTimeTick;	// 25008 = 0x61b0
    double _roundTripTimeMinEnvelope;	// 25016 = 0x61b8
    double _previousRoundTripTime;	// 25024 = 0x61c0
    double _lastNetworkUnstableTime;	// 25032 = 0x61c8
    _Bool _withBTCoex;	// 25040 = 0x61d0
    _Bool _abnormalNetworkDetected;	// 25041 = 0x61d1
}

- (void)printRateControlInfoToLogDump;	// IMP=0x00000000002259e5
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;	// IMP=0x000000000022563b
- (void)checkMediaQueueBitrates;	// IMP=0x000000000022547b
- (unsigned int)getRampDownSuppressionBitrateThresholdWithRTT;	// IMP=0x00000000002253ed
- (_Bool)updateParametersForRampDownSuppression;	// IMP=0x000000000022539e
- (void)checkAbnormalNetworkCondition;	// IMP=0x0000000000225261
- (void)checkCongestionStatus;	// IMP=0x000000000022520a
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4;	// IMP=0x0000000000225105
- (void)calculateRoundTripTimeWithSample:(double)arg1;	// IMP=0x0000000000224f73
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;	// IMP=0x0000000000224edd
- (int)basebandAdditionalTiersForRampUp;	// IMP=0x0000000000224dda
- (_Bool)isBasebandNotificationOutOfKeyFrameCoolDownTime;	// IMP=0x0000000000224d4c
- (_Bool)shouldRampUpDueToBaseband;	// IMP=0x0000000000224ce3
- (_Bool)shouldUnblockRampUpAfterTimeOut;	// IMP=0x0000000000224c62
- (_Bool)shouldRampDownDueToBaseband;	// IMP=0x00000000002247b1
- (_Bool)shouldRampDownDueToNOWRDAcc;	// IMP=0x0000000000224582
- (_Bool)shouldRampDownDueToNOWRD;	// IMP=0x00000000002244ca
- (_Bool)shouldRampDown;	// IMP=0x00000000002241dc
- (_Bool)shouldRampUp;	// IMP=0x0000000000223f33
- (_Bool)shouldBlockRampUpDueToNetworkUnstable;	// IMP=0x0000000000223eb5
- (_Bool)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4;	// IMP=0x0000000000223e33
- (_Bool)isRoundTripTimeDecreasingOrLessThanMinEnvelope;	// IMP=0x0000000000223dde
- (_Bool)isNetworkSaturated;	// IMP=0x0000000000223cc1
- (_Bool)isBitrateOscillatingWithCurrentTierIndex:(int)arg1;	// IMP=0x0000000000223b09
- (void)setBitrateUnstable;	// IMP=0x0000000000223a6c
- (int)rampDownTierDueToBaseband:(double)arg1;	// IMP=0x0000000000223767
- (int)rampDownTier;	// IMP=0x000000000022347d
- (int)rampUpTier;	// IMP=0x0000000000223141
- (void)stateEnter;	// IMP=0x0000000000223053
- (void)stateExit;	// IMP=0x0000000000222fe4
- (_Bool)shouldFastRampUp;	// IMP=0x0000000000222ea1
- (double)getRampUpFrozenDuration;	// IMP=0x0000000000222de1
- (double)getRampUpSettleDuration;	// IMP=0x0000000000222d7a
- (void)resetRampingStatus;	// IMP=0x0000000000222d58
- (void)updateVCRateControlHistory;	// IMP=0x0000000000222c81
- (void)updateInternalStatus;	// IMP=0x0000000000222b8a
- (_Bool)updateInternalStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000222874
- (void)runRateControlStateTransition;	// IMP=0x0000000000222396
- (unsigned int)worstRecentBurstLoss;	// IMP=0x000000000022237c
- (double)worstRecentRoundTripTime;	// IMP=0x000000000022235f
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;	// IMP=0x000000000022233f
- (_Bool)shouldEnableBasebandAdaptationWithBasebandStatistics:(CDStruct_f0a7dbac)arg1 previousBasebandRAT:(int)arg2;	// IMP=0x00000000002221b5
- (_Bool)isBasebandRATGreaterOrSameAsLTE:(int)arg1;	// IMP=0x0000000000222199
- (_Bool)doRateControlWithBasebandStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000221f0b
- (_Bool)doRateControlWithNWStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000221e82
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000221cdd
- (_Bool)doRateControlWithStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000221c43
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x0000000000221988
- (id)init;	// IMP=0x0000000000221908

@end

