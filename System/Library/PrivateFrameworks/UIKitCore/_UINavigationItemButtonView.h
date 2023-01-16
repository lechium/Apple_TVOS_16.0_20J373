//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView
{
    long long _style;	// 240 = 0xf0
    _Bool _pressed;	// 248 = 0xf8
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 256 = 0x100
    _Bool _customBackgroundImageChangedToOrFromNil;	// 264 = 0x108
    UIImageView *_backgroundImageView;	// 272 = 0x110
    UIImageView *_imageView;	// 280 = 0x118
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 288 = 0x120
    unsigned long long _abbreviatedTitleIndex;	// 296 = 0x128
    UIColor *_accessibilityBackgroundTintColor;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000001738bf
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001737a7
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000017379f
- (void)_backSelectGestureChanged:(id)arg1;	// IMP=0x00000000001736a7
- (void)_uninstallBackSelectGestureRecognizer;	// IMP=0x000000000017364b
- (void)_installBackSelectGestureRecognizer;	// IMP=0x0000000000173584
- (void)_updateBackSelectGestureRecognizer;	// IMP=0x00000000001734a8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000173496
- (void)didMoveToWindow;	// IMP=0x0000000000173455
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001732fd
- (_Bool)canBecomeFocused;	// IMP=0x00000000001732f5
- (Class)_appearanceGuideClass;	// IMP=0x00000000001732e4
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000172dbf
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000172ce7
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000172cd5
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000172b15
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000172af8
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000172ae6
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001729f4
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001729ee
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001729e8
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x00000000001729d6
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001729d0
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x00000000001729ca
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000017293c
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000017292a
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000172658
- (_Bool)hasCustomBackgroundImage;	// IMP=0x000000000017261a
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;	// IMP=0x0000000000172609
- (_Bool)customBackgroundImageChangedToOrFromNil;	// IMP=0x00000000001725f9
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000001725dc
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001725ca
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000017250a
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x0000000000172467
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000172461
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000017245b
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000172455
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000017244f
- (void)dealloc;	// IMP=0x00000000001723cd
- (id)_defaultFont;	// IMP=0x000000000017215d
- (_Bool)pressed;	// IMP=0x000000000017214d
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x000000000017208b
- (void)setPressed:(_Bool)arg1;	// IMP=0x0000000000172074
- (void)setStyle:(long long)arg1;	// IMP=0x0000000000172060
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000171d59
- (struct CGSize)imageSize;	// IMP=0x0000000000171c1e
- (id)image;	// IMP=0x0000000000171baa
- (id)title;	// IMP=0x0000000000171a44
- (void)layoutSubviews;	// IMP=0x00000000001710b9
- (id)backgroundImageView;	// IMP=0x00000000001710a4
- (double)_titleYAdjustmentCustomization;	// IMP=0x000000000017109b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000170d1c
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000170cbc
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;	// IMP=0x0000000000170aa2
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x0000000000170a0e
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x0000000000170918
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x000000000017078e
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x0000000000170786
- (id)_appearanceStorage;	// IMP=0x0000000000170771
- (void)tintColorDidChange;	// IMP=0x000000000017071b
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000170682
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x0000000000170670
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x0000000000170639
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000170516
- (_Bool)_suppressesBackIndicatorView;	// IMP=0x00000000001704b4
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x0000000000170483
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x00000000001703d4
- (void)_resetRenderingModesForAccessibilityBackgrounds;	// IMP=0x0000000000170204
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x000000000017019e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

