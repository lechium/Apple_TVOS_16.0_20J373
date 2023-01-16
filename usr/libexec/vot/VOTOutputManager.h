//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, AXDialectMap, AXIndexMap, AXMOutputManager, NSArray, NSDate, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCRCThreadKey, VOTOutputRequest, VOTOutputRequestRunner;
@protocol OS_dispatch_queue;

@interface VOTOutputManager : NSObject
{
    NSMutableArray *_queuedOutputRequests;	// 8 = 0x8
    NSMutableArray *_requestRunners;	// 16 = 0x10
    AXIndexMap *_components;	// 24 = 0x18
    VOTOutputRequest *_currentlyRunningUninterruptableRequest;	// 32 = 0x20
    NSMutableArray *_currentlyRunningRequests;	// 40 = 0x28
    unsigned int _numberOfRequestSinceLastUninterruptable;	// 48 = 0x30
    double _cachedRate;	// 56 = 0x38
    _Bool _shutdown;	// 64 = 0x40
    VOTOutputRequestRunner *_onHoldRunner;	// 72 = 0x48
    AXDialectMap *_supportedLanguageMap;	// 80 = 0x50
    struct VOTExternalRoutingInfo _currentExternalRoutingInfo;	// 88 = 0x58
    _Bool _externalRoutesAvailable;	// 104 = 0x68
    _Bool _externalRoutesContainHDMIRoute;	// 105 = 0x69
    _Bool _externalAudioRouteIsHearingAid;	// 106 = 0x6a
    _Bool _selectedRouteIsHDMI;	// 107 = 0x6b
    AXAccessQueueTimer *_inactivateAudioTimer;	// 112 = 0x70
    AXAccessQueue *_audioSessionQueue;	// 120 = 0x78
    NSMutableSet *_audioSessionUsers;	// 128 = 0x80
    SCRCThreadKey *_threadKey;	// 136 = 0x88
    NSHashTable *_outputManagerObservers;	// 144 = 0x90
    NSLock *_outputManagerObserversLock;	// 152 = 0x98
    AXMOutputManager *_axmOutputManager;	// 160 = 0xa0
    NSMutableDictionary *_vosEventHandlers;	// 168 = 0xa8
    NSMutableDictionary *_vosEventStartedHandlers;	// 176 = 0xb0
    struct os_unfair_lock_s _queueLock;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_avAccessQueue;	// 192 = 0xc0
    _Bool _audioSessionActive;	// 200 = 0xc8
    CDUnknownBlockType _airTunesRouteIsAirPlayingTestingBlock;	// 208 = 0xd0
    NSDate *_dateToResumeRequests;	// 216 = 0xd8
    NSDate *_dateToResumeSounds;	// 224 = 0xe0
    NSString *_currentRouteName;	// 232 = 0xe8
}

+ (void)logSoundPlayed:(id)arg1;	// IMP=0x002000000001099e
+ (void)clearPreviousSoundsPlayed;	// IMP=0x00100000000105e6
+ (id)previousSoundsPlayed;	// IMP=0x0010000000010596
+ (id)outputManager;	// IMP=0x001000000000c14d
+ (id)outputManagerIfExists;	// IMP=0x001000000000c13c
+ (void)initialize;	// IMP=0x001000000000b9bf
- (void).cxx_destruct;	// IMP=0x0020000000011616
@property(readonly, nonatomic) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(retain) NSString *currentRouteName; // @synthesize currentRouteName=_currentRouteName;
@property(retain, nonatomic) NSDate *dateToResumeSounds; // @synthesize dateToResumeSounds=_dateToResumeSounds;
@property(retain, nonatomic) NSDate *dateToResumeRequests; // @synthesize dateToResumeRequests=_dateToResumeRequests;
@property(copy, nonatomic) CDUnknownBlockType airTunesRouteIsAirPlayingTestingBlock; // @synthesize airTunesRouteIsAirPlayingTestingBlock=_airTunesRouteIsAirPlayingTestingBlock;
@property(readonly, nonatomic) AXAccessQueue *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
- (void)_notifyObserversOutputManagerWillProcessNextRequest:(id)arg1;	// IMP=0x00100000000113d9
- (void)_notifyObserversOutputManagerDidFinishProcessingQueuedRequests;	// IMP=0x001000000001125d
- (void)removeAllOutputManagerObservers;	// IMP=0x0010000000011213
- (void)removeOutputManagerObserver:(id)arg1;	// IMP=0x0010000000011194
- (void)addOutputManagerObserver:(id)arg1;	// IMP=0x0010000000011115
- (void)dispatcher:(id)arg1 handleEvent:(id)arg2 soundPack:(id)arg3 hapticPack:(id)arg4;	// IMP=0x0010000000010ce9
- (void)removeVOSEventStartedHandler:(id)arg1;	// IMP=0x0010000000010cd0
- (void)removeVOSEventFinishedHandler:(id)arg1;	// IMP=0x0010000000010cb7
- (void)addVOSEventStartedHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000010c09
- (void)addVOSEventFinishedHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000010b5b
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000010aa7
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x0010000000010a54
- (void)playSoundFast:(id)arg1;	// IMP=0x0010000000010a40
- (void)playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010643
- (void)playSoundFast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001062c
- (void)speakSimpleString:(id)arg1 braille:(_Bool)arg2 language:(id)arg3;	// IMP=0x00100000000104cd
- (void)speakSimpleString:(id)arg1;	// IMP=0x00100000000104b3
- (void)disableAudioSession:(id)arg1 userDelay:(double)arg2;	// IMP=0x001000000000fd6e
- (void)disableAudioSession:(id)arg1;	// IMP=0x001000000000fd54
- (void)removeAllAudioSessionEnablers;	// IMP=0x001000000000fb24
- (void)enableAudioSession:(id)arg1;	// IMP=0x001000000000f90e
- (void)toggleAudioSessionActive:(_Bool)arg1;	// IMP=0x001000000000f785
- (void)silenceOutputForTimeInterval:(double)arg1;	// IMP=0x001000000000f6a6
- (void)_silenceRequestsForTimeInterval:(id)arg1;	// IMP=0x001000000000f5f8
- (void)_resumeCurrentRequest;	// IMP=0x001000000000f5a5
- (void)resumeCurrentRequest;	// IMP=0x001000000000f526
- (void)_holdCurrentRequest;	// IMP=0x001000000000f474
- (void)holdCurrentRequest;	// IMP=0x001000000000f433
- (_Bool)isSpeaking;	// IMP=0x001000000000f3ef
- (_Bool)isPaused;	// IMP=0x001000000000f3ab
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2 sessionDeactivationDelay:(id)arg3;	// IMP=0x001000000000f32e
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000000f317
- (void)continueSpeaking;	// IMP=0x001000000000f2da
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000000f28e
- (void)setRate:(float)arg1;	// IMP=0x001000000000f23f
- (float)speechRate;	// IMP=0x001000000000f234
- (void)resetSpeechRate;	// IMP=0x001000000000f1f8
- (float)defaultSpeechRate;	// IMP=0x001000000000f130
- (float)speechRateForLanguage:(id)arg1;	// IMP=0x001000000000eeb5
- (void)setSpeechRate:(float)arg1 forLanguage:(id)arg2;	// IMP=0x001000000000eda8
- (void)setVolume:(float)arg1;	// IMP=0x001000000000ed7f
- (void)_setVolume:(float)arg1;	// IMP=0x001000000000eae1
- (void)updateAudioSessionProperties;	// IMP=0x001000000000eaa2
- (void)updateWithCurrentRoute;	// IMP=0x001000000000ea22
- (void)selectAudioRoute:(_Bool)arg1;	// IMP=0x001000000000e419
- (void)selectLocalAudioRoute;	// IMP=0x001000000000e402
- (void)selectExternalAudioRoute;	// IMP=0x001000000000e3ee
- (_Bool)externalAudioRouteSelected;	// IMP=0x001000000000df97
- (_Bool)isRouteAirplayMirroring;	// IMP=0x001000000000df73
- (_Bool)selectedRouteIsHDMI;	// IMP=0x001000000000df6a
- (_Bool)externalAudioRouteIsHearingAid;	// IMP=0x001000000000df61
- (_Bool)externalAudioRoutesContainHDMIRoute;	// IMP=0x001000000000df58
- (_Bool)externalAudioRoutesAvailable;	// IMP=0x001000000000df4f
- (void)_updateExternalRoutesAvailable;	// IMP=0x001000000000dbfc
- (void)_updateActiveRoutes;	// IMP=0x001000000000d813
- (void)_activeRouteChanged:(id)arg1;	// IMP=0x001000000000d7af
- (void)callStatusChanged;	// IMP=0x001000000000d714
- (_Bool)isWirelessRoutePicked:(id)arg1;	// IMP=0x001000000000d6bb
- (_Bool)isRouteWireless:(id)arg1;	// IMP=0x001000000000d660
- (_Bool)isRoutePicked:(id)arg1;	// IMP=0x001000000000d5aa
- (_Bool)_isHeadsetRoute:(id)arg1;	// IMP=0x001000000000d552
- (_Bool)_isHeadphoneRoute:(id)arg1;	// IMP=0x001000000000d4fa
- (_Bool)isCurrentRouteConsideredExternal:(id)arg1;	// IMP=0x001000000000d4f2
- (_Bool)_isRouteExternalHDMIRoute:(id)arg1;	// IMP=0x001000000000d49a
- (_Bool)airTunesRouteIsAirPlaying;	// IMP=0x001000000000d3c3
- (id)speechComponent;	// IMP=0x001000000000d3af
- (double)volume;	// IMP=0x001000000000d35b
- (_Bool)isSystemMuted;	// IMP=0x001000000000d2dc
- (void)toggleSystemMute;	// IMP=0x001000000000d245
- (void)synchVolumeWithSystem;	// IMP=0x001000000000d233
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x001000000000d22d
- (float)systemVolume;	// IMP=0x001000000000d1bb
- (void)setSystemVolume:(float)arg1;	// IMP=0x001000000000d133
- (id)componentForType:(int)arg1;	// IMP=0x001000000000d11b
- (void)finishedOutputRequest:(id)arg1;	// IMP=0x001000000000d03d
- (void)_dispatchNextQueuedRequest;	// IMP=0x001000000000cd0d
- (void)_handleProcessRequest:(id)arg1;	// IMP=0x001000000000c779
- (void)shutdown;	// IMP=0x001000000000c714
- (void)_handleRequestFinished:(id)arg1;	// IMP=0x001000000000c48a
- (void)clearQueue;	// IMP=0x001000000000c40a
- (id)currentLanguageMap;	// IMP=0x001000000000c3fc
- (void)updateSupportedLanguageMap;	// IMP=0x001000000000c33d
- (void)handleEvent:(id)arg1;	// IMP=0x001000000000c1f4
@property(readonly, nonatomic) NSArray *queuedRequests;
- (void)_voiceOverVolumeChanged:(id)arg1;	// IMP=0x001000000000c1b2
- (void)dealloc;	// IMP=0x001000000000c08d
- (id)init;	// IMP=0x001000000000ba31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

