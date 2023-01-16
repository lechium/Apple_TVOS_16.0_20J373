//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;
@protocol VCMediaStreamSyncSource;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig
{
    long long _videoResolution;	// 264 = 0x108
    unsigned long long _framerate;	// 272 = 0x110
    unsigned long long _txMaxBitrate;	// 280 = 0x118
    unsigned long long _txMinBitrate;	// 288 = 0x120
    unsigned long long _txInitialBitrate;	// 296 = 0x128
    unsigned long long _rxMaxBitrate;	// 304 = 0x130
    unsigned long long _rxMinBitrate;	// 312 = 0x138
    unsigned long long _keyFrameInterval;	// 320 = 0x140
    int _remoteVideoInitialOrientation;	// 328 = 0x148
    _Bool _enableCVO;	// 332 = 0x14c
    unsigned long long _cvoExtensionID;	// 336 = 0x150
    _Bool _isVideoProtected;	// 344 = 0x158
    long long _type;	// 352 = 0x160
    unsigned long long _sourceFramerate;	// 360 = 0x168
    int _encodingMode;	// 368 = 0x170
    int _encoderUsage;	// 372 = 0x174
    _Atomic unsigned char *_videoPriorityPointer;	// 376 = 0x178
    unsigned int _screenDisplayID;	// 384 = 0x180
    unsigned long long _customWidth;	// 392 = 0x188
    unsigned long long _customHeight;	// 400 = 0x190
    NSMutableDictionary *_rxCodecFeatureListStrings;	// 408 = 0x198
    NSMutableDictionary *_txCodecFeatureListStrings;	// 416 = 0x1a0
    unsigned long long _tilesPerFrame;	// 424 = 0x1a8
    unsigned int _pixelFormat;	// 432 = 0x1b0
    _Bool _ltrpEnabled;	// 436 = 0x1b4
    int _hdrMode;	// 440 = 0x1b8
    NSString *_remoteDeviceName;	// 448 = 0x1c0
    NSString *_profileLevel;	// 456 = 0x1c8
    unsigned int _parameterSets;	// 464 = 0x1d0
    _Bool _temporalScalingEnabled;	// 468 = 0x1d4
    _Bool _isVariableSliceModeEnabled;	// 469 = 0x1d5
    _Bool _rtcpPSFB_FIREnabled;	// 470 = 0x1d6
    _Bool _resetSendRTPTimestampOnStop;	// 471 = 0x1d7
    id <VCMediaStreamSyncSource> _syncSource;	// 472 = 0x1d8
    _Bool _useInBandFEC;	// 480 = 0x1e0
    unsigned int _audioIOSampleRate;	// 484 = 0x1e4
    _Bool _useVideoJitterForVideoPlayout;	// 488 = 0x1e8
    _Bool _forceZeroRegionOfInterestOrigin;	// 489 = 0x1e9
    unsigned long long _maxEncoderPixels;	// 496 = 0x1f0
}

+ (id)profileLevelStringForId:(unsigned int)arg1;	// IMP=0x00600000002c9318
+ (unsigned int)profileLevelIdForString:(id)arg1;	// IMP=0x00600000002c9296
+ (_Bool)validateClientDictionary:(id)arg1;	// IMP=0x00600000002c8f71
@property(nonatomic) _Bool forceZeroRegionOfInterestOrigin; // @synthesize forceZeroRegionOfInterestOrigin=_forceZeroRegionOfInterestOrigin;
@property(nonatomic) unsigned long long maxEncoderPixels; // @synthesize maxEncoderPixels=_maxEncoderPixels;
@property(nonatomic) _Bool useVideoJitterForVideoPlayout; // @synthesize useVideoJitterForVideoPlayout=_useVideoJitterForVideoPlayout;
@property(nonatomic) unsigned int audioIOSampleRate; // @synthesize audioIOSampleRate=_audioIOSampleRate;
@property(nonatomic) _Bool useInBandFEC; // @synthesize useInBandFEC=_useInBandFEC;
@property(nonatomic) int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(nonatomic) _Bool resetSendRTPTimestampOnStop; // @synthesize resetSendRTPTimestampOnStop=_resetSendRTPTimestampOnStop;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
@property(nonatomic) _Bool rtcpPSFB_FIREnabled; // @synthesize rtcpPSFB_FIREnabled=_rtcpPSFB_FIREnabled;
@property(nonatomic) _Bool isVariableSliceModeEnabled; // @synthesize isVariableSliceModeEnabled=_isVariableSliceModeEnabled;
@property(nonatomic) _Bool temporalScalingEnabled; // @synthesize temporalScalingEnabled=_temporalScalingEnabled;
@property(nonatomic) unsigned int parameterSets; // @synthesize parameterSets=_parameterSets;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(retain, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) _Bool ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property(nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property(readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)initializeParameterSets;	// IMP=0x00000000002c9aaa
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000002c9a58
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000002c9a06
- (_Bool)updateWithClientDictionary:(id)arg1;	// IMP=0x00000000002c99f4
- (_Bool)applyVideoStreamClientDictionary:(id)arg1;	// IMP=0x00000000002c939e
- (void)dealloc;	// IMP=0x00000000002c8eda
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x00000000002c8c09
- (id)init;	// IMP=0x00000000002c8bf5

@end

