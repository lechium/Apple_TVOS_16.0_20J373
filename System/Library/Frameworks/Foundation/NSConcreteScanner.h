//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSScanner.h"

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner
{
    NSString *scanString;	// 8 = 0x8
    NSCharacterSet *skipSet;	// 16 = 0x10
    NSCharacterSet *invertedSkipSet;	// 24 = 0x18
    id locale;	// 32 = 0x20
    unsigned long long scanLocation;	// 40 = 0x28
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000005566f9
- (_Bool)scanLongLong:(long long *)arg1;	// IMP=0x00000000005566cf
- (_Bool)scanInt:(int *)arg1;	// IMP=0x00000000005566a5
- (id)locale;	// IMP=0x0000000000556687
- (void)setLocale:(id)arg1;	// IMP=0x0000000000556649
- (_Bool)caseSensitive;	// IMP=0x0000000000556637
- (void)setCaseSensitive:(_Bool)arg1;	// IMP=0x000000000055661f
- (id)charactersToBeSkipped;	// IMP=0x0000000000556601
- (void)setCharactersToBeSkipped:(id)arg1;	// IMP=0x0000000000556596
- (unsigned long long)scanLocation;	// IMP=0x0000000000556585
- (void)setScanLocation:(unsigned long long)arg1;	// IMP=0x00000000005564d5
- (id)_invertedSkipSet;	// IMP=0x0000000000556412
- (id)string;	// IMP=0x00000000005563f4
- (id)initWithString:(id)arg1;	// IMP=0x000000000055631d

@end

