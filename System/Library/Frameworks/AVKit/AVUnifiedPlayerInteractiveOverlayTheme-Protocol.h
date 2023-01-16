//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UIColor, UIImageSymbolConfiguration;
@protocol AVShadowSettings;

@protocol AVUnifiedPlayerInteractiveOverlayTheme <NSObject>
@property(readonly, nonatomic) UIColor *platterFocusedBackgroundColor;
@property(readonly, nonatomic) id <AVShadowSettings> platterShadowSettings;
@property(readonly, nonatomic) double platterFocusedSizeIncrease;
@property(readonly, nonatomic) long long platterBlurEffectStyle;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property(readonly, nonatomic) id <AVShadowSettings> imageShadowSettings;
@property(readonly, nonatomic) UIColor *imageTintColor;
@property(readonly, nonatomic) struct CGPoint contentMotionTranslation;
@property(readonly, nonatomic) double interitemSpacing;
@property(readonly, nonatomic) struct CGSize itemSize;
@property(readonly, nonatomic) double transportBarSpacing;
@end
