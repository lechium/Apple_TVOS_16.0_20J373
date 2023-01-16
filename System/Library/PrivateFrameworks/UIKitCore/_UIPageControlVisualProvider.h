//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, UIPageControl;

__attribute__((visibility("hidden")))
@interface _UIPageControlVisualProvider : NSObject
{
    UIPageControl *_pageControl;	// 8 = 0x8
    long long _displayedPage;	// 16 = 0x10
    long long _interactionState;	// 24 = 0x18
    UIImage *_preferredActiveIndicatorImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001225e46
@property(retain, nonatomic) UIImage *preferredActiveIndicatorImage; // @synthesize preferredActiveIndicatorImage=_preferredActiveIndicatorImage;
@property(nonatomic) long long interactionState; // @synthesize interactionState=_interactionState;
- (struct CGRect)indicatorFrameForPage:(long long)arg1;	// IMP=0x0000000001225e03
@property(nonatomic) double indicatorOpacity;
- (id)customActiveIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000001225de7
- (id)customIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000001225dd7
@property(retain, nonatomic) UIImage *preferredIndicatorImage;
- (void)setCustomActiveIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000001225dc9
- (void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000001225dc3
- (void)updateDisplayedPageToCurrentPage;	// IMP=0x0000000001225db7
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;	// IMP=0x0000000001225db1
- (void)invalidateIndicators;	// IMP=0x0000000001225dab
- (void)layoutSubviews;	// IMP=0x0000000001225da5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001225d8f
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000001225d79
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x0000000001225d63
- (void)didEndTrackingWithTouch:(id)arg1;	// IMP=0x0000000001225d5d
- (void)didUpdateBackgroundEffect;	// IMP=0x0000000001225d57
- (void)didUpdateLayoutDirection;	// IMP=0x0000000001225d51
- (void)didUpdateCustomLayoutValues;	// IMP=0x0000000001225d4b
- (void)didUpdateBackgroundStyle;	// IMP=0x0000000001225d45
- (void)didUpdateInteractionTypeAvailability;	// IMP=0x0000000001225d3f
- (void)didUpdateCurrentPageIndicatorTintColor;	// IMP=0x0000000001225d39
- (void)didUpdatePageIndicatorTintColor;	// IMP=0x0000000001225d33
- (void)didUpdateNumberOfPages;	// IMP=0x0000000001225d2d
@property(readonly, nonatomic) long long displayedPage;
- (_Bool)shouldDisableTouchTracking;	// IMP=0x0000000001225d1b
- (void)pruneArchivedSubviews:(id)arg1;	// IMP=0x0000000001225d15
- (void)prepare;	// IMP=0x0000000001225cf7
- (void)teardownPageControl;	// IMP=0x0000000001225ce9
- (id)initWithPageControl:(id)arg1;	// IMP=0x0000000001225cac

@end
