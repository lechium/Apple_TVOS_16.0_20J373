//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIFloatingContentView.h>

@class NSString, UIImage, UIView, VUIBaseView, VUIImageProxy, VUIImageView, VUIMonogramDescription, VUIMonogramViewConfiguration;

__attribute__((visibility("hidden")))
@interface VUIMonogramView : _UIFloatingContentView
{
    VUIBaseView *_placeholderView;	// 8 = 0x8
    _Bool _isSelected;	// 16 = 0x10
    VUIMonogramViewConfiguration *_configuration;	// 24 = 0x18
    VUIMonogramDescription *_monogramDescription;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    UIImage *_placeholderImage;	// 48 = 0x30
    double _unfocusedImageAlpha;	// 56 = 0x38
    UIView *_overlayView;	// 64 = 0x40
    CDUnknownBlockType _pressCompletionBlock;	// 72 = 0x48
    VUIBaseView *_focusedShadowView;	// 80 = 0x50
    VUIBaseView *_unfocusedShadowView;	// 88 = 0x58
    VUIImageView *_imageView;	// 96 = 0x60
    VUIImageProxy *_imageProxy;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000018a1f3
@property(retain, nonatomic) VUIImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) VUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUIBaseView *unfocusedShadowView; // @synthesize unfocusedShadowView=_unfocusedShadowView;
@property(retain, nonatomic) VUIBaseView *focusedShadowView; // @synthesize focusedShadowView=_focusedShadowView;
@property(copy, nonatomic) CDUnknownBlockType pressCompletionBlock; // @synthesize pressCompletionBlock=_pressCompletionBlock;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double unfocusedImageAlpha; // @synthesize unfocusedImageAlpha=_unfocusedImageAlpha;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) VUIMonogramDescription *monogramDescription; // @synthesize monogramDescription=_monogramDescription;
@property(retain, nonatomic) VUIMonogramViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;	// IMP=0x000000000018982c
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000189700
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;	// IMP=0x000000000018948b
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x0000000000189408
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000189402
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000189391
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018931f
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001892dd
- (void)layoutSubviews;	// IMP=0x0000000000189081
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000188e6a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000188e4d
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000188bf3
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001889b2
- (void)_updatePlaceholerView;	// IMP=0x0000000000188932
- (void)setUnFocusedShadowView:(id)arg1;	// IMP=0x000000000018867f
- (void)updateShadowImage;	// IMP=0x00000000001883d2
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000000188134

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
