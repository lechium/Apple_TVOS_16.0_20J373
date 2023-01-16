//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView
{
    LPImage *_image;	// 8 = 0x8
    LPImage *_filteredImage;	// 16 = 0x10
    LPImagePresentationProperties *_properties;	// 24 = 0x18
    LPImageViewStyle *_style;	// 32 = 0x20
    LPImageViewStyle *_originalStyle;	// 40 = 0x28
    long long _currentScalingMode;	// 48 = 0x30
    long long _platterReason;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003c014
- (void)_setImageViewScalingMode:(long long)arg1;	// IMP=0x000000000003bf3a
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x000000000003baa4
- (void)_updateScalingMode;	// IMP=0x000000000003ba37
- (id)_createOverlayViewWithOpacity:(double)arg1;	// IMP=0x000000000003b93f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003b5e8
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003b410
- (long long)scalingModeForSize:(struct CGSize)arg1;	// IMP=0x000000000003b020
- (void)installDarkeningViewIfNeeded;	// IMP=0x000000000003af3d
- (_Bool)shouldApplyBackground;	// IMP=0x000000000003aec2
- (void)layoutComponentView;	// IMP=0x000000000003aa85
- (void)updateBorder;	// IMP=0x000000000003a73c
- (void)updateShadowPath;	// IMP=0x000000000003a15b
- (void)updateCornerRadius;	// IMP=0x0000000000039c84
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000039ad0
- (void)ensureImageView;	// IMP=0x0000000000038e13
- (long long)_filter;	// IMP=0x0000000000038d92
- (id)initWithHost:(id)arg1 image:(id)arg2 properties:(id)arg3 style:(id)arg4;	// IMP=0x0000000000038bd3
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000038bc5

@end
