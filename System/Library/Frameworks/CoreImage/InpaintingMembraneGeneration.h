//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface InpaintingMembraneGeneration : CIImageProcessorKernel
{
}

+ (id)fillSmoothMembraneForSRGBImage:(id)arg1 andMask:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000229e65
+ (int)selectMembraneProcessingResolutionBasedOnImageSize:(struct CGSize)arg1;	// IMP=0x0080000000229d08
+ (int)outputFormat;	// IMP=0x0080000000229cf9
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x0080000000229cea
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x0080000000229ce2
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x0080000000229cda
+ (_Bool)synchronizeInputs;	// IMP=0x0080000000229cd2
+ (_Bool)allowPartialOutputRegion;	// IMP=0x0080000000229cca
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x0080000000229cb2
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000002299c4
+ (id)getMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x0080000000229956
+ (_Bool)initializeMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x00800000002296cb

@end

