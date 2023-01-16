//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationControllerPalette.h"

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette
{
    _Bool _ignoreGeometryChanges;	// 176 = 0xb0
    CDUnknownBlockType _resetAfterSearchFieldFade;	// 184 = 0xb8
    UISearchBar *__searchBar;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000226363
@property(nonatomic, setter=_setSearchBar:) __weak UISearchBar *_searchBar; // @synthesize _searchBar=__searchBar;
@property(copy, nonatomic) CDUnknownBlockType resetAfterSearchFieldFade; // @synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade;
@property(nonatomic) _Bool ignoreGeometryChanges; // @synthesize ignoreGeometryChanges=_ignoreGeometryChanges;
- (void)_propagateBackgroundToContents;	// IMP=0x0000000000226258
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x00000000002261ae
@property(nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x00000000002260d3
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000226083
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000226033
- (void)_popDisableLayoutFlushingForTransition;	// IMP=0x0000000000225fdd
- (void)_pushDisableLayoutFlushingForTransition;	// IMP=0x0000000000225f88
- (_Bool)_shouldUpdateBackground;	// IMP=0x0000000000225f80
- (void)_updateLayoutForCurrentConfiguration;	// IMP=0x0000000000225f16
@property(readonly, nonatomic) UIView *viewForAsymmetricFade;
- (_Bool)_supportsSpecialSearchBarTransitions;	// IMP=0x0000000000225e16
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x0000000000225dc5

@end

