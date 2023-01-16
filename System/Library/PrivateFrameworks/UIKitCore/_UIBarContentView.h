//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIImage, UIImageSymbolConfiguration, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarContentView : UIView
{
    _Bool _centerTextButtons;	// 8 = 0x8
    Class _appearanceGuideClass;	// 16 = 0x10
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 24 = 0x18
    UIImage *_backIndicatorMaskImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000225d83
@property(retain, nonatomic) UIImage *backIndicatorMaskImage; // @synthesize backIndicatorMaskImage=_backIndicatorMaskImage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(nonatomic) _Bool centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;	// IMP=0x0000000000225cfd
@property(retain, nonatomic) UIImage *backIndicatorImage;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000225cd2
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000225cc0
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000225b16
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225b04
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225a53
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225a41
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225881
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000022586f
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000225665
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225653
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225493
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225481
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000225383
- (void)_setTintColor:(id)arg1;	// IMP=0x0000000000225371
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x00000000002252b8
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x00000000002252a6
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000225048
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000225036
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000022501b
- (void)_appearanceChanged;	// IMP=0x0000000000224fde
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (double)absorptionForItem:(id)arg1;	// IMP=0x0000000000224fc3
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;	// IMP=0x0000000000224fa6
@property(readonly, nonatomic) _Bool isRTL;
@property(readonly, nonatomic) _Bool compactMetrics;
@property(readonly, nonatomic) long long barType;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000224f10

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end
