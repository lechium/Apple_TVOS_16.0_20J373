//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHistogramDisplayFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputHeight;	// 80 = 0x50
    NSNumber *inputHighLimit;	// 88 = 0x58
    NSNumber *inputLowLimit;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000b64e9
@property(retain, nonatomic) NSNumber *inputLowLimit; // @synthesize inputLowLimit;
@property(retain, nonatomic) NSNumber *inputHighLimit; // @synthesize inputHighLimit;
@property(retain, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000b6881
- (id)_kernel;	// IMP=0x00000000000b6861

@end

