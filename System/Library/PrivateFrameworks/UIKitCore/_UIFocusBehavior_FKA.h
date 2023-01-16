//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_FKA : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00100000005c05bd
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x00000000005c0919
- (_Bool)shouldCallAccessibilityOverrides;	// IMP=0x00000000005c0911
- (_Bool)tabBasedMovementLoops;	// IMP=0x00000000005c0909
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x00000000005c0901
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x00000000005c08f9
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x00000000005c08f1
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x00000000005c08e9
- (long long)pageButtonScrollingStyle;	// IMP=0x00000000005c08e1
- (_Bool)supportsArrowKeys;	// IMP=0x00000000005c08d9
- (_Bool)supportsGameControllers;	// IMP=0x00000000005c088e
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x00000000005c0886
- (_Bool)supportsIndirectRotaryMovement;	// IMP=0x00000000005c087e
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x00000000005c0876
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x00000000005c086e
- (_Bool)supportsParentFocusRings;	// IMP=0x00000000005c0866
- (long long)focusRingVisibility;	// IMP=0x00000000005c085b
- (long long)buttonSelectionMode;	// IMP=0x00000000005c0853
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x00000000005c084b
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x00000000005c0797
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x00000000005c078e
- (_Bool)wantsTreeLocking;	// IMP=0x00000000005c0786
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x00000000005c077e
- (long long)focusCastingMode;	// IMP=0x00000000005c0776
- (_Bool)supportsClipToBounds;	// IMP=0x00000000005c0762
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x00000000005c074e
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x00000000005c0746
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x00000000005c073e
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x00000000005c0736
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x00000000005c072e
- (long long)cellFocusability;	// IMP=0x00000000005c0726
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x00000000005c071e
- (long long)scrollingMode;	// IMP=0x00000000005c0713
- (_Bool)useDifferentialScrollTrigger;	// IMP=0x00000000005c070b
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x00000000005c0703
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x00000000005c06f8
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x00000000005c06ed
- (long long)indirectMovementPriority;	// IMP=0x00000000005c06e5
- (_Bool)supportsTabKey;	// IMP=0x00000000005c06dd
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x00000000005c06d5
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x00000000005c06cd
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x00000000005c06c5
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x00000000005c06bd
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x00000000005c06a8
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x00000000005c06a0
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x00000000005c0698
- (long long)focusDeferral;	// IMP=0x00000000005c0690
- (_Bool)syncsFocusAndResponder;	// IMP=0x00000000005c0688
- (long long)requiredInputDevices;	// IMP=0x00000000005c0652
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x00000000005c064a
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x00000000005c0642

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

