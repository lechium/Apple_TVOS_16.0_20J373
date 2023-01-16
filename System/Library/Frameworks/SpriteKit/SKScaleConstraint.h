//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKScaleConstraint : SKConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x00600000000e7cd6
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x00600000000e7c2c
+ (id)constraintWithScaleRange:(id)arg1;	// IMP=0x00600000000e7bc4
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00600000000e7b30
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e7606
- (void).cxx_destruct;	// IMP=0x00000000000e7dce
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToScaleConstraint:(id)arg1;	// IMP=0x00000000000e79dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e790c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7817
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e76d9
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000e760e

@end

