//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UICGColor : UIColor
{
    struct CGColor *_cachedColor;	// 8 = 0x8
}

- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000759fba
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000759e28
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000759cc8
- (_Bool)isPatternColor;	// IMP=0x0000000000759ca4
- (double)alphaComponent;	// IMP=0x0000000000759c8f
- (struct CGColor *)CGColor;	// IMP=0x0000000000759c7e
- (unsigned long long)hash;	// IMP=0x0000000000759c60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000759ba4
- (_Bool)_isDeepColor;	// IMP=0x0000000000759a92
- (id)description;	// IMP=0x0000000000759995
- (id)colorSpaceName;	// IMP=0x0000000000759927
- (void)setStroke;	// IMP=0x00000000007598ec
- (void)setFill;	// IMP=0x00000000007598b1
- (void)set;	// IMP=0x0000000000759861
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x0000000000759811
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000759806
- (void)dealloc;	// IMP=0x00000000007597c5
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x0000000000759766

@end

