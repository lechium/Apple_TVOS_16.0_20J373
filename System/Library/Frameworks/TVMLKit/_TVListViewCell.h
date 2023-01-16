//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIVisualEffectView, _UIFloatingContentView;
@protocol _TVListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
    UIVisualEffectView *_backgroundVisualEffectView;	// 24 = 0x18
    _Bool _visualEffectViewBackgroundEnabled;	// 32 = 0x20
    _Bool _disabled;	// 33 = 0x21
    _Bool _shouldAppearSelected;	// 34 = 0x22
    _UIFloatingContentView *_floatingView;	// 40 = 0x28
    id <_TVListViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003371e
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <_TVListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
- (void)_updateSelectedBackgroundColor;	// IMP=0x0000000000033559
- (unsigned long long)_floatingViewControlState;	// IMP=0x000000000003351a
- (void)prepareForReuse;	// IMP=0x0000000000033479
- (void)layoutSubviews;	// IMP=0x000000000003336f
- (id)contentView;	// IMP=0x0000000000033352
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003325d
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000033158
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000033053
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000032f39
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000032db4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000032bb5
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;	// IMP=0x0000000000032acb
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000032a63
- (_Bool)canBecomeFocused;	// IMP=0x0000000000032a4e
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000032a31
- (_Bool)_descendantsShouldHighlight;	// IMP=0x00000000000329a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000326c0

@end

