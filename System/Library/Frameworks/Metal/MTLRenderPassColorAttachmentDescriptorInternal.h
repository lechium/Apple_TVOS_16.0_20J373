//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassColorAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x00600000000a590d
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000a62a7
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x00000000000a6295
- (unsigned long long)storeActionOptions;	// IMP=0x00000000000a6283
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000a6271
- (unsigned long long)storeAction;	// IMP=0x00000000000a625f
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x00000000000a624d
- (unsigned long long)loadAction;	// IMP=0x00000000000a623b
- (_Bool)yInvert;	// IMP=0x00000000000a6227
- (void)setYInvert:(_Bool)arg1;	// IMP=0x00000000000a6213
- (unsigned long long)resolveDepthPlane;	// IMP=0x00000000000a61fe
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000a61e9
- (unsigned long long)resolveSlice;	// IMP=0x00000000000a61d4
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x00000000000a61bf
- (unsigned long long)resolveLevel;	// IMP=0x00000000000a61ad
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x00000000000a619b
- (CDStruct_3ead2808)clearColor;	// IMP=0x00000000000a617a
- (void)setClearColor:(CDStruct_3ead2808)arg1;	// IMP=0x00000000000a615b
- (unsigned long long)depthPlane;	// IMP=0x00000000000a6149
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000a6137
- (unsigned long long)slice;	// IMP=0x00000000000a6125
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x00000000000a6113
- (unsigned long long)level;	// IMP=0x00000000000a6101
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x00000000000a60ef
- (id)resolveTexture;	// IMP=0x00000000000a60dd
- (void)setResolveTexture:(id)arg1;	// IMP=0x00000000000a6053
- (id)texture;	// IMP=0x00000000000a6042
- (void)setTexture:(id)arg1;	// IMP=0x00000000000a5fba
- (id)description;	// IMP=0x00000000000a5fa6
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000a5b9f
- (unsigned long long)hash;	// IMP=0x00000000000a5b86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5b27
- (void)dealloc;	// IMP=0x00000000000a5ad1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a59a9
- (id)init;	// IMP=0x00000000000a591f

@end
