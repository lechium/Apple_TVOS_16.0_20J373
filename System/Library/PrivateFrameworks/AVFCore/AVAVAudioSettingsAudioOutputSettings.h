//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAudioOutputSettings.h"

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x001000000010e9b4
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x001000000010e8df
- (id)audioOptions;	// IMP=0x0000000000110b2f
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;	// IMP=0x0000000000110974
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x000000000011003e
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x000000000010fd8d
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x000000000010fc92
- (_Bool)willYieldCompressedSamples;	// IMP=0x000000000010fc4b
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;	// IMP=0x000000000010fc37
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000010e9f0

@end

