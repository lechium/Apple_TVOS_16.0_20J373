//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;	// 8 = 0x8
    unsigned short _characters[0];	// 12 = 0xc
}

+ (id)pathWithComponents:(id)arg1;	// IMP=0x0060000000520d00
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x00600000005208bd
- (id)stringByResolvingSymlinksInPath;	// IMP=0x0000000000522566
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;	// IMP=0x0000000000522426
- (id)stringByStandardizingPath;	// IMP=0x0000000000522412
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;	// IMP=0x00000000005222e0
- (id)stringByExpandingTildeInPath;	// IMP=0x00000000005220ca
- (id)stringByAbbreviatingWithTildeInPath;	// IMP=0x0000000000521e09
- (id)stringByAppendingPathExtension:(id)arg1;	// IMP=0x0000000000521993
- (id)stringByDeletingPathExtension;	// IMP=0x0000000000521944
- (id)pathExtension;	// IMP=0x0000000000521863
- (id)stringByAppendingPathComponent:(id)arg1;	// IMP=0x0000000000521520
- (id)stringByDeletingLastPathComponent;	// IMP=0x00000000005214b2
- (id)lastPathComponent;	// IMP=0x000000000052143a
- (_Bool)isAbsolutePath;	// IMP=0x0000000000521405
- (id)pathComponents;	// IMP=0x00000000005213e0
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000520b43
- (unsigned long long)hash;	// IMP=0x0000000000520b1e
- (id)copy;	// IMP=0x0000000000520b14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000520b0a
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000520afa
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000520a46
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005209ab
- (unsigned long long)length;	// IMP=0x0000000000520997

@end

