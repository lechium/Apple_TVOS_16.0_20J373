//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory10Key_Round
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x00000000009033ec
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000902b0f
- (_Bool)shouldUseRoundCornerForKey:(id)arg1;	// IMP=0x0000000000902af3
- (id)shiftLockControlKeyTraits;	// IMP=0x0000000000902a72
- (id)shiftedControlKeyTraits;	// IMP=0x00000000009028e3
- (id)activeControlKeyTraits;	// IMP=0x00000000009027af
- (id)controlKeyTraits;	// IMP=0x00000000009025cb
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x0000000000902582
- (id)controlKeyBackgroundColorName;	// IMP=0x0000000000902517
- (id)controlKeyShadowColorName;	// IMP=0x0000000000902505
- (id)defaultKeyShadowColorName;	// IMP=0x00000000009024a7
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 onKeyplane:(id)arg4;	// IMP=0x00000000009021c4
- (unsigned long long)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x00000000009021b7
- (unsigned long long)edgesWithInsetsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x00000000009021ac
- (_Bool)useRoundCorner;	// IMP=0x00000000009021a4
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000902186
- (struct UIEdgeInsets)symbolFrameInsets;	// IMP=0x000000000090216f

@end

