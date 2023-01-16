//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLComputeCommandEncoderSPI, MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerComputeDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLComputeCommandEncoderSPI> computeEncoder;	// 16 = 0x10
    id <MTLComputePipelineState> _computePipeline;	// 24 = 0x18
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x000000000001980c
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000193fd
- (void)decodeBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019294
- (void)decodeBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001924c
- (void)decodeWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000191f4
- (void)decodeUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001919c
- (void)decodeSetThreadgroupMemoryLength:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000190e4
- (void)decodeSetStageInRegionIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001901e
- (void)decodeSetStageInRegion:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018f98
- (void)decodeSetPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018ed3
- (void)decodeSetBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018e1c
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018cb3
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018b46
- (void)decodeSetTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018955
- (void)decodeSetSamplersLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001870b
- (void)decodeSetSamplers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001851d
- (void)decodeSetBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018308
- (void)decodeDispatchThreads:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001825b
- (void)decodeDispatchThreadgroupsIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000181a0
- (void)decodeDispatchThreadgroups:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000180f3
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000018057
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000017f98
- (void)dealloc;	// IMP=0x0000000000017f4e
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000017ee8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

