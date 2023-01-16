//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes *_style;	// 8 = 0x8
    UIImageView *_glowView;	// 16 = 0x10
    _Bool _glowEnabled;	// 24 = 0x18
    _Bool _suppressGlow;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000daa618
- (id)_glowImage;	// IMP=0x0000000000daa578
- (id)_baseImage;	// IMP=0x0000000000daa4d8
- (id)_backgroundImageName;	// IMP=0x0000000000daa4bb
- (void)_stopGlowAnimation;	// IMP=0x0000000000daa428
- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;	// IMP=0x0000000000daa06d
- (_Bool)_styleCanGlow;	// IMP=0x0000000000daa044
- (void)setSuppressesGlow:(_Bool)arg1;	// IMP=0x0000000000daa018
- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;	// IMP=0x0000000000da9fda
- (void)setGlowAnimationEnabled:(_Bool)arg1;	// IMP=0x0000000000da9fc6
- (id)style;	// IMP=0x0000000000da9fb1
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;	// IMP=0x0000000000da9d72

@end
