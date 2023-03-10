//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIBarButtonItem, UIFocusContainerGuide, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UISplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerClassicImpl : NSObject
{
    UISplitViewController *_svc;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    UIBarButtonItem *_barButtonItem;	// 24 = 0x18
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;	// 32 = 0x20
    NSString *_buttonTitle;	// 40 = 0x28
    UIPopoverController *_hiddenPopoverController;	// 48 = 0x30
    UIView *_rotationSnapshotView;	// 56 = 0x38
    UIResponder *_postTransitionResponder;	// 64 = 0x40
    UISnapshotView *_collapsingMasterSnapshotView;	// 72 = 0x48
    UISnapshotView *_collapsingDetailSnapshotView;	// 80 = 0x50
    float _gutterWidth;	// 88 = 0x58
    long long _rotatingFromOrientation;	// 96 = 0x60
    long long _lastPresentedOrientation;	// 104 = 0x68
    struct CGRect _rotatingFromMasterViewFrame;	// 112 = 0x70
    struct CGRect _rotatingToMasterViewFrame;	// 144 = 0x90
    UIView *_underBarSeparatorView;	// 176 = 0xb0
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;	// 184 = 0xb8
    _Bool _presentsWithGesture;	// 192 = 0xc0
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 200 = 0xc8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 208 = 0xd0
    long long _preferredDisplayMode;	// 216 = 0xd8
    long long _effectiveTargetDisplayMode;	// 224 = 0xe0
    long long _pendingDisplayModeChangeCount;	// 232 = 0xe8
    long long _rotatingMasterChange;	// 240 = 0xf0
    _Bool _useChangingBoundsLayout;	// 248 = 0xf8
    long long _transitioningMasterChange;	// 256 = 0x100
    UITraitCollection *_transitioningToTraitCollection;	// 264 = 0x108
    long long _transitioningToInternalMode;	// 272 = 0x110
    long long _lastNotifiedDisplayMode;	// 280 = 0x118
    struct CGRect _viewBoundsBeforeCollapse;	// 288 = 0x120
    long long _suspendedState;	// 320 = 0x140
    long long _primaryEdge;	// 328 = 0x148
    struct {
        unsigned int invalidDelegateHiddenMasterAspectRatios:2;
        unsigned int delegateHiddenMasterAspectRatios:2;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int firstResponderChangedFromPostTransitionResponderToNil:1;
        unsigned int inWillTransitionToSize:1;
        unsigned int hasTransitioningToInternalMode:1;
        unsigned int delegateImplementsPrivateIsPrimaryVisible:1;
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended:1;
        unsigned int usesExtraWidePrimaryColumn:1;
        unsigned int usesDeviceOverlayPreferences:1;
        unsigned int prefersOverlayInRegularWidthPhone:1;
    } _splitViewControllerFlags;	// 336 = 0x150
    NSString *_displayModeButtonItemTitle;	// 344 = 0x158
    double _preferredPrimaryColumnWidthFraction;	// 352 = 0x160
    double _minimumPrimaryColumnWidth;	// 360 = 0x168
    double _maximumPrimaryColumnWidth;	// 368 = 0x170
    unsigned long long _lastFocusedChildViewControllerIndex;	// 376 = 0x178
    UIViewController *__preservedDetailController;	// 384 = 0x180
    CDUnknownBlockType __clearPreventRotationHook;	// 392 = 0x188
    UIFocusContainerGuide *_masterFocusContainerGuide;	// 400 = 0x190
    UIFocusContainerGuide *_detailFocusContainerGuide;	// 408 = 0x198
}

+ (double)_defaultGutterWidthInView:(id)arg1;	// IMP=0x001000000048bfd7
- (void).cxx_destruct;	// IMP=0x000000000049676a
@property(readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property(readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;	// IMP=0x000000000049662a
- (id)_deepestActionResponder;	// IMP=0x00000000004965da
- (double)_supplementaryDividerPosition;	// IMP=0x00000000004965d1
- (double)_primaryDividerPosition;	// IMP=0x00000000004965c8
- (_Bool)_isAnimating;	// IMP=0x00000000004965c0
@property(readonly, nonatomic) _Bool lockedForDelegateCallback;
@property(readonly, nonatomic) long long style;
- (_Bool)_shouldShowNSToolbarSidebarToggle;	// IMP=0x00000000004965a8
@property(nonatomic) long long primaryBackgroundStyle;
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x0000000000496530
- (id)_additionalViewControllersToCheckForUserActivity;	// IMP=0x00000000004963bf
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000495ecb
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000495c07
- (id)_allContainedViewControllers;	// IMP=0x0000000000495bc4
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;	// IMP=0x00000000004957b3
- (long long)_medusaState;	// IMP=0x00000000004956e1
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x0000000000495682
- (void)viewDidLayoutSubviews;	// IMP=0x000000000049555c
- (void)__viewWillLayoutSubviews;	// IMP=0x0000000000494a62
- (void)_setDetailViewFrame:(struct CGRect)arg1;	// IMP=0x00000000004949cb
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x00000000004949b9
- (void)_updateMasterViewControllerFrame;	// IMP=0x0000000000493b51
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000493923
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000004937aa
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000493505
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;	// IMP=0x0000000000493032
- (void)snapshotAllViews;	// IMP=0x0000000000492dd3
- (void)snapshotMasterView;	// IMP=0x0000000000492831
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000049224c
- (id)_childViewControllersToSendViewWillTransitionToSize;	// IMP=0x00000000004920ea
- (_Bool)_isTransitioningFromCollapsedToSeparated;	// IMP=0x000000000049209c
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;	// IMP=0x0000000000491392
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;	// IMP=0x00000000004910cb
- (long long)_prepareToTransitionToViewSize:(struct CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;	// IMP=0x0000000000490601
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize)arg3 medusaState:(long long)arg4;	// IMP=0x00000000004904aa
- (_Bool)_isRotating;	// IMP=0x000000000049049c
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000490411
- (_Bool)_handlesCounterRotationForPresentation;	// IMP=0x00000000004903fd
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x00000000004903cb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000049032d
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000004901c2
- (long long)preferredCenterStatusBarStyle;	// IMP=0x00000000004900b8
- (long long)preferredTrailingStatusBarStyle;	// IMP=0x000000000048ffae
- (long long)preferredLeadingStatusBarStyle;	// IMP=0x000000000048fe68
- (id)childViewControllerForStatusBarStyle;	// IMP=0x000000000048fd93
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000048fd4e
- (id)_multitaskingDragExclusionRects;	// IMP=0x000000000048fd0b
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000048f97a
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000048f819
- (id)_overridingPreferredFocusEnvironment;	// IMP=0x000000000048f7d6
- (id)preferredFocusEnvironments;	// IMP=0x000000000048f47c
- (id)preferredFocusedView;	// IMP=0x000000000048f179
@property(readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
- (void)_setUpFocusContainerGuides;	// IMP=0x000000000048ef0e
- (double)_contentMarginForChildViewController:(id)arg1;	// IMP=0x000000000048eeb0
- (void)_updateChildContentMargins;	// IMP=0x000000000048ed1c
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x000000000048ecb0
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000048e844
- (_Bool)_shouldUseRelativeInsets;	// IMP=0x000000000048e751
- (void)popoverWillAppear:(id)arg1;	// IMP=0x000000000048e50e
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;	// IMP=0x000000000048e441
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000048e217
- (void)toggleMasterVisible:(id)arg1;	// IMP=0x000000000048e1bb
- (void)_dismissMasterViewController:(_Bool)arg1;	// IMP=0x000000000048e12f
- (unsigned long long)_targetEdgeForPopover;	// IMP=0x000000000048e10c
- (void)_presentMasterViewController:(_Bool)arg1;	// IMP=0x000000000048df76
- (_Bool)_isMasterPopoverVisible;	// IMP=0x000000000048df53
- (void)_didEndSnapshotSession;	// IMP=0x000000000048df42
- (void)_willBeginSnapshotSession;	// IMP=0x000000000048df02
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;	// IMP=0x000000000048db21
- (_Bool)_shouldPreventAutorotation;	// IMP=0x000000000048db19
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x000000000048d984
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;	// IMP=0x000000000048d97c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000048d8b6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000048d7f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000048d6df
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000048d562
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;	// IMP=0x000000000048d415
- (id)displayModeButtonItem;	// IMP=0x000000000048d38c
- (void)_updateDisplayModeButtonItem;	// IMP=0x000000000048d15c
- (void)_triggerDisplayModeAction:(id)arg1;	// IMP=0x000000000048d0a9
- (long long)_effectiveTargetDisplayMode;	// IMP=0x000000000048d09c
- (void)_cacheEffectiveTargetDisplayMode;	// IMP=0x000000000048cfb6
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;	// IMP=0x000000000048cf66
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;	// IMP=0x000000000048cf0c
- (void)_updateTargetDisplayMode;	// IMP=0x000000000048ced1
- (void)_displayModeDidChange;	// IMP=0x000000000048ce9e
- (void)_displayModeWillChangeTo:(long long)arg1;	// IMP=0x000000000048cdfc
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(_Bool)arg2;	// IMP=0x000000000048c962
- (long long)_defaultTargetDisplayMode;	// IMP=0x000000000048c759
- (id)_defaultDisplayModes;	// IMP=0x000000000048c6d0
- (long long)displayMode;	// IMP=0x000000000048c673
@property(nonatomic) long long preferredDisplayMode;
- (_Bool)_layoutPrimaryOnRight;	// IMP=0x000000000048c536
@property(nonatomic) long long primaryEdge;
- (_Bool)_effectivePresentsWithGesture;	// IMP=0x000000000048c2e4
@property(nonatomic) float gutterWidth;
- (double)_masterPresentationAnimationDuration;	// IMP=0x000000000048bcff
- (void)_showMasterViewAnimated:(_Bool)arg1;	// IMP=0x000000000048baaa
@property(nonatomic) _Bool hidesMasterViewInPortrait;
- (_Bool)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;	// IMP=0x000000000048b82b
- (_Bool)_hidesMasterViewInCurrentOrientation;	// IMP=0x000000000048b7c4
- (_Bool)hidesMasterViewInLandscape;	// IMP=0x000000000048b788
- (id)detailViewController;	// IMP=0x000000000048b6a1
- (id)masterViewController;	// IMP=0x000000000048b503
- (_Bool)_hasMasterViewController;	// IMP=0x000000000048b47a
- (void)_setupUnderBarSeparatorView;	// IMP=0x000000000048aebd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000048adfc
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000489df2
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x0000000000489a25
- (void)_removeCollapsingSnapshotViews;	// IMP=0x00000000004899c2
- (id)_deepestUnambiguousResponder;	// IMP=0x000000000048997f
- (_Bool)_disableAutomaticKeyboardBehavior;	// IMP=0x000000000048993d
- (void)_didChangeToFirstResponder:(id)arg1;	// IMP=0x0000000000489909
- (void)_didTransitionTraitCollection;	// IMP=0x00000000004896df
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x0000000000488d22
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000488c4e
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000488444
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000048833f
- (void)_prepareForCompactLayout;	// IMP=0x0000000000487ed5
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;	// IMP=0x0000000000487e1a
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000487a27
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000048774c
- (id)_primaryContentResponder;	// IMP=0x0000000000487705
- (id)_childContainingSender:(id)arg1;	// IMP=0x00000000004874fb
- (void)_setMasterOverrideTraitCollectionActive:(_Bool)arg1;	// IMP=0x000000000048742a
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) _Bool inExpandingToProposedDisplayModeCallback;
@property(readonly, nonatomic) _Bool inCollapsingToProposedTopColumnCallback;
- (_Bool)_isBasicallyHorizontallyCompact;	// IMP=0x0000000000486417
- (_Bool)_canDisplayHostedMaster;	// IMP=0x00000000004863cf
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;	// IMP=0x0000000000485973
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;	// IMP=0x00000000004856e3
- (id)_secondaryViewControllerForCollapsing;	// IMP=0x00000000004856a0
- (id)_primaryViewControllerForExpanding;	// IMP=0x00000000004855ef
- (id)_primaryViewControllerForCollapsing;	// IMP=0x000000000048553e
- (void)_setCollapsedState:(long long)arg1;	// IMP=0x0000000000485439
- (_Bool)_isCollapsed;	// IMP=0x000000000048541d
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_isExpanding;	// IMP=0x00000000004853ee
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(_Bool)arg2;	// IMP=0x0000000000485126
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x00000000004850d9
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000484e66
- (struct CGSize)_preferredContentSize;	// IMP=0x0000000000484e1d
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
- (struct CGSize)_screenSizeInMainScene:(_Bool)arg1;	// IMP=0x0000000000484cd7
- (double)primaryColumnWidth;	// IMP=0x0000000000484c3f
- (void)_viewControllerHiding:(id)arg1;	// IMP=0x0000000000484ac5
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;	// IMP=0x000000000048495b
- (struct CGRect)_detailViewFrame;	// IMP=0x00000000004848b4
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000484753
- (struct CGRect)_masterViewFrame;	// IMP=0x00000000004846ac
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;	// IMP=0x00000000004845bf
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// IMP=0x0000000000483e56
- (void)_updateDelegateHiddenMasterAspectRatios;	// IMP=0x0000000000483b9b
- (_Bool)_defersUpdateDelegateHiddenMasterAspectRatios;	// IMP=0x0000000000483b7a
- (void)_setDelegateHidesMaster:(_Bool)arg1 inAspectRatio:(long long)arg2;	// IMP=0x0000000000483b0a
- (_Bool)_isHidesMasterInLandscapeInvalid;	// IMP=0x0000000000483afc
- (_Bool)_isHidesMasterInPortraitInvalid;	// IMP=0x0000000000483aec
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;	// IMP=0x0000000000483ac9
- (id)_primaryDimmingView;	// IMP=0x0000000000483ab3
- (_Bool)_isMasterViewShown;	// IMP=0x00000000004839f9
- (long long)_currentInterfaceIdiom;	// IMP=0x000000000048394b
- (_Bool)_iPhoneShouldUseOverlayIfRegularWidth;	// IMP=0x0000000000483912
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;	// IMP=0x000000000048387b
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;	// IMP=0x00000000004837ef
- (long long)_primaryHidingStateForCurrentOrientation;	// IMP=0x00000000004837df
- (void)_setPrimaryHidingState:(long long)arg1;	// IMP=0x00000000004837ba
- (long long)_primaryHidingState;	// IMP=0x00000000004837a8
- (long long)_effectivePrimaryHidingState;	// IMP=0x0000000000483770
- (void)unloadViewForced:(_Bool)arg1;	// IMP=0x0000000000483624
- (void)loadView;	// IMP=0x0000000000483467
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x000000000048345f
- (void)_loadNewSubviews:(id)arg1;	// IMP=0x0000000000482f48
- (void)dealloc;	// IMP=0x0000000000482e10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000482ce8
- (void)_initWithCoder:(id)arg1;	// IMP=0x0000000000482b06
- (void)_commonInit;	// IMP=0x000000000048298c
- (struct CGRect)_frameForChildContentContainer:(id)arg1;	// IMP=0x0000000000482804
- (id)initWithSplitViewController:(id)arg1;	// IMP=0x00000000004827a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

