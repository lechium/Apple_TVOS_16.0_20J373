//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000003429a9
- (_Bool)setupMacDecodingOnlyRules;	// IMP=0x0000000000343838
- (_Bool)setupH264Rules;	// IMP=0x0000000000342f6a
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x0000000000342c5d
- (void)initSupportedPayloads;	// IMP=0x0000000000342c09
- (id)initForMacDecodingOnly;	// IMP=0x0000000000342b3d
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000003429d7

@end
