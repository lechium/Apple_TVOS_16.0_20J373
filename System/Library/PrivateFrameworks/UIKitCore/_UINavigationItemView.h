//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel, UINavigationItem;

__attribute__((visibility("hidden")))
@interface _UINavigationItemView : UIView
{
    UINavigationItem *_item;	// 176 = 0xb0
    struct CGSize _titleSize;	// 184 = 0xb8
    UIView *_topCrossView;	// 200 = 0xc8
    UIView *_bottomCrossView;	// 208 = 0xd0
    _Bool _isCrossFading;	// 216 = 0xd8
    _Bool _customFontSet;	// 217 = 0xd9
    UILabel *_label;	// 224 = 0xe0
    _Bool __isFadingInFromCustomAlpha;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000017014d
@property(nonatomic, setter=_setFadingInFromCustomAlpha:) _Bool _isFadingInFromCustomAlpha; // @synthesize _isFadingInFromCustomAlpha=__isFadingInFromCustomAlpha;
- (void)_cleanUpCrossView;	// IMP=0x00000000001700a3
- (void)_crossFadeHiddingButton:(_Bool)arg1;	// IMP=0x000000000016ffcb
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg1;	// IMP=0x000000000016fcc5
- (id)description;	// IMP=0x000000000016fbc0
- (void)_setLineBreakMode:(long long)arg1;	// IMP=0x000000000016fba3
- (id)font;	// IMP=0x000000000016fb86
- (void)setFont:(id)arg1;	// IMP=0x000000000016faf0
- (void)_setFont:(id)arg1;	// IMP=0x000000000016f9c4
- (_Bool)titleAutoresizesToFit;	// IMP=0x000000000016f9a7
- (void)setTitleAutoresizesToFit:(_Bool)arg1;	// IMP=0x000000000016f96e
- (id)title;	// IMP=0x000000000016f928
- (struct CGSize)_titleSize;	// IMP=0x000000000016f8aa
- (void)_resetTitleSize;	// IMP=0x000000000016f883
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000016f7da
- (void)layoutSubviews;	// IMP=0x000000000016f7c8
- (void)_updateLabel;	// IMP=0x000000000016f728
- (struct CGRect)_labelFrame;	// IMP=0x000000000016f566
- (double)_titleYAdjustmentCustomization;	// IMP=0x000000000016f4c4
- (void)_updateLabelContents;	// IMP=0x000000000016f1e9
- (void)_updateLabelColor;	// IMP=0x000000000016f138
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000016f0d4
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x000000000016efca
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x000000000016eea5
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x000000000016edb1
- (id)_defaultFont;	// IMP=0x000000000016ed30
- (id)navigationItem;	// IMP=0x000000000016ed17
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x000000000016eb5e

@end

