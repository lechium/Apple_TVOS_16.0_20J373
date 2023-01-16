//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, CSAttSiriController, CSAudioStreamHolding, CSSpeechManager, NSArray, NSHashTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriAttendingAudioSrcNode
{
    _Bool _isReady;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    NSHashTable *_receivers;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CSSpeechManager *_speechManager;	// 64 = 0x40
    CSAudioStreamHolding *_audioStreamHolding;	// 72 = 0x48
}

- (void);	// IMP=0x0020000000012515
@property(retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // @synthesize audioStreamHolding=_audioStreamHolding;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_handleDidAudioStartWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000012268
- (void)_handleDidStopStreamUnexpectly;	// IMP=0x0010000000012210
- (void)_handleDidStop;	// IMP=0x001000000001208e
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x0010000000012088
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x0010000000011eb4
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x0010000000011e4c
- (void)dealloc;	// IMP=0x0010000000011da2
- (void)stop;	// IMP=0x0010000000011d9c
- (void)pause;	// IMP=0x0010000000011d96
- (void)start;	// IMP=0x0010000000011d90
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000011cd9
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000011ba1
- (void)cancelAudioStreamHold;	// IMP=0x0010000000011b39
- (void)holdAudioStreamWithTimeout:(double)arg1;	// IMP=0x0010000000011ac0
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011919
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011745
- (id)initWithSpeechManager:(id)arg1 audioStreamProvider:(id)arg2 streamName:(id)arg3 streamRequest:(id)arg4;	// IMP=0x001000000001148c
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;	// IMP=0x001000000001146f
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000011430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

