//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class WKWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIScrollView
{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;	// 8 = 0x8
    struct RetainPtr<WKScrollViewDelegateForwarder> _delegateForwarder;	// 16 = 0x10
    _Bool _backgroundColorSetByClient;	// 24 = 0x18
    _Bool _indicatorStyleSetByClient;	// 25 = 0x19
    _Bool _decelerationRateSetByClient;	// 26 = 0x1a
    _Bool _contentInsetWasExternallyOverridden;	// 27 = 0x1b
    double _keyboardBottomInsetAdjustment;	// 32 = 0x20
    _Bool _scrollEnabledByClient;	// 40 = 0x28
    _Bool _scrollEnabledInternal;	// 41 = 0x29
    _Bool _zoomEnabledByClient;	// 42 = 0x2a
    _Bool _zoomEnabledInternal;	// 43 = 0x2b
    struct optional<UIEdgeInsets> _contentScrollInsetFromClient;	// 48 = 0x30
    struct optional<UIEdgeInsets> _contentScrollInsetInternal;	// 88 = 0x58
    WKWebView<UIScrollViewDelegate> *_internalDelegate;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000037ed65
- (void).cxx_destruct;	// IMP=0x000000000037ed2a
@property(nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // @synthesize internalDelegate=_internalDelegate;
- (void)_updateContentScrollInset;	// IMP=0x000000000037ecb2
- (_Bool)_setContentScrollInsetInternal:(struct UIEdgeInsets)arg1;	// IMP=0x000000000037ec22
- (void)_setContentScrollInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000037ebd8
- (void)_updateZoomability;	// IMP=0x000000000037eb87
- (void)_setZoomEnabledInternal:(_Bool)arg1;	// IMP=0x000000000037eb6b
- (void)setZoomEnabled:(_Bool)arg1;	// IMP=0x000000000037eb4f
- (void)_updateScrollability;	// IMP=0x000000000037eafe
- (void)_setScrollEnabledInternal:(_Bool)arg1;	// IMP=0x000000000037eae2
- (void)setScrollEnabled:(_Bool)arg1;	// IMP=0x000000000037eac6
- (struct UIEdgeInsets)_systemContentInset;	// IMP=0x000000000037ea33
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(_Bool)arg2 lastAdjustment:(double *)arg3;	// IMP=0x000000000037e9a9
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;	// IMP=0x000000000037e83a
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;	// IMP=0x000000000037e77e
- (struct CGSize)_currentTopLeftRubberbandAmount;	// IMP=0x000000000037e6c3
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000037e65e
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;	// IMP=0x000000000037e316
- (void)_setDecelerationRateInternal:(double)arg1;	// IMP=0x000000000037e2da
- (void)setDecelerationRate:(double)arg1;	// IMP=0x000000000037e2a0
- (void)_setIndicatorStyleInternal:(long long)arg1;	// IMP=0x000000000037e264
- (void)setIndicatorStyle:(long long)arg1;	// IMP=0x000000000037e201
- (void)_setBackgroundColorInternal:(id)arg1;	// IMP=0x000000000037e1c5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000037e14c
- (void)_updateDelegate;	// IMP=0x000000000037e00e
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000037dfc8
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000037df82
- (id)delegate;	// IMP=0x000000000037df71
- (void)setDelegate:(id)arg1;	// IMP=0x000000000037df0d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000037de30

@end
