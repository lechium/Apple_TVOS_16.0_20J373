//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvertRGBtoLab : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputNormalize;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x00600000000e0b8a
@property(retain, nonatomic) NSNumber *inputNormalize; // @synthesize inputNormalize;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e0d4c

@end

