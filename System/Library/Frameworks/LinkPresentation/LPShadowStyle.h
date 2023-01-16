//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPShadowStyle : NSObject
{
    double _radius;	// 8 = 0x8
    double _opacity;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    LPSize *_offset;	// 32 = 0x20
}

+ (id)collaborationPreviewShadow;	// IMP=0x0060000000040507
+ (id)cardHeadingIconShadow;	// IMP=0x0060000000040457
- (void).cxx_destruct;	// IMP=0x0000000000040657
@property(retain, nonatomic) LPSize *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)init;	// IMP=0x0000000000040409

@end

