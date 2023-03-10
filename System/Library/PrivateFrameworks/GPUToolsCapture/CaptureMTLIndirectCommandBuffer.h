//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLHeap, MTLIndirectCommandBuffer, MTLIndirectCommandBufferSPI><MTLResourceSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLIndirectCommandBuffer : NSObject
{
    id <MTLIndirectCommandBufferSPI><MTLResourceSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000061ef6
- (void)waitUntilComplete;	// IMP=0x0000000000061ee0
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000061de3
- (void)resetWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000061ce6
- (void)makeAliasable;	// IMP=0x0000000000061c12
- (_Bool)isPurgeable;	// IMP=0x0000000000061b21
- (_Bool)isComplete;	// IMP=0x0000000000061b0b
- (_Bool)isAliasable;	// IMP=0x0000000000061a1a
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000061862
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000616aa
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x0000000000061653
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000615a5
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000614f7
- (void)dealloc;	// IMP=0x0000000000061409
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
@property(copy) NSString *label;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) struct MTLResourceID gpuResourceID;
- (unsigned long long)gpuHandle;	// IMP=0x00000000000610b1
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000006104b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000006103a
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000060f79
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000060f19
- (id)originalObject;	// IMP=0x0000000000060f0b
@property(readonly) id <MTLIndirectCommandBuffer> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000060e1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) Class superclass;

@end

