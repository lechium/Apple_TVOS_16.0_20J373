//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UILabel, UIView, _UIFocusFastScrollingIndexBarEntry;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell
{
    _UIFocusFastScrollingIndexBarEntry *_entry;	// 336 = 0x150
    UILabel *_titleLabel;	// 344 = 0x158
    UIView *_roundedCornersBackground;	// 352 = 0x160
}

+ (id)cellFont;	// IMP=0x006000000064d894
- (void).cxx_destruct;	// IMP=0x000000000064e657
@property(retain, nonatomic) UIView *roundedCornersBackground; // @synthesize roundedCornersBackground=_roundedCornersBackground;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry; // @synthesize entry=_entry;
- (void)_updateColors;	// IMP=0x000000000064e3a8
- (_Bool)_isAnotherIndexTitleCellFocused;	// IMP=0x000000000064e2cc
- (double)_maxCellWidth;	// IMP=0x000000000064e16c
- (void)updateForEntry:(id)arg1;	// IMP=0x000000000064e0cc
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000064e08b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000064dff7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000064df4e
- (void)prepareForReuse;	// IMP=0x000000000064de97
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000064ddbd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000064d90c

@end
