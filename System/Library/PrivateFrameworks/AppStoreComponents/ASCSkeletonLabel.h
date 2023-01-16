//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class ASCContentSkeleton, UIColor;

__attribute__((visibility("hidden")))
@interface ASCSkeletonLabel : UILabel
{
    _Bool _wantsAncestorFocusMarqueeAfterClearingSkeleton;	// 8 = 0x8
    UIColor *_skeletonColor;	// 16 = 0x10
    ASCContentSkeleton *_skeleton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004140f
@property(nonatomic) _Bool wantsAncestorFocusMarqueeAfterClearingSkeleton; // @synthesize wantsAncestorFocusMarqueeAfterClearingSkeleton=_wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property(copy, nonatomic) ASCContentSkeleton *skeleton; // @synthesize skeleton=_skeleton;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000041337
- (void)drawSkeletonInRect:(struct CGRect)arg1;	// IMP=0x0000000000041217
- (struct CGRect)skeletonRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000040fed
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000040f34
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000040e7f
- (void)setEnablesMarqueeWhenAncestorFocused:(_Bool)arg1;	// IMP=0x0000000000040e03
@property(copy, nonatomic) UIColor *skeletonColor; // @synthesize skeletonColor=_skeletonColor;
@property(readonly, nonatomic) long long effectiveSkeletonAlignment;
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000000040acf
- (double)_firstBaselineOffsetFromTop;	// IMP=0x0000000000040a27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040a12
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000409e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000040980

@end
