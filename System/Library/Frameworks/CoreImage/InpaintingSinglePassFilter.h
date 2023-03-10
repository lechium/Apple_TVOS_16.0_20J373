//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface InpaintingSinglePassFilter : CIImageProcessorKernel
{
}

+ (id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 error:(id *)arg6;	// IMP=0x008000000012f3ed
+ (id)performInpaintingAndBlendingOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 blendingRadius:(int)arg3 inpaintingResourceDescriptor:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;	// IMP=0x008000000012f2fb
+ (id)performSinglePassInpaintingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(struct CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;	// IMP=0x008000000012edca
+ (int)outputFormat;	// IMP=0x008000000012edbb
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000012edac
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x008000000012eda4
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x008000000012ed9c
+ (_Bool)synchronizeInputs;	// IMP=0x008000000012ed94
+ (_Bool)allowPartialOutputRegion;	// IMP=0x008000000012ed8c
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000012ed74
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000012e930

@end

