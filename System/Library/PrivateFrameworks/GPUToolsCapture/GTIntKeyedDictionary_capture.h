//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GTIntKeyedDictionary_capture : NSObject
{
    void *_private;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000032ac
- (id)allKeys;	// IMP=0x0000000000002c77
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000002c43
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000002c0f
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000002bcc
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002b7f
- (void)removeObjectForIntKey:(long long)arg1;	// IMP=0x0000000000002a0a
- (id)objectForIntKey:(long long)arg1;	// IMP=0x00000000000029eb
- (void)setObject:(id)arg1 forIntKey:(long long)arg2;	// IMP=0x000000000000270a
- (void)removeAllObjects;	// IMP=0x0000000000002695
- (unsigned long long)count;	// IMP=0x0000000000002687
- (void)dealloc;	// IMP=0x000000000000260b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002554
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002412
- (id)initWithIntKeyedDictionary:(id)arg1;	// IMP=0x0000000000002384
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000022e0
- (id)init;	// IMP=0x00000000000022cc

@end

