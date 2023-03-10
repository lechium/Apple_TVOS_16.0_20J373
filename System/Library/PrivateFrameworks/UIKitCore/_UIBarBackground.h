//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIImageView, UIVisualEffectView, _UIBarBackgroundLayout, _UIBarBackgroundShadowView;

__attribute__((visibility("hidden")))
@interface _UIBarBackground : UIView
{
    UIVisualEffectView *_effectView1;	// 176 = 0xb0
    UIImageView *_colorAndImageView1;	// 184 = 0xb8
    _UIBarBackgroundShadowView *_shadowView1;	// 192 = 0xc0
    UIVisualEffectView *_effectView2;	// 200 = 0xc8
    UIImageView *_colorAndImageView2;	// 208 = 0xd0
    _UIBarBackgroundShadowView *_shadowView2;	// 216 = 0xd8
    UIView *_topInsetView;	// 224 = 0xe0
    double _bg1LastLayoutHeight;	// 232 = 0xe8
    double _bg2LastLayoutHeight;	// 240 = 0xf0
    struct {
        unsigned int needsTopInsetView:1;
        unsigned int needsEffectView1:1;
        unsigned int needsColorAndImageView1:1;
        unsigned int needsShadowView1:1;
        unsigned int needsEffectView2:1;
        unsigned int needsColorAndImageView2:1;
        unsigned int needsShadowView2:1;
    } _backgroundFlags;	// 248 = 0xf8
    _Bool _topAligned;	// 256 = 0x100
    NSString *_groupName;	// 264 = 0x108
    _UIBarBackgroundLayout *_layout;	// 272 = 0x110
    UIView *_customBackgroundView;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00000000000fb312
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) _UIBarBackgroundLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool topAligned; // @synthesize topAligned=_topAligned;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void)set_shadowView:(id)arg1;	// IMP=0x00000000000fb2a2
- (id)_shadowView;	// IMP=0x00000000000fb282
- (void)set_backgroundEffectView:(id)arg1;	// IMP=0x00000000000fb265
- (id)_backgroundEffectView;	// IMP=0x00000000000fb245
- (void)transitionBackgroundViews;	// IMP=0x00000000000fb117
- (void)cleanupBackgroundViews;	// IMP=0x00000000000fae38
- (void)updateBackground;	// IMP=0x00000000000fa792
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;	// IMP=0x00000000000fa5ba
- (void)prepareBackgroundViews;	// IMP=0x00000000000f9eef
- (struct CGRect)frameForYOrigin:(double)arg1 height:(double)arg2;	// IMP=0x00000000000f9e7d
- (void)_orderSubviews;	// IMP=0x00000000000f9d2a
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;	// IMP=0x00000000000f9bc8
- (void)_updateBackgroundViewVisiblity;	// IMP=0x00000000000f98ce
- (void)layoutSubviews;	// IMP=0x00000000000f9029
- (id)_encodableSubviews;	// IMP=0x00000000000f901c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f9016
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f8fca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f8f6d
- (void)_setupBackgroundValues;	// IMP=0x00000000000f8f13

@end

