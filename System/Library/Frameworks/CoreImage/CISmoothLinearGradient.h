//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector;

__attribute__((visibility("hidden")))
@interface CISmoothLinearGradient : CIFilter
{
    CIVector *inputPoint0;	// 72 = 0x48
    CIVector *inputPoint1;	// 80 = 0x50
    CIColor *inputColor0;	// 88 = 0x58
    CIColor *inputColor1;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000b1897
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(retain, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
- (id)outputImage;	// IMP=0x00000000000b1b82
- (id)_kernel;	// IMP=0x00000000000b1877

@end

