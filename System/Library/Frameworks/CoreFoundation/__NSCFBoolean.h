//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFBoolean
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005d860
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005d7a0
- (long long)compare:(id)arg1;	// IMP=0x000000000005dc48
- (long long)_reverseCompare:(id)arg1;	// IMP=0x000000000005dc1c
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x000000000005db20
- (long long)_cfNumberType;	// IMP=0x000000000005da0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005da00
- (const char *)objCType;	// IMP=0x000000000005d9f8
- (void)getValue:(void *)arg1;	// IMP=0x000000000005d9de
- (unsigned long long)_cfTypeID;	// IMP=0x000000000005d9d9
- (_Bool)boolValue;	// IMP=0x000000000005d9c9
- (unsigned long long)unsignedIntegerValue;	// IMP=0x000000000005d9bc
- (long long)integerValue;	// IMP=0x000000000005d9af
- (double)doubleValue;	// IMP=0x000000000005d993
- (float)floatValue;	// IMP=0x000000000005d977
- (unsigned long long)unsignedLongLongValue;	// IMP=0x000000000005d962
- (long long)longLongValue;	// IMP=0x000000000005d94d
- (unsigned long long)unsignedLongValue;	// IMP=0x000000000005d938
- (long long)longValue;	// IMP=0x000000000005d923
- (unsigned int)unsignedIntValue;	// IMP=0x000000000005d90f
- (int)intValue;	// IMP=0x000000000005d8fb
- (unsigned short)unsignedShortValue;	// IMP=0x000000000005d8e7
- (short)shortValue;	// IMP=0x000000000005d8d3
- (unsigned char)unsignedCharValue;	// IMP=0x000000000005d8bf
- (BOOL)charValue;	// IMP=0x000000000005d8ab
- (id)stringValue;	// IMP=0x000000000005d89c
- (id)description;	// IMP=0x000000000005d88d
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005d863
- (unsigned long long)retainCount;	// IMP=0x000000000005d85b
- (_Bool)_isDeallocating;	// IMP=0x000000000005d84b
- (_Bool)_tryRetain;	// IMP=0x000000000005d83a
- (oneway void)release;	// IMP=0x000000000005d830
- (id)retain;	// IMP=0x000000000005d823
- (unsigned long long)hash;	// IMP=0x000000000005d81e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d7d9
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x000000000005d7b8

@end

