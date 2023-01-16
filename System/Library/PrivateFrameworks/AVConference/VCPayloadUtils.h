//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPayloadUtils : NSObject
{
}

+ (int)audioCodecBandwidthForVCAudioCodecBandwidth:(int)arg1;	// IMP=0x008000000008981a
+ (int)vcAudioCodecBandwidthForAudioCodecBandwidth:(int)arg1;	// IMP=0x0080000000089809
+ (unsigned int)bitrateForEVSCodecMode:(int)arg1;	// IMP=0x00800000000897da
+ (unsigned int)bitrateForAMRWBCodecMode:(int)arg1;	// IMP=0x00800000000896e6
+ (unsigned int)bitrateForAMRCodecMode:(int)arg1;	// IMP=0x00800000000895f2
+ (_Bool)supportsCodecBandwidthUpdateForCodecType:(long long)arg1;	// IMP=0x00800000000895e1
+ (_Bool)supportsCodecRateModesForCodecType:(long long)arg1;	// IMP=0x00800000000895c4
+ (unsigned int)bitrateForCodecType:(long long)arg1 mode:(int)arg2;	// IMP=0x00800000000894f4
+ (int)payloadForCodecType:(long long)arg1;	// IMP=0x0080000000089278
+ (long long)codecTypeForPayload:(int)arg1;	// IMP=0x0080000000088ffc
+ (float)qualityForPayload:(int)arg1 forBitrate:(unsigned int)arg2;	// IMP=0x0080000000088e79
+ (_Bool)shouldEnablePacketSizeLimitForPayload:(int)arg1;	// IMP=0x0080000000088e6d
+ (unsigned int)internalBundleFactorForPayload:(int)arg1;	// IMP=0x0080000000088e58
+ (_Bool)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3;	// IMP=0x0080000000088e10
+ (_Bool)shouldUseCookieForPayload:(int)arg1;	// IMP=0x0080000000088df4
+ (_Bool)isCodecModeSupported:(int)arg1 forBandwidth:(int)arg2 withPayload:(int)arg3;	// IMP=0x0080000000088db2
+ (_Bool)isAMRCodecModeSupported:(int)arg1 forBandwidth:(int)arg2;	// IMP=0x0080000000088d94
+ (_Bool)isEVSCodecModeSupported:(int)arg1 forBandwidth:(int)arg2;	// IMP=0x0080000000088d39
+ (int)codecRateModeForDesiredANBR:(unsigned int)arg1 payload:(int)arg2 supportedBitrates:(id)arg3 supportedBandwidths:(id)arg4;	// IMP=0x00800000000887ca
+ (id)allowedBitratesForPayload:(int)arg1 supportedBitrates:(id)arg2 supportedBandwidths:(id)arg3;	// IMP=0x00800000000884f5
+ (id)supportedCodecModesForBandwidth:(int)arg1 payload:(int)arg2;	// IMP=0x00800000000884a2
+ (id)codecModesForEVS32kHz;	// IMP=0x0080000000088495
+ (id)codecModesForEVS16kHz;	// IMP=0x0080000000088488
+ (id)codecModesForEVS8kHz;	// IMP=0x008000000008847b
+ (id)codecModesForAMR16kHz;	// IMP=0x008000000008846e
+ (id)codecModesForAMR8kHz;	// IMP=0x0080000000088461
+ (int)codecBandwidthForPayload:(int)arg1;	// IMP=0x0080000000088434
+ (_Bool)canSetBitrateForPayload:(int)arg1;	// IMP=0x0080000000088418
+ (unsigned int)codecSamplesPerFrameForPayload:(int)arg1 blockSize:(double)arg2;	// IMP=0x00800000000882c8
+ (unsigned int)audioCodecTypeForPayload:(int)arg1;	// IMP=0x00800000000881a8
+ (unsigned int)sampleRateForCodecBandwidth:(int)arg1;	// IMP=0x0080000000088188
+ (unsigned int)sampleRateForPayload:(int)arg1;	// IMP=0x00800000000880c3
+ (_Bool)isPayloadSupportedInFaceTime:(int)arg1;	// IMP=0x0080000000088090
+ (_Bool)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2;	// IMP=0x0080000000088074

@end
