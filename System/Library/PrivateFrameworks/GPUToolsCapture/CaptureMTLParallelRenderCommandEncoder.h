//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLParallelRenderCommandEncoder, MTLParallelRenderCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLParallelRenderCommandEncoder : NSObject
{
    id <MTLParallelRenderCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005fcf7
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000005fc13
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x000000000005fb2f
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000005fa4b
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x000000000005f967
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005f86a
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005f76d
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000005f757
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000005f5df
- (void)popDebugGroup;	// IMP=0x000000000005f50b
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000005f393
- (void)endEncoding;	// IMP=0x000000000005f2bf
- (void)dealloc;	// IMP=0x000000000005f1d1
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000005f01f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000005f00e
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000005ef4d
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005eeed
- (id)originalObject;	// IMP=0x000000000005eedf
- (id)renderCommandEncoder;	// IMP=0x000000000005ed12
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000005eba9
@property(readonly) CaptureMTLCommandBuffer *commandBuffer;
@property(readonly) id <MTLParallelRenderCommandEncoder> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
