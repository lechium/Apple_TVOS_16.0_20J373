//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputAspectRatio;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000000e3aaa
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e3738
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000e2db7
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000e11f7
- (_Bool)_isIdentity;	// IMP=0x00000000000e1198

@end
