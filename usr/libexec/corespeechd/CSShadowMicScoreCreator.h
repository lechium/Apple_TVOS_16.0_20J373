//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface CSShadowMicScoreCreator : NSObject
{
    unsigned long long _bestStartDetectSample;	// 8 = 0x8
    unsigned long long _bestEarlyDetectSample;	// 16 = 0x10
    unsigned long long _bestEndDetectSample;	// 24 = 0x18
    double _shadowMicScore;	// 32 = 0x20
    NSMutableArray *_rmsSamplesForEntireAudio;	// 40 = 0x28
    NSMutableData *_audioBuffer;	// 48 = 0x30
    double _speechVoiceLevel;	// 56 = 0x38
    unsigned long long _numberOfVoicingFrames;	// 64 = 0x40
    long long _numberOfTotalFramesETFT;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000008429a
@property(nonatomic) long long numberOfTotalFramesETFT; // @synthesize numberOfTotalFramesETFT=_numberOfTotalFramesETFT;
@property(nonatomic) unsigned long long numberOfVoicingFrames; // @synthesize numberOfVoicingFrames=_numberOfVoicingFrames;
@property(nonatomic) double speechVoiceLevel; // @synthesize speechVoiceLevel=_speechVoiceLevel;
@property(retain, nonatomic) NSMutableData *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) NSMutableArray *rmsSamplesForEntireAudio; // @synthesize rmsSamplesForEntireAudio=_rmsSamplesForEntireAudio;
@property(nonatomic) double shadowMicScore; // @synthesize shadowMicScore=_shadowMicScore;
@property(nonatomic) unsigned long long bestEndDetectSample; // @synthesize bestEndDetectSample=_bestEndDetectSample;
@property(nonatomic) unsigned long long bestEarlyDetectSample; // @synthesize bestEarlyDetectSample=_bestEarlyDetectSample;
@property(nonatomic) unsigned long long bestStartDetectSample; // @synthesize bestStartDetectSample=_bestStartDetectSample;
- (void)_calculateNumberOfVoicingFrames;	// IMP=0x0010000000083f8e
- (void)_calculateSpeechVoicingLevel;	// IMP=0x0010000000083d0b
- (double)_calculateRMSWithFrameData:(short [80])arg1;	// IMP=0x0010000000083cc6
- (void)calculateShadowMicScore;	// IMP=0x0010000000083944
- (void)addDataToBuffer:(id)arg1;	// IMP=0x001000000008392e
- (id)init;	// IMP=0x00100000000838a7

@end

