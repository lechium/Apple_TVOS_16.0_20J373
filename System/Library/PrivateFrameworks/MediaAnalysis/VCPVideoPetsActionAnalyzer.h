//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, VCPFrameAnalysisStats, VCPImagePetsKeypointsAnalyzer, VCPVideoObjectTracker;

__attribute__((visibility("hidden")))
@interface VCPVideoPetsActionAnalyzer
{
    VCPImagePetsKeypointsAnalyzer *_poseAnalyzer;	// 8 = 0x8
    CDStruct_1b6d18a9 _timeLastProcess;	// 16 = 0x10
    CDStruct_1b6d18a9 _timeLastProcessFullFrame;	// 40 = 0x28
    NSMutableArray *_bodyArray;	// 64 = 0x40
    float _maxScore;	// 72 = 0x48
    CDStruct_1b6d18a9 _endTime;	// 76 = 0x4c
    CDStruct_1b6d18a9 _startTime;	// 100 = 0x64
    NSMutableArray *_actionResults;	// 128 = 0x80
    NSMutableArray *_keyPetResults;	// 136 = 0x88
    NSMutableArray *_poseResults;	// 144 = 0x90
    struct CGRect _crop;	// 152 = 0x98
    struct CGRect _petRect;	// 184 = 0xb8
    float _actionScoreAbsolute;	// 216 = 0xd8
    float _actionScoreRelative;	// 220 = 0xdc
    float _scoreAbsoluteMax;	// 224 = 0xe0
    float _scoreRelativeMax;	// 228 = 0xe4
    CDStruct_1b6d18a9 _lastPetTimestamp;	// 232 = 0xe8
    VCPFrameAnalysisStats *_frameStats;	// 256 = 0x100
    VCPVideoObjectTracker *_tracker;	// 264 = 0x108
    _Bool _tracking;	// 272 = 0x110
    NSNumber *_timeOfInterest;	// 280 = 0x118
    _Bool _sampleFlag;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000181b20
- (id)results;	// IMP=0x0000000000181a93
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000181a31
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x0000000000180458
- (int)processPets:(id)arg1 petsBounds:(id)arg2 dominantPetIdx:(int)arg3 frame:(struct __CVBuffer *)arg4 timestamp:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6;	// IMP=0x000000000017f784
- (float)intersectionOverUnion:(struct CGRect)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000017f6e6
- (struct CGRect)scaleRect:(struct CGRect)arg1 scaleX:(float)arg2 scaleY:(float)arg3;	// IMP=0x000000000017f6c0
- (void)computeActionScore;	// IMP=0x000000000017ef26
- (void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float *)arg3 intraVar:(float *)arg4;	// IMP=0x000000000017e5f0
- (float)normDistance:(id)arg1 point2:(id)arg2;	// IMP=0x000000000017e307
- (id)initWithFrameStats:(id)arg1 timeOfInterest:(id)arg2;	// IMP=0x000000000017dfd8

@end

