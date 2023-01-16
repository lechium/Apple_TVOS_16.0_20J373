//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint
{
    SKRange *_widthRange;	// 24 = 0x18
    SKRange *_heightRange;	// 32 = 0x20
}

+ (id)constraintWithHeightRange:(id)arg1;	// IMP=0x00600000000e74dd
+ (id)constraintWithWidthRange:(id)arg1;	// IMP=0x00600000000e7433
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x00600000000e739f
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e6e75
- (void).cxx_destruct;	// IMP=0x00000000000e75d5
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (_Bool)isEqualToSizeConstraint:(id)arg1;	// IMP=0x00000000000e724c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e717b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7086
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6f48
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x00000000000e6e7d

@end

