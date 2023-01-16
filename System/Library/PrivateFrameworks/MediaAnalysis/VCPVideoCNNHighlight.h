//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNHighlight
{
    NSMutableArray *_results;	// 8 = 0x8
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
    NSArray *_inputNames;	// 24 = 0x18
    vector_aebc2d99 _inputsData;	// 32 = 0x20
    float *_analysisInput;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000000b84fc
- (void).cxx_destruct;	// IMP=0x00000000000b84a0
- (id)results;	// IMP=0x00000000000b8419
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000b8411
- (int)run:(id)arg1 withPersons:(id)arg2 andRegionCrop:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 andDuration:(CDStruct_1b6d18a9)arg5;	// IMP=0x00000000000b7f50
- (int)loadAnalysisResults:(id)arg1;	// IMP=0x00000000000b777c
- (void)dealloc;	// IMP=0x00000000000b7736
- (id)init;	// IMP=0x00000000000b74c2

@end
