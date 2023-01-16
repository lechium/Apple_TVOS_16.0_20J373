//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PGButtonView, PGCABackdropLayerView, PGControlsViewModel, PGDisplayLink, PGLayoutContainerView, PGPrerollIndicatorView, PGProgressIndicator, UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PGControlsView
{
    PGControlsViewModel *_viewModel;	// 8 = 0x8
    PGButtonView *_restoreButton;	// 16 = 0x10
    PGButtonView *_cancelButton;	// 24 = 0x18
    PGButtonView *_skipBackButton;	// 32 = 0x20
    PGButtonView *_actionButton;	// 40 = 0x28
    PGButtonView *_skipForwardButton;	// 48 = 0x30
    PGButtonView *_liveIndicatorBadgeButton;	// 56 = 0x38
    UIActivityIndicatorView *_contentLoadingIndicator;	// 64 = 0x40
    UIView *_contentLoadingIndicatorContainerView;	// 72 = 0x48
    PGLayoutContainerView *_hidableItemsLayoutContainerView;	// 80 = 0x50
    PGCABackdropLayerView *_captureOnlyView;	// 88 = 0x58
    PGProgressIndicator *_progressIndicator;	// 96 = 0x60
    PGPrerollIndicatorView *_prerollIndicatorView;	// 104 = 0x68
    UIView *_gradientView;	// 112 = 0x70
    NSArray *_allButtons;	// 120 = 0x78
    NSString *_groupNameBase;	// 128 = 0x80
    PGDisplayLink *_displayLinkForProgressUpdates;	// 136 = 0x88
    _Bool _prefersControlsHidden;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000017b68
@property(nonatomic) _Bool prefersControlsHidden; // @synthesize prefersControlsHidden=_prefersControlsHidden;
- (_Bool)_showsGradientView;	// IMP=0x0000000000017aac
- (struct CGRect)_progressIndicatorFrameWithScaling:(double)arg1;	// IMP=0x0000000000017921
- (struct CGRect)_prerollIndicatorFrameWithScaling:(double)arg1;	// IMP=0x00000000000177d1
- (struct UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000017745
- (struct CGRect)buttonView:(id)arg1 titleRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x000000000001763b
- (struct CGRect)buttonView:(id)arg1 imageRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x00000000000174bc
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;	// IMP=0x0000000000017419
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000173bc
- (void)didMoveToWindow;	// IMP=0x0000000000017334
- (void)layoutSubviews;	// IMP=0x0000000000015a7b
- (_Bool)PG_preferredVisibilityForView:(id)arg1;	// IMP=0x00000000000158e4
- (id)PG_backdropGroupLeader;	// IMP=0x00000000000158cf
- (void)updateControlsHidden;	// IMP=0x00000000000157b5
- (void)updateControlsAlpha;	// IMP=0x0000000000015671
- (void)updateProgress;	// IMP=0x000000000001549a
- (void)viewModelDidUpdateValuesFromOldValues:(id)arg1;	// IMP=0x000000000001496a
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000148f6
- (void)dealloc;	// IMP=0x000000000001488e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000147bc
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;	// IMP=0x000000000001405a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
