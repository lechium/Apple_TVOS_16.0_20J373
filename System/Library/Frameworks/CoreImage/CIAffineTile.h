//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTile : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSValue *inputTransform;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000000b8b6
@property(retain, nonatomic) NSValue *inputTransform; // @synthesize inputTransform;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000000ba8a
- (id)_kernel;	// IMP=0x000000000000ba6a

@end
