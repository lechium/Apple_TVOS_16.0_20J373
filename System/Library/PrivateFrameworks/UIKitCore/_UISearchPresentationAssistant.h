//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDimmingView, UIPresentationController, UIView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject
{
    UIPresentationController *_searchPresentationController;	// 8 = 0x8
    UIView *_searchBarContainerView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    _Bool _isFormSheetPresentation;	// 32 = 0x20
    _Bool _presentationWasAnimated;	// 33 = 0x21
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;	// 40 = 0x28
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;	// 48 = 0x30
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) _Bool presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000caaf16
- (_Bool)searchBarWillResizeForScopeBar;	// IMP=0x0000000000caae87
- (double)resultsControllerContentOffset;	// IMP=0x0000000000caab17
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000caa91a
- (id)locateNavigationController;	// IMP=0x0000000000caa89f
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000caa87b
- (double)statusBarAdjustment;	// IMP=0x0000000000caa72f
- (_Bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000caa613
- (_Bool)_statusBarPreferredHidden;	// IMP=0x0000000000caa5bb
- (id)dimmingView;	// IMP=0x0000000000caa4d1
- (struct CGSize)updateSearchBarContainerFrame;	// IMP=0x0000000000caa02c
- (double)_statusBarHeightChangeDueToRotation;	// IMP=0x0000000000ca9f1a
- (_Bool)_currentTransitionIsRotating;	// IMP=0x0000000000ca9eca
- (void)removeContainerViewFromSuperview;	// IMP=0x0000000000ca9eb4
- (id)searchBarContainerView;	// IMP=0x0000000000ca9bfc
- (id)_searchBarContainerSuperview;	// IMP=0x0000000000ca9bb7
- (struct CGRect)_containerFrame;	// IMP=0x0000000000ca97f1
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;	// IMP=0x0000000000ca9707
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;	// IMP=0x0000000000ca9571
- (_Bool)presentationIsPopoverToOverFullScreenAdaptation;	// IMP=0x0000000000ca9513
- (id)_searchControllerPresenting;	// IMP=0x0000000000ca94df
- (void)dealloc;	// IMP=0x0000000000ca947f
- (id)initWithSearchPresentationController:(id)arg1;	// IMP=0x0000000000ca941c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
