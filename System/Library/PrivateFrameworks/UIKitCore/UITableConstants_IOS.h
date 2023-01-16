//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_IOS : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000000e1fca8
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000000e232a5
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000000e23170
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000000e22f31
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000000e22e59
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000000e22dae
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000000e22da5
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000000e22d9c
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000000e22d93
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e22d85
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000000e22d7d
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000000e22d6f
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e22ba7
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e22ad7
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000000e22ac9
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000000e229e3
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000000e2292b
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e22878
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000000e2280c
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000e22759
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000000e226ed
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e226cf
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e226c6
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e226b8
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e2265e
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000000e22570
- (id)defaultOutlineDisclosureImageForView:(id)arg1;	// IMP=0x0000000000e224c8
- (id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg1;	// IMP=0x0000000000e22403
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000e2232a
- (id)_defaultCircleDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x0000000000e221e4
- (id)_defaultDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x0000000000e2211f
- (id)_symbolImageNamed:(id)arg1 withTextStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x0000000000e22086
- (id)_accessoryTintColorForAccessoryBaseColor:(id)arg1;	// IMP=0x0000000000e22054
- (id)_defaultAccessoryTintColor;	// IMP=0x0000000000e21fe6
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floating:(_Bool)arg3;	// IMP=0x0000000000e21dab
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000000e21d95
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000000e21d62
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e21ceb
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000e21c74
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e21bf3
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e21b72
- (id)defaultPlainHeaderFooterFont;	// IMP=0x0000000000e21ad3
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e21aa1
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e219d2
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000000e218c3
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000e21896
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000000e217fc
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;	// IMP=0x0000000000e217ae
- (id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;	// IMP=0x0000000000e21757
- (id)defaultSidebarHeaderFont;	// IMP=0x0000000000e21734
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;	// IMP=0x0000000000e2171a
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000000e21620
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e215ce
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e21587
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e21540
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000000e21524
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e21512
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000000e21503
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e214ef
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e214aa
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000e21493
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x0000000000e2148b
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x0000000000e21478
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x0000000000e21454
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000000e2134e
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000000e2130f
- (double)_defaultMarginWidthForTableView:(id)arg1 canUseLayoutMargins:(_Bool)arg2;	// IMP=0x0000000000e210ea
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000000e210e1
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000000e210d8
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x0000000000e210c6
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000000e210a2
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000000e21086
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000000e20ddd
- (double)defaultCellCornerRadius;	// IMP=0x0000000000e20dd4
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000000e20d6d
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000e20d09
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e20c6a
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000000e20c44
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000000e20c36
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e20c1a
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000000e20bef
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e20bc4
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e20b99
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e20b91
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x0000000000e20b03
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000e20a76
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e2092a
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e20842
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000000e2082b
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000e20809
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000e2074f
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e2072c
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000e20672
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000e205e6
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000000e205de
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000000e205ca
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000000e205bc
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e205b1
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000e2053e
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000e20493
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000e20131
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000000e1fe1d
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000000e1fdf4
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e1fd81
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e1fd79
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000e1fd3f
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000000e1fd37
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000000e1fd2e
- (id)sidebarVariant;	// IMP=0x0000000000e1fd25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
