//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UICollectionView, UIControl, UIScene, UITableView, UITextView, _UIFocusEnvironmentContainerTuple;
@protocol UIFocusItem, _UIFocusBehavior;

@protocol _UIFocusBehavior <NSObject>
+ (id <_UIFocusBehavior>)sharedInstance;
- (_Bool)supportsLinearMovementDebugOverlay;
- (_Bool)shouldCallAccessibilityOverrides;
- (_Bool)tabBasedMovementLoops;
- (long long)skipKeyCommandsForKeyEvents;
- (long long)deliverKeyEventsToFocusEngine;
- (_Bool)shouldSupressIndirectMovementOnSelect;
- (_Bool)shouldEnableFocusOnSelect;
- (long long)indirectMovementPriority;
- (_Bool)supportsTabKey;
- (long long)pageButtonScrollingStyle;
- (_Bool)supportsArrowKeys;
- (_Bool)supportsGameControllers;
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;
- (_Bool)supportsIndirectRotaryMovement;
- (_Bool)supportsIndirectPanningMovement;
- (_Bool)showsFocusRingForItem:(id <UIFocusItem>)arg1;
- (_Bool)supportsParentFocusRings;
- (long long)focusRingVisibility;
- (long long)buttonSelectionMode;
- (_Bool)refinesIndexBarTargetContentOffset;
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(_UIFocusEnvironmentContainerTuple *)arg1;
- (double)stabilizedLinearFocusMovementTimeout;
- (_Bool)wantsTreeLocking;
- (_Bool)throttlesProgrammaticFocusUpdates;
- (long long)focusCastingMode;
- (_Bool)supportsClipToBounds;
- (_Bool)supportViewTransparencyAndMultipleWindows;
- (_Bool)treatFirstAndLastHeadingsAsGlobal;
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(UITableView *)arg1;
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(UICollectionView *)arg1;
- (_Bool)preventsCellFocusabilityWhileEditing;
- (long long)cellFocusability;
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;
- (long long)scrollingMode;
- (_Bool)useDifferentialScrollTrigger;
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (unsigned long long)focusGroupContainmentBehavior;
- (unsigned long long)focusGroupMovementBehavior;
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;
- (_Bool)searchBarTextFieldCanBecomeFocused;
- (_Bool)tabBarButtonCanBecomeFocused;
- (_Bool)tabBarCanBecomeFocused;
- (_Bool)textViewCanBecomeFocused:(UITextView *)arg1;
- (_Bool)controlCanBecomeFocused:(UIControl *)arg1;
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)focusDeferral;
- (_Bool)syncsFocusAndResponder;
- (long long)requiredInputDevices;
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;
- (_Bool)wantsFocusSystemForScene:(UIScene *)arg1;
@end

