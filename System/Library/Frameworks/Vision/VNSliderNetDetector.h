//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSliderNetDetector
{
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x0080000000209824
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0080000000209817
+ (id)modelNameForConfiguration:(id)arg1;	// IMP=0x008000000020980a
+ (id)supportedAdjustmentKeysForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00800000002097fd
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000002094b3
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x00000000002094a8
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000020919c

@end

