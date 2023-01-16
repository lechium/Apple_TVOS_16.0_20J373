//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRippleTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    CIImage *inputShadingImage;	// 88 = 0x58
    CIVector *inputCenter;	// 96 = 0x60
    CIVector *inputExtent;	// 104 = 0x68
    NSNumber *inputTime;	// 112 = 0x70
    NSNumber *inputWidth;	// 120 = 0x78
    NSNumber *inputScale;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x006000000014d762
@property(retain, nonatomic) CIImage *inputShadingImage; // @synthesize inputShadingImage;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000014cf3a
- (id)_CIRippleTransition;	// IMP=0x000000000014cf1a

@end

