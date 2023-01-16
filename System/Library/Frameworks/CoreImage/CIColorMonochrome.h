//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputIntensity;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000000428d3
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000042b33
- (id)_kernel;	// IMP=0x00000000000428b3

@end

