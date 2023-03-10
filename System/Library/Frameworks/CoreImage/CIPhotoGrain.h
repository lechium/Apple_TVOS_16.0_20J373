//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoGrain : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputISO;	// 80 = 0x50
    NSNumber *inputAmount;	// 88 = 0x58
    NSNumber *inputSeed;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000001056a7
@property(copy, nonatomic) NSNumber *inputSeed; // @synthesize inputSeed;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(copy, nonatomic) NSNumber *inputISO; // @synthesize inputISO;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001059aa
- (id)_paddedTileKernel;	// IMP=0x0000000000105687
- (id)_grainBlendAndMixKernel;	// IMP=0x0000000000105667
- (id)_interpolateGrainKernel;	// IMP=0x0000000000105647

@end

