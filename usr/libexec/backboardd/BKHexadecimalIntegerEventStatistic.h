//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKHexadecimalIntegerEventStatistic
{
    unsigned long long _value;	// 8 = 0x8
    long long _hexFormatModifier;	// 16 = 0x10
}

+ (id)statisticWithLabel:(id)arg1 hexFormatModifier:(long long)arg2;	// IMP=0x0040000000045e01
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000046158
- (void)reset;	// IMP=0x0010000000046118
- (void)excludeMask:(unsigned long long)arg1;	// IMP=0x00100000000460f8
- (void)includeMask:(unsigned long long)arg1;	// IMP=0x00100000000460db
- (void)excludeBitNumber:(long long)arg1;	// IMP=0x00100000000460b7
- (void)includeBitNumber:(long long)arg1;	// IMP=0x0010000000046093
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000045f25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000045ead
- (unsigned long long)hash;	// IMP=0x0010000000045e54

@end

