//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarPalette.h"

@class NSString, UINavigationController, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBridgingPalette : _UINavigationBarPalette
{
    UIView *_temporaryBackgroundView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000018f208
- (void)_setupBackgroundViewIfNecessary;	// IMP=0x000000000018f202
- (void)_resetHeightConstraintConstant;	// IMP=0x000000000018f1fc
- (void)_resetConstraintConstants:(double)arg1;	// IMP=0x000000000018f1f6
- (void)_enableConstraints;	// IMP=0x000000000018f1f0
- (void)_disableConstraints;	// IMP=0x000000000018f1ea
- (void)_configurePaletteConstraintsForBoundary;	// IMP=0x000000000018f1e4
- (void)_updateBackgroundConstraintsIfNecessary;	// IMP=0x000000000018f1de
- (_Bool)_shouldUpdateBackground;	// IMP=0x000000000018f1d6
- (void)_configureConstraintsForBackground:(id)arg1;	// IMP=0x000000000018f1d0
- (void)_setAttached:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x000000000018f1ca
- (void)_updateBackgroundView;	// IMP=0x000000000018f1c4
- (id)_attachedPinningTopBar;	// IMP=0x000000000018f1bc
- (_Bool)paletteIsHidden;	// IMP=0x000000000018f189
- (_Bool)isAttached;	// IMP=0x000000000018f156
@property(nonatomic) struct UIEdgeInsets preferredContentInsets;
@property(nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden;
@property(nonatomic) _Bool paletteShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowWasHidden;
@property(readonly, nonatomic) unsigned long long boundaryEdge;
@property(readonly, nonatomic) UINavigationController *navController;
- (void)_setLeftConstraintConstant:(double)arg1;	// IMP=0x000000000018f0ef
- (void)_setTopConstraintConstant:(double)arg1;	// IMP=0x000000000018f0e9
@property(nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)resetBackgroundConstraints;	// IMP=0x000000000018f0cf
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;	// IMP=0x000000000018f031
- (void)_setSize:(struct CGSize)arg1;	// IMP=0x000000000018f01c
- (void)setSize:(struct CGSize)arg1;	// IMP=0x000000000018f00a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPinned) _Bool pinned;
@property(readonly) Class superclass;

@end
