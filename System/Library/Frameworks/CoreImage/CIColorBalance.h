//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputStrength;	// 88 = 0x58
    NSNumber *inputWarmth;	// 96 = 0x60
    NSNumber *inputDamping;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x006000000003e7b6
@property(retain, nonatomic) NSNumber *inputDamping; // @synthesize inputDamping;
@property(retain, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000003eb7e
- (id)_kernel;	// IMP=0x000000000003eb5e

@end

