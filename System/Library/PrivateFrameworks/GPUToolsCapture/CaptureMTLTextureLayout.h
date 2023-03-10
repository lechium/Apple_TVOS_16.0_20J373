//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLTextureLayout;

__attribute__((visibility("hidden")))
@interface CaptureMTLTextureLayout : NSObject
{
    id <MTLTextureLayout> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f9af
- (void)initializeTextureMemory:(void *)arg1;	// IMP=0x000000000007f999
- (void)finalizeTextureMemory:(void *)arg1;	// IMP=0x000000000007f983
- (void)dealloc;	// IMP=0x000000000007f895
- (void)copyFromTextureMemory:(const void *)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(CDStruct_4c83c94d)arg4 toLinearBytes:(void *)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;	// IMP=0x000000000007f87f
- (void)copyFromLinearBytes:(const void *)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void *)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(CDStruct_4c83c94d)arg8;	// IMP=0x000000000007f869
@property(readonly) CDStruct_492b6082 watermark;
@property(readonly) unsigned long long size;
@property(readonly) CDStruct_14f26992 copyGranularity;
@property(readonly) unsigned long long alignment;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000007f7d6
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000007f7c5
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000007f704
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000007f6a4
- (id)originalObject;	// IMP=0x000000000007f696
@property(readonly) id <MTLTextureLayout> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x000000000007f5e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

