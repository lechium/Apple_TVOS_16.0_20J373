//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIZoomBlur : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputAmount;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000000fa29e
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000fac91
- (_Bool)_isIdentity;	// IMP=0x00000000000fac39
- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;	// IMP=0x00000000000fa685
- (id)_kernelNew;	// IMP=0x00000000000fa642
- (id)_kernel;	// IMP=0x00000000000fa5ff
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000fa58e
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000fa50e

@end

