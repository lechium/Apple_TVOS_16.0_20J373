//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApplyV3 : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputLensModelImage;	// 80 = 0x50
}

@property(retain) CIImage *inputLensModelImage; // @synthesize inputLensModelImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001abe39
- (id)kernel;	// IMP=0x00000000001abddc

@end

