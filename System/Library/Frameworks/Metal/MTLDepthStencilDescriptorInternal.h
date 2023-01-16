//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLDepthStencilDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor
{
    struct MTLDepthStencilDescriptorPrivate _private;	// 8 = 0x8
}

- (void)setLabel:(id)arg1;	// IMP=0x00000000000c5259
- (id)label;	// IMP=0x00000000000c5247
- (void)setBackFaceStencil:(id)arg1;	// IMP=0x00000000000c51ba
- (id)backFaceStencil;	// IMP=0x00000000000c5189
- (void)setFrontFaceStencil:(id)arg1;	// IMP=0x00000000000c50ff
- (id)frontFaceStencil;	// IMP=0x00000000000c50d0
- (void)setDepthWriteEnabled:(_Bool)arg1;	// IMP=0x00000000000c50bf
- (_Bool)isDepthWriteEnabled;	// IMP=0x00000000000c50ae
- (void)setDepthCompareFunction:(unsigned long long)arg1;	// IMP=0x00000000000c509c
- (unsigned long long)depthCompareFunction;	// IMP=0x00000000000c508a
- (id)description;	// IMP=0x00000000000c5076
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000c4da6
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4cd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c4ba9
- (unsigned long long)hash;	// IMP=0x00000000000c4afb
- (void)dealloc;	// IMP=0x00000000000c4a9d
- (id)init;	// IMP=0x00000000000c4a4b

@end

