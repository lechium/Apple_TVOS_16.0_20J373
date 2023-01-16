//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000003dd4a8
- (unsigned int)tilesPerFrame:(int)arg1;	// IMP=0x00000000003de256
- (_Bool)setupH264Rules;	// IMP=0x00000000003dd9d1
- (_Bool)setupRules;	// IMP=0x00000000003dd9bf
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x00000000003dd626
- (void)initSupportedPayloads;	// IMP=0x00000000003dd5b4
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000003dd4b0

@end
