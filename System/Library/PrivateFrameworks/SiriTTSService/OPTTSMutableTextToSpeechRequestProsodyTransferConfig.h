//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OPTTSTextToSpeechSpeechFeatureInputWave, OPTTSTextToSpeechUserVoiceProfile;

__attribute__((visibility("hidden")))
@interface OPTTSMutableTextToSpeechRequestProsodyTransferConfig
{
}

@property(copy, nonatomic) NSString *user_voice_profile_url;
@property(copy, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property(copy, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009df9
- (id)init;	// IMP=0x0000000000009d6b

@end
