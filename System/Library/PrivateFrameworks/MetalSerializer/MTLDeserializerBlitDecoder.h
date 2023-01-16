//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLBlitCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface MTLDeserializerBlitDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLBlitCommandEncoderSPI> blitEncoder;	// 16 = 0x10
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000001ff8
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001cf4
- (void)decodeBlitWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001c9c
- (void)decodeBlitUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001c44
- (void)decodeSynchronizeTextureImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001c1f
- (void)decodeSynchronizeResource:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001bfa
- (void)decodeOptimizeImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001b7a
- (void)decodeOptimize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001b04
- (void)decodeGenerateMipmaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001aad
- (void)decodeFillBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000019ce
- (void)decodeCopyFromTextureToTextureWithOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000018f4
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001857
- (void)decodeCopyFromTextureToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001789
- (void)decodeCopyFromTextureToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000016bf
- (void)decodeCopyFromBufferToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001637
- (void)decodeCopyFromBufferToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001570
- (id)getTextureForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001500
- (id)getBufferForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001490
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x00000000000013d1
- (void)dealloc;	// IMP=0x0000000000001396
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000001330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
