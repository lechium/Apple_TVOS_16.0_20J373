//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVignetteEffect : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputIntensity;	// 96 = 0x60
    NSNumber *inputFalloff;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x006000000017bd5d
@property(retain, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000017c132
- (id)_negkernel;	// IMP=0x000000000017c112
- (id)_poskernel;	// IMP=0x000000000017c0f2
- (_Bool)_isIdentity;	// IMP=0x000000000017c0bd

@end

