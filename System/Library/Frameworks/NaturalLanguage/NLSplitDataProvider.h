//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;	// 104 = 0x68
    NSArray *_indexes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000003e1a2
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000003e185
- (unsigned long long)numberOfLabels;	// IMP=0x000000000003e168
- (id)documentFrequencyMap;	// IMP=0x000000000003e14b
- (id)vocabularyMap;	// IMP=0x000000000003e12e
- (id)inverseLabelMap;	// IMP=0x000000000003e111
- (id)labelMap;	// IMP=0x000000000003e0f4
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x000000000003e0d7
- (void)_generateMaps;	// IMP=0x000000000003e0d1
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003e052
- (unsigned long long)numberOfInstances;	// IMP=0x000000000003e035
- (id)configuration;	// IMP=0x000000000003e018
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;	// IMP=0x000000000003df63

@end

