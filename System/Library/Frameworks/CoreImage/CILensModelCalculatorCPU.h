//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CILensModelCalculatorCPU : CIImageProcessorKernel
{
}

+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000e57d6
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000e577b
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000e5773
+ (int)outputFormat;	// IMP=0x00800000000e5764
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000e574f

@end

