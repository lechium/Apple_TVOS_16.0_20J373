//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class _TVImageView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVShowcaseCell : UICollectionViewCell
{
    _UIFloatingContentView *_floatingView;	// 8 = 0x8
    _TVImageView *_imageView;	// 16 = 0x10
    struct CGSize _imageSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000df7bd
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) __weak _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000df4e0
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000df28d
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000df03a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000def97
- (_Bool)canBecomeFocused;	// IMP=0x00000000000def8f
- (void)layoutSubviews;	// IMP=0x00000000000ded8e
- (void)prepareForReuse;	// IMP=0x00000000000decc9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000deae5

@end

