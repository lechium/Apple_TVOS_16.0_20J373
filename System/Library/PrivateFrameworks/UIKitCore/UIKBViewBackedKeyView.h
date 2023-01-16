//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIKBBackdropView, UIView;
@protocol UIKBKeyViewContentView;

__attribute__((visibility("hidden")))
@interface UIKBViewBackedKeyView : UIKBKeyView
{
    UIView<UIKBKeyViewContentView> *_contentView;	// 8 = 0x8
    UIView *_touchForwardingView;	// 16 = 0x10
    UIKBBackdropView *_backdropView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010a711c
@property(retain, nonatomic) UIKBBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) __weak UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
@property(retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;	// IMP=0x00000000010a6ead
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000010a6dcb
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000010a6cfd
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000010a6c7f
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000010a6c01
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000010a6b6b
- (void)setDrawFrame:(struct CGRect)arg1;	// IMP=0x00000000010a6a96
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000010a674a
- (id)renderFlagsForTraits:(id)arg1;	// IMP=0x00000000010a669d

@end

