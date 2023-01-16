//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_iOS.h"

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    NSLayoutConstraint *_trailingRegionLeadingAnchorConstraint;	// 16 = 0x10
    NSLayoutConstraint *_leadingRegionTrailingAnchorConstraint;	// 24 = 0x18
    _UIStatusBarDisplayItemPlacement *_datePlacement;	// 32 = 0x20
    _UIStatusBarDisplayItemPlacement *_timePlacement;	// 40 = 0x28
}

+ (double)baselineOffset;	// IMP=0x0060000000d65a91
+ (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x0060000000d65a49
+ (double)height;	// IMP=0x0060000000d65a2d
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;	// IMP=0x0060000000d6596d
- (void).cxx_destruct;	// IMP=0x0000000000d6a26a
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement; // @synthesize timePlacement=_timePlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement; // @synthesize datePlacement=_datePlacement;
@property(retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint; // @synthesize leadingRegionTrailingAnchorConstraint=_leadingRegionTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint; // @synthesize trailingRegionLeadingAnchorConstraint=_trailingRegionLeadingAnchorConstraint;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;	// IMP=0x0000000000d6a15b
- (double)airplaneSpeedForAnimationType:(long long)arg1;	// IMP=0x0000000000d6a0eb
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;	// IMP=0x0000000000d69e8a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000d69dc4
- (void)_dateTimePreferencesUpdated;	// IMP=0x0000000000d69d64
- (_Bool)_updateDateAndTimePlacements;	// IMP=0x0000000000d69c77
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000d69b38
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;	// IMP=0x0000000000d699f7
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1 withAnimationSettings:(id)arg2 interactively:(_Bool)arg3;	// IMP=0x0000000000d69979
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect)arg1;	// IMP=0x0000000000d69484
- (void)statusBarEnabledPartsUpdated;	// IMP=0x0000000000d68e11
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000d68b66
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000d68a38
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000d68840
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x0000000000d6865a
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000d68412
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000d68259
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000d6734c
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000d65e87
- (void)dealloc;	// IMP=0x0000000000d65dfd
- (id)init;	// IMP=0x0000000000d65d61
- (id)clockFont;	// IMP=0x0000000000d65ca6
- (id)pillSmallFont;	// IMP=0x0000000000d65c2e
- (id)pillFont;	// IMP=0x0000000000d65bb6
- (id)expandedFont;	// IMP=0x0000000000d65b3e
- (id)normalFont;	// IMP=0x0000000000d65ac6
- (struct CGSize)smallPillSize;	// IMP=0x0000000000d65ab5
- (struct CGSize)pillSize;	// IMP=0x0000000000d65a9f
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets expandedEdgeInsets;
- (double)regionSpacing;	// IMP=0x0000000000d65a3b

@end
