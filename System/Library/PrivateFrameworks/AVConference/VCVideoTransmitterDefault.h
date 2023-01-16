//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterDefault
{
    struct tagHANDLE *_videoTransmitterHandle;	// 128 = 0x80
    unsigned int _audioTimestampRate;	// 136 = 0x88
    _Bool _transmitterMode;	// 140 = 0x8c
    _Bool _isRTTBasedFIRThrottlingEnabled;	// 141 = 0x8d
    _Bool _canLocalResizePIP;	// 142 = 0x8e
    _Bool _canRemoteResizePIP;	// 143 = 0x8f
    struct CGSize _remoteScreenPortraitAspectRatio;	// 144 = 0x90
    struct CGSize _remoteScreenLandscapeAspectRatio;	// 160 = 0xa0
    struct CGSize _remoteExpectedPortraitAspectRatio;	// 176 = 0xb0
    struct CGSize _remoteExpectedLandscapeAspectRatio;	// 192 = 0xc0
    double _lastSentVideoHostTime;	// 208 = 0xd0
}

+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg1 featureString:(id)arg2;	// IMP=0x00100000001fe305
@property(readonly) struct tagHANDLE *videoTransmitterHandle; // @synthesize videoTransmitterHandle=_videoTransmitterHandle;
- (double)minKeyFrameGenerationIntervalForMode:(int)arg1;	// IMP=0x00000000001fe62e
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000001fe628
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x00000000001fe622
- (void)handleThermalLevelChange:(int)arg1;	// IMP=0x00000000001fe61c
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x00000000001fe614
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x00000000001fe60e
- (void)collectChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x00000000001fe5c1
- (void)setIsServerBasedBandwidthProbingEnabled:(_Bool)arg1;	// IMP=0x00000000001fe5ae
- (void)computeTimestamp:(unsigned int *)arg1 hostTime:(double *)arg2 forFrame:(struct opaqueCMSampleBuffer *)arg3;	// IMP=0x00000000001fe428
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x00000000001fe422
- (void)setFECRatio:(double)arg1;	// IMP=0x00000000001fe41c
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;	// IMP=0x00000000001fe416
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;	// IMP=0x00000000001fe410
- (_Bool)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;	// IMP=0x00000000001fe3f7
- (void)setHighestActiveQualityIndex:(unsigned int)arg1;	// IMP=0x00000000001fe3f1
- (void)setTemporalBitrateArray:(id)arg1;	// IMP=0x00000000001fe3eb
- (void)setTargetBitrate:(unsigned int)arg1;	// IMP=0x00000000001fe3e5
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;	// IMP=0x00000000001fe3d2
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x00000000001fe3cc
- (void)stopVideo;	// IMP=0x00000000001fe2ff
- (void)startVideo;	// IMP=0x00000000001fe2f9
- (void)setUpAspectRatiosFromFeatureListString:(const char *)arg1;	// IMP=0x00000000001fde30
- (void)dealloc;	// IMP=0x00000000001fddde
- (void)setUpAspectRatios:(_Bool)arg1;	// IMP=0x00000000001fdc07
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000001fd4b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

