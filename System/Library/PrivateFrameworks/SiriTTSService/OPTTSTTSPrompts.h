//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSPrompts : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSPrompts *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015b6b
- (id)flatbuffData;	// IMP=0x0000000000015a29
- (Offset_879bd826)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000001547f
- (void)prompts_v2:(CDUnknownBlockType)arg1;	// IMP=0x000000000001541f
@property(readonly, nonatomic) NSData *prompts_v2;
- (void)prompts_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015217
- (unsigned long long)prompts_count;	// IMP=0x0000000000015172
- (id)prompts_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000015052
@property(readonly, nonatomic) NSArray *prompts;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014f28
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPrompts *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000014d4b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSPrompts *)arg2;	// IMP=0x0000000000014d35
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000014d1a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000014d02

@end

