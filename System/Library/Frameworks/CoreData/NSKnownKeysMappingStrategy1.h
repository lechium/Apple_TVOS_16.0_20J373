//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSKnownKeysMappingStrategy.h"

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;	// 8 = 0x8
    int _reserved64;	// 12 = 0xc
    void *_table;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    id _reserved1;	// 32 = 0x20
    id *_keys;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000000ab03c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000aa776
+ (id)alloc;	// IMP=0x00600000000aa76a
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000000a9d7d
+ (void)initialize;	// IMP=0x00600000000a9d39
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a9d31
- (id)description;	// IMP=0x00000000000ab455
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000ab3fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab3f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ab34e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab04d
- (Class)classForCoder;	// IMP=0x00000000000ab02b
- (unsigned long long)hash;	// IMP=0x00000000000aafe2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aaef1
- (id)allKeys;	// IMP=0x00000000000aaebf
- (id *)keys;	// IMP=0x00000000000aaeae
- (unsigned long long)length;	// IMP=0x00000000000aae9d
- (unsigned long long)fastIndexForKnownKey:(id)arg1;	// IMP=0x00000000000aab3f
- (unsigned long long)indexForKey:(id)arg1;	// IMP=0x00000000000aaab1
- (void)dealloc;	// IMP=0x00000000000aa9a6
- (id)initForKeys:(id)arg1;	// IMP=0x00000000000aa8b2
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000aa85a
- (_Bool)_isDeallocating;	// IMP=0x00000000000aa837
- (_Bool)_tryRetain;	// IMP=0x00000000000aa7f9
- (unsigned long long)retainCount;	// IMP=0x00000000000aa7e1
- (oneway void)release;	// IMP=0x00000000000aa7a3
- (id)retain;	// IMP=0x00000000000aa782

@end

