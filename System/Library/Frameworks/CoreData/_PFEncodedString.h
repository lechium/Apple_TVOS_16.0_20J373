//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFEncodedString
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _length;	// 12 = 0xc
    id _sourceData;	// 16 = 0x10
}

- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000007742f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000771bf
- (unsigned long long)hash;	// IMP=0x0000000000077191
- (unsigned long long)cStringLength;	// IMP=0x0000000000077181
- (void)getCString:(char *)arg1;	// IMP=0x000000000007714b
- (const char *)UTF8String;	// IMP=0x0000000000077141
- (_Bool)_isCString;	// IMP=0x0000000000077139
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000770f0
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x00000000000770b2
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007708e
- (unsigned long long)length;	// IMP=0x000000000007707e
- (void)dealloc;	// IMP=0x0000000000077078
- (_Bool)_tryRetain;	// IMP=0x000000000007705b
- (_Bool)_isDeallocating;	// IMP=0x000000000007703e
- (id)copy;	// IMP=0x0000000000076ff2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076fa6
- (unsigned long long)retainCount;	// IMP=0x0000000000076f89
- (oneway void)release;	// IMP=0x0000000000076f73
- (id)retain;	// IMP=0x0000000000076f4f
- (id)init;	// IMP=0x0000000000076f18

@end
