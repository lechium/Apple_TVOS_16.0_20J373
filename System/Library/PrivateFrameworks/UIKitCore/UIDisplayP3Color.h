//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDisplayP3Color : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000075c48b
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000075c285
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000075c1a5
- (double)alphaComponent;	// IMP=0x000000000075c193
- (struct CGColor *)CGColor;	// IMP=0x000000000075c13d
- (unsigned long long)hash;	// IMP=0x000000000075c0b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075be81
- (_Bool)_isDeepColor;	// IMP=0x000000000075bdcb
- (id)description;	// IMP=0x000000000075bd2d
- (id)colorSpaceName;	// IMP=0x000000000075bd20
- (void)setStroke;	// IMP=0x000000000075bcd5
- (void)setFill;	// IMP=0x000000000075bc8a
- (void)set;	// IMP=0x000000000075bc27
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x000000000075bb11
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000075ba73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000075ba68
- (void)dealloc;	// IMP=0x000000000075ba27
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000075b8d1

@end

