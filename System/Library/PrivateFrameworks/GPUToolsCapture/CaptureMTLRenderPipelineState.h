//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, MTLDebugInstrumentationData, MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, NSMapTable, NSString;
@protocol MTLDevice, MTLRenderPipelineState, MTLRenderPipelineStateSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLRenderPipelineState : NSObject
{
    id <MTLRenderPipelineStateSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMapTable *_functionHandleMap;	// 40 = 0x28
    MTLRenderPipelineDescriptor *_descriptor;	// 48 = 0x30
    MTLTileRenderPipelineDescriptor *_tileDescriptor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000032738
@property(copy, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(copy, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)newVertexShaderDebugInfo;	// IMP=0x00000000000326f0
- (id)newFragmentShaderDebugInfo;	// IMP=0x00000000000326da
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;	// IMP=0x00000000000326c4
- (void)dealloc;	// IMP=0x00000000000325d6
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) NSString *label;
@property(readonly) unsigned long long imageblockSampleLength;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000324aa
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000032499
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000323d8
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000032378
- (id)originalObject;	// IMP=0x000000000003236a
@property(readonly) id <MTLRenderPipelineState> baseObject;
- (void)swapObject:(id)arg1;	// IMP=0x00000000000322bb
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000321dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

@end

