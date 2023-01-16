//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAsset.h>

@class NSString;

@interface CSAsset (SpeakerRecognition)
@property(readonly, nonatomic) _Bool useSpeakerRecognitionAsset;
@property(readonly, nonatomic) _Bool containsMultiUserThresholds;
@property(readonly, nonatomic) _Bool satImplicitTrainingEnabled;
@property(readonly, nonatomic) NSString *keywordDetectorNDAPIConfigFilePath;
@property(readonly, nonatomic) NSString *keywordDetectorQuasarConfigFilePath;
@property(readonly, nonatomic) NSString *voiceProfilePruningCookie;
@property(readonly, nonatomic) unsigned long long maxAllowedEnrollmentUtterances;
@property(readonly, nonatomic) unsigned long long pruningNumRetentionUtterance;
@property(readonly, nonatomic) float pruningThresholdPSR;
@property(readonly, nonatomic) float pruningThresholdSAT;
@property(readonly, nonatomic) float pruningExplicitUttThresholdPSR;
@property(readonly, nonatomic) float pruningExplicitUttThresholdSAT;
@property(readonly, nonatomic) float satVTImplicitThreshold;
@property(readonly, nonatomic) float satImplicitProfileDeltaThreshold;
@property(readonly, nonatomic) float satImplicitProfileThreshold;
@property(readonly, nonatomic) float psrCombinationWeight;
@property(readonly, nonatomic) long long multiUserDeltaScoreThreshold;
@property(readonly, nonatomic) long long multiUserConfidentScoreThreshold;
@property(readonly, nonatomic) long long multiUserHighScoreThreshold;
@property(readonly, nonatomic) long long multiUserLowScoreThreshold;
@property(readonly, nonatomic) float satScoreThreshold;
- (float)satScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x003000000004fd48
@property(readonly, nonatomic) _Bool containsSpeakerRecognitionCategory;
@end

