//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriSSRNode, CSAudioRecordContext, CSOSTransaction, MISSING_TYPE, NSArray, NSHashTable, NSMutableArray, NSString, SLUresMitigator, SLUresMitigatorIpFeats;
@protocol OS_dispatch_queue;

@interface CSAttSiriUresNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _shouldUpdateMitigationResult;	// 9 = 0x9
    _Bool _isAttending;	// 10 = 0xa
    _Bool _cachedMitigationDecision;	// 11 = 0xb
    float _threshold;	// 12 = 0xc
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSAttSiriOSDNode *_osdNode;	// 56 = 0x38
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 64 = 0x40
    CSAttSiriSSRNode *_ssrNode;	// 72 = 0x48
    SLUresMitigator *_mitigator;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSHashTable *_receivers;	// 96 = 0x60
    SLUresMitigatorIpFeats *_lastInputFeats;	// 104 = 0x68
    NSMutableArray *_mitigationDecisions;	// 112 = 0x70
    NSString *_configFile;	// 120 = 0x78
    NSArray *_supportedInputOrigins;	// 128 = 0x80
    CSOSTransaction *_osTransaction;	// 136 = 0x88
    MISSING_TYPE *_allowVocabList;	// 144 = 0x90
    unsigned long long _allowListWordCountThreshold;	// 152 = 0x98
    CSAudioRecordContext *_recordCtx;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000000cccf1
@property(retain, nonatomic) CSAudioRecordContext *recordCtx; // @synthesize recordCtx=_recordCtx;
@property(nonatomic) unsigned long long allowListWordCountThreshold; // @synthesize allowListWordCountThreshold=_allowListWordCountThreshold;
@property(retain, nonatomic) NSArray *allowVocabList; // @synthesize allowVocabList=_allowVocabList;
@property(nonatomic) _Bool cachedMitigationDecision; // @synthesize cachedMitigationDecision=_cachedMitigationDecision;
@property(nonatomic) _Bool isAttending; // @synthesize isAttending=_isAttending;
@property(retain, nonatomic) CSOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(nonatomic) _Bool shouldUpdateMitigationResult; // @synthesize shouldUpdateMitigationResult=_shouldUpdateMitigationResult;
@property(retain, nonatomic) NSArray *supportedInputOrigins; // @synthesize supportedInputOrigins=_supportedInputOrigins;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) NSMutableArray *mitigationDecisions; // @synthesize mitigationDecisions=_mitigationDecisions;
@property(retain, nonatomic) SLUresMitigatorIpFeats *lastInputFeats; // @synthesize lastInputFeats=_lastInputFeats;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) SLUresMitigator *mitigator; // @synthesize mitigator=_mitigator;
@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerNLDAClassifierNode:) __weak CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(nonatomic, setter=registerOSDNode:) __weak CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)getUresInputFeatures;	// IMP=0x00100000000cc9cc
- (_Bool)_isSpeechRecognizerTaskSupported:(id)arg1;	// IMP=0x00100000000cc965
- (void)_readAllowListVocabFromFile:(id)arg1;	// IMP=0x00100000000cc7c8
- (_Bool)_shouldApplyAllowListOverride:(id)arg1;	// IMP=0x00100000000cc527
- (id)_decodeJsonFromFile:(id)arg1;	// IMP=0x00100000000cc41c
- (void)_updateSupportedInputOrigins;	// IMP=0x00100000000cc324
- (void)_updateSignalsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00100000000cc31e
- (id)_getInputoriginFromRecordType:(id)arg1;	// IMP=0x00100000000cc24e
- (_Bool)_shouldRunMitigationForContext:(id)arg1;	// IMP=0x00100000000cc1d7
- (void)_releaseUresProcessingTransaction;	// IMP=0x00100000000cc0e6
- (void)_holdTransactionForUresProcessing;	// IMP=0x00100000000cbfe4
- (void)attSiriNode:(id)arg1 classifierScore:(float)arg2 detailedResult:(id)arg3;	// IMP=0x00100000000cbe0e
- (void)attSiriNode:(id)arg1 didUpdateWithSpeakerInfo:(id)arg2;	// IMP=0x00100000000cb95b
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3;	// IMP=0x00100000000cb795
- (void)attSiriNode:(id)arg1 didMitigate:(_Bool)arg2 withScore:(float)arg3 taskType:(id)arg4;	// IMP=0x00100000000cb47c
- (void)attSiriNode:(id)arg1 didUpdateAttentionState:(unsigned long long)arg2;	// IMP=0x00100000000cb476
- (void)_createMitigatorModelWithConfig:(id)arg1;	// IMP=0x00100000000cb332
- (void)setEndpointerFeatureEoS:(float)arg1;	// IMP=0x00100000000cb190
- (void)getLatestUresFeaturesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb0ac
- (void)processResultCandidate:(id)arg1 forRCId:(unsigned long long)arg2 forTask:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ca926
- (void)_createModelAndRunInferenceForRcId:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca482
- (void)_storeMitigationDecision:(_Bool)arg1 forRCId:(unsigned long long)arg2;	// IMP=0x00100000000ca369
- (void)_logURESFailureMsgInput:(unsigned long long)arg1;	// IMP=0x00100000000ca363
- (void)_logURESResultsForInput:(id)arg1 withOutput:(id)arg2;	// IMP=0x00100000000ca35d
- (void)_logLRNNFailMsg;	// IMP=0x00100000000ca357
- (void)_logLatticeRNNResults:(id)arg1;	// IMP=0x00100000000ca351
- (void)_logFinalMitigationDecisionToSelf:(_Bool)arg1;	// IMP=0x00100000000ca34b
- (_Bool)getMitigationDecisionForRCId:(unsigned long long)arg1;	// IMP=0x00100000000c9fb6
- (void)setASRModelRootDirectory:(id)arg1;	// IMP=0x00100000000c9de6
- (void)_fetchMitigationConfig;	// IMP=0x00100000000c9b13
- (void)setInputOriginWithAudioRecordContext:(id)arg1 boronScore:(_Bool)arg2;	// IMP=0x00100000000c974e
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000c9563
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000c94ce
- (void)configureAttendingState:(_Bool)arg1;	// IMP=0x00100000000c937d
- (_Bool)getLastMitigationResult;	// IMP=0x00100000000c9374
- (void)stop;	// IMP=0x00100000000c936e
- (void)pause;	// IMP=0x00100000000c9368
- (void)start;	// IMP=0x00100000000c9362
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x00100000000c921c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

