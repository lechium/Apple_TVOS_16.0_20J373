//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x00600000004b900f
+ (void)initialize;	// IMP=0x00600000004b8f79
- (void).cxx_destruct;	// IMP=0x00000000004b92d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b92c6
- (unsigned long long)hash;	// IMP=0x00000000004b92a9
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000004b928c
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000004b926f
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000004b9252
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000004b9235
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000004b9218
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004b91fb
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004b91de
- (unsigned long long)length;	// IMP=0x00000000004b91c1
- (void)dealloc;	// IMP=0x00000000004b911c
- (id)initWithString:(id)arg1;	// IMP=0x00000000004b8fea

@end

