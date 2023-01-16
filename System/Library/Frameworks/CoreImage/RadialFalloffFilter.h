//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RadialFalloffFilter : CIFilter
{
    CIVector *inputExtent;	// 72 = 0x48
    CIImage *inputCenter;	// 80 = 0x50
    NSNumber *inputFalloff;	// 88 = 0x58
    NSNumber *inputRadius;	// 96 = 0x60
    NSNumber *inputAnisotropic;	// 104 = 0x68
}

@property(retain, nonatomic) NSNumber *inputAnisotropic; // @synthesize inputAnisotropic;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff;
@property(retain, nonatomic) CIImage *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
- (id)outputImage;	// IMP=0x0000000000076c92

@end

