//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderLogoView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005d4c5
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005d478
- (void)layoutSubviews;	// IMP=0x000000000005d3de
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000005d311
@property(readonly, nonatomic) struct CGSize preferredImageSize;
@property(readonly, nonatomic) double marginLength;
@property(retain, nonatomic) UIImage *logo;
- (double)_height;	// IMP=0x000000000005d1f6
- (struct CGRect)_imageViewFrame;	// IMP=0x000000000005d188
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005d144
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005d058

@end

