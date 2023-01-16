//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;	// 16 = 0x10
    struct unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;	// 24 = 0x18
    struct vector<float, std::allocator<float>> _floatBuffer;	// 32 = 0x20
    MISSING_TYPE *_defaults;	// 56 = 0x38
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;	// 64 = 0x40
    unsigned long long _startAnalyzeSampleCount;	// 72 = 0x48
    unsigned long long _samplesFed;	// 80 = 0x50
    unsigned long long _processedSampleCount;	// 88 = 0x58
    _Bool _isStartSampleCountMarked;	// 96 = 0x60
    _Bool _isListenPollingStarting;	// 97 = 0x61
    _Bool _shouldPauseSSVProcess;	// 98 = 0x62
    _Bool _shouldPauseLKFSProcess;	// 99 = 0x63
    _Bool _alarmSoundIsFiring;	// 100 = 0x64
    _Bool _timerSoundIsFiring;	// 101 = 0x65
    _Bool _mediaIsPlaying;	// 102 = 0x66
    CSAsset *_currentAsset;	// 104 = 0x68
    float _musicVolumeDB;	// 112 = 0x70
    float _alarmVolume;	// 116 = 0x74
    unsigned long long _noiseLevelChannelBitset;	// 120 = 0x78
    unsigned long long _LKFSChannelBitset;	// 128 = 0x80
    unsigned int _energyBufferSize;	// 136 = 0x88
    unsigned int _noiseLowerPercentile;	// 140 = 0x8c
    unsigned int _noiseUpperPercentile;	// 144 = 0x90
    unsigned int _LKFSLowerPercentile;	// 148 = 0x94
    unsigned int _LKFSUpperPercentile;	// 152 = 0x98
    float _noiseTimeConstant;	// 156 = 0x9c
    float _noiseMicSensitivityOffset;	// 160 = 0xa0
    float _noiseMicSensitivityOffsetDeviceSimple;	// 164 = 0xa4
    float _LKFSTimeConstant;	// 168 = 0xa8
    float _LKFSMicSensitivityOffset;	// 172 = 0xac
    float _noiseTTSMappingInputRangeLow;	// 176 = 0xb0
    float _noiseTTSMappingInputRangeHigh;	// 180 = 0xb4
    float _noiseTTSMappingOutputRangeLow;	// 184 = 0xb8
    float _noiseTTSMappingOutputRangeHigh;	// 188 = 0xbc
    float _LKFSTTSMappingInputRangeLow;	// 192 = 0xc0
    float _LKFSTTSMappingInputRangeHigh;	// 196 = 0xc4
    float _LKFSTTSMappingOutputRangeLow;	// 200 = 0xc8
    float _LKFSTTSMappingOutputRangeHigh;	// 204 = 0xcc
    float _userOffsetInputRangeLow;	// 208 = 0xd0
    float _userOffsetInputRangeHigh;	// 212 = 0xd4
    float _userOffsetOutputRangeLow;	// 216 = 0xd8
    float _userOffsetOutputRangeHigh;	// 220 = 0xdc
    float _TTSVolumeLowerLimitDB;	// 224 = 0xe0
    float _TTSVolumeUpperLimitDB;	// 228 = 0xe4
    float _noiseWeight;	// 232 = 0xe8
    CSAudioStream *_audioStream;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_listenPollingTimer;	// 248 = 0xf8
    long long _listenPollingTimerCount;	// 256 = 0x100
}

- (id).cxx_construct;	// IMP=0x0020000000078f81
- (void).cxx_destruct;	// IMP=0x0010000000078eff
@property(nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x0010000000078e9d
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x0010000000078e97
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x0010000000078e91
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x0010000000078d04
- (float)_getUserOffsetFromMusicVolumeDB:(float)arg1;	// IMP=0x0010000000078c99
- (float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1;	// IMP=0x0010000000078c3e
- (float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1;	// IMP=0x0010000000078c2c
- (float)_getDevicedBFSForInputLinearVolume:(float)arg1;	// IMP=0x0010000000078bd3
- (float)_convertDB2Mag:(float)arg1;	// IMP=0x0010000000078bc1
- (void)_setDefaultParameters;	// IMP=0x0010000000078b52
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x0010000000078aab
- (void)_resetStartAnalyzeTime;	// IMP=0x0010000000078a9a
- (float *)_getFloatBufferData:(id)arg1;	// IMP=0x00100000000789d0
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000789ca
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000789c4
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x001000000007888b
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0010000000078885
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x001000000007873d
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x001000000007863b
- (void)didReceiveAlarmVolumeChanged:(float)arg1;	// IMP=0x00100000000785d7
- (void)didReceiveMusicVolumeChanged:(float)arg1;	// IMP=0x0010000000078558
- (void)didReceiveTimerChanged:(long long)arg1;	// IMP=0x00100000000783c2
- (void)didReceiveAlarmChanged:(long long)arg1;	// IMP=0x001000000007822c
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;	// IMP=0x00100000000780c1
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;	// IMP=0x0010000000077ef1
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;	// IMP=0x0010000000077e55
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;	// IMP=0x0010000000077e2d
- (float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x0010000000077dfc
- (float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x0010000000077dcb
- (float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1;	// IMP=0x0010000000077d9a
- (float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1;	// IMP=0x0010000000077d69
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;	// IMP=0x00100000000774ca
- (void)didDetectKeywordWithResult:(id)arg1;	// IMP=0x00100000000770f7
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00100000000770f1
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x0010000000076f75
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x0010000000076cb0
- (void)reset;	// IMP=0x0010000000076c23
- (void)_resumeSSVProcessing;	// IMP=0x0010000000076b2f
- (void)_pauseSSVProcessing;	// IMP=0x0010000000076a40
- (float)estimateSoundLevelbySoundType:(long long)arg1;	// IMP=0x0010000000076837
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;	// IMP=0x00100000000764e9
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;	// IMP=0x00100000000762e9
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;	// IMP=0x001000000007625b
- (void)_reset;	// IMP=0x00100000000761c7
- (void)_setAsset:(id)arg1;	// IMP=0x0010000000075deb
- (void)setAsset:(id)arg1;	// IMP=0x0010000000075d43
- (void)fetchInitSystemVolumes;	// IMP=0x0010000000075c27
- (void)initializeTimerState;	// IMP=0x0010000000075aad
- (void)initializeAlarmState;	// IMP=0x0010000000075933
- (void)initializeMediaPlayingState;	// IMP=0x0010000000075728
- (void)_stopListening;	// IMP=0x001000000007552d
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000074d9d
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007489a
- (void)_startListenPolling;	// IMP=0x00100000000747af
- (void)startSmartSiriVolume;	// IMP=0x00100000000743f2
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;	// IMP=0x0010000000073f72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
