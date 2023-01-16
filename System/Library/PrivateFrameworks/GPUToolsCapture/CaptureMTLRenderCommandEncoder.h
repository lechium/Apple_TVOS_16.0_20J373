//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDevice, MTLRenderCommandEncoder, MTLRenderCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLRenderCommandEncoder : NSObject
{
    id <MTLRenderCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004ee60
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x000000000004ecd9
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x000000000004eb0f
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000004e959
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000004e895
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000004e703
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000004e57c
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000004e3c6
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000004e212
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x000000000004e08b
- (void)useHeap:(id)arg1;	// IMP=0x000000000004df1a
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x000000000004dd93
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004dc96
- (void)setViewportTransformEnabled:(_Bool)arg1;	// IMP=0x000000000004dba5
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x000000000004da8a
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004d8d4
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004d74d
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004d597
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000004d36b
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000004d2a3
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000004d0f5
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004cf6e
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004ce2d
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000004cc46
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004cb49
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004c9b7
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;	// IMP=0x000000000004c8ba
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x000000000004c7d6
- (void)setTransformFeedbackState:(unsigned long long)arg1;	// IMP=0x000000000004c7c0
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004c60a
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004c483
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004c2cd
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000004c0a1
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000004bef3
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004bd6c
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004bc2b
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000004ba32
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004b935
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004b7a3
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004b69a
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x000000000004b5a6
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x000000000004b414
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000004b330
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x000000000004b24c
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x000000000004b08d
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x000000000004aee7
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x000000000004adf9
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x000000000004ad06
- (void)setStencilCleared;	// IMP=0x000000000004ac32
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x000000000004ab29
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x000000000004a9b8
- (void)setProvokingVertexMode:(unsigned long long)arg1;	// IMP=0x000000000004a8d4
- (void)setPrimitiveRestartEnabled:(_Bool)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000004a7cd
- (void)setPrimitiveRestartEnabled:(_Bool)arg1;	// IMP=0x000000000004a6dc
- (void)setPointSize:(float)arg1;	// IMP=0x000000000004a5e8
- (void)setLineWidth:(float)arg1;	// IMP=0x000000000004a4f4
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x000000000004a410
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004a25a
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;	// IMP=0x000000000004a035
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000049eae
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000049cf8
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000049acc
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000049a04
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000049856
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000496cf
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004958e
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000493a7
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000492aa
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000049118
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000049034
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000048f50
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000048ddf
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x0000000000048c20
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x0000000000048a7a
- (void)setDepthClipModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000048a64
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x0000000000048980
- (void)setDepthCleared;	// IMP=0x00000000000488ac
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x000000000004878b
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x00000000000486a7
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000048691
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000048594
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000048497
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;	// IMP=0x00000000000482c9
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000048113
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x00000000000480fa
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x0000000000047fcc
- (void)setAlphaTestReferenceValue:(float)arg1;	// IMP=0x0000000000047ed8
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000047d3b
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000047bc3
- (void)popDebugGroup;	// IMP=0x0000000000047aef
- (_Bool)isMemorylessRender;	// IMP=0x0000000000047ad9
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x0000000000047961
- (void)endEncoding;	// IMP=0x000000000004788d
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x0000000000047752
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000047627
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x000000000004751e
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000004738c
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x00000000000471cb
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000046f95
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x0000000000046d44
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x0000000000046b87
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x00000000000469c7
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000046811
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x00000000000465ae
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x00000000000462ec
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2 withRenderTargetArrayIndex:(unsigned int)arg3;	// IMP=0x00000000000461a8
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2;	// IMP=0x0000000000046080
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x0000000000045f7d
@property(readonly) unsigned long long tileWidth;
@property(readonly) unsigned long long tileHeight;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000045d9f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000045d8e
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000045ccd
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000045c6d
- (id)originalObject;	// IMP=0x0000000000045c5f
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000004562d
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004526c
- (void)dealloc;	// IMP=0x0000000000045155
- (id)initWithBaseObject:(id)arg1 captureParallelRenderCommandEncoder:(id)arg2;	// IMP=0x0000000000044fa4
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x0000000000044e35
@property(readonly) id <MTLRenderCommandEncoder> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

