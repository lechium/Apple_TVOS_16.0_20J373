//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSData;

__attribute__((visibility("hidden")))
@interface CIColorCurves : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSData *inputCurvesData;	// 80 = 0x50
    CIVector *inputCurvesDomain;	// 88 = 0x58
    id inputColorSpace;	// 96 = 0x60
    CIImage *_curvesImage;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x006000000004165d
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(copy, nonatomic) NSData *inputCurvesData; // @synthesize inputCurvesData;
@property(retain, nonatomic) CIVector *inputCurvesDomain; // @synthesize inputCurvesDomain;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000041c02
- (_Bool)_checkInputs;	// IMP=0x0000000000041ade
- (id)curvesImage;	// IMP=0x00000000000418ba
- (id)_kernel;	// IMP=0x0000000000041877
- (void)dealloc;	// IMP=0x00000000000415be

@end

