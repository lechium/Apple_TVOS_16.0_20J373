//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFNumber
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005cd11
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005cc4e
- (long long)compare:(id)arg1;	// IMP=0x000000000005d5ec
- (long long)_reverseCompare:(id)arg1;	// IMP=0x000000000005d5c0
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x000000000005d4c4
- (long long)_cfNumberType;	// IMP=0x000000000005d3b1
- (unsigned long long)_cfTypeID;	// IMP=0x000000000005d3ab
- (_Bool)boolValue;	// IMP=0x000000000005d329
- (unsigned long long)unsignedIntegerValue;	// IMP=0x000000000005d31c
- (long long)integerValue;	// IMP=0x000000000005d30f
- (double)doubleValue;	// IMP=0x000000000005d2c7
- (float)floatValue;	// IMP=0x000000000005d27f
- (unsigned long long)unsignedLongLongValue;	// IMP=0x000000000005d237
- (long long)longLongValue;	// IMP=0x000000000005d1f0
- (unsigned long long)unsignedLongValue;	// IMP=0x000000000005d1a8
- (long long)longValue;	// IMP=0x000000000005d161
- (unsigned int)unsignedIntValue;	// IMP=0x000000000005d11b
- (int)intValue;	// IMP=0x000000000005d0d5
- (unsigned short)unsignedShortValue;	// IMP=0x000000000005d08e
- (short)shortValue;	// IMP=0x000000000005d047
- (unsigned char)unsignedCharValue;	// IMP=0x000000000005d000
- (BOOL)charValue;	// IMP=0x000000000005cfb9
- (const char *)objCType;	// IMP=0x000000000005cf8c
- (void)getValue:(void *)arg1;	// IMP=0x000000000005cedf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ced2
- (id)stringValue;	// IMP=0x000000000005ce3b
- (id)description;	// IMP=0x000000000005cdae
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005cd14
- (unsigned long long)retainCount;	// IMP=0x000000000005cd0c
- (_Bool)_isDeallocating;	// IMP=0x000000000005ccfc
- (_Bool)_tryRetain;	// IMP=0x000000000005cceb
- (oneway void)release;	// IMP=0x000000000005cce1
- (id)retain;	// IMP=0x000000000005ccd4
- (unsigned long long)hash;	// IMP=0x000000000005cccf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005cc8a
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x000000000005cc69
- (_Bool)isNSNumber__;	// IMP=0x000000000005cc66

@end

