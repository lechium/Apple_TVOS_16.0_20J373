//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCubesMixedWithMask : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMaskImage;	// 80 = 0x50
    NSNumber *inputCubeDimension;	// 88 = 0x58
    NSData *inputCube0Data;	// 96 = 0x60
    NSData *inputCube1Data;	// 104 = 0x68
    id inputColorSpace;	// 112 = 0x70
    NSNumber *inputExtrapolate;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x0060000000040d55
@property(copy, nonatomic) NSNumber *inputExtrapolate; // @synthesize inputExtrapolate;
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(copy, nonatomic) NSData *inputCube1Data; // @synthesize inputCube1Data;
@property(copy, nonatomic) NSData *inputCube0Data; // @synthesize inputCube0Data;
@property(retain, nonatomic) NSNumber *inputCubeDimension; // @synthesize inputCubeDimension;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000004122a
- (_Bool)_checkInputs;	// IMP=0x00000000000410d1

@end

