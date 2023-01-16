//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPinchDistortion : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputScale;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0060000000106170
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000106e3b
- (struct CGRect)computeDOD:(float)arg1 scale:(float)arg2;	// IMP=0x00000000001064ba
- (id)_pinchDistortionScaleGE1;	// IMP=0x000000000010649a
- (id)_pinchDistortionScaleLT1;	// IMP=0x000000000010647a

@end

