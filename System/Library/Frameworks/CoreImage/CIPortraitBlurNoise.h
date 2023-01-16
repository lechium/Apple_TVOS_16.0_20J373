//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurNoise : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputLumaNoiseAmpl;	// 80 = 0x50
    NSNumber *inputLumaNoiseModelCoeff;	// 88 = 0x58
    CIVector *inputExtent;	// 96 = 0x60
    NSNumber *inputUseMetal;	// 104 = 0x68
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(copy) CIVector *inputExtent; // @synthesize inputExtent;
@property(copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property(copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000109758
- (id)_kernelMetal;	// IMP=0x00000000001096fb
- (id)_kernel;	// IMP=0x000000000010969e

@end

