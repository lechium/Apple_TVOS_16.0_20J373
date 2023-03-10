//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLSharedEventListener, NSString;
@protocol MTLCommandQueue, MTLDeserializerObjectDelegate, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MTLDeserializer : NSObject
{
    NSObject<OS_dispatch_queue> *submissionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *completionQueue;	// 16 = 0x10
    id <MTLCommandQueue> commandQueue;	// 24 = 0x18
    id <MTLDevice> device;	// 32 = 0x20
    id <MTLDeserializerObjectDelegate> _objectDelegate;	// 40 = 0x28
    MTLSharedEventListener *eventListener;	// 48 = 0x30
    _Bool _generateResourceRefs;	// 56 = 0x38
}

@property(readonly) _Bool generateResourceRefs; // @synthesize generateResourceRefs=_generateResourceRefs;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x00000000000128b3
- (unsigned int)registerCommandQueue:(id)arg1;	// IMP=0x0000000000012898
- (unsigned int)registerBuffer:(id)arg1;	// IMP=0x000000000001287d
- (id)getResourceForReference:(unsigned int)arg1;	// IMP=0x0000000000012867
- (void)decodeSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 into:(id)arg4;	// IMP=0x000000000001274b
- (void)submitCommandSegmentsTimed:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;	// IMP=0x0000000000011ee0
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;	// IMP=0x0000000000011e41
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5;	// IMP=0x0000000000011e25
- (id)decodeSegmentWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2 withDecoder:(id)arg3 into:(id)arg4;	// IMP=0x0000000000011cfc
- (id)newObjectCommandWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000011c19
- (void)deleteObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000011bc0
- (void)deleteResource:(unsigned int)arg1;	// IMP=0x0000000000011baa
- (void)notifyListenerForEventWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 allocator:(id)arg4;	// IMP=0x0000000000011ac1
- (void)newTextureWithIOSurface:(struct __IOSurface *)arg1 serializedData:(const char *)arg2 serializedDataSize:(unsigned long long)arg3 allocator:(id)arg4;	// IMP=0x0000000000011978
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000011401
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x000000000001139a
- (void)getBytes:(void *)arg1 dataSize:(unsigned long long)arg2 command:(const CDStruct_c0454aff *)arg3;	// IMP=0x00000000000112e6
- (id)replaceRegion:(const CDStruct_c0454aff *)arg1;	// IMP=0x000000000001125a
- (void)newSharedEventWithEventPort:(unsigned int)arg1 label:(id)arg2 serializedData:(const char *)arg3 serializedDataSize:(unsigned long long)arg4 allocator:(id)arg5;	// IMP=0x00000000000111a6
- (_Bool)didModifyRange:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x000000000001119e
- (_Bool)newSharedEvent:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000011125
- (_Bool)newFence:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;	// IMP=0x00000000000110ac
- (_Bool)newFunctionWithSerializedMetallib:(id)arg1 commandData:(const char *)arg2 commandDataSize:(unsigned long long)arg3 overrideTargetTriple:(id)arg4 allocator:(id)arg5;	// IMP=0x0000000000010f79
- (_Bool)newTiledTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000010f71
- (_Bool)newTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000010ec2
- (_Bool)newTextureViewWithSwizzle:(CDStruct_f41d351c *)arg1 allocator:(id)arg2;	// IMP=0x0000000000010e11
- (_Bool)newTextureViewWithTextureType:(CDStruct_9da0e9c0 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000010d67
- (_Bool)newTextureViewWithPixelFormat:(CDStruct_1ab23c75 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000010cd7
- (_Bool)makeAliasiableResource:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010c52
- (_Bool)heapBufferSizeAndAlign:(CDStruct_5e0ae671 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010bc4
- (_Bool)heapTextureSizeAndAlign:(CDStruct_d55b6325 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010b28
- (_Bool)argumentEncoderSetValues:(CDStruct_091769f4 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000001086e
- (_Bool)sharedEventWaitSignaledValue:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010801
- (_Bool)sharedEventSetSignaledValue:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000107c1
- (_Bool)sharedEventSignaledValue:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010761
- (_Bool)doResourcesAlias:(CDStruct_eb9e20c8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010641
- (_Bool)argumentEncoderConstantAtIndex:(CDStruct_b92aab1b *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000001057b
- (_Bool)argumentBufferLayoutConstantAtIndex:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000104e5
- (_Bool)newArgumentEncoderWithBufferLayout:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000103a5
- (_Bool)newArgumentBufferLayoutWithStructType:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010191
- (_Bool)newRenderPipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010042
- (_Bool)uniqueIdentifier:(CDStruct_1e94be47 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000ff83
- (_Bool)newComputePipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fd38
- (_Bool)heapMaxAvailableSizeWithAlignment:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fcc4
- (_Bool)computeInfo:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fc27
- (_Bool)minimumTextureBufferAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fbcf
- (_Bool)minimumLinearTextureAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fb77
- (_Bool)bufferGPUAddress:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fb0a
- (_Bool)sizeInfoForHeap:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000000fa7b
- (_Bool)newBufferWithHeap:(CDStruct_e833742d *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f9c6
- (_Bool)newTextureWithHeap:(CDStruct_ab6bd9ea *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f8f4
- (_Bool)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f85b
- (id)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1;	// IMP=0x000000000000f7a8
- (_Bool)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f70f
- (id)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1;	// IMP=0x000000000000f65c
- (_Bool)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f5c3
- (id)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1;	// IMP=0x000000000000f510
- (_Bool)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1 allocator:(id)arg2;	// IMP=0x000000000000f477
- (id)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1;	// IMP=0x000000000000f3c4
- (void)deleteEventForReference:(unsigned int)arg1;	// IMP=0x000000000000ef92
- (id)getEventForReference:(unsigned int)arg1;	// IMP=0x000000000000ef7c
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id)arg2;	// IMP=0x000000000000ef66
- (void)deleteHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000ef50
- (id)getHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000ef3a
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;	// IMP=0x000000000000ef24
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000ef0e
- (id)getArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000eef8
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;	// IMP=0x000000000000eee2
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000eecc
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000eeb6
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;	// IMP=0x000000000000eea0
- (void)deleteFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000ee8a
- (id)getFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000ee74
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;	// IMP=0x000000000000ee5e
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ee48
- (id)getDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ee32
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;	// IMP=0x000000000000ee1c
- (void)deleteSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ee06
- (id)getSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000edf0
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;	// IMP=0x000000000000edda
- (void)deleteTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000edc4
- (id)getTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000edae
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;	// IMP=0x000000000000ed98
- (void)deleteBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000ed82
- (id)getBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000ed6c
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;	// IMP=0x000000000000ed56
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ed40
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ed2a
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;	// IMP=0x000000000000ed14
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ecfe
- (id)getComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000ece8
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;	// IMP=0x000000000000ecd2
- (void)deleteFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000ecbc
- (id)getFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000eca6
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;	// IMP=0x000000000000ec90
- (void)deleteCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000ec7a
- (id)getCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000ec64
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;	// IMP=0x000000000000ec4e
- (void)dealloc;	// IMP=0x000000000000ebcd
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000000ebb5
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2;	// IMP=0x000000000000eb4a
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2 objectDelegate:(id)arg3 createQueues:(_Bool)arg4;	// IMP=0x000000000000ea40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

