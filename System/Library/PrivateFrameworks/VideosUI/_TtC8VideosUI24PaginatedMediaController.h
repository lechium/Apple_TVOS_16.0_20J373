//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI24PaginatedMediaController
{
    MISSING_TYPE *showsGradient;	// 8 = 0x8
    MISSING_TYPE *showsPageControl;	// 9 = 0x9
    MISSING_TYPE *viewModels;	// 16 = 0x10
    MISSING_TYPE *paginationDelegate;	// 24 = 0x18
    MISSING_TYPE *lastImpressedIndex;	// 40 = 0x28
    MISSING_TYPE *backgroundMediaInfo;	// 56 = 0x38
    MISSING_TYPE *backgroundMediaController;	// 64 = 0x40
    MISSING_TYPE *paginationHost;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_previousIndicator;	// 80 = 0x50
    MISSING_TYPE *collectionImpressioner;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_nextIndicator;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_containerView;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_mediaShowcaseConfig;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_pageControl;	// 152 = 0x98
    MISSING_TYPE *enablePageControlTimer;	// 160 = 0xa0
    MISSING_TYPE *nextFocusGuide;	// 168 = 0xa8
    MISSING_TYPE *previousFocusGuide;	// 176 = 0xb0
    MISSING_TYPE *rightFocusConstraint;	// 184 = 0xb8
    MISSING_TYPE *leftFocusConstraint;	// 192 = 0xc0
    MISSING_TYPE *chevronDebounceTimer;	// 200 = 0xc8
    MISSING_TYPE *$__lazy_storage_$_metadataInteractor;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_metadataPresenter;	// 216 = 0xd8
    MISSING_TYPE *$__lazy_storage_$_metadataView;	// 224 = 0xe0
    MISSING_TYPE *$__lazy_storage_$_buttonsPresenter;	// 232 = 0xe8
    MISSING_TYPE *$__lazy_storage_$_buttonsView;	// 240 = 0xf0
    MISSING_TYPE *observers;	// 248 = 0xf8
    MISSING_TYPE *isAutoAdvanceEnabled;	// 256 = 0x100
    MISSING_TYPE *autoAdvancePageTimer;	// 264 = 0x108
    MISSING_TYPE *gradientView;	// 272 = 0x110
    MISSING_TYPE *showsIndicators;	// 280 = 0x118
    MISSING_TYPE *$__lazy_storage_$_layout;	// 288 = 0x120
    MISSING_TYPE *isCurrentMetadataLoadedObserver;	// 296 = 0x128
    MISSING_TYPE *isPlayingVideo;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000043e0b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000043e050
- (void)setControlsVisible:(_Bool)arg1;	// IMP=0x000000000043c880
- (void)transitionToForeground:(_Bool)arg1 withPlaybackControls:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000043c4f0
- (void)transitionToForeground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000043c3c0
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000043c2d0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000043c260
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000043bbc0
- (void)vui_viewDidLoad;	// IMP=0x000000000043b430
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000438de0

@end
