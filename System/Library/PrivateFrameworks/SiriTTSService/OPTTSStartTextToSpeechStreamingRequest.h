//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OPTTSTTSRequestFeatureFlags, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestDebug, OPTTSTextToSpeechRequestDevConfig, OPTTSTextToSpeechRequestExperiment, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestProsodyControlConfig, OPTTSTextToSpeechRequestProsodyTransferConfig, OPTTSTextToSpeechUserProfile;

__attribute__((visibility("hidden")))
@interface OPTTSStartTextToSpeechStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartTextToSpeechStreamingRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000211ab
- (id)flatbuffData;	// IMP=0x0000000000021069
- (Offset_acd6b661)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000002050c
@property(readonly, nonatomic) OPTTSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestDevConfig *dev_config;
@property(readonly, nonatomic) OPTTSTextToSpeechUserProfile *profile;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestDebug *debug;
@property(readonly, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property(readonly, nonatomic) long long preferred_voice_type;
- (void)context_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fbbe
- (unsigned long long)context_info_count;	// IMP=0x000000000001fb19
- (id)context_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001f9fa
@property(readonly, nonatomic) NSArray *context_info;
@property(readonly, nonatomic) NSString *voice_name;
@property(readonly, nonatomic) _Bool enable_word_timing_info;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f5d8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001f3fb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest *)arg2;	// IMP=0x000000000001f3e5
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001f3ca
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001f3b2

@end

