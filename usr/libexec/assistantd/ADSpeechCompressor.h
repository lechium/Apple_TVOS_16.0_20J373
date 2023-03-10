//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue;

@interface ADSpeechCompressor : NSObject
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    struct OpaqueAudioConverter *_audioConverter;	// 16 = 0x10
    NSMutableData *_bufferedAudio;	// 24 = 0x18
    unsigned long long _packetIndex;	// 32 = 0x20
    unsigned long long _bytesConsumed;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000b25a0
- (void)addAudioSampleData:(id)arg1;	// IMP=0x00100000000b1ede
- (void)startCompressionNarrowband:(_Bool)arg1;	// IMP=0x00100000000b1bb7
- (void)reset;	// IMP=0x00100000000b1b78
- (void)playRecordingStartAlert;	// IMP=0x00100000000b1b72
- (void)enforcePreviousEndpointHint;	// IMP=0x00100000000b1b6c
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1b54
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00100000000b1b4e
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b1b34
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00100000000b1b2e
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1;	// IMP=0x00100000000b1b28
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x00100000000b1b22
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x00100000000b1b1c
- (void)stopFingerprinting;	// IMP=0x00100000000b1b16
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00100000000b1a82
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000000b19ee
- (void)setFingerprintWasRecognized;	// IMP=0x00100000000b19e8
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00100000000b19e2
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00100000000b19dc
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x00100000000b19d6
- (void)releaseAudioSession;	// IMP=0x00100000000b19d0
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000b192c
- (void)dealloc;	// IMP=0x00100000000b18ee
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x00100000000b1883

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

