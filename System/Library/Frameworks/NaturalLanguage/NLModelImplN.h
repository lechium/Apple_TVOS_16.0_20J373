//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplN
{
    void *_nlModel;	// 8 = 0x8
    void *_modelContainer;	// 16 = 0x10
    NLModelConfiguration *_configuration;	// 24 = 0x18
    NSDictionary *_labelMap;	// 32 = 0x20
    unsigned long long _numberOfTrainingInstances;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002d534
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000002cd89
- (id)predictedLabelForString:(id)arg1;	// IMP=0x000000000002ca9d
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000002c3d3
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x000000000002be97
- (id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000002be66
- (id)predictedLabelsDictionaryForString:(id)arg1;	// IMP=0x000000000002be38
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x000000000002be27
- (id)labelMap;	// IMP=0x000000000002be12
- (id)configuration;	// IMP=0x000000000002bdfd
- (id)modelData;	// IMP=0x000000000002bd6f
- (void)dealloc;	// IMP=0x000000000002bd14
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ab2c
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x000000000002a8af
- (id)initWithModelContainer:(void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;	// IMP=0x000000000002a765

@end

