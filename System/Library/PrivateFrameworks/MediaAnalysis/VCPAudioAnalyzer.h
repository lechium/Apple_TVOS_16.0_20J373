//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPAudioClassifier, VCPLoudnessAnalyzer, VCPSongDetector, VCPVoiceDetector;

__attribute__((visibility("hidden")))
@interface VCPAudioAnalyzer : NSObject
{
    void *_inputBuffer;	// 8 = 0x8
    struct AudioTimeStamp _audioTimestamp;	// 16 = 0x10
    struct AudioBufferList _audioBufferList;	// 80 = 0x50
    int _sampleBatchSize;	// 104 = 0x68
    VCPVoiceDetector *_voiceDetector;	// 112 = 0x70
    VCPAudioClassifier *_audioClassifier;	// 120 = 0x78
    VCPLoudnessAnalyzer *_loudnessAnalyzer;	// 128 = 0x80
    VCPSongDetector *_songDetector;	// 136 = 0x88
    int _bufferedSamples;	// 144 = 0x90
    _Bool _initialized;	// 148 = 0x94
}

- (void).cxx_destruct;	// IMP=0x00000000001b3d2a
- (id)voiceDetections;	// IMP=0x00000000001b3ced
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000001b3beb
- (int)analyzeAsset:(id)arg1 cancel:(CDUnknownBlockType)arg2 results:(id *)arg3;	// IMP=0x00000000001b325f
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000001b30f5
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x00000000001b3067
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x00000000001b2f29
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andTrackDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001b2de7
- (id)audioFormatRequirements;	// IMP=0x00000000001b2cd9
- (void)dealloc;	// IMP=0x00000000001b2c9a
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(_Bool)arg2;	// IMP=0x00000000001b2b0f

@end

