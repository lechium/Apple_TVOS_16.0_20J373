//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSKeywordAnalyzerNDAPIResult;

@interface CSSinglePhraseResult : NSObject
{
    _Bool _isSecondChance;	// 8 = 0x8
    _Bool _isSecondChanceCandidate;	// 9 = 0x9
    _Bool _isRunningQuasar;	// 10 = 0xa
    float _combinedScore;	// 12 = 0xc
    float _ndapiScore;	// 16 = 0x10
    float _recognizerScore;	// 20 = 0x14
    unsigned long long _phId;	// 24 = 0x18
    unsigned long long _decision;	// 32 = 0x20
    CSKeywordAnalyzerNDAPIResult *_ndapiResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d492b
@property(readonly, nonatomic) _Bool isRunningQuasar; // @synthesize isRunningQuasar=_isRunningQuasar;
@property(readonly, nonatomic) _Bool isSecondChanceCandidate; // @synthesize isSecondChanceCandidate=_isSecondChanceCandidate;
@property(readonly, nonatomic) _Bool isSecondChance; // @synthesize isSecondChance=_isSecondChance;
@property(readonly, nonatomic) float recognizerScore; // @synthesize recognizerScore=_recognizerScore;
@property(readonly, nonatomic) CSKeywordAnalyzerNDAPIResult *ndapiResult; // @synthesize ndapiResult=_ndapiResult;
@property(readonly, nonatomic) float ndapiScore; // @synthesize ndapiScore=_ndapiScore;
@property(readonly, nonatomic) float combinedScore; // @synthesize combinedScore=_combinedScore;
@property(readonly, nonatomic) unsigned long long decision; // @synthesize decision=_decision;
@property(readonly, nonatomic) unsigned long long phId; // @synthesize phId=_phId;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d4824
- (id)initWithPhId:(unsigned long long)arg1 keywordDetectorDecision:(unsigned long long)arg2 combinedScore:(float)arg3 ndapiScore:(float)arg4 ndapiResult:(id)arg5 recognizerScore:(float)arg6 isSecondChance:(_Bool)arg7 isSecondChanceCandidate:(_Bool)arg8 isRunningQuasar:(_Bool)arg9;	// IMP=0x00100000000d4760

@end

