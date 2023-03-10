//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
    id *_keys;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000004e28b
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000004e083
- (unsigned long long)retainCount;	// IMP=0x000000000004e628
- (_Bool)_isDeallocating;	// IMP=0x000000000004e618
- (_Bool)_tryRetain;	// IMP=0x000000000004e607
- (oneway void)release;	// IMP=0x000000000004e602
- (id)retain;	// IMP=0x000000000004e5ea
- (id)description;	// IMP=0x000000000004e50c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e4cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e475
- (void)removeAllObjects;	// IMP=0x000000000004e424
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004e3d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e325
- (unsigned long long)hash;	// IMP=0x000000000004e320
- (Class)classForCoder;	// IMP=0x000000000004e2fa
- (void)setObservationInfo:(void *)arg1;	// IMP=0x000000000004e28e
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000004e21e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004e178
- (id)keyEnumerator;	// IMP=0x000000000004e11e
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004e0d6
- (unsigned long long)count;	// IMP=0x000000000004e09b

@end

