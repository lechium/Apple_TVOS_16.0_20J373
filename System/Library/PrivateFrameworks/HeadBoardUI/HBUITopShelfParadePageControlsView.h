//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIPageControl, _HBUITopShelfParadeSwipeAffordanceView;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadePageControlsView : UIView
{
    _Bool _leadingSwipeAffordanceViewHidden;	// 8 = 0x8
    _Bool _trailingSwipeAffordanceViewHidden;	// 9 = 0x9
    UIPageControl *_pageControl;	// 16 = 0x10
    _HBUITopShelfParadeSwipeAffordanceView *_leadingSwipeAffordanceView;	// 24 = 0x18
    _HBUITopShelfParadeSwipeAffordanceView *_trailingSwipeAffordanceView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001b118
@property(readonly, nonatomic) _HBUITopShelfParadeSwipeAffordanceView *trailingSwipeAffordanceView; // @synthesize trailingSwipeAffordanceView=_trailingSwipeAffordanceView;
@property(readonly, nonatomic) _HBUITopShelfParadeSwipeAffordanceView *leadingSwipeAffordanceView; // @synthesize leadingSwipeAffordanceView=_leadingSwipeAffordanceView;
@property(nonatomic, getter=isTrailingSwipeAffordanceViewHidden) _Bool trailingSwipeAffordanceViewHidden; // @synthesize trailingSwipeAffordanceViewHidden=_trailingSwipeAffordanceViewHidden;
@property(nonatomic, getter=isLeadingSwipeAffordanceViewHidden) _Bool leadingSwipeAffordanceViewHidden; // @synthesize leadingSwipeAffordanceViewHidden=_leadingSwipeAffordanceViewHidden;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001a95a

@end

