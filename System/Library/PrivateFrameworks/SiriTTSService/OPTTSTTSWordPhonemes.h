//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSWordPhonemes : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSWordPhonemes *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000133fb
- (id)flatbuffData;	// IMP=0x00000000000132b9
- (Offset_9874306f)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000012e2d
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012c60
- (unsigned long long)phonemes_count;	// IMP=0x0000000000012bbb
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000012a9b
@property(readonly, nonatomic) NSArray *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012971
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000012794
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2;	// IMP=0x000000000001277e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000012763
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000001274b

@end
