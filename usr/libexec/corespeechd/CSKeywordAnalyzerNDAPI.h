//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject
{
    CSNovDetector *_novDetector;	// 8 = 0x8
    unsigned long long _startAnalyzeSampleCount;	// 16 = 0x10
    _Bool _isStartSampleCountMarked;	// 24 = 0x18
    unsigned long long _lastSampleFed;	// 32 = 0x20
    unsigned long long _sampleFedWrapAroundOffset;	// 40 = 0x28
    unsigned int _activePhId;	// 48 = 0x30
    unsigned long long _activeChannel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000052791
@property(nonatomic) unsigned int activePhId; // @synthesize activePhId=_activePhId;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (float)getRejectLoggingThreshold;	// IMP=0x00100000000526e4
- (float)getLoggingThreshold;	// IMP=0x001000000005265d
- (float)getThreshold;	// IMP=0x00100000000525d6
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x00100000000525b2
- (id)getBestAnalyzedResults;	// IMP=0x001000000005253f
- (id)getAnalyzedResults;	// IMP=0x0010000000052450
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)arg1 phId:(unsigned long long)arg2;	// IMP=0x00100000000522db
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00100000000522c5
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00100000000522af
- (void)_processAudioChunk:(id)arg1;	// IMP=0x0010000000052182
- (id)getBestAnalyzedResultsFromAudioChunk:(id)arg1;	// IMP=0x0010000000052154
- (id)getAnalyzedResultsFromAudioChunk:(id)arg1;	// IMP=0x0010000000052126
- (void)processAudioChunk:(id)arg1;	// IMP=0x001000000005210b
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x001000000005206c
- (void)_resetStartAnalyzeTime;	// IMP=0x001000000005205a
- (void)resetBest;	// IMP=0x0010000000052044
- (void)reset;	// IMP=0x001000000005200b
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x0010000000051f20

@end

