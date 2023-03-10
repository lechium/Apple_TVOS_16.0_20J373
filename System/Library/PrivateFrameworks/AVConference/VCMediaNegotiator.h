//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMediaNegotiatorResultsCaptions;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiator
{
    _Bool _usePreNegotiation;	// 72 = 0x48
    _Bool _negotiationDone;	// 73 = 0x49
    _Bool _isCellular16x9Capable;	// 74 = 0x4a
    VCMediaNegotiatorResultsCaptions *_negotiatedCaptionsSettings;	// 80 = 0x50
    long long _negotiationMode;	// 88 = 0x58
}

+ (id)streamGroupIDsWithMediaBlob:(id)arg1;	// IMP=0x00000000002b6b7c
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)arg1;	// IMP=0x00000000002b5dbd
+ (id)newCompressedBlob:(id)arg1;	// IMP=0x00000000002aeec1
+ (id)newDecompressedBlob:(id)arg1;	// IMP=0x00000000002aed1d
+ (void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(_Bool)arg3;	// IMP=0x00000000002ae51f
+ (_Bool)validateLocalConfiguration:(id)arg1;	// IMP=0x00000000002ae4a6
+ (_Bool)validateMultiwayAudioStreamConfigurations:(id)arg1;	// IMP=0x00000000002ae354
+ (_Bool)validateMultiwayVideoStreamConfigurations:(id)arg1;	// IMP=0x00000000002ae037
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;	// IMP=0x00000000002adb5f
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x00000000002abe20
+ (id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3;	// IMP=0x00000000002abd18
+ (id)negotiationBlobFromData:(id)arg1;	// IMP=0x00000000002abc0a
@property(readonly, nonatomic) _Bool isCellular16x9Capable; // @synthesize isCellular16x9Capable=_isCellular16x9Capable;
@property(readonly, nonatomic) long long negotiationMode; // @synthesize negotiationMode=_negotiationMode;
@property(readonly, nonatomic) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings; // @synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings;
@property(readonly, nonatomic) _Bool usePreNegotiation; // @synthesize usePreNegotiation=_usePreNegotiation;
- (_Bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;	// IMP=0x00000000002b697b
- (void)setupCaptionsForMediaBlob:(id)arg1;	// IMP=0x00000000002b6975
- (id)localeWithMediaBlobLanguage:(int)arg1;	// IMP=0x00000000002b6873
- (int)mediaBlobLanguageWithLocale:(id)arg1;	// IMP=0x00000000002b67f6
- (id)newStreamConfigFromMultiwayVideoStream:(id)arg1;	// IMP=0x00000000002b5dce
- (id)newStreamConfigFromMultiwayAudioStream:(id)arg1;	// IMP=0x00000000002b59de
- (id)newStreamGroupCodecConfigForPayload:(int)arg1;	// IMP=0x00000000002b589a
- (_Bool)negotiateMultiwayVideoStreams:(id)arg1;	// IMP=0x00000000002b4bb5
- (_Bool)isVideoStreamSupported:(int)arg1;	// IMP=0x00000000002b4b54
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;	// IMP=0x00000000002b49d8
- (_Bool)negotiateMultiwayAudioStreams:(id)arg1;	// IMP=0x00000000002b4158
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;	// IMP=0x00000000002b3fdc
- (_Bool)negotiateMomentsWithMomentsSettings:(id)arg1;	// IMP=0x00000000002b3df0
- (void)setupMomentsForMediaBlob:(id)arg1;	// IMP=0x00000000002b3bda
- (_Bool)negotiateFaceTimeSettings:(id)arg1;	// IMP=0x00000000002b377f
- (void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(_Bool)arg2;	// IMP=0x00000000002b32b7
- (_Bool)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2;	// IMP=0x00000000002b2eb3
- (_Bool)setupScreenWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002b2917
- (_Bool)negotiateScreenSettings:(id)arg1;	// IMP=0x00000000002b1f66
- (id)getPreferredScreenPayloadList;	// IMP=0x00000000002b1f3c
- (_Bool)setupVideoWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002b1ac4
- (_Bool)negotiateVideoSettings:(id)arg1;	// IMP=0x00000000002b0f3d
- (_Bool)processParameterSets:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002b0c59
- (_Bool)negotiateHDRMode:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002b0b61
- (_Bool)processPixelFormats:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002b0a27
- (void)negotiateTilesPerFrame:(id)arg1 negotiatedSettings:(id)arg2;	// IMP=0x00000000002b09ca
- (void)negotiateRTCPFB:(id)arg1;	// IMP=0x00000000002b0960
- (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(_Bool)arg7;	// IMP=0x00000000002b0427
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;	// IMP=0x00000000002b013c
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;	// IMP=0x00000000002aff2f
- (_Bool)setupAudioWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002afba4
- (_Bool)negotiateAudioSettings:(id)arg1;	// IMP=0x00000000002afa22
- (void)negotiateAudioSecondaryPayloads:(id)arg1;	// IMP=0x00000000002af70d
- (_Bool)negotiateAudioREDPayload:(id)arg1;	// IMP=0x00000000002af594
- (_Bool)negotiateAudioDTXPayload:(id)arg1;	// IMP=0x00000000002af4a4
- (_Bool)negotiateAudioPrimaryPayload:(id)arg1;	// IMP=0x00000000002af169
- (void)negotiateAudioUseSBR:(id)arg1;	// IMP=0x00000000002af12a
- (void)negotiateAudioAllowRecording:(id)arg1;	// IMP=0x00000000002af0b0
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;	// IMP=0x00000000002aeba6
- (_Bool)setupBandwidthSettingsForMediaBlob:(id)arg1;	// IMP=0x00000000002ae9d7
- (_Bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned int)arg4;	// IMP=0x00000000002ae6c1
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x00000000002adb3f
- (_Bool)processResponseBlob:(id)arg1;	// IMP=0x00000000002ad3a2
- (id)newResponseBlob;	// IMP=0x00000000002ac6ec
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x00000000002ab2fc
- (id)negotiationData;	// IMP=0x00000000002aaa0d
- (void)dealloc;	// IMP=0x00000000002aa9a8
- (_Bool)isCellular16x9EncodeCapable;	// IMP=0x00000000002aa5ad
@property(readonly, nonatomic) _Bool isCaller;
- (id)initWithMode:(long long)arg1 localSettings:(id)arg2;	// IMP=0x00000000002aa50f
- (id)initWithLocalSettings:(id)arg1;	// IMP=0x00000000002aa3b2

@end

