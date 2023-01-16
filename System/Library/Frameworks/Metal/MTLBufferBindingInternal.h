//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLPointerType, MTLStructType, NSString;

__attribute__((visibility("hidden")))
@interface MTLBufferBindingInternal
{
    unsigned int _dataType:15;	// 64 = 0x40
    unsigned int _vertexDescriptorBuffer:1;	// 65 = 0x41
    unsigned short _alignment;	// 66 = 0x42
    unsigned int _dataSize;	// 68 = 0x44
    unsigned long long _pixelFormat;	// 72 = 0x48
    unsigned long long _aluType;	// 80 = 0x50
}

- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000003ff87
- (id)bufferIndirectArgumentType;	// IMP=0x000000000003ff63
@property(readonly) MTLPointerType *bufferPointerType;
- (id)structType;	// IMP=0x000000000003ff14
@property(readonly) MTLStructType *bufferStructType;
@property(readonly) unsigned long long bufferDataSize;
- (unsigned long long)bufferALUType;	// IMP=0x000000000003fed3
- (unsigned long long)bufferPixelFormat;	// IMP=0x000000000003fec2
@property(readonly) unsigned long long bufferDataType;
@property(readonly) unsigned long long bufferAlignment;
- (void)setStructType:(id)arg1;	// IMP=0x000000000003fe92
- (void)setStructType:(id)arg1 doRetain:(_Bool)arg2;	// IMP=0x000000000003fdca
- (_Bool)isVertexDescriptorBuffer;	// IMP=0x000000000003fdb7
- (void)setVertexDescriptorBuffer:(_Bool)arg1;	// IMP=0x000000000003fd9c
- (void)setAlignment:(unsigned long long)arg1;	// IMP=0x000000000003fd8b
- (void)setDataSize:(unsigned long long)arg1;	// IMP=0x000000000003fd7b
- (void)dealloc;	// IMP=0x000000000003fd4c
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(_Bool)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12;	// IMP=0x000000000003fc40

// Remaining properties
@property(readonly) unsigned long long access;
@property(readonly, getter=isArgument) _Bool argument;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long index;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@property(readonly) long long type;
@property(readonly, getter=isUsed) _Bool used;

@end

