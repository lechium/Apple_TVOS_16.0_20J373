//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCHardwareSettings : NSObject
{
    _Bool _supportVCPEncoderInitialized;	// 8 = 0x8
    _Bool _supportVCPEncoder;	// 9 = 0x9
    NSMutableDictionary *_hardwareUsageModeSettings;	// 16 = 0x10
    NSMutableSet *_pixelFormatCollections;	// 24 = 0x18
    _Bool _isSiriVoiceTapSupported;	// 32 = 0x20
    _Bool _isSiriVoicePlayoutSupported;	// 33 = 0x21
    _Bool _vcpSupportsHEVCEncoder;	// 34 = 0x22
}

+ (_Bool)retainPixelBufferForMomentsEnabled;	// IMP=0x00600000003f282e
+ (_Bool)isCellularTappingSupported;	// IMP=0x00600000003f2826
+ (struct CGPoint)frontCameraOffsetFromDisplayCenter;	// IMP=0x00600000003f27fe
+ (_Bool)isSiriVoicePlayoutSupported;	// IMP=0x00600000003f2726
+ (_Bool)isSiriVoiceTapSupported;	// IMP=0x00600000003f264e
+ (unsigned int)maxVCPSupportedTemporalLayers;	// IMP=0x00600000003f2643
+ (_Bool)preferPresentationTimestamp;	// IMP=0x00600000003f263b
+ (_Bool)supportsPortraitCameraCapture;	// IMP=0x00600000003f2633
+ (_Bool)isVideoRenderingSupported;	// IMP=0x00600000003f262b
+ (unsigned int)maxActiveVideoDecoders;	// IMP=0x00600000003f2623
+ (unsigned int)maxActiveVideoEncoders;	// IMP=0x00600000003f261b
+ (long long)screenShareCapabilities;	// IMP=0x00600000003f2613
+ (double)previewPreferredAspectRatio;	// IMP=0x00600000003f2605
+ (_Bool)disableMLScalarDuringSharing;	// IMP=0x00600000003f25fd
+ (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x00600000003f25f5
+ (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x00600000003f25ed
+ (id)supportedVideoPayloads;	// IMP=0x00600000003f25e5
+ (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x00600000003f25da
+ (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x00600000003f25cf
+ (_Bool)supportsHEVCDecoding;	// IMP=0x00600000003f25c7
+ (_Bool)supportsHEVCEncoding;	// IMP=0x00600000003f25bf
+ (_Bool)supportsHEIFEncoding;	// IMP=0x00600000003f25b7
+ (_Bool)isCaptionsSupported;	// IMP=0x00600000003f25af
+ (_Bool)isCaptureSIFRPreferred;	// IMP=0x00600000003f24ba
+ (_Bool)isSpatialAudioSupported;	// IMP=0x00600000003f2272
+ (_Bool)isDisplayPortrait;	// IMP=0x00600000003f226a
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;	// IMP=0x00600000003f225f
+ (unsigned int)maxActiveScreenEncoders;	// IMP=0x00600000003f2257
+ (_Bool)shouldEnforceScreenFrameRateLimit;	// IMP=0x00600000003f224f
+ (unsigned int)maxFrameRateSupportedScreenShare;	// IMP=0x00600000003f2247
+ (unsigned long long)maxScreenEncodingSizeSupported;	// IMP=0x00600000003f223f
+ (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x00600000003f2237
+ (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x00600000003f222f
+ (unsigned int)screenHeight;	// IMP=0x00600000003f2227
+ (unsigned int)screenWidth;	// IMP=0x00600000003f221f
+ (_Bool)shouldOverrideGPUMuxing;	// IMP=0x00600000003f2217
+ (_Bool)disableViewPointCorrectionForSharing;	// IMP=0x00600000003f21ea
+ (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x00600000003f21d4
+ (unsigned int)maxRemoteParticipants30fps;	// IMP=0x00600000003f21c9
+ (unsigned int)builtinMicCount;	// IMP=0x00600000003f21c1
+ (long long)deviceClass;	// IMP=0x00600000003f21b4
@property(readonly, nonatomic) NSSet *pixelFormatCollections; // @synthesize pixelFormatCollections=_pixelFormatCollections;
@property(readonly, nonatomic) _Bool vcpSupportsHEVCEncoder; // @synthesize vcpSupportsHEVCEncoder=_vcpSupportsHEVCEncoder;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly, nonatomic) _Bool isVideoRenderingSupported;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(_Bool)arg1;	// IMP=0x00000000003f2154
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x00000000003f20e9
- (_Bool)storeHardwareSettingsForAllOperatingModes;	// IMP=0x00000000003f1f0a
- (unsigned int)tilesPerVideoFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x00000000003f1eb5
- (unsigned int)tilesPerVideoFrame:(int)arg1;	// IMP=0x00000000003f1e6d
- (id)featureListStringForHEVC:(int)arg1;	// IMP=0x00000000003f1e27
- (id)featureListStringForH264:(int)arg1;	// IMP=0x00000000003f1de1
- (void)dealloc;	// IMP=0x00000000003f1d74
- (id)init;	// IMP=0x00000000003f1ca3

@end

