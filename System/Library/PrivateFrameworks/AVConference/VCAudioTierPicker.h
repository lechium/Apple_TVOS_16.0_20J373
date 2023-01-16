//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BitrateLimits, NSMutableDictionary, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *_tierTablesForRedNumPayloads;	// 8 = 0x8
    VCAudioTier *_defaultTier;	// 16 = 0x10
    VCAudioTier *_fallbackTier;	// 24 = 0x18
    BitrateLimits *_bitrateLimits;	// 32 = 0x20
    CDStruct_898ba246 _config;	// 40 = 0x28
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;	// IMP=0x00600000002d2966
+ (_Bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 mode:(int)arg4 redNumPayloads:(unsigned int)arg5 cellular:(_Bool)arg6;	// IMP=0x00600000002d287f
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(_Bool)arg3;	// IMP=0x00600000002d1e64
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 tierPickerMode:(int)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7;	// IMP=0x00600000002d16f0
+ (_Bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;	// IMP=0x00600000002d15e7
+ (int)operatingModeToTierPickerMode:(int)arg1;	// IMP=0x00600000002d0fe3
+ (int)tierPickerModeToAVConferenceOperatingMode:(int)arg1;	// IMP=0x00600000002d0fc6
@property CDStruct_898ba246 config; // @synthesize config=_config;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier=_defaultTier;
- (id)allAudioTiers;	// IMP=0x00000000002d3f43
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;	// IMP=0x00000000002d3318
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;	// IMP=0x00000000002d2a03
- (void)printCreatedAudioTiers:(id)arg1;	// IMP=0x00000000002d2535
- (void)dealloc;	// IMP=0x00000000002d157a
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)arg1 usingCellular:(_Bool)arg2;	// IMP=0x00000000002d0fff
- (_Bool)setupTierPickerForConfig:(CDStruct_898ba246)arg1;	// IMP=0x00000000002d08e0
- (void)logTierPickerConfig:(CDStruct_898ba246)arg1;	// IMP=0x00000000002d05f4
- (id)configToString:(CDStruct_898ba246)arg1;	// IMP=0x00000000002d0579
- (_Bool)reconfigureTierPicker:(CDStruct_898ba246)arg1;	// IMP=0x00000000002d0441
- (id)initWithConfig:(CDStruct_898ba246)arg1;	// IMP=0x00000000002d03a6

@end
