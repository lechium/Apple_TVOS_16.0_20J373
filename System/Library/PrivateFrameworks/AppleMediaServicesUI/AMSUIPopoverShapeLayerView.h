//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AMSUIPopoverShapeLayerMaskView;

__attribute__((visibility("hidden")))
@interface AMSUIPopoverShapeLayerView : UIView
{
    _Bool _shapeLayerPathNeedsUpdate;	// 8 = 0x8
    _Bool _popoverBackgroundColorIsOpaque;	// 9 = 0x9
    _Bool _arrowVisible;	// 10 = 0xa
    _Bool _arrowOffsetWasFlipped;	// 11 = 0xb
    _Bool _arrowDirectionWasFlipped;	// 12 = 0xc
    unsigned long long _arrowDirection;	// 16 = 0x10
    double _arrowOffset;	// 24 = 0x18
    UIView *_viewToMaskWhenContentExtendsOverArrow;	// 32 = 0x20
    AMSUIPopoverShapeLayerMaskView *_shapeLayerMaskView;	// 40 = 0x28
}

+ (double)cornerRadius;	// IMP=0x0060000000043bf0
+ (double)arrowBase;	// IMP=0x0060000000043be2
- (void).cxx_destruct;	// IMP=0x0000000000045a94
@property(retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView; // @synthesize shapeLayerMaskView=_shapeLayerMaskView;
@property _Bool arrowDirectionWasFlipped; // @synthesize arrowDirectionWasFlipped=_arrowDirectionWasFlipped;
@property _Bool arrowOffsetWasFlipped; // @synthesize arrowOffsetWasFlipped=_arrowOffsetWasFlipped;
@property _Bool arrowVisible; // @synthesize arrowVisible=_arrowVisible;
@property _Bool popoverBackgroundColorIsOpaque; // @synthesize popoverBackgroundColorIsOpaque=_popoverBackgroundColorIsOpaque;
@property _Bool shapeLayerPathNeedsUpdate; // @synthesize shapeLayerPathNeedsUpdate=_shapeLayerPathNeedsUpdate;
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow=_viewToMaskWhenContentExtendsOverArrow;
- (void)didMoveToWindow;	// IMP=0x00000000000458dd
- (void)_loadNecessaryViews;	// IMP=0x0000000000045831
- (void)_updateShapeLayerPath;	// IMP=0x0000000000044ffe
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1;	// IMP=0x0000000000044efc
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1;	// IMP=0x0000000000044dfe
- (void)_addLeftRightArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x0000000000044bcc
- (void)_addTopBottomArrowCurveForPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x000000000004493a
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;	// IMP=0x000000000004482d
- (void)_addLeadingPinnedCurveToPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3;	// IMP=0x000000000004471a
- (void)_addTopBottomRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000000444d3
- (void)_addLeftRightRoundedRectWithGapForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x0000000000044281
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000000440e8
@property double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
- (void)setNeedsLayout;	// IMP=0x0000000000044021
@property unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)_updatePathAnimationState;	// IMP=0x0000000000043f73
- (void)layoutSubviews;	// IMP=0x0000000000043e7f
- (_Bool)wouldPinForOffset:(double)arg1;	// IMP=0x0000000000043e35
- (void)_updateShapeLayerPathIfNeeded;	// IMP=0x0000000000043e06
- (id)_shadowPath;	// IMP=0x0000000000043dfe
- (struct CGSize)_shadowOffset;	// IMP=0x0000000000043de8
- (double)_shadowRadius;	// IMP=0x0000000000043ddf
- (double)_shadowOpacity;	// IMP=0x0000000000043dd6
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x0000000000043db8
- (double)maxNonPinnedOffset;	// IMP=0x0000000000043d23
- (double)minNonPinnedOffset;	// IMP=0x0000000000043c86
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000043bfe
@property(readonly) double arrowHeight;

@end
