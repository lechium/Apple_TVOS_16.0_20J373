//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class NSDictionary, SSRSpeakerAnalyzerPSR;

@protocol SSRSpeakerAnalyzerPSRDelegate <NSObject>

@optional
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(SSRSpeakerAnalyzerPSR *)arg1 withVoiceRecognitionInfo:(NSDictionary *)arg2;
- (void)voiceRecognitionPSRAnalyzer:(SSRSpeakerAnalyzerPSR *)arg1 hasVoiceRecognitionInfo:(NSDictionary *)arg2;
@end
