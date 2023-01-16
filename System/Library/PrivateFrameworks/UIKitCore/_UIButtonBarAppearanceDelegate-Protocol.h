//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UICoordinateSpace-Protocol.h>

@class UIBarButtonItem, UIColor, UIImage, UIImageSymbolConfiguration, _UIBarButtonItemAppearanceStorage;

@protocol _UIButtonBarAppearanceDelegate <NSObject, UICoordinateSpace>
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) _Bool centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) _Bool isRTL;
@property(readonly, nonatomic) _Bool compactMetrics;
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
- (double)absorptionForItem:(UIBarButtonItem *)arg1;
- (UIImage *)backIndicatorMaskImage;
- (UIImage *)backIndicatorImage;
- (unsigned long long)edgesPaddingBarButtonItem:(UIBarButtonItem *)arg1;

@optional
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@end

