//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _PFResultUniString
{
    unsigned int _length;	// 16 = 0x10
}

+ (struct __CFAllocator *)cfDeallocator;	// IMP=0x0060000000077818
+ (unsigned long long)bufferOffset;	// IMP=0x006000000007780b
+ (void)initialize;	// IMP=0x0060000000077766
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000000779ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007796c
- (unsigned long long)hash;	// IMP=0x000000000007793e
- (unsigned long long)cStringLength;	// IMP=0x000000000007792e
- (void)getCString:(char *)arg1;	// IMP=0x00000000000778f8
- (_Bool)_isCString;	// IMP=0x00000000000778f0
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000778a7
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x0000000000077869
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077845
- (unsigned long long)length;	// IMP=0x0000000000077835
- (const char *)UTF8String;	// IMP=0x0000000000077825

@end

