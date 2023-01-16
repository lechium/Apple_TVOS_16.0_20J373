//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, PXProgrammaticNavigationDestination, UIToolbar;

@interface UIViewController (CPL)
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f667
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f5c7
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f527
+ (id)px_viewControllerWithSettings:(id)arg1;	// IMP=0x001000000022f4ac
+ (void)_px_prepareClassForBarAppearance;	// IMP=0x0010000000482513
+ (void)_px_prepareClassForExtendedTraitCollection;	// IMP=0x001000000048d7e1
+ (void)px_preloadExtendedTraitCollection;	// IMP=0x001000000048d75c
+ (void)_px_prepareClassForOneUpPresentation;	// IMP=0x001000000065a1d7
@property(readonly, nonatomic) UIToolbar *px_footerToolbar;
- (id)_px_offersTableView;	// IMP=0x001000000008dce4
- (void)px_removeFooterToolbar;	// IMP=0x001000000008dc11
- (void)px_insertFooterToolbarWithItems:(id)arg1;	// IMP=0x001000000008d98c
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;	// IMP=0x0010000000121a9f
- (id)px_gridPresentation;	// IMP=0x001000000012d5db
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0010000000315e94
- (void)_px_dismiss:(id)arg1;	// IMP=0x00100000003d1389
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003d1259
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;	// IMP=0x00100000004824b0
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;	// IMP=0x001000000048244d
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;	// IMP=0x00100000004823ec
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000482390
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000482334
@property(readonly, nonatomic) PXBarAppearance *px_barAppearance;
- (void)px_didTransitionBars;	// IMP=0x00100000004822c3
- (void)px_willTransitionBars;	// IMP=0x00100000004822bd
- (void)px_enableBarAppearance;	// IMP=0x0010000000482263
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;	// IMP=0x001000000048ce1a
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;	// IMP=0x001000000048cdc2
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;	// IMP=0x001000000048cd5f
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;	// IMP=0x001000000048cce0
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000048cbbe
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;	// IMP=0x001000000048cb66
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(_Bool)arg1;	// IMP=0x001000000048cb09
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;	// IMP=0x001000000048caac
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;	// IMP=0x001000000048ca54
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;	// IMP=0x001000000048c98f
- (id)debugURLsForDiagnostics;	// IMP=0x00100000004aa2a1
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarHidden;
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarStyle;
@property(readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property(readonly, nonatomic) UIViewController *px_previousViewControllerInNavigationController;
@property(retain, nonatomic, setter=px_setSelectionActionMenus:) NSArray *px_selectionActionMenus;
@property(retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000004a9f32
- (_Bool)px_isDescendantOfViewController:(id)arg1;	// IMP=0x00100000004a9e91
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000004a9dce
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(_Bool)arg2;	// IMP=0x00100000004a9894
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004a97eb
@property(readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property(readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic) _Bool px_isVisible;
- (void)px_setNeedsImageModulationIntensityUpdate;	// IMP=0x00100000004b0edc
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;	// IMP=0x00100000004b0ecd
@property(readonly, nonatomic) double px_HDRFocus;
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;	// IMP=0x00100000004b0ea5
@property(readonly, nonatomic) struct CGSize px_windowReferenceSize;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000065a17b
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000065a11f
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;	// IMP=0x001000000065a0c3
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;	// IMP=0x001000000065a063
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;	// IMP=0x0010000000659ddd
- (void)px_enableOneUpPresentation;	// IMP=0x0010000000659d76
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006feab7
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006fea9b
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006fe84a
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;	// IMP=0x00100000006fe7b0
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00100000006fe641
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00100000006fe639
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000006fe2b3
@property(readonly, nonatomic) _Bool px_allowsTabSwitching;
- (id)px_splitViewController;	// IMP=0x00100000008c7f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@property(readonly) Class superclass;
@end

