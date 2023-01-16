//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, NSMutableArray, SNAudioStreamAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPAudioClassifier : NSObject
{
    unsigned long long _analysisTypes;	// 8 = 0x8
    SNAudioStreamAnalyzer *_SNAnalyzer;	// 16 = 0x10
    AVAudioPCMBuffer *_pcmBuffer;	// 24 = 0x18
    long long _framePosition;	// 32 = 0x20
    float _sampleRate;	// 40 = 0x28
    NSMutableArray *_detectors;	// 48 = 0x30
    NSMutableArray *_classifiers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000018fee4
- (id)results;	// IMP=0x000000000018fbd5
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x000000000018f962
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x000000000018f8ba
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 trackDuration:(CDStruct_1b6d18a9)arg2 andSampleBatchSize:(int)arg3;	// IMP=0x000000000018edc3
- (id)initWithTypes:(unsigned long long)arg1;	// IMP=0x000000000018ece7

@end

