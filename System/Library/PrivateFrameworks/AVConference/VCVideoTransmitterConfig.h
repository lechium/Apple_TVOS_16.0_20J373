//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSDictionary, NSMutableDictionary, NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterConfig : NSObject
{
    long long _videoResolution;	// 8 = 0x8
    int _videoSource;	// 16 = 0x10
    long long _codecType;	// 24 = 0x18
    struct opaqueRTCReporting *_reportingAgent;	// 32 = 0x20
    int _reportingParentID;	// 40 = 0x28
    unsigned long long _framerate;	// 48 = 0x30
    unsigned long long _txMaxBitrate;	// 56 = 0x38
    unsigned long long _txMinBitrate;	// 64 = 0x40
    unsigned long long _keyFrameInterval;	// 72 = 0x48
    unsigned long long _recommendedMTU;	// 80 = 0x50
    unsigned long long _cvoExtensionID;	// 88 = 0x58
    _Bool _enableCVO;	// 96 = 0x60
    int _videoPayload;	// 100 = 0x64
    int _encodingMode;	// 104 = 0x68
    int _encoderUsage;	// 108 = 0x6c
    NSDictionary *_colorInfo;	// 112 = 0x70
    _Atomic unsigned char *_videoPriorityPointer;	// 120 = 0x78
    unsigned long long _customWidth;	// 128 = 0x80
    unsigned long long _customHeight;	// 136 = 0x88
    int _mode;	// 144 = 0x90
    int _captureSource;	// 148 = 0x94
    AVCStatisticsCollector *_statisticsCollector;	// 152 = 0x98
    struct tagVCVideoTransmitterStreamConfig *_streamConfigs;	// 160 = 0xa0
    int _streamCount;	// 168 = 0xa8
    int _tilesPerFrame;	// 172 = 0xac
    _Bool _useRateControl;	// 176 = 0xb0
    unsigned int _pixelFormat;	// 180 = 0xb4
    NSMutableDictionary *_customFeatureListStrings;	// 184 = 0xb8
    VCRateControlMediaController *_mediaController;	// 192 = 0xc0
    void *_mediaControlInfoGenerator;	// 200 = 0xc8
    unsigned int _rtpTimestampRate;	// 208 = 0xd0
    NSString *_profileLevel;	// 216 = 0xd8
    unsigned int _parameterSets;	// 224 = 0xe0
    _Bool _temporalScalingEnabled;	// 228 = 0xe4
    struct tagVCCryptor *_sframeCryptor;	// 232 = 0xe8
    unsigned int _encoderBitrateAveragingInterval;	// 240 = 0xf0
    _Bool _reinitEncoderOnFrameSizeChangeEnabled;	// 244 = 0xf4
    _Bool _isIPv6;	// 245 = 0xf5
    _Bool _isFecGeneratorEnabled;	// 246 = 0xf6
    _Bool _fecHeaderV1Enabled;	// 247 = 0xf7
    _Bool _useInBandFec;	// 248 = 0xf8
    unsigned int _qualityIndex;	// 252 = 0xfc
    unsigned int _maxSupportedTemporalLayers;	// 256 = 0x100
    int _reportingClientType;	// 260 = 0x104
    unsigned long long _remoteIDSParticipantID;	// 264 = 0x108
    unsigned long long _maxEncoderPixels;	// 272 = 0x110
}

@property(nonatomic) unsigned long long maxEncoderPixels; // @synthesize maxEncoderPixels=_maxEncoderPixels;
@property(nonatomic) _Bool useInBandFec; // @synthesize useInBandFec=_useInBandFec;
@property(nonatomic) unsigned long long remoteIDSParticipantID; // @synthesize remoteIDSParticipantID=_remoteIDSParticipantID;
@property(nonatomic) _Bool fecHeaderV1Enabled; // @synthesize fecHeaderV1Enabled=_fecHeaderV1Enabled;
@property(nonatomic) _Bool isFecGeneratorEnabled; // @synthesize isFecGeneratorEnabled=_isFecGeneratorEnabled;
@property(nonatomic) unsigned int encoderBitrateAveragingInterval; // @synthesize encoderBitrateAveragingInterval=_encoderBitrateAveragingInterval;
@property(nonatomic) int encoderUsage; // @synthesize encoderUsage=_encoderUsage;
@property(nonatomic) int reportingClientType; // @synthesize reportingClientType=_reportingClientType;
@property(nonatomic) struct tagVCCryptor *sframeCryptor; // @synthesize sframeCryptor=_sframeCryptor;
@property(nonatomic) unsigned int maxSupportedTemporalLayers; // @synthesize maxSupportedTemporalLayers=_maxSupportedTemporalLayers;
@property(nonatomic) _Bool temporalScalingEnabled; // @synthesize temporalScalingEnabled=_temporalScalingEnabled;
@property(nonatomic) unsigned int parameterSets; // @synthesize parameterSets=_parameterSets;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(nonatomic) unsigned int rtpTimestampRate; // @synthesize rtpTimestampRate=_rtpTimestampRate;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) _Bool isIPv6; // @synthesize isIPv6=_isIPv6;
@property(nonatomic) void *mediaControlInfoGenerator; // @synthesize mediaControlInfoGenerator=_mediaControlInfoGenerator;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) _Bool reinitEncoderOnFrameSizeChangeEnabled; // @synthesize reinitEncoderOnFrameSizeChangeEnabled=_reinitEncoderOnFrameSizeChangeEnabled;
@property(readonly, nonatomic) NSDictionary *customFeatureListStrings; // @synthesize customFeatureListStrings=_customFeatureListStrings;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) _Bool useRateControl; // @synthesize useRateControl=_useRateControl;
@property(nonatomic) int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) int streamCount; // @synthesize streamCount=_streamCount;
@property(readonly, nonatomic) struct tagVCVideoTransmitterStreamConfig *streamConfigs; // @synthesize streamConfigs=_streamConfigs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) int captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) NSDictionary *colorInfo; // @synthesize colorInfo=_colorInfo;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) int videoPayload; // @synthesize videoPayload=_videoPayload;
@property(nonatomic) int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)addCustomFeatureListString:(id)arg1 payload:(int)arg2;	// IMP=0x000000000026a458
- (void)dealloc;	// IMP=0x000000000026a3b1
- (id)description;	// IMP=0x000000000026a278
- (id)init;	// IMP=0x000000000026a19f

@end
