//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSAttributedString, NSString, UIBarButtonItem, UIButton, UIColor, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarScopeBarBackground;
@protocol _UINavigationBarTitleViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderTVOS
{
    struct UIEdgeInsets _effectiveContentInset;	// 8 = 0x8
    _UISearchBarAppearanceStorage *_appearanceStorage;	// 40 = 0x28
    UIBarButtonItem *_animatedAppearanceBarButtonItem;	// 48 = 0x30
    UINavigationItem *_searchNavigationItem;	// 56 = 0x38
    id _searchDisplayController;	// 64 = 0x40
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsScopeBar:1;
        unsigned int isAnimatingScopeBarIn:1;
        unsigned int isAnimatingScopeBarOut:1;
    } _searchBarVisualProviderFlags;	// 72 = 0x48
    UILabel *_helperPlaceholderLabel;	// 80 = 0x50
    _Bool _forceShiftHelperMessage;	// 88 = 0x58
    UISearchBarTextField *_searchField;	// 96 = 0x60
    UISearchBarBackground *_searchBarBackground;	// 104 = 0x68
    _UIBackdropView *_backdrop;	// 112 = 0x70
    UIVisualEffectView *_backdropVisualEffectView;	// 120 = 0x78
    UIView *_searchBarClippingView;	// 128 = 0x80
    UIButton *_cancelButton;	// 136 = 0x88
    UIBarButtonItem *_cancelBarButtonItem;	// 144 = 0x90
    NSString *_cancelButtonText;	// 152 = 0x98
    UINavigationButton *_leftButton;	// 160 = 0xa0
    UILabel *_promptLabel;	// 168 = 0xa8
    UIImageView *_separator;	// 176 = 0xb0
    UISegmentedControl *_scopeBar;	// 184 = 0xb8
    UIView *_scopeBarContainerView;	// 192 = 0xc0
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;	// 200 = 0xc8
    NSArray *_scopeTitles;	// 208 = 0xd0
    long long _selectedScope;	// 216 = 0xd8
    unsigned long long _backdropStyle;	// 224 = 0xe0
    UIColor *_barTintColor;	// 232 = 0xe8
    long long _barPosition;	// 240 = 0xf0
    unsigned long long _scopeBarPosition;	// 248 = 0xf8
    double _tableViewIndexWidth;	// 256 = 0x100
    long long _navBarTitleViewLocation;	// 264 = 0x108
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;	// 272 = 0x110
    id <_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;	// 280 = 0x118
    UIImageView *_shadowView;	// 288 = 0x120
    NSAttributedString *_originalPlaceholderText;	// 296 = 0x128
    struct UIEdgeInsets _minimumContentInsetPrivate;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000039a599
@property(retain, nonatomic) NSAttributedString *originalPlaceholderText; // @synthesize originalPlaceholderText=_originalPlaceholderText;
- (id)shadowView;	// IMP=0x000000000039a563
- (id)animatedAppearanceBarButtonItem;	// IMP=0x000000000039a552
- (void)setNavBarTitleViewDataSource:(id)arg1;	// IMP=0x000000000039a53e
- (id)navBarTitleViewDataSource;	// IMP=0x000000000039a525
- (void)setNavBarTitleViewOverlayRects:(id)arg1;	// IMP=0x000000000039a511
- (id)navBarTitleViewOverlayRects;	// IMP=0x000000000039a500
- (void)setNavBarTitleViewLocation:(long long)arg1;	// IMP=0x000000000039a4ef
- (long long)navBarTitleViewLocation;	// IMP=0x000000000039a4de
- (void)setTableViewIndexWidth:(double)arg1;	// IMP=0x000000000039a4cc
- (double)tableViewIndexWidth;	// IMP=0x000000000039a4ba
- (struct UIEdgeInsets)minimumContentInset;	// IMP=0x000000000039a49a
- (struct UIEdgeInsets)effectiveContentInset;	// IMP=0x000000000039a47a
- (void)setScopeBarPosition:(unsigned long long)arg1;	// IMP=0x000000000039a469
- (unsigned long long)scopeBarPosition;	// IMP=0x000000000039a458
- (void)setBarTintColor:(id)arg1;	// IMP=0x000000000039a444
- (id)barTintColor;	// IMP=0x000000000039a433
- (unsigned long long)backdropStyle;	// IMP=0x000000000039a422
- (void)setSelectedScope:(long long)arg1;	// IMP=0x000000000039a411
- (long long)selectedScope;	// IMP=0x000000000039a400
- (id)scopeTitles;	// IMP=0x000000000039a3ef
- (void)setScopeBarBackgroundView:(id)arg1;	// IMP=0x000000000039a3db
- (id)scopeBarBackgroundView;	// IMP=0x000000000039a3ca
- (id)scopeBarContainerView;	// IMP=0x000000000039a3b9
- (void)setScopeBar:(id)arg1;	// IMP=0x000000000039a3a5
- (id)scopeBar;	// IMP=0x000000000039a394
- (void)setSeparator:(id)arg1;	// IMP=0x000000000039a380
- (id)separator;	// IMP=0x000000000039a36f
- (void)setPromptLabel:(id)arg1;	// IMP=0x000000000039a35b
- (id)promptLabel;	// IMP=0x000000000039a34a
- (id)leftButton;	// IMP=0x000000000039a339
- (void)setCancelButtonText:(id)arg1;	// IMP=0x000000000039a328
- (id)cancelButtonText;	// IMP=0x000000000039a317
- (id)cancelBarButtonItem;	// IMP=0x000000000039a306
- (void)setCancelButton:(id)arg1;	// IMP=0x000000000039a2f2
- (id)cancelButton;	// IMP=0x000000000039a2e1
- (id)searchBarClippingView;	// IMP=0x000000000039a2d0
- (void)setBackdropVisualEffectView:(id)arg1;	// IMP=0x000000000039a2bc
- (id)backdropVisualEffectView;	// IMP=0x000000000039a2ab
- (void)setBackdrop:(id)arg1;	// IMP=0x000000000039a297
- (id)backdrop;	// IMP=0x000000000039a286
- (void)setSearchBarBackground:(id)arg1;	// IMP=0x000000000039a272
- (id)searchBarBackground;	// IMP=0x000000000039a261
- (void)setSearchField:(id)arg1;	// IMP=0x000000000039a24d
- (void)prepareFromAbandonedVisualProvider:(id)arg1;	// IMP=0x0000000000399ba2
- (void)setUpSearchNavigationItemWithSizingOption:(unsigned long long)arg1;	// IMP=0x00000000003993e9
- (id)searchNavigationItem;	// IMP=0x00000000003992a8
- (id)searchDisplayController;	// IMP=0x000000000039928f
- (void)setSearchDisplayController:(id)arg1;	// IMP=0x00000000003991cb
- (_Bool)wantsDictationButton;	// IMP=0x00000000003991c3
- (long long)barMetricsForOrientation:(long long)arg1;	// IMP=0x00000000003990de
- (void)allowCursorToAppear:(_Bool)arg1;	// IMP=0x0000000000399011
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;	// IMP=0x0000000000398dfe
- (id)makeShadowView;	// IMP=0x0000000000398c5e
- (_Bool)shouldDisplayShadow;	// IMP=0x0000000000398b30
- (id)navigationBarForShadow;	// IMP=0x00000000003989f9
- (void)setBackgroundLayoutNeedsUpdate;	// IMP=0x00000000003989e7
- (void)updateBackgroundToBackdropStyle:(long long)arg1;	// IMP=0x0000000000398665
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(_Bool)arg1;	// IMP=0x0000000000398465
- (_Bool)isAtTop;	// IMP=0x00000000003981c1
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x0000000000397955
- (void)layoutSubviews;	// IMP=0x00000000003978dc
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;	// IMP=0x00000000003978d4
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;	// IMP=0x00000000003978cc
- (double)availableBoundsWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000397844
- (double)landscapeScopeBarWidth;	// IMP=0x00000000003977cc
- (double)landscapeSearchFieldWidth;	// IMP=0x0000000000397742
- (double)availableBoundsWidth;	// IMP=0x00000000003976c0
- (_Bool)searchFieldWidthShouldBeFlexible;	// IMP=0x00000000003975f4
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000397528
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003972d5
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;	// IMP=0x00000000003971df
- (double)navigationBarContentHeight;	// IMP=0x00000000003971d6
- (double)defaultHeightForOrientation:(long long)arg1;	// IMP=0x0000000000397190
- (double)_defaultWidth;	// IMP=0x000000000039714a
- (double)defaultHeight;	// IMP=0x000000000039713c
- (double)barHeightForBarMetrics:(long long)arg1;	// IMP=0x000000000039712e
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;	// IMP=0x0000000000397120
- (double)searchFieldHeight;	// IMP=0x0000000000397112
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000397104
- (_Bool)scopeBarIsVisible;	// IMP=0x00000000003970bf
- (_Bool)containsScopeBar;	// IMP=0x0000000000397064
- (_Bool)useRelaxedScopeLayout;	// IMP=0x000000000039705c
- (void)getScopeBarHeight:(double *)arg1 containerHeight:(double *)arg2;	// IMP=0x0000000000396fe1
- (double)scopeBarHeight;	// IMP=0x0000000000396fba
- (struct UIEdgeInsets)scopeBarInsets;	// IMP=0x0000000000396f9c
- (void)updateEffectiveContentInset;	// IMP=0x0000000000396da0
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;	// IMP=0x0000000000396c93
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;	// IMP=0x0000000000396bbb
- (_Bool)alwaysUsesLayoutMarginsForHorizontalContentInset;	// IMP=0x0000000000396bb3
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;	// IMP=0x0000000000396b77
- (_Bool)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(_Bool)arg3;	// IMP=0x0000000000396600
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x0000000000396532
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x00000000003963e5
- (void)setClippingViewBounds:(struct CGRect)arg1;	// IMP=0x00000000003962c6
- (void)setClippingViewActive:(_Bool)arg1;	// IMP=0x0000000000396226
- (void)setShowsSeparator:(_Bool)arg1;	// IMP=0x000000000039611e
- (_Bool)isFrozenForDismissalCrossfade;	// IMP=0x0000000000396116
- (void)_setupHelperPlaceholder;	// IMP=0x000000000039600d
- (void)setUpSearchField;	// IMP=0x0000000000395ce5
- (void)setUpScopeBar;	// IMP=0x000000000039596f
- (void)setUpPromptLabel;	// IMP=0x000000000039552b
- (void)updateSearchFieldArt;	// IMP=0x0000000000395240
- (void)updateScopeBarFrame;	// IMP=0x0000000000394cbf
- (void)updateSearchBarOpacity;	// IMP=0x0000000000394c5c
- (void)updateScopeBarForSelectedScope;	// IMP=0x0000000000394c31
- (void)updateScopeBarBackground;	// IMP=0x0000000000394a3a
- (void)setHelperPlaceholderHidden:(_Bool)arg1;	// IMP=0x00000000003949b1
- (void)setHelperPlaceholderOverride:(id)arg1;	// IMP=0x00000000003947b0
- (void)setHelperPlaceholder:(id)arg1;	// IMP=0x00000000003946a3
- (void)updatePlaceholderColor;	// IMP=0x00000000003945ca
- (void)updateNeedForBackdrop;	// IMP=0x000000000039447c
- (void)updateDictationButton;	// IMP=0x0000000000394476
- (void)_removeBackdropVisualEffectView;	// IMP=0x000000000039443e
- (void)_removeLegacyBackdropView;	// IMP=0x0000000000394406
- (void)updateMagnifyingGlassView;	// IMP=0x000000000039416c
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;	// IMP=0x00000000003940cf
- (void)updateForDrawsBackgroundInPalette;	// IMP=0x00000000003940c9
- (_Bool)isLegacy;	// IMP=0x00000000003940c1
- (void)updateForSemanticContext;	// IMP=0x00000000003940bb
- (void)updateForDynamicType;	// IMP=0x00000000003940b5
- (void)applySearchBarStyle;	// IMP=0x0000000000393e12
- (id)effectiveBarTintColor;	// IMP=0x0000000000393dfd
- (void)effectiveBarTintColorDidChange:(_Bool)arg1;	// IMP=0x0000000000393c86
- (void)setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x0000000000393c3a
- (void)_setBarTintColor:(id)arg1;	// IMP=0x0000000000393bb3
- (id)textColor;	// IMP=0x0000000000393a66
- (id)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;	// IMP=0x00000000003937f1
- (_Bool)hasDarkUIAppearance;	// IMP=0x000000000039373b
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000039371e
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000003936e5
- (struct UIOffset)searchFieldBackgroundPositionAdjustment;	// IMP=0x0000000000393678
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000393515
- (id)scopeBarBackgroundImage;	// IMP=0x00000000003934f8
- (void)setScopeBarBackgroundImage:(id)arg1;	// IMP=0x0000000000393442
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x0000000000393418
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x0000000000393289
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;	// IMP=0x0000000000392ceb
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x0000000000392cd6
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x0000000000392cab
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000392be3
- (void)setSeparatorImage:(id)arg1;	// IMP=0x0000000000392afb
- (id)separatorImage;	// IMP=0x0000000000392ade
- (id)currentSeparatorImage;	// IMP=0x00000000003929d7
- (void)destroyPromptLabel;	// IMP=0x000000000039299f
- (void)destroyCancelButton;	// IMP=0x0000000000392967
- (void)teardown;	// IMP=0x00000000003927be
- (id)runtimeOnlyViews;	// IMP=0x0000000000392688
- (void)prepare;	// IMP=0x0000000000392493
- (id)searchFieldIfExists;	// IMP=0x000000000039247e
- (id)searchField;	// IMP=0x0000000000392447
- (id)prompt;	// IMP=0x000000000039242a
- (void)setPrompt:(id)arg1;	// IMP=0x000000000039231b
- (long long)barPosition;	// IMP=0x00000000003922e9
- (void)setBarPosition:(long long)arg1;	// IMP=0x00000000003921d6
- (void)setBackdropStyle:(unsigned long long)arg1;	// IMP=0x0000000000391fb6
- (void)setMinimumContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000391f5e
- (void)setScopeTitles:(id)arg1;	// IMP=0x0000000000391c97
- (void)setDisableDictationButton:(_Bool)arg1;	// IMP=0x0000000000391c91
- (_Bool)backgroundLayoutNeedsUpdate;	// IMP=0x0000000000391c7b
- (_Bool)showsScopeBar;	// IMP=0x0000000000391c68
- (void)_setShowsScopeBar:(_Bool)arg1;	// IMP=0x0000000000391c4b
- (void)setShowsScopeBar:(_Bool)arg1;	// IMP=0x0000000000391c37
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;	// IMP=0x00000000003918cf
- (_Bool)drawsBackground;	// IMP=0x00000000003918ba
- (void)_setHideBackground:(_Bool)arg1;	// IMP=0x000000000039189d
- (void)setDrawsBackground:(_Bool)arg1;	// IMP=0x0000000000391850
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000391606
- (_Bool)isEnabled;	// IMP=0x00000000003915f1
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000003915dd
- (long long)searchFieldLeftViewMode;	// IMP=0x00000000003915c7
- (void)setSearchFieldLeftViewMode:(long long)arg1;	// IMP=0x0000000000391584
- (long long)barTranslucence;	// IMP=0x000000000039156e
- (void)_setBarTranslucence:(long long)arg1;	// IMP=0x000000000039154e
- (void)setBarTranslucence:(long long)arg1;	// IMP=0x00000000003914db
- (_Bool)isTranslucent;	// IMP=0x00000000003914c0
- (unsigned long long)searchBarStyle;	// IMP=0x00000000003914aa
- (void)setSearchBarStyle:(unsigned long long)arg1;	// IMP=0x0000000000391431
- (long long)barStyle;	// IMP=0x000000000039141e
- (void)_setBarStyle:(long long)arg1;	// IMP=0x0000000000391403
- (void)setBarStyle:(long long)arg1;	// IMP=0x00000000003911ea

@end

