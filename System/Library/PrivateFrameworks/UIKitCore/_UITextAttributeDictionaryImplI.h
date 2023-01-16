//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMutableSet;
@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UITextAttributeDictionaryImplI : NSMutableDictionary
{
    id <_UITextAttributeDefaults> _fallback;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 16 = 0x10
    NSMutableSet *_ignoring;	// 24 = 0x18
}

+ (Class)_ignoringClass;	// IMP=0x0060000000027c60
+ (Class)_storageClass;	// IMP=0x0060000000027c4f
+ (_Bool)_isMutable;	// IMP=0x0060000000027c47
- (void).cxx_destruct;	// IMP=0x0000000000028d0e
- (void)_removeFallbackFromStorage;	// IMP=0x0000000000028d08
- (id)_keysIfThereIsFallback;	// IMP=0x0000000000028c11
- (id)description;	// IMP=0x000000000002897a
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x00000000000287bc
- (_Bool)isNSDictionary__;	// IMP=0x00000000000287b4
- (unsigned long long)hash;	// IMP=0x0000000000028747
- (id)_fullDictionary;	// IMP=0x0000000000028651
- (id)sparseDictionary;	// IMP=0x0000000000028601
- (_Bool)ignoresFallbackForKey:(id)arg1;	// IMP=0x00000000000285e4
- (_Bool)usesFallbackForKey:(id)arg1;	// IMP=0x0000000000028544
- (id)fallback;	// IMP=0x000000000002852f
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000028467
- (id)keyEnumerator;	// IMP=0x00000000000283eb
- (unsigned long long)count;	// IMP=0x0000000000028384
- (id)allKeys;	// IMP=0x0000000000028308
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000281c8
- (id)_initWithStorage:(id)arg1 fallback:(id)arg2 ignoring:(id)arg3;	// IMP=0x0000000000027f7c
- (id)initWithFallback:(id)arg1;	// IMP=0x0000000000027f03
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000027e91
- (id)_initWithDictionary:(id)arg1 copyItems:(_Bool)arg2 fallback:(id)arg3;	// IMP=0x0000000000027cfd
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000027ce8
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;	// IMP=0x0000000000027cd1
- (id)init;	// IMP=0x0000000000027c71

@end
