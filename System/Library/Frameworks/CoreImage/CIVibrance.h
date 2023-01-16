//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputAmount;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x001000000017b0b5
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x000000000017b6a7
- (id)_outputProperties;	// IMP=0x000000000017b58f
- (id)outputImage;	// IMP=0x000000000017b31b
- (id)_kernelPos;	// IMP=0x000000000017b2fb
- (id)_kernelNeg;	// IMP=0x000000000017b2db
- (_Bool)_isIdentity;	// IMP=0x000000000017b2a6

@end

