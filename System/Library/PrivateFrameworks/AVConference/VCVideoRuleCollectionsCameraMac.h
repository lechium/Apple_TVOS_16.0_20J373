//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraMac
{
    unsigned int _encodeScore;	// 28 = 0x1c
    unsigned int _decodeScore;	// 32 = 0x20
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x006000000029f7be
- (void)resetEncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;	// IMP=0x00000000002a13ca
- (void)_resetJ92EncodingRulesForCameraIsHD:(_Bool)arg1 isWVGA:(_Bool)arg2 is1080:(_Bool)arg3;	// IMP=0x00000000002a122b
- (void)_removeRulesGreaterThan720p;	// IMP=0x00000000002a11c9
- (void)_removeRulesGreaterThanVGA;	// IMP=0x00000000002a1129
- (void)_addWVGAEncodingRules;	// IMP=0x00000000002a1005
- (_Bool)useSoftFramerateSwitching;	// IMP=0x00000000002a0fe8
- (_Bool)setupRules;	// IMP=0x00000000002a0dab
- (_Bool)setUp1080pRules:(int)arg1;	// IMP=0x00000000002a09ff
- (_Bool)setupH264Rules;	// IMP=0x00000000002a0994
- (_Bool)setupH264WifiRules;	// IMP=0x000000000029fa8d
- (void)computeDecodingScore;	// IMP=0x000000000029f9e9
- (void)computeEncodingScore;	// IMP=0x000000000029f7d4
- (double)preferredAspectRatio;	// IMP=0x000000000029f7c6
- (void)initSupportedPayloads;	// IMP=0x000000000029f670
- (void)dealloc;	// IMP=0x000000000029f61e
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000029f430

@end

