//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface VCAudioStreamConfig
{
    long long _audioStreamMode;	// 264 = 0x108
    NSMutableDictionary *_codecConfigurations;	// 272 = 0x110
    _Bool _redEnabled;	// 280 = 0x118
    unsigned char _numRedundantPayloads;	// 281 = 0x119
    NSMutableOrderedSet *_supportedNumRedundantPayload;	// 288 = 0x120
    _Bool _enableMaxBitrateOnNoChangeCMR;	// 296 = 0x128
    _Bool _forceEVSWideBand;	// 297 = 0x129
    float _volume;	// 300 = 0x12c
    _Bool _shouldApplyRedAsBoolean;	// 304 = 0x130
    _Bool _supportsAdaptation;	// 305 = 0x131
    int _bundlingScheme;	// 308 = 0x134
    _Bool _useExternalIO;	// 312 = 0x138
    struct tagVCAudioFrameFormat _externalIOFormat;	// 320 = 0x140
    int _oneToOneOperatingMode;	// 368 = 0x170
    _Bool _dtmfTonePlaybackEnabled;	// 372 = 0x174
    unsigned int _dtmfSampleRate;	// 376 = 0x178
    _Bool _anbrEnabled;	// 380 = 0x17c
    long long _subscriptionSlot;	// 384 = 0x180
    _Bool _isLowLatency;	// 392 = 0x188
    _Bool _useWifiTiers;	// 393 = 0x189
    unsigned int _channelCount;	// 396 = 0x18c
}

+ (int)bundlingSchemeForAudioStreamMode:(long long)arg1 payloadType:(int)arg2;	// IMP=0x006000000038c10c
@property(nonatomic) _Bool useWifiTiers; // @synthesize useWifiTiers=_useWifiTiers;
@property(readonly, nonatomic) _Bool useExternalIO; // @synthesize useExternalIO=_useExternalIO;
@property(nonatomic) _Bool isLowLatency; // @synthesize isLowLatency=_isLowLatency;
@property(nonatomic) long long subscriptionSlot; // @synthesize subscriptionSlot=_subscriptionSlot;
@property(nonatomic) _Bool anbrEnabled; // @synthesize anbrEnabled=_anbrEnabled;
@property(nonatomic) unsigned int dtmfSampleRate; // @synthesize dtmfSampleRate=_dtmfSampleRate;
@property(nonatomic) _Bool dtmfTonePlaybackEnabled; // @synthesize dtmfTonePlaybackEnabled=_dtmfTonePlaybackEnabled;
@property(nonatomic) unsigned int channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) int oneToOneOperatingMode; // @synthesize oneToOneOperatingMode=_oneToOneOperatingMode;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) _Bool supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property(nonatomic) _Bool shouldApplyRedAsBoolean; // @synthesize shouldApplyRedAsBoolean=_shouldApplyRedAsBoolean;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool forceEVSWideBand; // @synthesize forceEVSWideBand=_forceEVSWideBand;
@property(nonatomic) _Bool enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property(nonatomic) unsigned char numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(readonly, nonatomic, getter=isRedEnabled) _Bool redEnabled; // @synthesize redEnabled=_redEnabled;
@property(readonly, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
@property(readonly, nonatomic) NSArray *supportedNumRedundantPayload;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;	// IMP=0x000000000038cca5
- (void)addCodecConfiguration:(id)arg1;	// IMP=0x000000000038cbca
@property(nonatomic) const struct tagVCAudioFrameFormat *externalIOFormat;
- (_Bool)setupDTMFCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000038c92d
- (_Bool)setupCNCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000038c6cb
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;	// IMP=0x000000000038c677
- (_Bool)setupCodecWithClientDictionary:(id)arg1;	// IMP=0x000000000038c1b5
- (void)dealloc;	// IMP=0x000000000038c091
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x000000000038bc88
- (id)init;	// IMP=0x000000000038bbfb

@end
