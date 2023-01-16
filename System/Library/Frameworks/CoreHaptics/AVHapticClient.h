//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVHapticClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    void *_commandWriter;	// 16 = 0x10
    unsigned long long _uniqueID;	// 24 = 0x18
    int _serverTimeout;	// 32 = 0x20
    CDUnknownBlockType _completionCallback;	// 40 = 0x28
    CDUnknownBlockType _connectionCallback;	// 48 = 0x30
    struct mutex _mapMutex;	// 56 = 0x38
    struct map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> _sequenceEntryMap;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_completionQueue;	// 144 = 0x90
    int _state;	// 152 = 0x98
    _Bool _disconnecting;	// 156 = 0x9c
    _Bool _prewarmed;	// 157 = 0x9d
    _Bool _connected;	// 158 = 0x9e
    int _serverProcessID;	// 160 = 0xa0
    unsigned long long _clientID;	// 168 = 0xa8
    NSArray *_channelKeys;	// 176 = 0xb0
    CDUnknownBlockType _asyncStopCallback;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x000000000002fb5c
- (void).cxx_destruct;	// IMP=0x000000000002fae6
@property(copy) CDUnknownBlockType asyncStopCallback; // @synthesize asyncStopCallback=_asyncStopCallback;
@property int serverProcessID; // @synthesize serverProcessID=_serverProcessID;
@property(readonly) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(copy) CDUnknownBlockType connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property(copy) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property _Bool connected; // @synthesize connected=_connected;
@property(readonly) _Bool prewarmed; // @synthesize prewarmed=_prewarmed;
@property(readonly) NSArray *channelKeys; // @synthesize channelKeys=_channelKeys;
@property(readonly) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002f8ad
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002f4ec
- (void)clientCompletedWithError:(id)arg1;	// IMP=0x000000000002ee14
- (void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002e8b6
- (void)destroySharedMemory;	// IMP=0x000000000002e85c
- (unsigned int)calculateHapticCommandParamCurveMemorySize:(unsigned int)arg1;	// IMP=0x000000000002e83d
- (void)handleServerConnectionInvalidation;	// IMP=0x000000000002e54f
- (void)handleServerConnectionInterruption;	// IMP=0x000000000002dee2
- (_Bool)removeAssignedChannelID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002dbbc
- (_Bool)requestAssignedChannels:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002d64b
- (void)clearAssignedChannels;	// IMP=0x000000000002d537
- (_Bool)setPlayerBehavior:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002d10e
- (void)setChannelKeys:(id)arg1;	// IMP=0x000000000002d09d
- (void)disconnect;	// IMP=0x000000000002cee3
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cbba
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c891
- (_Bool)setupConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ba0e
- (void)doInit;	// IMP=0x000000000002b960
- (void)releaseResources;	// IMP=0x000000000002b774
- (void)detachHapticSequence:(unsigned long long)arg1;	// IMP=0x000000000002b590
- (_Bool)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b3e8
- (_Bool)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;	// IMP=0x000000000002b1e1
- (_Bool)sendUnduckAudioCommand:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b018
- (_Bool)resetHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002ae4f
- (_Bool)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2;	// IMP=0x000000000002ac96
- (_Bool)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002aacd
- (_Bool)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002a904
- (_Bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002a73b
- (_Bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;	// IMP=0x000000000002a538
- (_Bool)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002a328
- (_Bool)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002a118
- (_Bool)enableSequenceLooping:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000029f1e
- (_Bool)prepareHapticSequence:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000029951
- (void)detachSequenceEntryforID:(unsigned long long)arg1;	// IMP=0x000000000002970d
- (void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(_Bool)arg2;	// IMP=0x0000000000029680
- (void)callSequenceFinishedHandlersWithError:(id)arg1;	// IMP=0x000000000002946b
- (CDUnknownBlockType)getSequenceFinishedHandlerForID:(unsigned long long)arg1;	// IMP=0x00000000000293ba
- (void)setSequenceFinishedHandlerForID:(unsigned long long)arg1 finishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000291c5
- (_Bool)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channel:(unsigned long long)arg3;	// IMP=0x0000000000028c89
- (_Bool)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285ab
- (_Bool)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027e26
- (_Bool)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000275d7
- (_Bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000002745e
- (_Bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;	// IMP=0x0000000000027234
- (_Bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;	// IMP=0x0000000000027055
- (_Bool)sendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 outToken:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000026f7b
- (_Bool)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(struct HapticSharedMemoryAddressReserve *)arg4 paramCurve:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000026257
- (_Bool)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000025af9
- (_Bool)doSendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 sorted:(_Bool)arg5 outToken:(unsigned long long *)arg6 error:(id *)arg7;	// IMP=0x0000000000023e2f
- (_Bool)resetChannel:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x00000000000234dc
- (_Bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;	// IMP=0x0000000000022fc5
- (void)expectNotifyAfter:(double)arg1;	// IMP=0x0000000000022fbf
- (_Bool)finish:(CDUnknownBlockType)arg1;	// IMP=0x000000000002269e
- (void)stopRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000221c9
- (void)stopRunning;	// IMP=0x0000000000021ebe
- (void)startRunning:(CDUnknownBlockType)arg1;	// IMP=0x00000000000219f7
- (void)stopPrewarm;	// IMP=0x000000000002170b
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021327
- (_Bool)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020eda
- (_Bool)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020a73
- (_Bool)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000205d9
- (_Bool)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000200f6
- (_Bool)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fb5d
- (void)allocateResources:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f2e7
@property(readonly) double hapticLatency;
- (void)queryServerCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ec2b
- (void)dealloc;	// IMP=0x000000000001e9cd
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e6b9
@property(readonly) int state;
- (void)setState:(int)arg1;	// IMP=0x000000000001e30e
@property(readonly) _Bool running;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

