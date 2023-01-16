//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005e0c6
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x001000000005dfd0
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005dfb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e0fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e0c9
- (Class)classForCoder;	// IMP=0x000000000005e0a3
- (void)makeCharacterSetFast;	// IMP=0x000000000005e09e
- (void)makeCharacterSetCompact;	// IMP=0x000000000005e099
- (void)invert;	// IMP=0x000000000005e094
- (void)formIntersectionWithCharacterSet:(id)arg1;	// IMP=0x000000000005e08c
- (void)formUnionWithCharacterSet:(id)arg1;	// IMP=0x000000000005e084
- (void)removeCharactersInString:(id)arg1;	// IMP=0x000000000005e07c
- (void)addCharactersInString:(id)arg1;	// IMP=0x000000000005e074
- (void)removeCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005e069
- (void)addCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005e05e
- (id)invertedSet;	// IMP=0x000000000005e047
- (id)bitmapRepresentation;	// IMP=0x000000000005e030
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x000000000005e01e
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x000000000005e00b
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x000000000005dff9
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x000000000005dfe7
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005dfdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005dfd3
- (unsigned long long)retainCount;	// IMP=0x000000000005dfb3
- (_Bool)_isDeallocating;	// IMP=0x000000000005dfa3
- (_Bool)_tryRetain;	// IMP=0x000000000005df92
- (oneway void)release;	// IMP=0x000000000005df8d
- (id)retain;	// IMP=0x000000000005df88
- (unsigned long long)hash;	// IMP=0x000000000005df83
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005df60

@end

