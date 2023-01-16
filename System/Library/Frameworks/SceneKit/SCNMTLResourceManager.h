//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    struct __C3DEngineStats *__engineStats;	// 24 = 0x18
    SCNMTLLibraryManager *_libraryManager;	// 32 = 0x20
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;	// 40 = 0x28
    struct __CFDictionary *_availablePipelineStates;	// 48 = 0x30
    struct os_unfair_lock_s _availablePipelineStatesLock;	// 56 = 0x38
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;	// 64 = 0x40
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;	// 72 = 0x48
    CDStruct_670bd187 _availableIrradianceTextures;	// 88 = 0x58
    CDStruct_670bd187 _availableRadianceTextures;	// 104 = 0x68
    CDStruct_670bd187 _availableImages;	// 120 = 0x78
    CDStruct_670bd187 _availableImageProxy;	// 136 = 0x88
    CDStruct_670bd187 _availableSamplers;	// 152 = 0x98
    CDStruct_670bd187 _availableIESTextures;	// 168 = 0xa8
    CDStruct_670bd187 _availableBuffers;	// 184 = 0xb8
    CDStruct_670bd187 _availableMeshes;	// 200 = 0xc8
    CDStruct_670bd187 _availableMeshSources;	// 216 = 0xd8
    CDStruct_670bd187 _availableMeshElements;	// 232 = 0xe8
    CDStruct_670bd187 _availableRasterizerStates;	// 248 = 0xf8
    CDStruct_670bd187 _availableMorphs;	// 264 = 0x108
    CDStruct_670bd187 _availableSkins;	// 280 = 0x118
    CDStruct_670bd187 _availableComputePipelines;	// 296 = 0x128
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;	// 312 = 0x138
    CDStruct_670bd187 _availableTessellators;	// 328 = 0x148
    CDStruct_670bd187 _availableWireframeMaterials;	// 344 = 0x158
    CDStruct_670bd187 _availableShadables;	// 360 = 0x168
    SCNMTLShadableKey *_availableShadablesSearchKey;	// 376 = 0x178
    NSMutableArray *_availableStageDescriptors;	// 384 = 0x180
    struct os_unfair_lock_s _stageDescriptorsLock;	// 392 = 0x188
    id _nullStageDescriptor;	// 400 = 0x190
    id <MTLTexture> _areaLightPrecomputedDataTexture;	// 408 = 0x198
    id <MTLTexture> _specularDFGTexture;	// 416 = 0x1a0
    struct __C3DFXMetalProgram *_defaultProgram;	// 424 = 0x1a8
    struct __C3DFXMetalProgram *_defaultProgramForTessellation;	// 432 = 0x1b0
    struct __C3DFXMetalProgram *_isolateProgram;	// 440 = 0x1b8
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;	// 448 = 0x1c0
    id <MTLTexture> _defaultTexture;	// 456 = 0x1c8
    id <MTLTexture> _defaultTexture3D;	// 464 = 0x1d0
    id <MTLTexture> _defaultCubeTexture;	// 472 = 0x1d8
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;	// 480 = 0x1e0
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;	// 488 = 0x1e8
    MTKTextureLoader *_mtkTextureLoader;	// 496 = 0x1f0
}

+ (void)_fillVertexDescriptor:(id)arg1 withMeshSource:(struct __C3DMeshSource *)arg2 semantic:(BOOL)arg3 inputSet:(long long)arg4 bufferIndex:(long long)arg5;	// IMP=0x0060000000079cf9
+ (void)unregisterManagerForDevice:(id)arg1;	// IMP=0x0060000000077889
+ (id)resourceManagerForDevice:(id)arg1;	// IMP=0x006000000007776b
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) SCNMTLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (void)commandBufferDidCompleteWithError:(id)arg1;	// IMP=0x000000000007d298
- (id)depthAndStencilStateWithReadWriteDepthDisabled;	// IMP=0x000000000007d1bb
- (struct __C3DEngineStats *)stats;	// IMP=0x000000000007d1b1
- (void)flush;	// IMP=0x000000000007d1ab
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;	// IMP=0x000000000007d0ad
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;	// IMP=0x000000000007cf9d
- (id)renderResourceForSampler:(struct __C3DTextureSampler *)arg1;	// IMP=0x000000000007cdc1
- (id)renderResourceForMaterial:(struct __C3DMaterial *)arg1 geometry:(struct __C3DGeometry *)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext *)arg4;	// IMP=0x000000000007b186
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007b0df
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007b0ab
- (id)newPrivateBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3;	// IMP=0x000000000007b009
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000007afd5
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007afa1
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement *)arg1 engineContext:(struct __C3DEngineContext *)arg2 passInstance:(struct __C3DFXPassInstance *)arg3 hashPass:(unsigned long long)arg4;	// IMP=0x000000000007ad3e
- (id)renderResourceForTessellatedGeometry:(struct __C3DGeometry *)arg1;	// IMP=0x000000000007ac97
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 baseGeometry:(struct __C3DGeometry *)arg3;	// IMP=0x000000000007abd1
- (id)renderResourceForMorph:(struct __C3DMorph *)arg1 baseGeometry:(struct __C3DGeometry *)arg2;	// IMP=0x000000000007a95e
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1 dataKind:(unsigned char)arg2;	// IMP=0x000000000007a262
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;	// IMP=0x000000000007a000
- (id)renderResourceForMeshElement:(struct __C3DMeshElement *)arg1;	// IMP=0x0000000000079afa
- (id)renderResourceForMeshSource:(struct __C3DMeshSource *)arg1;	// IMP=0x00000000000799c0
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;	// IMP=0x00000000000797ae
- (id)_bufferForMTLBuffer:(void *)arg1;	// IMP=0x00000000000796db
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1 reverseZ:(_Bool)arg2;	// IMP=0x0000000000079408
- (void)resetRasterizerStates;	// IMP=0x00000000000793a6
- (void)removeAllShaders;	// IMP=0x000000000007937d
- (void)_geometryWillDie:(id)arg1;	// IMP=0x00000000000790e3
- (void)_materialWillDie:(id)arg1;	// IMP=0x0000000000078e68
- (void)_passWillDie:(id)arg1;	// IMP=0x0000000000078bdc
- (void)_programWillDie:(id)arg1;	// IMP=0x0000000000078938
- (void)_removeMatchingProgram:(struct __C3DFXMetalProgram *)arg1 pass:(struct __C3DFXPass *)arg2;	// IMP=0x00000000000787f9
- (void)_rasterizerStateDidDie:(const void *)arg1;	// IMP=0x00000000000787e0
- (void)_precomputedLightingEnvironmentWillDie:(id)arg1;	// IMP=0x0000000000078747
- (void)_imageProxyWillDie:(id)arg1;	// IMP=0x00000000000786ce
- (void)_imageWillDie:(id)arg1;	// IMP=0x0000000000078579
- (void)_skinWillDie:(id)arg1;	// IMP=0x0000000000078521
- (void)_programHashCodeWillDie:(id)arg1;	// IMP=0x00000000000784c9
- (void)_morphWillDie:(id)arg1;	// IMP=0x0000000000078471
- (void)_meshWillDie:(id)arg1;	// IMP=0x00000000000783e0
- (void)_meshElementWillDie:(id)arg1;	// IMP=0x00000000000782ce
- (void)_meshSourceWillDie:(id)arg1;	// IMP=0x0000000000078255
- (void)dealloc;	// IMP=0x0000000000078057
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000000778c5
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long *)arg3 renderContext:(id)arg4;	// IMP=0x0000000000102fff
- (id)areaLightPrecomputedDataTexture;	// IMP=0x0000000000102dd7
- (id)specularDFGTextureWithRenderContext:(id)arg1;	// IMP=0x0000000000102c71
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;	// IMP=0x0000000000102bb0
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;	// IMP=0x000000000010262e
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;	// IMP=0x00000000001022ad
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(_Bool)arg4 renderContext:(id)arg5;	// IMP=0x0000000000101e27
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;	// IMP=0x0000000000101ce2
- (id)radianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x0000000000101b50
- (id)irradianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x00000000001019be
- (id)defaultLightingEnvironmentRadianceTexture;	// IMP=0x0000000000101837
- (id)defaultLightingEnvironmentIrradianceTexture;	// IMP=0x00000000001016b0
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;	// IMP=0x0000000000108e0f
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000108897
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;	// IMP=0x000000000022a5c2
- (id)defaultTexture3D;	// IMP=0x000000000022a1ec
- (id)defaultCubeTexture;	// IMP=0x0000000000229fd3
- (id)defaultTexture;	// IMP=0x0000000000229dc4
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext *)arg4 didFallbackToDefaultTexture:(_Bool *)arg5;	// IMP=0x0000000000229941
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3 didFallbackToDefaultTexture:(_Bool *)arg4;	// IMP=0x00000000002297c6
- (id)renderResourceForEffectSlot:(struct __C3DEffectSlot *)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;	// IMP=0x00000000002296dc
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000229210
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x0000000000229042
- (id)newCubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x0000000000228e51
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;	// IMP=0x0000000000228487
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;	// IMP=0x000000000022817d
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;	// IMP=0x0000000000227ea7
- (id)newTextureUsingMTKTextureLoaderWithData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000227dbe
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000227cd5
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000227bba
- (id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;	// IMP=0x0000000000227b06
- (_Bool)hasCommonProfilePrecompiledFunctions;	// IMP=0x00000000002d61ff
- (void)reloadPipelinesIfNeeded;	// IMP=0x00000000002d61f9
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;	// IMP=0x00000000002d61b3
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;	// IMP=0x00000000002d6160
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;	// IMP=0x00000000002d614b
- (id)newComputePipelineStateWithFunctionName:(id)arg1;	// IMP=0x00000000002d60fa
- (id)getUniqueStageDescriptor:(id)arg1;	// IMP=0x00000000002d5b8c
- (id)computePipelineStateForKernel:(id)arg1;	// IMP=0x00000000002d5b78
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;	// IMP=0x00000000002d599a
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;	// IMP=0x00000000002d58ac
- (id)newComputePipelineStateForDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;	// IMP=0x00000000002d5836
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x00000000002d5734
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;	// IMP=0x00000000002d5607
- (id)newRenderPipelineStateWithDesc:(CDStruct_830b2881)arg1;	// IMP=0x00000000002d5300
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_830b2881)arg2 pipeline:(id)arg3;	// IMP=0x00000000002d4b2b
- (struct __C3DFXMetalProgram *)defaultProgramUsingTessellation:(_Bool)arg1;	// IMP=0x00000000002d4b0a
- (id)renderResourceForProgramDesc:(CDStruct_db84f6ff)arg1 renderPassDescriptor:(id)arg2;	// IMP=0x00000000002d4175

@end

