//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCRateControlServerBag, VCStatisticsCollectorQueue, VCStatisticsHistory;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject
{
    NSMutableDictionary *_statistics;	// 8 = 0x8
    struct tagVCStatisticsCollection *_statisticsCollection;	// 16 = 0x10
    NSMutableDictionary *_statisticChangeHandlerDictionary;	// 24 = 0x18
    NSDictionary *_statisticChangeHandlerDictionaryCache;	// 32 = 0x20
    _Bool _isStatisticChangeHandlerDictionaryModified;	// 40 = 0x28
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;	// 48 = 0x30
    VCRateControlOWRDEstimator *_owrdEstimator;	// 56 = 0x38
    VCStatisticsHistory *_history;	// 64 = 0x40
    VCStatisticsCollectorQueue *_queue;	// 72 = 0x48
    int _forceQueueWaitTimeMs;	// 80 = 0x50
    double _previousProcessTime;	// 88 = 0x58
    unsigned int _radioAccessTechnology;	// 96 = 0x60
    unsigned int _mode;	// 100 = 0x64
    _Bool _useExternalThread;	// 104 = 0x68
    _Atomic _Bool _isStarted;	// 105 = 0x69
    unsigned int _sharedEstimatedBandwidth;	// 108 = 0x6c
    unsigned int _sharedEstimatedBandwidthUncapped;	// 112 = 0x70
    unsigned int _sharedRemoteEstimatedBandwidth;	// 116 = 0x74
    unsigned int _maxVideoLocalBurstyLoss;	// 120 = 0x78
    unsigned int _maxAudioLocalBurstyLoss;	// 124 = 0x7c
    unsigned int _remotePacketReceivedAudio;	// 128 = 0x80
    unsigned int _remotePacketReceivedVideo;	// 132 = 0x84
    unsigned int _estimatedBandwidthCap;	// 136 = 0x88
    unsigned int _expectedBitrate;	// 140 = 0x8c
    unsigned char _mediaControlInfoFECFeedbackVersion;	// 144 = 0x90
    _Bool _fastSuddenBandwidthDetectionEnabled;	// 145 = 0x91
    VCRateControlServerBag *_serverBag;	// 152 = 0x98
    double _packetReceivedOWRD;	// 160 = 0xa0
    unsigned int _feedbackOutOfOrderTotalCount;	// 168 = 0xa8
    _Bool _resetRemoteAudioPacketReceived;	// 172 = 0xac
    struct _opaque_pthread_rwlock_t _statisticsCollectionLock;	// 176 = 0xb0
}

@property(retain, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool fastSuddenBandwidthDetectionEnabled; // @synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled;
@property(nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // @synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion;
@property(nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property(nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property(readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // @synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped; // @synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // @synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)addMostBurstyLossInfo:(CDStruct_7df19fcb *)arg1;	// IMP=0x00000000000372d2
- (void)addRoundTripTimeInfo:(CDStruct_7df19fcb *)arg1;	// IMP=0x000000000003726e
- (void)addActualBitrateInfo:(CDStruct_7df19fcb *)arg1;	// IMP=0x0000000000037159
- (void)addPacketLossInfo:(CDStruct_7df19fcb *)arg1;	// IMP=0x00000000000370c8
- (void)computeOWRDEstimation:(CDStruct_7df19fcb *)arg1;	// IMP=0x0000000000036f92
- (void)computeBWEstimation:(CDStruct_7df19fcb *)arg1;	// IMP=0x0000000000036e6c
- (void)updateLocalEstimatedBandwidthWithArrivalTime:(double)arg1;	// IMP=0x0000000000036df6
- (void)updateLocalEstimatedBandwidth;	// IMP=0x0000000000036d51
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_7df19fcb *)arg1;	// IMP=0x0000000000036d3c
- (void)updateMaxLocalBurstyLoss:(unsigned int)arg1 isAudio:(_Bool)arg2;	// IMP=0x0000000000036c33
- (void)updatePacketReceivedCount:(CDStruct_7df19fcb *)arg1;	// IMP=0x0000000000036966
- (void)computeOtherStatistics:(CDStruct_7df19fcb *)arg1;	// IMP=0x00000000000367d4
- (void)addStatisticsHistory:(CDStruct_7df19fcb *)arg1;	// IMP=0x00000000000364fc
- (void)addEntriesFromStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x00000000000361e1
- (void)updateStatisticChangeHandlerDictionaryCache;	// IMP=0x0000000000036193
- (void)processVCStatisticsInternal:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000035fa8
- (CDStruct_7df19fcb)getVCStatisticsWithType:(int)arg1 time:(double)arg2;	// IMP=0x0000000000035c1a
- (_Bool)shouldProcessAtTime:(double)arg1;	// IMP=0x0000000000035bdb
- (void)drainAndProcessVCStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000035ba9
- (void)setVCStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000035b27
- (void)unregisterAllStatisticsChangeHandlers;	// IMP=0x00000000000358d1
- (_Bool)unregisterStatisticsChangeHandlerWithType:(int)arg1 handlerIndex:(int)arg2;	// IMP=0x000000000003569f
- (int)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000354cf
@property(readonly, nonatomic) _Bool isStarted;
- (void)enableBWELogDump:(void *)arg1;	// IMP=0x00000000000354ae
- (id)getStatistics:(id)arg1;	// IMP=0x00000000000351ed
- (void)setStatistics:(id)arg1;	// IMP=0x000000000003500d
- (void)stop;	// IMP=0x0000000000034e7d
- (void)start;	// IMP=0x0000000000034c84
- (void)dealloc;	// IMP=0x000000000003494a
- (id)initForSimulation:(_Bool)arg1 useExternalThread:(_Bool)arg2;	// IMP=0x0000000000034776
- (id)init;	// IMP=0x0000000000034760

@end

