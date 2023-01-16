//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioRecordContext, CSConnectionListener, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString, SSRSpeakerRecognitionController, SSRVoiceProfile, SSRVoiceProfileManager;
@protocol CSAudioFileWriter, OS_dispatch_queue;

@interface CSAttSiriSSRNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _shouldCleanupVoiceProfile;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSConnectionListener *_ssrListener;	// 56 = 0x38
    CSConnectionListener *_localSRBridgeListener;	// 64 = 0x40
    SSRSpeakerRecognitionController *_ssrController;	// 72 = 0x48
    SSRVoiceProfileManager *_voiceProfileManager;	// 80 = 0x50
    SSRVoiceProfile *_ccProfile;	// 88 = 0x58
    NSString *_leadingUtteranceAudioFile;	// 96 = 0x60
    id <CSAudioFileWriter> _leadingUtteranceLogger;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    CSAsset *_asset;	// 120 = 0x78
    NSArray *_ssrAssets;	// 128 = 0x80
    NSSet *_sharedUserIdsSet;	// 136 = 0x88
    CSAudioRecordContext *_audioRecordContext;	// 144 = 0x90
    NSDictionary *_voiceTriggerEventInfo;	// 152 = 0x98
    NSDictionary *_speakerRecognitionScores;	// 160 = 0xa0
    NSMutableDictionary *_cachedScoresForLogging;	// 168 = 0xa8
    NSHashTable *_receivers;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000001dede
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSMutableDictionary *cachedScoresForLogging; // @synthesize cachedScoresForLogging=_cachedScoresForLogging;
@property(retain, nonatomic) NSDictionary *speakerRecognitionScores; // @synthesize speakerRecognitionScores=_speakerRecognitionScores;
@property(retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSSet *sharedUserIdsSet; // @synthesize sharedUserIdsSet=_sharedUserIdsSet;
@property(retain, nonatomic) NSArray *ssrAssets; // @synthesize ssrAssets=_ssrAssets;
@property(retain, nonatomic) CSAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <CSAudioFileWriter> leadingUtteranceLogger; // @synthesize leadingUtteranceLogger=_leadingUtteranceLogger;
@property(retain, nonatomic) NSString *leadingUtteranceAudioFile; // @synthesize leadingUtteranceAudioFile=_leadingUtteranceAudioFile;
@property(retain, nonatomic) SSRVoiceProfile *ccProfile; // @synthesize ccProfile=_ccProfile;
@property(retain, nonatomic) SSRVoiceProfileManager *voiceProfileManager; // @synthesize voiceProfileManager=_voiceProfileManager;
@property(retain, nonatomic) SSRSpeakerRecognitionController *ssrController; // @synthesize ssrController=_ssrController;
@property(nonatomic) _Bool shouldCleanupVoiceProfile; // @synthesize shouldCleanupVoiceProfile=_shouldCleanupVoiceProfile;
@property(retain, nonatomic) CSConnectionListener *localSRBridgeListener; // @synthesize localSRBridgeListener=_localSRBridgeListener;
@property(retain, nonatomic) CSConnectionListener *ssrListener; // @synthesize ssrListener=_ssrListener;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)getLeadingUtteranceLogger;	// IMP=0x001000000001db9b
- (void)_logSpeakerFalseTriggerMitigationScore:(id)arg1 withSpeakerMatchScore:(float)arg2 withSpeakerScoreThreshold:(float)arg3 withAudioDuration:(double)arg4 withSuccess:(_Bool)arg5;	// IMP=0x001000000001db95
- (void)logSpeakerFalseTriggerMitigationScore:(unsigned long long)arg1;	// IMP=0x001000000001d94a
- (void)updateCachedScoresForLogging:(unsigned long long)arg1;	// IMP=0x001000000001d6d6
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000001d536
- (void);	// IMP=0x001000000001d454
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000001d44e
- (void)_stopProcessing;	// IMP=0x001000000001cfe7
- (id)_mapScoresToSharedSiriId:(id)arg1;	// IMP=0x001000000001c6c9
- (id)_processSpeakerRecognitionResult:(id)arg1;	// IMP=0x001000000001c269
- (void)speakerRecognitionFinishedProcessing:(id)arg1 withFinalSpeakerInfo:(id)arg2;	// IMP=0x001000000001bc2e
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x001000000001bb34
- (void)speakerRecognitionController:(id)arg1 hasSpeakerInfo:(id)arg2;	// IMP=0x001000000001b399
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x001000000001b2a1
- (void)startXPCConnection;	// IMP=0x001000000001b222
- (void)_refreshSpeakerRecognitionAssets;	// IMP=0x001000000001ab87
- (void)_setupSpeakerRecognitionForProfiles:(id)arg1 WithVTEventInfo:(id)arg2 WithLocale:(id)arg3;	// IMP=0x001000000001a6c1
- (void)_setupLeadingUtteranceLogger;	// IMP=0x001000000001a414
- (void)_setupSSRControllerWithAudioContext:(id)arg1 withVoiceTriggerEventInfo:(id)arg2;	// IMP=0x001000000001a03c
- (id)getSharedUserIdWithHighestVoiceIdScore:(id)arg1;	// IMP=0x0010000000019c3c
- (void)cacheSharedUserInfos:(id)arg1;	// IMP=0x0010000000019b31
- (id)filteredVoiceProfileArray:(id)arg1;	// IMP=0x00100000000199ad
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000001973b
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000195c3
- (void)stop;	// IMP=0x00100000000194cb
- (void)pause;	// IMP=0x00100000000194c5
- (void)resetForNewRequestWithRecordContext:(id)arg1 voiceTriggerInfo:(id)arg2;	// IMP=0x001000000001936d
- (void)start;	// IMP=0x0010000000019367
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000001915a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
