//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISegmentationFusion : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMatteImage;	// 80 = 0x50
    CIVector *inputAddBlur;	// 88 = 0x58
    CIVector *inputRemoveBlur;	// 96 = 0x60
    NSNumber *inputApertureScaling;	// 104 = 0x68
    NSDictionary *inputTuningParameters;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x00600000001ab301
- (id)outputImage;	// IMP=0x00000000001ab6cb
- (_Bool)_isIdentity;	// IMP=0x00000000001ab671
- (id)kernel;	// IMP=0x00000000001ab2e1

@end
