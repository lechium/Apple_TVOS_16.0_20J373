//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/NSObject-Protocol.h>

@class NSString;
@protocol MTLArgumentEncoder, MTLBuffer, MTLComputePipelineState, MTLDevice, MTLIndirectCommandBuffer, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@protocol MTLArgumentEncoder <NSObject>
@property(readonly) unsigned long long alignment;
@property(readonly) unsigned long long encodedLength;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (id <MTLArgumentEncoder>)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id <MTLIndirectCommandBuffer>)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setComputePipelineState:(id <MTLComputePipelineState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1 atIndex:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id <MTLBuffer>)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
@end

