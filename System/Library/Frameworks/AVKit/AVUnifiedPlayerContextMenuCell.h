//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView, _UIFloatingContentView;
@protocol AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuCell : UICollectionViewCell
{
    _Bool _destructive;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    UIView *_stackView;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    UIImageView *_leadingImageView;	// 56 = 0x38
    UIImageView *_trailingImageView;	// 64 = 0x40
}

+ (id)_checkmarkImage;	// IMP=0x006000000011e63d
+ (Class)classForFocusableCollectionView;	// IMP=0x006000000011e62c
+ (Class)classForClippedCollectionView;	// IMP=0x006000000011e61b
- (void).cxx_destruct;	// IMP=0x000000000011e52b
@property(readonly, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
- (_Bool)_isFocusedForForegroundColor;	// IMP=0x000000000011e47e
- (void)_updateBackgroundColor;	// IMP=0x000000000011e478
- (void)_updateFloatingContentControlIsFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000011e3c9
- (void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000011e330
- (void)_updateFloatingContentControlStateAnimated:(_Bool)arg1;	// IMP=0x000000000011e2ee
- (id)_secondaryImageView;	// IMP=0x000000000011e2d9
- (id)_primaryImageView;	// IMP=0x000000000011e2aa
- (_Bool)_isDisabled;	// IMP=0x000000000011e295
- (void)_updateVisualStateForIsFocused:(_Bool)arg1;	// IMP=0x000000000011e125
- (void)_updateVisualState;	// IMP=0x000000000011e0f4
- (void)didHintFocusMovement:(id)arg1;	// IMP=0x000000000011e0d1
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000011dfb0
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011df73
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011df36
- (void)prepareForReuse;	// IMP=0x000000000011de69
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000011de4c
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x000000000011de0b
- (void)setFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000011ddef
@property(nonatomic, getter=isCheckmarkHidden) _Bool checkmarkHidden;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000011da05
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011cda2

@end

