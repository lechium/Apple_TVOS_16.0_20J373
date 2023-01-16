//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString, UIAccessibilityHUDItem, UIColor, UIView, UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillView
{
    _Bool _pulsing;	// 8 = 0x8
    UIVisualEffect *_visualEffect;	// 16 = 0x10
    UIColor *_pillColor;	// 24 = 0x18
    UIView *_subviewForBaselineAlignment;	// 32 = 0x20
    CALayer *_pulseLayer;	// 40 = 0x28
    UIVisualEffectView *_visualEffectView;	// 48 = 0x30
    struct UIEdgeInsets _alignmentRectInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b67cb
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) CALayer *pulseLayer; // @synthesize pulseLayer=_pulseLayer;
@property(nonatomic) __weak UIView *subviewForBaselineAlignment; // @synthesize subviewForBaselineAlignment=_subviewForBaselineAlignment;
@property(retain, nonatomic) UIColor *pillColor; // @synthesize pillColor=_pillColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000b66d2
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x00000000000b655f
- (void)_updateBackgroundColor;	// IMP=0x00000000000b64ac
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000b646b
- (_Bool)isUserInteractionEnabled;	// IMP=0x00000000000b6422
- (_Bool)canBecomeFocused;	// IMP=0x00000000000b63d9
- (void)layoutSubviews;	// IMP=0x00000000000b6232
- (void)resumePersistentAnimation;	// IMP=0x00000000000b60c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b5e8e

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly, nonatomic) _Bool prefersCenterVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end
