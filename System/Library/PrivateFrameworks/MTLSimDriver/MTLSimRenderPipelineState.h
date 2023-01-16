//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLRenderPipelineState.h>

@class MTLDebugInstrumentationData, MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimRenderPipelineState : _MTLRenderPipelineState
{
    MTLSimDevice *_device;	// 96 = 0x60
    unsigned int _pipelineRef;	// 104 = 0x68
    unsigned long long _uniqueIdentifier;	// 112 = 0x70
}

- (id)pipelineBinaries;	// IMP=0x0000000000013202
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;	// IMP=0x00000000000131fa
@property(readonly) unsigned long long imageblockSampleLength;
- (unsigned int)getVertexShaderTelemetryID;	// IMP=0x00000000000131ea
- (unsigned int)getFragmentShaderTelemetryID;	// IMP=0x00000000000131e2
- (id)newVertexShaderDebugInfo;	// IMP=0x00000000000131da
- (id)newFragmentShaderDebugInfo;	// IMP=0x00000000000131d2
- (unsigned int)pipelineRef;	// IMP=0x00000000000131c2
@property(readonly) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)dealloc;	// IMP=0x0000000000012f5b
- (id)initWithDevice:(id)arg1 pipelineRef:(unsigned int)arg2 descriptor:(id)arg3;	// IMP=0x0000000000012eef

// Remaining properties
@property(readonly, nonatomic) unsigned long long allocatedSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) unsigned long long gpuHandle;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *label;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) Class superclass;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

@end
