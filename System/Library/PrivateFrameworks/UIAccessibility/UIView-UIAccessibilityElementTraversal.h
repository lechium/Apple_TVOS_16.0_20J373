//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (UIAccessibilityElementTraversal)
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(_Bool)arg3;	// IMP=0x0050000000019f40
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;	// IMP=0x00500000000184e0
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;	// IMP=0x005000000009de10
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;	// IMP=0x001000000001a7c0
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;	// IMP=0x001000000001a620
- (void)_accessibilitySetIsSortingInUpperFrame:(_Bool)arg1;	// IMP=0x001000000001a5e0
- (_Bool)_accessibilityIsSortingInUpperFrame;	// IMP=0x001000000001a5b0
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;	// IMP=0x0010000000019210
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;	// IMP=0x0010000000018cb0
- (_Bool)_accessibilityShouldUseSupplementaryViews;	// IMP=0x0010000000018c50
- (_Bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;	// IMP=0x0010000000018ad0
- (struct CGRect)accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect)arg1;	// IMP=0x001000000009cc10
- (struct CGPoint)accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint)arg1;	// IMP=0x001000000009cb20
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;	// IMP=0x001000000009d890
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;	// IMP=0x001000000009d850
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;	// IMP=0x001000000009d820
- (void)_accessibilitySetOverridesInvalidFrames:(_Bool)arg1;	// IMP=0x001000000009d7e0
- (_Bool)_accessibilityOverridesInvalidFrames;	// IMP=0x001000000009d7b0
- (id)_accessibilitySubviews;	// IMP=0x001000000009d780
- (id)_accessibleSubviews;	// IMP=0x001000000009d720
- (id)_accessibleSubviews:(int)arg1;	// IMP=0x001000000009d670
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1 stoppingBeforeContainer:(id)arg2;	// IMP=0x001000000009cfb0
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1;	// IMP=0x001000000009cf30
- (void)_accessibilitySetViewIsVisible:(_Bool)arg1;	// IMP=0x001000000009cec0
- (_Bool)_accessibilityViewIsVisible;	// IMP=0x001000000009ce90
- (_Bool)_accessibilityViewIsActive;	// IMP=0x001000000009ce20
- (void)_accessibilitySetFrameExpansion:(struct CGSize)arg1;	// IMP=0x001000000009cda0
- (struct CGSize)_accessibilityFrameExpansion;	// IMP=0x001000000009cd20
- (void)_accessibilityClearChildren;	// IMP=0x001000000009cd10
@end
