//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI17VerticalStackView
{
    MISSING_TYPE *platterView;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_expandableView;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_panelView;	// 24 = 0x18
    MISSING_TYPE *footerView;	// 32 = 0x20
    MISSING_TYPE *layout;	// 40 = 0x28
    MISSING_TYPE *focusEnvironments;	// 48 = 0x30
    MISSING_TYPE *impressionsTracker;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004b3060
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b3000
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004b2f10
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000004b25e0
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000004b2510
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004b21f0
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000004b2070

@end

