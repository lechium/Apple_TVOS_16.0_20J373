//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISegmentedControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI16SegmentedControl : UISegmentedControl
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *handleActionForHostedView;	// 24 = 0x18
    MISSING_TYPE *textPadding;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000051ead0
- (id)initWithItems:(id)arg1;	// IMP=0x000000000051ea70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000051ea40
- (void)segmentSelectionChanged;	// IMP=0x000000000051ea10
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)vui_sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000051e7d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000051e760

@end

