//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIPortraitBlur : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBlurmapImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    NSNumber *inputLumaNoiseScale;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
    NSNumber *inputAperture;	// 112 = 0x70
    NSDictionary *inputTuningParameters;	// 120 = 0x78
    NSString *inputShape;	// 128 = 0x80
    NSNumber *inputDraftMode;	// 136 = 0x88
}

+ (id)customAttributes;	// IMP=0x0060000000109ef6
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000010c037
- (id)outputImageV3;	// IMP=0x000000000010be8f
- (id)outputImageV2;	// IMP=0x000000000010bdcc
- (id)outputImage:(_Bool)arg1;	// IMP=0x000000000010a479
- (id)_ourBlendKernelMetal;	// IMP=0x000000000010a41c
- (id)_ourBlendKernel;	// IMP=0x000000000010a3bf
- (id)_kernelsWithShapes;	// IMP=0x000000000010a362
- (id)_kernelWithShapesMetal;	// IMP=0x000000000010a305
- (id)_kernelMetal;	// IMP=0x000000000010a2a8
- (id)_kernel;	// IMP=0x000000000010a24b

@end

