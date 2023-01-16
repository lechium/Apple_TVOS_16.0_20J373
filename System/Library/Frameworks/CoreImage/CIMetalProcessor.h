//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIMetalProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x00800000000f38b8
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x00800000000f38b0
+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000000f38a8
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000f38a0
+ (int)outputFormat;	// IMP=0x00800000000f3898
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000f3890
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000f378c
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000f34c7
+ (void)setFilterParamsAndImages:(id)arg1 arguments:(id)arg2 filter:(id)arg3;	// IMP=0x00800000000f33e3
+ (void)setFilterParams:(id)arg1 arguments:(id)arg2 filter:(id)arg3;	// IMP=0x00800000000f2f44

@end

