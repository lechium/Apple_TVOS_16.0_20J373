//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinator, ADSpeechCompressor, ADSpeechLog, ADSpeechPlaybackSimulator, ADVolumeService, AFAudioPowerUpdater, AFClientConfiguration, AFDictationOptions, AFInstanceContext, CSAudioDeviceInfo, CSAudioSessionController, CSSiriAudioPlaybackService, CSSiriSpeechRecorder, CSSiriSpeechRecordingContext, CSSpeechController, CoreEmbeddedSpeechRecognizer, MISSING_TYPE, NSArray, NSError, NSString;
@protocol ADSpeechManagerDelegate, ADVolumeServiceProviding, ADVolumeTracking, AFAudioSessionAssertionAcquisitionService, CSSiriRecordingInfoProviding, CSSiriSpeechCapturing, OS_dispatch_queue;

@interface ADSpeechManager : NSObject
{
    CoreEmbeddedSpeechRecognizer *_interactiveLocalSpeechRecognizer;	// 8 = 0x8
    NSString *_localSpeechRecognizerTask;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    AFInstanceContext *_instanceContext;	// 32 = 0x20
    int _speechState;	// 40 = 0x28
    _Bool _shouldTalkToDelegate;	// 44 = 0x2c
    long long _capturingMode;	// 48 = 0x30
    AFClientConfiguration *_clientConfiguration;	// 56 = 0x38
    CSSiriSpeechRecordingContext *_capturingContext;	// 64 = 0x40
    NSError *_recordingError;	// 72 = 0x48
    id <ADSpeechManagerDelegate> _delegate;	// 80 = 0x50
    CDUnknownBlockType _recordStartedCompletion;	// 88 = 0x58
    CDUnknownBlockType _recordStoppedCompletion;	// 96 = 0x60
    _Bool _releasesAudioSessionWhenRecordingStopped;	// 104 = 0x68
    long long _prepareAudioSystemTransactionCount;	// 112 = 0x70
    _Bool _releasesAudioSessionWhenPrepareAudioSystemDone;	// 120 = 0x78
    ADSpeechLog *_speechLog;	// 128 = 0x80
    CSSpeechController *_speechController;	// 136 = 0x88
    CSAudioSessionController *_audioSessionController;	// 144 = 0x90
    id <CSSiriSpeechCapturing> _currentCapturing;	// 152 = 0x98
    CSSiriSpeechRecorder *_speechRecorder;	// 160 = 0xa0
    ADSpeechPlaybackSimulator *_playbackSimulator;	// 168 = 0xa8
    ADSpeechCompressor *_speechCompressor;	// 176 = 0xb0
    ADVolumeService *_volumeService;	// 184 = 0xb8
    CSSiriAudioPlaybackService *_audioPlaybackService;	// 192 = 0xc0
    id _context;	// 200 = 0xc8
    _Bool _isDriving;	// 208 = 0xd0
    _Bool _isAudioSessionLikelyActive;	// 209 = 0xd1
    _Bool _isReleaseAudioSessionRequired;	// 210 = 0xd2
    _Bool _hasPreparedAudioSystemForPlayback;	// 211 = 0xd3
    CSAudioDeviceInfo *_audioDeviceInfo;	// 216 = 0xd8
    NSString *_recordRoute;	// 224 = 0xe0
    NSString *_deviceIdentifier;	// 232 = 0xe8
    _Bool _hasFetchedSmartSiriVolume;	// 240 = 0xf0
    _Bool _hasUpdatedSiriOutputVolume;	// 241 = 0xf1
    unsigned long long _dirtySiriOutputVolumeHostTime;	// 248 = 0xf8
    _Bool _hasReceivedLastAudioBuffer;	// 256 = 0x100
    NSString *_initialDictationLanguage;	// 264 = 0x108
    NSString *_primaryDictationLanguage;	// 272 = 0x110
    NSArray *_dictationLanguages;	// 280 = 0x118
    AFDictationOptions *_dictationOptions;	// 288 = 0x120
    NSArray *_inlineItemList;	// 296 = 0x128
    AFAudioPowerUpdater *_audioPowerUpdater;	// 304 = 0x130
    ADAudioSessionCoordinator *_audioSessionCoordinator;	// 312 = 0x138
}

+ (void)_detectOnDeviceDictationOrchestrationMismatchForLanguage:(id)arg1 initialLanguage:(id)arg2 eligibleForOnDeviceDictation:(_Bool)arg3 modelType:(id)arg4 onDeviceRequest:(_Bool)arg5 context:(id)arg6;	// IMP=0x00200000002a3781
+ (id)sharedManager;	// IMP=0x001000000029c8f4
+ (id)_speechCodecError;	// IMP=0x001000000029c8c9
+ (id)_badStateError;	// IMP=0x001000000029c89e
- (void).cxx_destruct;	// IMP=0x00200000002ab83f
@property(readonly, nonatomic) CSSiriAudioPlaybackService *audioPlaybackService; // @synthesize audioPlaybackService=_audioPlaybackService;
@property(readonly, nonatomic) CSAudioSessionController *audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) ADAudioSessionCoordinator *audioSessionCoordinator; // @synthesize audioSessionCoordinator=_audioSessionCoordinator;
@property(readonly, nonatomic) AFAudioPowerUpdater *audioPowerUpdater; // @synthesize audioPowerUpdater=_audioPowerUpdater;
@property(copy, nonatomic) NSArray *inlineItemList; // @synthesize inlineItemList=_inlineItemList;
@property(nonatomic) _Bool isDriving; // @synthesize isDriving=_isDriving;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(copy, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(copy, nonatomic) NSString *primaryDictationLanguage; // @synthesize primaryDictationLanguage=_primaryDictationLanguage;
@property(copy, nonatomic) NSString *initialDictationLanguage; // @synthesize initialDictationLanguage=_initialDictationLanguage;
- (void)asrBridgeReceivedPartialResult:(id)arg1 language:(id)arg2 tokens:(id)arg3;	// IMP=0x00100000002ab5e6
- (void)asrBridgeReceivedFinalResult:(id)arg1 speechPackage:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002ab49c
- (void)asrBridgeReceivedEagerRecognitionCandidate:(id)arg1 rawRecognitionResult:(id)arg2 duration:(double)arg3 sessionUUID:(id)arg4;	// IMP=0x00100000002ab351
@property(readonly, nonatomic) id <AFAudioSessionAssertionAcquisitionService> audioSessionAssertionAcquisitionService;
- (void)_updateSiriOutputVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ab0ec
- (void)_fetchSmartSiriVolume:(_Bool)arg1;	// IMP=0x00100000002aaf66
- (id)_volumeService;	// IMP=0x00100000002aae19
- (_Bool)_supportsVolumeService;	// IMP=0x00100000002aadfe
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x00100000002aad06
- (void)_addRecordStoppedCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002aac0a
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x00100000002aab6a
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x00100000002aaac7
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00100000002aa9eb
@property(readonly, nonatomic) id <CSSiriRecordingInfoProviding> recordingInfoProvider;
@property(readonly, nonatomic) id <ADVolumeServiceProviding> volumeServiceProvider;
@property(readonly, nonatomic) id <ADVolumeTracking> volumeTracker;
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00100000002aa8f4
- (void)stopFingerprintingForSuccess:(_Bool)arg1;	// IMP=0x00100000002aa84b
- (void)updateSpeechOptions:(id)arg1;	// IMP=0x00100000002aa75e
- (void)playRecordingStartAlert;	// IMP=0x00100000002aa6d2
- (void)setSpeechRecognizedContext:(id)arg1;	// IMP=0x00100000002aa590
- (void)enforcePreviousEndpointHint;	// IMP=0x00100000002aa504
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002aa414
- (void)updateOptionsAfterRecognitionForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00100000002aa398
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00100000002aa2bc
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00100000002aa210
- (void)setFingerprintWasRecognized;	// IMP=0x00100000002aa1a8
- (void)suppressAudioInterruptionEndedNotificationsAndEndSessionIfIdle:(CDUnknownBlockType)arg1;	// IMP=0x00100000002aa057
- (_Bool)_endSessionIfIdle;	// IMP=0x00100000002a9f67
- (void)_cancelRecordingIfNeededAndEndSessionWhenIdleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a9930
- (void)endSession:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002a9703
- (void)endSession;	// IMP=0x00100000002a90f0
- (void)setSuppressAudioInterruptionEndedNotifications:(_Bool)arg1;	// IMP=0x00100000002a907e
- (void)_stopSpeechCaptureWithOptions:(id)arg1;	// IMP=0x00100000002a8cf0
- (void)stopSpeechCaptureIfFingerprintingOnlyWithOptions:(id)arg1;	// IMP=0x00100000002a8b62
- (void)stopSpeechCaptureWithOptions:(id)arg1;	// IMP=0x00100000002a89c8
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00100000002a855b
- (void)startSpeechCaptureWithURL:(id)arg1 isNarrowBand:(_Bool)arg2 isDictation:(_Bool)arg3 sessionUUID:(id)arg4;	// IMP=0x00100000002a80af
- (void)addRecordedDictationAudioSampleData:(id)arg1;	// IMP=0x00100000002a7fd3
- (void)startRecordedDictationCaptureWithSessionUUID:(id)arg1 narrowband:(_Bool)arg2 secureOfflineOnly:(_Bool)arg3;	// IMP=0x00100000002a7bea
- (void)_startCaptureForMode:(long long)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x00100000002a6c9e
- (id)_startFixedPriorityCaptureForMode:(long long)arg1 options:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00100000002a6a94
- (void)startAcousticIDCaptureWithOptions:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00100000002a6a6e
- (id)startSpeechCaptureForDictationWithOptions:(id)arg1 sessionUUID:(id)arg2 secureOfflineOnly:(_Bool)arg3;	// IMP=0x00100000002a68e5
- (id)startSpeechCaptureForRequestWithOptions:(id)arg1 sessionUUID:(id)arg2 language:(id)arg3;	// IMP=0x00100000002a676f
- (_Bool)isStopped;	// IMP=0x00100000002a66c7
- (_Bool)isCapturing;	// IMP=0x00100000002a661b
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00100000002a651f
- (void)setDelegate:(id)arg1;	// IMP=0x00100000002a647b
- (void)_prepareAudioSystemWithContext:(id)arg1 audioSessionAssertion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a4668
- (void)prepareAudioSystemWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002a4311
- (void)preheatWithOptions:(id)arg1;	// IMP=0x00100000002a3fdf
- (void)eagerlyInitializeAudioRecording;	// IMP=0x00100000002a3f77
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000002a34bb
- (void)localSpeechRecognizer:(id)arg1 didProduceLoggablePackage:(id)arg2;	// IMP=0x00100000002a32ab
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000002a309b
- (MISSING_TYPE *)localSpeechRecognizer:didRecognizeRawEagerRecognitionCandidate: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002a2f42
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000002a2ea6
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000002a2c87
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;	// IMP=0x00100000002a2c6a
- (id)_recordingInfo;	// IMP=0x00100000002a2c1a
- (id)getRecordingInfo;	// IMP=0x00100000002a2afe
- (void)getRecordingInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a2a2d
- (void)getVolumeServiceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a295c
- (void)setDirtySiriOutputVolumeHostTime:(unsigned long long)arg1;	// IMP=0x00100000002a2852
- (void)audioSessionCoordinator:(id)arg1 releaseAudioSessionWithContext:(id)arg2;	// IMP=0x00100000002a25a2
- (void)audioSessionCoordinator:(id)arg1 prepareAudioSessionWithContext:(id)arg2;	// IMP=0x00100000002a21b9
- (void)speechCapturingDidProvideConfidenceScores:(id)arg1 classification:(unsigned long long)arg2 classifiedUser:(id)arg3 unknownUserScore:(long long)arg4 duration:(long long)arg5 version:(long long)arg6 thresholdingType:(id)arg7 assetVersion:(id)arg8;	// IMP=0x00100000002a20cf
- (void)speechCapturing:(id)arg1 languageDetectorDidFail:(id)arg2;	// IMP=0x00100000002a2073
- (void)speechCapturing:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;	// IMP=0x00100000002a2058
- (void)speechCapturing:(id)arg1 didLoseAudioSessionOwnerOrMediaServices:(id)arg2;	// IMP=0x00100000002a1f98
- (void)speechCapturing:(id)arg1 didInterruptAudioSession:(id)arg2;	// IMP=0x00100000002a1ed8
- (void)speechCapturing:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000002a1de1
- (void)speechCapturing:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000002a1cf1
- (void)speechCapturingDidRequestUpdateSiriOutputVolume:(id)arg1;	// IMP=0x00100000002a1c14
- (void)speechCapturingDidRequestShutdownUI:(id)arg1;	// IMP=0x00100000002a1b78
- (void)speechCapturingDidRequestQuickStop:(id)arg1;	// IMP=0x00100000002a1adc
- (void)speechCapturing:(id)arg1 performTwoShotPromptWithType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a1ac4
- (void)speechCapturing:(id)arg1 didDetectEndpointAtTime:(double)arg2;	// IMP=0x00100000002a1ab2
- (void)speechCapturing:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000002a1aa0
- (void)speechCapturing:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;	// IMP=0x00100000002a1a88
- (void)speechCapturingDidDelayEndpointForMusic:(id)arg1;	// IMP=0x00100000002a1a76
- (void)speechCapturingDidDetectMusic:(id)arg1;	// IMP=0x00100000002a1a64
- (void)speechCapturing:(id)arg1 didReceiveFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x00100000002a1a4f
- (void)speechCapturingDidRecordPCMAudioData:(id)arg1;	// IMP=0x00100000002a19c3
- (void)speechCapturingDidRecordSpeechPackets:(id)arg1 atTimestamp:(double)arg2 totalPacketCount:(long long)arg3;	// IMP=0x00100000002a1872
- (void)speechCapturingDidStopRecordingWithError:(id)arg1 endpointMode:(long long)arg2 totalPacketCount:(long long)arg3 endpointerMetrics:(id)arg4;	// IMP=0x00100000002a173d
- (void)speechCapturingWillStopRecordingWithSignpostID:(unsigned long long)arg1;	// IMP=0x00100000002a172b
- (void)speechCapturingWillStopRecording;	// IMP=0x00100000002a1714
- (void)speechCapturingDidReceiveLastAudioBufferWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x00100000002a166f
- (void)speechCapturingDidUpdateAudioDeviceInfo:(id)arg1;	// IMP=0x00100000002a165d
- (void)speechCapturingDidUpdateRecordingInfo:(id)arg1;	// IMP=0x00100000002a15b7
- (void)speechCapturingDidStartRecordingSuccessfully:(_Bool)arg1 error:(id)arg2 withInfo:(id)arg3;	// IMP=0x001000000029ffbb
- (void)_updateCapturingStateWithOptions:(id)arg1;	// IMP=0x001000000029feca
- (void)_recordingStoppedWithError:(id)arg1 totalPacketCount:(long long)arg2 endpointMode:(long long)arg3 endpointerMetrics:(id)arg4;	// IMP=0x001000000029fbcd
- (void)_lastAudioBufferReceivedWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x001000000029fa84
- (void)_cancelRecordingWithError:(id)arg1 suppressAlert:(_Bool)arg2;	// IMP=0x001000000029f907
- (void)_tellDelegateSpeechWillStopRecordingWithSignpostID:(unsigned long long)arg1;	// IMP=0x001000000029f8c2
- (void)_tellDelegateDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x001000000029f83e
- (void)_tellDelegateDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000029f7f9
- (void)_tellDelegateWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000029f7b4
- (void)_tellDelegateShutdownUIWasRequested;	// IMP=0x001000000029f77a
- (void)_tellDelegateQuickStopWasRequested;	// IMP=0x001000000029f740
- (void)_tellDelegateToPerformTwoShotPromptWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029f6db
- (void)_tellDelegateSpeechEndpointWasDetectedAtTime:(double)arg1;	// IMP=0x001000000029f68f
- (void)_tellDelegateSpeechStartpointWasDetectedAtTime:(double)arg1;	// IMP=0x001000000029f643
- (void)_tellDelegateAudioFileDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x001000000029f5c3
- (void)_tellDelegateAboutInputAveragePower:(float)arg1 peak:(float)arg2;	// IMP=0x001000000029f53d
- (void)_tellDelegateEndpointWasDelayedForMusic;	// IMP=0x001000000029f4d7
- (void)_tellDelegateMusicWasDetected;	// IMP=0x001000000029f471
- (void)_tellDelegateAboutFingerprint:(id)arg1 duration:(double)arg2;	// IMP=0x001000000029f3e2
- (void)_tellDelegateAboutSpeechPackets:(id)arg1 atTimestamp:(double)arg2 count:(long long)arg3;	// IMP=0x001000000029f342
- (void)_tellDelegateUpdateAudioInfo:(id)arg1;	// IMP=0x001000000029f2b9
- (void)_tellDelegateSpeechStartedWithRecordingInfo:(id)arg1;	// IMP=0x001000000029f230
- (void)_tellDelegateSpeechWillBeginWithTimestamp:(double)arg1 isFromFile:(_Bool)arg2 isAudioPowerUpdateDisabled:(_Bool)arg3;	// IMP=0x001000000029f141
- (void)_tellDelegateSpeechRecognitionUpdateWillBegin;	// IMP=0x001000000029f0d7
- (void)_tellDelegateSpeechShouldPreheatWithRecordingInfo:(id)arg1;	// IMP=0x001000000029f04e
- (void)_tellDelegateSpeechFinished;	// IMP=0x001000000029efc9
- (void)_tellDelegateSpeechReceivedLastAudioBufferWithEndpointMode:(long long)arg1 totalPacketCount:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x001000000029ef28
- (void)_tellDelegateSpeechFailedWithError:(id)arg1;	// IMP=0x001000000029ee8f
- (void)_tellDelegateSpeechCanceled;	// IMP=0x001000000029ee03
- (void)_cleanUpDelegateInfo;	// IMP=0x001000000029ed46
- (void)resetLocalRecognizer;	// IMP=0x001000000029ec91
- (void)cancelLocalRecognitionIfActive;	// IMP=0x001000000029eb4f
- (_Bool)isLocallyRecognizingInSiriMiniMode;	// IMP=0x001000000029ea89
- (_Bool)isLocallyRecognizingInDictationMode;	// IMP=0x001000000029e9c8
- (_Bool)isLocallyRecognizing;	// IMP=0x001000000029e91f
- (void)disableDESWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029e843
- (void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029e757
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x001000000029e65f
- (void)_fetchAssetsForLanaugeOrEnablementNotification:(id)arg1;	// IMP=0x001000000029e348
- (void)dictationSessionDidComplete;	// IMP=0x001000000029de93
- (_Bool)_releaseSession;	// IMP=0x001000000029d9a6
- (void)_updateRecordRoute:(id)arg1 andDeviceIdentifier:(id)arg2;	// IMP=0x001000000029d7bd
- (void)_updateAudioDeviceInfo:(id)arg1;	// IMP=0x001000000029d64e
- (void)_updateSpeechState:(int)arg1;	// IMP=0x001000000029d453
- (id)_currentSpeechCaptureSource;	// IMP=0x001000000029d36e
- (id)_speechCompressor;	// IMP=0x001000000029d1cf
- (id)endpointerModelVersion;	// IMP=0x001000000029d1b6
- (void)getSpeechRecorderVTSatScore:(CDUnknownBlockType)arg1;	// IMP=0x001000000029d0bb
- (id)_speechRecorder;	// IMP=0x001000000029cf0a
- (void)dealloc;	// IMP=0x001000000029ce70
- (id)_initWithInstanceContext:(id)arg1;	// IMP=0x001000000029c99a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

