//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, CaptureMTLLibrary, MTLDebugInstrumentationData, MTLType, NSArray, NSDictionary, NSString;
@protocol MTLDevice, MTLFunction, MTLFunctionSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLFunction : NSObject
{
    id <MTLFunctionSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLLibrary *_captureLibrary;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011fd5
- (id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;	// IMP=0x0000000000011f6d
- (id)reflectionWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000011f57
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;	// IMP=0x0000000000011d25
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;	// IMP=0x0000000000011b58
- (id)bitcodeData;	// IMP=0x0000000000011b42
- (const CDStruct_5af0f983 *)bitCodeHash;	// IMP=0x0000000000011b2c
@property(readonly) NSArray *vertexAttributes;
@property(readonly, copy) NSString *unpackedFilePath;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) MTLType *returnType;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(copy, nonatomic) NSArray *relocations;
@property(readonly) unsigned long long patchType;
@property(readonly) long long patchControlPointCount;
@property(readonly) NSString *name;
@property(readonly) long long lineNumber;
@property(copy) NSString *label;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSArray *importedLibraries;
@property(readonly) unsigned long long functionType;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly, copy) NSString *filePath;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSArray *arguments;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000117d0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000117bf
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000116fe
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000001169e
- (id)originalObject;	// IMP=0x0000000000011690
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryArchives:(id)arg3;	// IMP=0x0000000000011596
- (id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;	// IMP=0x0000000000011502
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id)arg3;	// IMP=0x00000000000112a9
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;	// IMP=0x00000000000110e7
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;	// IMP=0x0000000000010f3b
@property(readonly) id <MTLFunction> baseObject;
- (void)dealloc;	// IMP=0x0000000000010e3f
- (void)swapObject:(id)arg1;	// IMP=0x0000000000010d67
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000010c89
- (id)initWithBaseObject:(id)arg1 captureLibrary:(id)arg2;	// IMP=0x0000000000010b80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

