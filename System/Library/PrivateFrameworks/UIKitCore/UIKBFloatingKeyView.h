//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBContainerKeyView.h"

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIKBFloatingKeyView : UIKBContainerKeyView
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008b4849
- (void)prepareForDisplay;	// IMP=0x00000000008b47a4
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView;
- (void)layoutSubviews;	// IMP=0x00000000008b4609
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 renderTraits:(id)arg4;	// IMP=0x00000000008b43f7
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000008b4257

@end

