//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupDisplayContext : NSObject
{
    NSString *_headingKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000118c2
- (void).cxx_destruct;	// IMP=0x0020000000011c37
@property(readonly, retain, nonatomic) NSString *headingKind; // @synthesize headingKind=_headingKind;
- (id)description;	// IMP=0x0010000000011b8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000011a84
- (unsigned long long)hash;	// IMP=0x0010000000011a09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000119fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000011985
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000118ca
- (id)initWithHeadingKind:(id)arg1;	// IMP=0x0010000000011857

@end
