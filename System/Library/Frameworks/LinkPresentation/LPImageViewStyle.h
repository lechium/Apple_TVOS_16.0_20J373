//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPadding, LPPointUnit, LPShadowStyle, LPSize, NSNumber, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPImageViewStyle : NSObject
{
    _Bool _requireFixedSize;	// 8 = 0x8
    _Bool _scalesToFitParent;	// 9 = 0x9
    _Bool _preservesEdgeAlignmentWhenScaling;	// 10 = 0xa
    _Bool _allowsPlatterPresentation;	// 11 = 0xb
    _Bool _canAdjustVerticalPaddingForFixedSize;	// 12 = 0xc
    _Bool _shouldApplyBackground;	// 13 = 0xd
    LPSize *_fixedSize;	// 16 = 0x10
    LPSize *_minimumSize;	// 24 = 0x18
    LPSize *_maximumSize;	// 32 = 0x20
    LPPointUnit *_fixedFallbackImageSize;	// 40 = 0x28
    NSNumber *_fixedFallbackImageWeight;	// 48 = 0x30
    UIFont *_fixedFallbackImageFont;	// 56 = 0x38
    NSNumber *_fixedFallbackImageScale;	// 64 = 0x40
    LPPadding *_margin;	// 72 = 0x48
    LPPadding *_padding;	// 80 = 0x50
    long long _scalingMode;	// 88 = 0x58
    long long _filter;	// 96 = 0x60
    long long _verticalAlignment;	// 104 = 0x68
    LPPointUnit *_widthForUsingRegularSize;	// 112 = 0x70
    LPShadowStyle *_shadow;	// 120 = 0x78
    UIColor *_maskColor;	// 128 = 0x80
    double _opacity;	// 136 = 0x88
    UIColor *_backgroundColor;	// 144 = 0x90
    LPPointUnit *_backgroundInset;	// 152 = 0x98
    LPPointUnit *_cornerRadius;	// 160 = 0xa0
    double _darkeningAmount;	// 168 = 0xa8
    LPPointUnit *_borderWidth;	// 176 = 0xb0
    UIColor *_borderColor;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000041a59
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) LPPointUnit *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double darkeningAmount; // @synthesize darkeningAmount=_darkeningAmount;
@property(retain, nonatomic) LPPointUnit *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) LPPointUnit *backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property(nonatomic) _Bool shouldApplyBackground; // @synthesize shouldApplyBackground=_shouldApplyBackground;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool canAdjustVerticalPaddingForFixedSize; // @synthesize canAdjustVerticalPaddingForFixedSize=_canAdjustVerticalPaddingForFixedSize;
@property(nonatomic) _Bool allowsPlatterPresentation; // @synthesize allowsPlatterPresentation=_allowsPlatterPresentation;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(retain, nonatomic) LPShadowStyle *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) LPPointUnit *widthForUsingRegularSize; // @synthesize widthForUsingRegularSize=_widthForUsingRegularSize;
@property(nonatomic) _Bool preservesEdgeAlignmentWhenScaling; // @synthesize preservesEdgeAlignmentWhenScaling=_preservesEdgeAlignmentWhenScaling;
@property(nonatomic) _Bool scalesToFitParent; // @synthesize scalesToFitParent=_scalesToFitParent;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(readonly, retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSNumber *fixedFallbackImageScale; // @synthesize fixedFallbackImageScale=_fixedFallbackImageScale;
@property(retain, nonatomic) UIFont *fixedFallbackImageFont; // @synthesize fixedFallbackImageFont=_fixedFallbackImageFont;
@property(retain, nonatomic) NSNumber *fixedFallbackImageWeight; // @synthesize fixedFallbackImageWeight=_fixedFallbackImageWeight;
@property(retain, nonatomic) LPPointUnit *fixedFallbackImageSize; // @synthesize fixedFallbackImageSize=_fixedFallbackImageSize;
@property(retain, nonatomic) LPSize *maximumSize; // @synthesize maximumSize=_maximumSize;
@property(retain, nonatomic) LPSize *minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) _Bool requireFixedSize; // @synthesize requireFixedSize=_requireFixedSize;
@property(retain, nonatomic) LPSize *fixedSize; // @synthesize fixedSize=_fixedSize;
- (id)emailCompatibleMargin;	// IMP=0x00000000000417a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000415b8
- (id)init;	// IMP=0x000000000004148a

@end

