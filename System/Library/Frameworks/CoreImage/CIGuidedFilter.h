//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGuidedFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputGuideImage;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputEpsilon;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000b2fd0
@property(copy) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(copy) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain) CIImage *inputGuideImage; // @synthesize inputGuideImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000b4122
- (id)computeAB:(id)arg1;	// IMP=0x00000000000b3da9
- (id)_swizzleImageYZZ1:(id)arg1;	// IMP=0x00000000000b3ca9
- (id)_swizzleImageYYZ1:(id)arg1;	// IMP=0x00000000000b3ba9
- (id)_swizzleImageXXX1:(id)arg1;	// IMP=0x00000000000b3aa9
- (id)_combineRGB_and_A;	// IMP=0x00000000000b3a4c
- (id)_finalResult;	// IMP=0x00000000000b39ef
- (id)_computeABKernel;	// IMP=0x00000000000b3993
- (id)subtract:(id)arg1 minus:(id)arg2;	// IMP=0x00000000000b3826
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;	// IMP=0x00000000000b3707
- (id)_multiplyImagesKernel;	// IMP=0x00000000000b36aa
- (id)_boxFilter:(id)arg1 fullFloat:(_Bool)arg2;	// IMP=0x00000000000b3492
- (id)_fullFloatBoxFilter;	// IMP=0x00000000000b3435
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize)arg2;	// IMP=0x00000000000b3320
- (id)_downsampledColorImage:(id)arg1;	// IMP=0x00000000000b31f2

@end
