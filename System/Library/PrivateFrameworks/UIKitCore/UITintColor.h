//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITintColor
{
}

- (id)colorSpaceName;	// IMP=0x0000000000769550
- (_Bool)_isDeepColor;	// IMP=0x00000000007694a9
- (_Bool)isPatternColor;	// IMP=0x0000000000769402
- (double)alphaComponent;	// IMP=0x000000000076935b
- (struct CGColor *)CGColor;	// IMP=0x00000000007692ae
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007691d9
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000769104
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000769049
- (void)setStroke;	// IMP=0x0000000000768fac
- (void)setFill;	// IMP=0x0000000000768f0f
- (void)set;	// IMP=0x0000000000768e72
- (unsigned long long)hash;	// IMP=0x0000000000768e58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000768e4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000768e02
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x0000000000768cde
- (_Bool)_isDynamicTintColor;	// IMP=0x0000000000768cd6
- (id)init;	// IMP=0x0000000000768c83

@end
