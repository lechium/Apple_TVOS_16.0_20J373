//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTResourceDownloader, MTLArchitecture, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;
@protocol MTLArgumentEncoder, MTLComputePipelineState, MTLDevice, MTLDeviceSPI, MTLFunction, MTLRenderPipelineState, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CaptureMTLDevice : NSObject
{
    id <MTLDeviceSPI> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
    struct apr_pool_t *_harvesterPool;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 40 = 0x28
    long long _onceToken;	// 48 = 0x30
    id <MTLFunction> _renderFunctionCopyIndirectCommandBuffer;	// 56 = 0x38
    id <MTLFunction> _computeFunctionCopyIndirectCommandBuffer;	// 64 = 0x40
    id <MTLRenderPipelineState> _renderPipelineCopyIndirectCommandBuffer;	// 72 = 0x48
    id <MTLRenderPipelineState> _renderPipelineCopyBuffer;	// 80 = 0x50
    id <MTLComputePipelineState> _computePipelineCopyIndirectCommandBuffer;	// 88 = 0x58
    id <MTLComputePipelineState> _computePipelineCopyBuffer;	// 96 = 0x60
    GTResourceDownloader *_downloader;	// 104 = 0x68
    long long _downloaderOnceToken;	// 112 = 0x70
    id <MTLArgumentEncoder> _dummyArgumentEncoder;	// 120 = 0x78
    long long _dummyArgEncOnceToken;	// 128 = 0x80
    _Bool isArgumentBufferPatchingTypeIndexed[9];	// 136 = 0x88
    unsigned long long _dummySamplerIndex;	// 152 = 0x98
    unsigned long long _dummyICBIndex;	// 160 = 0xa0
    unsigned long long _dummyRenderPSOIndex;	// 168 = 0xa8
    unsigned long long _dummyComputePSOIndex;	// 176 = 0xb0
    unsigned long long _dummyVisibleFunctionTableIndex;	// 184 = 0xb8
    unsigned long long _dummyIntersectionFunctionTableIndex;	// 192 = 0xc0
    struct _opaque_pthread_mutex_t _retainMutex;	// 200 = 0xc8
    NSMutableArray *_retainObjects;	// 264 = 0x108
    NSMapTable *_cachedDepthStencilStateMap;	// 272 = 0x110
    NSMapTable *_cachedFunctionMap;	// 280 = 0x118
    NSMapTable *_cachedSamplerStateMap;	// 288 = 0x120
    struct os_unfair_lock_s _cachedDepthStencilStateLock;	// 296 = 0x128
    struct os_unfair_lock_s _cachedFunctionLock;	// 300 = 0x12c
    struct os_unfair_lock_s _cachedSamplerStateLock;	// 304 = 0x130
    _Bool _bufferPinningEnabled;	// 308 = 0x134
    _Bool _isBaseObjectDebugDevice;	// 309 = 0x135
    _Bool _disableHeapTextureCompression;	// 310 = 0x136
    _Bool _captureASExtraBuffers;	// 311 = 0x137
    _Bool _captureRaytracingEnabled;	// 312 = 0x138
    struct GTResourceHarvester *_harvester;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000000021c9a
@property(readonly, nonatomic) struct GTResourceHarvester *harvester; // @synthesize harvester=_harvester;
- (id)newHeapWithDescriptor:(id)arg1;	// IMP=0x000000000002193c
- (id)newSamplerStateWithDescriptor:(id)arg1;	// IMP=0x00000000000215d9
- (id)newDepthStencilStateWithDescriptor:(id)arg1;	// IMP=0x00000000000213ca
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;	// IMP=0x00000000000213b4
@property(readonly) unsigned long long maxIOCommandsInFlight;
- (id)newIOHandleWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000211a5
- (id)vendorName;	// IMP=0x000000000002118f
- (_Bool)validateDynamicLibraryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021179
- (_Bool)validateDynamicLibraryDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021163
- (_Bool)validateDynamicLibrary:(id)arg1 state:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000210f8
- (void)unmapShaderSampleBuffer;	// IMP=0x0000000000021024
- (void)unloadShaderCaches;	// IMP=0x000000000002100e
- (_Bool)supportsTextureWriteRoundingMode:(long long)arg1;	// IMP=0x0000000000020ff8
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000020ef1
- (_Bool)supportsSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000020dea
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;	// IMP=0x0000000000020dd4
- (_Bool)supportsFamily:(long long)arg1;	// IMP=0x0000000000020dbe
- (_Bool)supportsCounterSampling:(unsigned long long)arg1;	// IMP=0x0000000000020da8
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1;	// IMP=0x0000000000020d92
- (void)startCollectingPipelineDescriptors;	// IMP=0x0000000000020d7c
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;	// IMP=0x0000000000020d66
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;	// IMP=0x0000000000020d50
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
- (void)sampleTimestamps:(unsigned long long *)arg1 gpuTimestamp:(unsigned long long *)arg2;	// IMP=0x0000000000020d24
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;	// IMP=0x0000000000020d0e
- (_Bool)reserveGPUAddressRange:(struct _NSRange)arg1;	// IMP=0x0000000000020cf8
- (id)productName;	// IMP=0x0000000000020ce2
- (CDStruct_c0454aff)pipelineCacheStats;	// IMP=0x0000000000020ccc
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;	// IMP=0x0000000000020a74
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000020860
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x00000000000205c7
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(_Bool)arg2;	// IMP=0x00000000000203d2
- (id)newProfileWithExecutionSize:(unsigned long long)arg1;	// IMP=0x0000000000020226
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ffff
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fdd8
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fbb1
- (id)newLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f98a
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f76a
- (id)newLateEvalEvent;	// IMP=0x000000000001f5d4
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)arg1;	// IMP=0x000000000001f57d
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)arg1;	// IMP=0x000000000001f526
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001f315
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001ef58
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;	// IMP=0x000000000001ef42
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;	// IMP=0x000000000001ef2c
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;	// IMP=0x000000000001ef16
- (id)newIOHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000001ed02
- (id)newIOCommandQueueWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ea2c
- (id)newFence;	// IMP=0x000000000001e896
- (id)newEvent;	// IMP=0x000000000001e700
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001e4e3
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e2df
- (id)newDynamicLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e281
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e1e9
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e0dd
- (id)newDagStringWithGraphs:(id)arg1;	// IMP=0x000000000001e0c7
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;	// IMP=0x000000000001df1c
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x000000000001dbf7
- (id)newCommandQueue;	// IMP=0x000000000001da61
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;	// IMP=0x000000000001d890
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001d6c3
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;	// IMP=0x000000000001d4f1
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(CDUnknownBlockType)arg5;	// IMP=0x000000000001d483
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;	// IMP=0x000000000001d269
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001d078
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001cfdb
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ce02
- (id)newArgumentEncoderWithLayout:(id)arg1;	// IMP=0x000000000001cda4
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000001cd8e
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000001cd78
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000001cc7b
- (_Bool)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x000000000001cc65
- (CDStruct_c0454aff)libraryCacheStats;	// IMP=0x000000000001cc4f
- (id)indirectArgumentBufferDecodingData;	// IMP=0x000000000001cc39
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;	// IMP=0x000000000001cb05
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001c9e9
- (void *)getShaderCacheKeys;	// IMP=0x000000000001c9d3
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001c9bd
- (id)familyName;	// IMP=0x000000000001c9a7
- (id)endCollectingPipelineDescriptors;	// IMP=0x000000000001c991
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;	// IMP=0x000000000001c97b
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;	// IMP=0x000000000001c965
- (void)deserializeCompileTimeStats:(id)arg1 addToDictionary:(id)arg2;	// IMP=0x000000000001c94f
- (_Bool)copyShaderCacheToPath:(id)arg1;	// IMP=0x000000000001c7c9
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;	// IMP=0x000000000001c7b3
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) _Bool supportPriorityBand;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long sharedMemorySize;
@property _Bool shaderDebugInfoCaching;
@property(readonly) unsigned long long registryID;
@property(readonly) unsigned long long readWriteTextureSupport;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(readonly) NSString *name;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) const CDStruct_4a42450c *limits;
@property(readonly, getter=isLargeMRTSupported) _Bool largeMRTSupported;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long halfFPConfig;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
@property(readonly) unsigned long long featureProfile;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceCreationFlags;
@property(readonly) long long defaultTextureWriteRoundingMode;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) NSArray *counterSets;
@property(nonatomic) unsigned long long commandBufferErrorOptions;
@property(readonly) unsigned long long bufferRobustnessSupport;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly) MTLArchitecture *architecture;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001bd68
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000001bd08
- (id)originalObject;	// IMP=0x000000000001bcfa
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bbe3
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bacc
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b88e
- (id)newBufferWithDescriptor:(id)arg1;	// IMP=0x000000000001b568
@property(readonly) unsigned long long maxPredicatedNestingDepth;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000001b366
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b187
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001afeb
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ae44
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001ab6d
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a915
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x000000000001a6ee
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x000000000001a540
- (id)newFunctionWithGLESIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x000000000001a319
- (id)newFunctionWithGLESIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x000000000001a16b
- (id)newFunctionWithGLCoreIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x0000000000019f44
- (id)newFunctionWithGLCoreIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x0000000000019d96
@property(readonly) unsigned long long minTilePixels;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileBuffers;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019aa5
- (void)_setDeviceWrapper:(id)arg1;	// IMP=0x0000000000019a9f
- (id)_deviceWrapper;	// IMP=0x0000000000019a96
- (_Bool)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;	// IMP=0x000000000001987e
- (id)newResourceGroupFromResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001961e
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000193b2
- (_Bool)supportsPrimitiveType:(unsigned long long)arg1;	// IMP=0x0000000000019296
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018fc9
- (id)newDefaultLibrary;	// IMP=0x0000000000018d17
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000018954
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000186c1
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000182d9
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018011
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000017c3e
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001799e
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000175cb
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001731a
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000171ba
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001707c
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016f4d
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016e03
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016cce
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016a34
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000168c9
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001658a
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x00000000000161df
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015f45
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x0000000000015cd3
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x0000000000015a61
- (id)newSharedEventWithMachPort:(unsigned int)arg1;	// IMP=0x00000000000158a2
- (id)newSharedEventWithHandle:(id)arg1;	// IMP=0x000000000001569c
- (id)newSharedEvent;	// IMP=0x00000000000154c8
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x00000000000151c2
- (id)newArgumentEncoderWithArguments:(id)arg1;	// IMP=0x0000000000015003
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000014e96
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000014d36
- (void)dealloc;	// IMP=0x0000000000014c2b
- (_Bool)captureADSExtraBuffers;	// IMP=0x0000000000014c1f
- (_Bool)captureRaytracingEnabled;	// IMP=0x0000000000014c13
- (_Bool)bufferPinningEnabled;	// IMP=0x0000000000014c07
- (void)purgeDeallocatedObjects;	// IMP=0x0000000000014bce
- (void)deallocateResource:(id)arg1;	// IMP=0x0000000000014a7b
- (void)invalidateHarvester;	// IMP=0x0000000000014a19
- (_Bool)disableHeapTextureCompression;	// IMP=0x0000000000014a0d
- (void)updateAssociatedFunction:(id)arg1;	// IMP=0x000000000001497f
- (_Bool)newCaptureSamplerState:(out id *)arg1 associatedWithBaseSamplerState:(id)arg2;	// IMP=0x00000000000148aa
- (_Bool)newCaptureDepthStencilState:(out id *)arg1 associatedWithBaseDepthStencilState:(id)arg2;	// IMP=0x00000000000147d5
- (_Bool)newCaptureFunction:(out id *)arg1 associatedWithBaseFunction:(id)arg2 captureLibrary:(id)arg3;	// IMP=0x00000000000146e6
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x00000000000140e8
@property(readonly) id <MTLDevice> baseObject;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineCopyBuffer;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLFunction> computeFunctionCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineCopyBuffer;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLFunction> renderFunctionCopyIndirectCommandBuffer;
@property(readonly, nonatomic) GTResourceDownloader *downloader;
- (id)dummyEncodeComputePSOIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000013e0b
- (id)dummyEncodeRenderPSOIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000013c6d
- (id)dummyEncodeICBIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000013b01
- (id)dummyEncodeSamplerIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x000000000001398f
- (id)dummyEncodeTextureIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x000000000001380c
- (void)_initDummyEncoder;	// IMP=0x00000000000134b6
- (id)dummyArgumentEncoder;	// IMP=0x0000000000013451
- (void)_initArgumentBufferPatchingTypes;	// IMP=0x00000000000133c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property(readonly) _Bool hasUnifiedMemory;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHeadless) _Bool headless;
@property(readonly, getter=isLowPower) _Bool lowPower;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(copy, nonatomic) NSDictionary *pluginData;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly, getter=isRemovable) _Bool removable;
@property(readonly) unsigned long long simulatorHostFeatureProfile;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsBGR10A2;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsDeadlineProfile;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsExplicitVisibilityGroups;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsFillTexture;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsSetThreadgroupPackingDisabled;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;

@end

