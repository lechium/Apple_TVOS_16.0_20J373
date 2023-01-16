//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIContext, CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartToneFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputExposure;	// 80 = 0x50
    NSNumber *inputContrast;	// 88 = 0x58
    NSNumber *inputBrightness;	// 96 = 0x60
    NSNumber *inputShadows;	// 104 = 0x68
    NSNumber *inputHighlights;	// 112 = 0x70
    NSNumber *inputBlack;	// 120 = 0x78
    NSNumber *inputRawHighlights;	// 128 = 0x80
    NSNumber *inputLocalLight;	// 136 = 0x88
    NSData *_inputLightMap;	// 144 = 0x90
    NSNumber *inputUseCube;	// 152 = 0x98
    id inputUseCubeColorSpace;	// 160 = 0xa0
    CIImage *_cubeImage;	// 168 = 0xa8
    NSData *_cubeData;	// 176 = 0xb0
    CIContext *_cubeContext;	// 184 = 0xb8
}

+ (id)customAttributes;	// IMP=0x006000000015e5ae
@property(retain, nonatomic) id inputUseCubeColorSpace; // @synthesize inputUseCubeColorSpace;
@property(retain, nonatomic) NSNumber *inputUseCube; // @synthesize inputUseCube;
@property(retain, nonatomic) NSData *inputLightMap; // @synthesize inputLightMap=_inputLightMap;
@property(retain, nonatomic) NSNumber *inputLocalLight; // @synthesize inputLocalLight;
@property(retain, nonatomic) NSNumber *inputRawHighlights; // @synthesize inputRawHighlights;
@property(retain, nonatomic) NSNumber *inputBlack; // @synthesize inputBlack;
@property(retain, nonatomic) NSNumber *inputHighlights; // @synthesize inputHighlights;
@property(retain, nonatomic) NSNumber *inputShadows; // @synthesize inputShadows;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast;
@property(retain, nonatomic) NSNumber *inputExposure; // @synthesize inputExposure;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000015f057
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000015efb6
- (id)_kernelRH;	// IMP=0x000000000015ef96
- (id)_kernelH;	// IMP=0x000000000015ef76
- (id)_kernelC;	// IMP=0x000000000015ef56
- (id)_kernelBpos;	// IMP=0x000000000015ef36
- (id)_kernelBneg;	// IMP=0x000000000015ef16
- (void)dealloc;	// IMP=0x000000000015ee99
- (_Bool)_isIdentity;	// IMP=0x000000000015ed63

@end
