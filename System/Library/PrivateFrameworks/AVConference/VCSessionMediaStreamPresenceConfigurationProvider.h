//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject
{
    NSDictionary *_configuration;	// 8 = 0x8
    NSSet *_streamInputConfigurations;	// 16 = 0x10
    NSSet *_streamGroupConfigurations;	// 24 = 0x18
}

+ (unsigned int)readUint32WithPList:(id)arg1 key:(id)arg2 defaultValue:(unsigned int)arg3;	// IMP=0x0060000000097ad8
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)arg1 streamIndex:(int)arg2;	// IMP=0x00600000000979a4
+ (id)publicSessionConfigurationForType:(unsigned int)arg1;	// IMP=0x00600000000973a6
+ (id)loadSessionConfigurationWithResourceName:(id)arg1;	// IMP=0x006000000009716e
+ (id)replaceTag:(id)arg1;	// IMP=0x00600000000970a4
+ (id)ftxtGroupDisabled;	// IMP=0x0060000000097062
+ (id)moCapGroupDisabled;	// IMP=0x0060000000097012
+ (id)dataGroupDisabled;	// IMP=0x0060000000096fc4
+ (id)screenStreamBaseTierFramerate;	// IMP=0x0060000000096fb7
+ (id)sessionConfigurationForType:(unsigned int)arg1;	// IMP=0x0060000000096c8e
+ (id)resourceNameForConfigurationType:(unsigned int)arg1;	// IMP=0x0060000000096c6a
@property(readonly, nonatomic) NSSet *streamGroupConfigurations; // @synthesize streamGroupConfigurations=_streamGroupConfigurations;
@property(readonly, nonatomic) NSSet *streamInputConfigurations; // @synthesize streamInputConfigurations=_streamInputConfigurations;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2;	// IMP=0x00000000000a0acf
- (id)newStreamGroupConfigurationWithPList:(id)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x00000000000a04d3
- (_Bool)setupAudioStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 supportedAudioRules:(id)arg3 streamIDGenerator:(id)arg4;	// IMP=0x00000000000a0153
- (id)newAudioStreamGroupStreamConfigWithPList:(id)arg1 supportedAudioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5 groupID:(unsigned int)arg6;	// IMP=0x000000000009eee1
- (_Bool)setupAudioRulesWithPList:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009db7d
- (_Bool)setupAudioRedWithPlist:(id)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009d3b1
- (_Bool)setupRedFactorsWithPList:(id)arg1 audioStreamConfig:(id)arg2;	// IMP=0x000000000009d10f
- (id)newAudioMultiwayConfigWithPList:(id)arg1 audioRules:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3 streamIDGenerator:(id)arg4 ssrc:(unsigned int)arg5;	// IMP=0x000000000009ca58
- (_Bool)addPayload:(int)arg1 audioStreamConfig:(id)arg2 supportedAudioRules:(id)arg3;	// IMP=0x000000000009c8fd
- (_Bool)setupVideoStreamGroupStreams:(id)arg1 streamGroupConfig:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x000000000009c55a
- (unsigned short)setParentStreamID:(unsigned short)arg1 videoConfig:(id)arg2;	// IMP=0x000000000009c507
- (struct CGSize)computeEncoderResolution:(unsigned long long)arg1;	// IMP=0x000000000009c286
- (id)newVideoStreamGroupStreamConfigWithPList:(id)arg1 streamIDGenerator:(id)arg2 ssrc:(unsigned int)arg3 groupID:(unsigned int)arg4 shouldSkip:(_Bool *)arg5;	// IMP=0x000000000009a35c
- (long long)getVideoCodecFromStreamCodecPList:(id)arg1;	// IMP=0x000000000009a132
- (id)getVideoCodecConfigFromStreamConfigPList:(id)arg1;	// IMP=0x0000000000099e06
- (_Bool)checkEncoderSupportForCodecType:(long long)arg1;	// IMP=0x0000000000099c08
- (_Bool)checkEncoderSupportForConfig:(id)arg1;	// IMP=0x00000000000997d5
- (void)updateStreamConfig:(id)arg1 forPayload:(int)arg2 networkPayload:(unsigned int)arg3 groupID:(unsigned int)arg4;	// IMP=0x000000000009951e
- (id)newVideoMultiwayConfigWithPList:(id)arg1 codecType:(long long)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4;	// IMP=0x0000000000098819
- (id)newDataStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x0000000000098593
- (id)newVideoStreamInputConfigurationWithPList:(id)arg1;	// IMP=0x00000000000980f7
- (id)newStreamInputConfigurations;	// IMP=0x0000000000097b87
- (void)dealloc;	// IMP=0x0000000000096f43
- (id)initWithConfigurationType:(unsigned int)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3;	// IMP=0x0000000000096d77

@end
