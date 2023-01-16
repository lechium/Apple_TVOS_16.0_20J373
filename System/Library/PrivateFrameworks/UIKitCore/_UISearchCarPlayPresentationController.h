//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchCarPlayPresentationController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ca7793
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000ca7768
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000ca7644
- (unsigned long long)edgeForHidingNavigationBar;	// IMP=0x0000000000ca763c
- (_Bool)forceObeyNavigationBarInsets;	// IMP=0x0000000000ca7634
- (_Bool)animatorShouldLayoutPresentationViews;	// IMP=0x0000000000ca762c
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000ca75de
- (struct CGRect)finalFrameForContainerView;	// IMP=0x0000000000ca75c0
- (id)adaptivePresentationController;	// IMP=0x0000000000ca75b8
- (double)resultsControllerContentOffset;	// IMP=0x0000000000ca75af
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000ca75a7
- (double)statusBarAdjustment;	// IMP=0x0000000000ca759e
- (_Bool)searchBarShouldClipToBounds;	// IMP=0x0000000000ca7596
- (_Bool)searchBarCanContainScopeBar;	// IMP=0x0000000000ca758e
- (_Bool)resultsUnderlapsSearchBar;	// IMP=0x0000000000ca7586
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000ca757e
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000ca7575
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_627e0f85)arg1;	// IMP=0x0000000000ca7563
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000ca7558
- (void)hideBackgroundObscuringView;	// IMP=0x0000000000ca7538
- (void)showBackgroundObscuringView;	// IMP=0x0000000000ca7513
- (id)backgroundObscuringView;	// IMP=0x0000000000ca736b

@end
