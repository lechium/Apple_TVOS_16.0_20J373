//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor
{
    struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000a79a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a790d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a78b6
- (unsigned long long)endOfFragmentSampleIndex;	// IMP=0x00000000000a78a4
- (void)setEndOfFragmentSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000a7892
- (unsigned long long)startOfFragmentSampleIndex;	// IMP=0x00000000000a7880
- (void)setStartOfFragmentSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000a786e
- (unsigned long long)endOfVertexSampleIndex;	// IMP=0x00000000000a785c
- (void)setEndOfVertexSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000a784a
- (unsigned long long)startOfVertexSampleIndex;	// IMP=0x00000000000a7838
- (void)setStartOfVertexSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000a7826
- (id)sampleBuffer;	// IMP=0x00000000000a7815
- (void)setSampleBuffer:(id)arg1;	// IMP=0x00000000000a77d7
- (const struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000a77c7
- (void)dealloc;	// IMP=0x00000000000a7785
- (id)init;	// IMP=0x00000000000a773f

@end
