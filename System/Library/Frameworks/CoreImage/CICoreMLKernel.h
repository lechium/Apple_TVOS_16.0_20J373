//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CICoreMLKernel : CIImageProcessorKernel
{
}

+ (int)outputFormat;	// IMP=0x008000000005c1bf
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000005c1b0
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000005bca3
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000005bbee

@end

