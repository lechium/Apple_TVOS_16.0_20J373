//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor
{
    struct MTLComputePassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)computePassDescriptor;	// IMP=0x006000000005f937
@property(nonatomic) _Bool allowCommandEncoderCoalescing;
- (void)setDispatchType:(unsigned long long)arg1;	// IMP=0x000000000005fc91
- (unsigned long long)dispatchType;	// IMP=0x000000000005fc80
- (id)sampleBufferAttachments;	// IMP=0x000000000005fc6e
- (const struct MTLComputePassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000005fc5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fbaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005fa84
- (unsigned long long)hash;	// IMP=0x000000000005f9f5
- (void)dealloc;	// IMP=0x000000000005f9b2
- (id)init;	// IMP=0x000000000005f951

@end

