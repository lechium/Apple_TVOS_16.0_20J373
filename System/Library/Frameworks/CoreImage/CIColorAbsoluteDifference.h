//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorAbsoluteDifference : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputImage2;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x00600000001fa17c
@property(retain, nonatomic) CIImage *inputImage2; // @synthesize inputImage2;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001fa299

@end

