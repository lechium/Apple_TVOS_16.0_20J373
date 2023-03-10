//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005b8d5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005b872
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;	// IMP=0x000000000005c657
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005c611
- (void)setString:(id)arg1;	// IMP=0x000000000005c5cc
- (void)appendFormat:(id)arg1;	// IMP=0x000000000005c3eb
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005c3b2
- (void)appendString:(id)arg1;	// IMP=0x000000000005c36d
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005c339
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000005c261
- (_Bool)_isCString;	// IMP=0x000000000005c251
- (Class)classForCoder;	// IMP=0x000000000005c22e
- (unsigned long long)smallestEncoding;	// IMP=0x000000000005c21d
- (unsigned long long)fastestEncoding;	// IMP=0x000000000005c20c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c1f8
- (id)copy;	// IMP=0x000000000005c1e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c1d4
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;	// IMP=0x000000000005c0d9
- (_Bool)hasSuffix:(id)arg1;	// IMP=0x000000000005c0bc
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x000000000005c09f
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000005bf82
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005be65
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000005bd74
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x000000000005bc8b
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;	// IMP=0x000000000005bc01
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000005bb36
- (unsigned long long)cStringLength;	// IMP=0x000000000005ba9f
- (const char *)UTF8String;	// IMP=0x000000000005ba2e
- (const char *)cString;	// IMP=0x000000000005b9aa
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000005b975
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000005b970
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005b93e
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b8dd
- (unsigned long long)length;	// IMP=0x000000000005b8d8
- (unsigned long long)hash;	// IMP=0x000000000005b8d0
- (unsigned long long)retainCount;	// IMP=0x000000000005b8cb
- (_Bool)_isDeallocating;	// IMP=0x000000000005b8bb
- (_Bool)_tryRetain;	// IMP=0x000000000005b8aa
- (oneway void)release;	// IMP=0x000000000005b8a5
- (id)retain;	// IMP=0x000000000005b88d
- (_Bool)isNSString__;	// IMP=0x000000000005b88a

@end

