//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x002000000024ed2c
- (void).cxx_destruct;	// IMP=0x002000000024fb71
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000024eebb
- (void)enforcePreviousEndpointHint;	// IMP=0x001000000024eeb5
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024ee9d
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x001000000024ee97
- (void)playRecordingStartAlert;	// IMP=0x001000000024ee91
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x001000000024ee77
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x001000000024ee71
- (void)setFingerprintWasRecognized;	// IMP=0x001000000024ee6b
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000024ee65
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x001000000024ee5f
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x001000000024ee59
- (void)stopFingerprinting;	// IMP=0x001000000024ee53
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x001000000024ee3e
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x001000000024ee29
- (void)setSpeechWasRecognized;	// IMP=0x001000000024ee23
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x001000000024ee1d
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x001000000024ee17
- (void)releaseAudioSession;	// IMP=0x001000000024ee11
- (id)delegate;	// IMP=0x001000000024edfb
- (void)setDelegate:(id)arg1;	// IMP=0x001000000024ed57
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x001000000024ecc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
