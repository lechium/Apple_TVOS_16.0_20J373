//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFormatter.h"

@class NSLocale, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface NSUnitFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatter;	// 8 = 0x8
    unsigned long long _unitOptions;	// 16 = 0x10
    long long _unitStyle;	// 24 = 0x18
    struct UAMeasureFormat *_formatter;	// 32 = 0x20
    struct UPluralRules *_prules;	// 40 = 0x28
    _Bool _modified;	// 48 = 0x30
    NSLocale *_locale;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005f3175
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f317d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005f3071
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005f2daa
- (id)stringFromUnit:(id)arg1;	// IMP=0x00000000005f2a9e
- (id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2;	// IMP=0x00000000005f2696
- (id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4;	// IMP=0x00000000005f23ae
- (id)stringForValue:(double)arg1 unit:(unsigned long long)arg2;	// IMP=0x00000000005f2044
- (id)stringForObjectValue:(id)arg1;	// IMP=0x00000000005f061b
- (void)checkIfModified;	// IMP=0x00000000005f0322
- (int)_determineUnitsToFormat:(int *)arg1 fromMeasurement:(id)arg2;	// IMP=0x00000000005efef6
@property(copy) NSLocale *locale;
@property long long unitStyle;
@property unsigned long long unitOptions;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;	// IMP=0x00000000005efc20
- (id)init;	// IMP=0x00000000005efba0

@end

