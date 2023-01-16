//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandQueue, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MTLCommandBuffer, MTLCommandBufferSPI, MTLCommandQueue, MTLDeadlineProfile, MTLDevice, MTLLogContainer, MTLSharedEvent;

__attribute__((visibility("hidden")))
@interface CaptureMTLCommandBuffer : NSObject
{
    CaptureMTLCommandQueue *_captureCommandQueue;	// 8 = 0x8
    id <MTLCommandBufferSPI> _baseObject;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _retainMutex;	// 40 = 0x28
    struct apr_pool_t *_pool;	// 104 = 0x68
    id <MTLSharedEvent> _downloadEvent;	// 112 = 0x70
    NSMutableArray *_downloadPoints;	// 120 = 0x78
    NSMutableArray *_scheduledDispatchArray;	// 128 = 0x80
    NSMutableArray *_completedDispatchArray;	// 136 = 0x88
    _Bool _presentDrawableUsed;	// 144 = 0x90
    unsigned long long _layer;	// 152 = 0x98
    _Bool _isCapturing;	// 160 = 0xa0
    _Bool _isCommited;	// 161 = 0xa1
    NSMutableSet *_retainedObjects;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000002b9f8
@property(readonly, nonatomic) _Bool presentDrawableUsed; // @synthesize presentDrawableUsed=_presentDrawableUsed;
@property(nonatomic) _Bool isCommited; // @synthesize isCommited=_isCommited;
@property(readonly, nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
- (void)waitUntilScheduled;	// IMP=0x000000000002b8e7
- (void)waitUntilCompleted;	// IMP=0x000000000002b813
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002b65c
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000002b5ac
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000002b542
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000002b4d8
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000002b25a
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000002b01b
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000002aea3
- (void)presentDrawable:(id)arg1 options:(id)arg2;	// IMP=0x000000000002add5
- (void)popDebugGroup;	// IMP=0x000000000002ad01
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000002aac2
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000002a938
- (void)encodeDashboardTagForResourceGroup:(id)arg1;	// IMP=0x000000000002a7c4
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long *)arg3 indices:(const unsigned long long *)arg4 count:(unsigned long long)arg5;	// IMP=0x000000000002a5cb
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;	// IMP=0x000000000002a422
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002a358
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002a28e
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002a0d7
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;	// IMP=0x000000000002a0c1
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x0000000000029edf
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000029ca0
- (id)computeCommandEncoder;	// IMP=0x0000000000029ad3
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000029484
- (id)blitCommandEncoder;	// IMP=0x00000000000292b7
- (void)addPurgedResource:(id)arg1;	// IMP=0x0000000000029143
- (void)addPurgedHeap:(id)arg1;	// IMP=0x0000000000028fcf
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) unsigned long long status;
@property(readonly) _Bool retainedReferences;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) id <MTLLogContainer> logs;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(copy) NSString *label;
@property(readonly) double kernelStartTime;
@property(readonly) double kernelEndTime;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long errorOptions;
@property(readonly) NSError *error;
@property(readonly) id <MTLDevice> device;
@property(readonly, retain) id <MTLDeadlineProfile> deadlineProfile;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) double GPUStartTime;
@property(readonly) double GPUEndTime;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000028bcc
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000028bbb
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000028afa
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000028a9a
- (id)originalObject;	// IMP=0x0000000000028a8c
- (id)debugCommandEncoder;	// IMP=0x0000000000028a22
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000288e6
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000000028751
- (void)presentDrawable:(id)arg1;	// IMP=0x00000000000285d7
- (void)trackPresent:(id)arg1;	// IMP=0x000000000002855e
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028422
- (_Bool)commitAndWaitUntilSubmittedWithDeadline:(unsigned long long)arg1;	// IMP=0x00000000000282e2
- (_Bool)commitAndWaitUntilSubmitted;	// IMP=0x00000000000281bb
- (void)commitWithDeadline:(unsigned long long)arg1;	// IMP=0x00000000000280c1
- (void)commitAndHold;	// IMP=0x0000000000027fd7
- (void)commit;	// IMP=0x0000000000027eed
- (void)enqueue;	// IMP=0x0000000000027e03
- (_Bool)isEnqueued;	// IMP=0x0000000000027de6
- (void)addRequestsToDownloadQueue:(id)arg1;	// IMP=0x0000000000027472
- (void)_preCommitWithIndex:(unsigned long long)arg1;	// IMP=0x0000000000026c65
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000026a4c
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;	// IMP=0x0000000000026998
- (void)unionRetainSet:(id)arg1;	// IMP=0x000000000002692d
- (void)dealloc;	// IMP=0x0000000000026565
- (id)initWithBaseObject:(id)arg1 captureCommandQueue:(id)arg2 funcRef:(struct GTTraceFuncRef)arg3;	// IMP=0x00000000000260c9
- (void)_encodeDownloadPoint;	// IMP=0x0000000000025f3a
@property(readonly) id <MTLCommandBuffer> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
