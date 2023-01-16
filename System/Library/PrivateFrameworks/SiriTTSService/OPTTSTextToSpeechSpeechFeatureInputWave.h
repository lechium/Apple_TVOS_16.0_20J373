//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechSpeechFeatureInputWave : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureInputWave *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001b7f8
- (id)flatbuffData;	// IMP=0x000000000001b6b6
- (Offset_efc89d55)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001b558
- (void)pcm_data:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b4f8
@property(readonly, nonatomic) NSData *pcm_data;
@property(readonly, nonatomic) int sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b487
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000001b2aa
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2;	// IMP=0x000000000001b294
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b279
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001b261

@end
