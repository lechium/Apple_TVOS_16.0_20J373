//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLVertexBufferLayoutDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor
{
    unsigned long long _stride;	// 8 = 0x8
    unsigned long long _stepFunction;	// 16 = 0x10
    unsigned long long _instanceStepRate;	// 24 = 0x18
}

- (void)setStepRate:(unsigned long long)arg1;	// IMP=0x00000000000cae69
- (unsigned long long)stepRate;	// IMP=0x00000000000cae58
- (void)setStepFunction:(unsigned long long)arg1;	// IMP=0x00000000000cae47
- (unsigned long long)stepFunction;	// IMP=0x00000000000cae36
- (void)setStride:(unsigned long long)arg1;	// IMP=0x00000000000cae25
- (unsigned long long)stride;	// IMP=0x00000000000cae14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cada3
- (id)init;	// IMP=0x00000000000cad45

@end

