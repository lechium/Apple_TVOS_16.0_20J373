//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCRImageConversionUtils : NSObject
{
}

+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 cacheContext:(_Bool)arg3;	// IMP=0x00800000000050b3
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3 cacheContext:(_Bool)arg4;	// IMP=0x0080000000004df8
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;	// IMP=0x0080000000004cc3
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;	// IMP=0x0080000000004ac7

@end

