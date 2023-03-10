//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CESRXPCActivity, CSActivationXPCListener, CSAttSiriConnectionManager, CSAudioInjectionXPCListener, CSBenchmarkXPCListener, CSCoreSpeechServicesListener, CSDarwinVoiceTriggerHandlerPool, CSSpeechModelTrainingXPCManager, CSVoiceIdXPCListener, CSVoiceTriggerXPCListener, CSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSHostDaemon : NSObject
{
    CSXPCListener *_xpcListener;	// 8 = 0x8
    CSActivationXPCListener *_activationXpcListener;	// 16 = 0x10
    CSVoiceIdXPCListener *_voiceIdXpcListener;	// 24 = 0x18
    CSVoiceTriggerXPCListener *_voiceTriggerXpcListener;	// 32 = 0x20
    CSAudioInjectionXPCListener *_audioInjectionXpcListener;	// 40 = 0x28
    CSAttSiriConnectionManager *_attSiriConnectionManager;	// 48 = 0x30
    CSCoreSpeechServicesListener *_corespeechServiceListener;	// 56 = 0x38
    CSSpeechModelTrainingXPCManager *_speechModelTrainingXpcManager;	// 64 = 0x40
    CSBenchmarkXPCListener *_benchmarkXpcListener;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_signalSource;	// 88 = 0x58
    CSDarwinVoiceTriggerHandlerPool *_darwinVoiceTriggerHandlerPool;	// 96 = 0x60
    CESRXPCActivity *_cesrXPCActvity;	// 104 = 0x68
}

+ (id)sharedDaemon;	// IMP=0x00400000000d3dc6
- (void).cxx_destruct;	// IMP=0x00200000000d46bf
@property(retain, nonatomic) CESRXPCActivity *cesrXPCActvity; // @synthesize cesrXPCActvity=_cesrXPCActvity;
@property(retain, nonatomic) CSDarwinVoiceTriggerHandlerPool *darwinVoiceTriggerHandlerPool; // @synthesize darwinVoiceTriggerHandlerPool=_darwinVoiceTriggerHandlerPool;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *signalSource; // @synthesize signalSource=_signalSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSBenchmarkXPCListener *benchmarkXpcListener; // @synthesize benchmarkXpcListener=_benchmarkXpcListener;
@property(retain, nonatomic) CSSpeechModelTrainingXPCManager *speechModelTrainingXpcManager; // @synthesize speechModelTrainingXpcManager=_speechModelTrainingXpcManager;
@property(retain, nonatomic) CSCoreSpeechServicesListener *corespeechServiceListener; // @synthesize corespeechServiceListener=_corespeechServiceListener;
@property(retain, nonatomic) CSAttSiriConnectionManager *attSiriConnectionManager; // @synthesize attSiriConnectionManager=_attSiriConnectionManager;
@property(retain, nonatomic) CSAudioInjectionXPCListener *audioInjectionXpcListener; // @synthesize audioInjectionXpcListener=_audioInjectionXpcListener;
@property(retain, nonatomic) CSVoiceTriggerXPCListener *voiceTriggerXpcListener; // @synthesize voiceTriggerXpcListener=_voiceTriggerXpcListener;
@property(retain, nonatomic) CSVoiceIdXPCListener *voiceIdXpcListener; // @synthesize voiceIdXpcListener=_voiceIdXpcListener;
@property(retain, nonatomic) CSActivationXPCListener *activationXpcListener; // @synthesize activationXpcListener=_activationXpcListener;
@property(retain, nonatomic) CSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)_daemonWillShutdown;	// IMP=0x00100000000d44c9
- (void)_setupDistnoteHandlers;	// IMP=0x00100000000d44c3
- (void)_setupNotifyHandlers;	// IMP=0x00100000000d4333
- (void)_daemonDidLaunch;	// IMP=0x00100000000d4117
- (void)shutdown;	// IMP=0x00100000000d40ff
- (void)didLaunch;	// IMP=0x00100000000d40ed
- (id)init;	// IMP=0x00100000000d3e1b

@end

