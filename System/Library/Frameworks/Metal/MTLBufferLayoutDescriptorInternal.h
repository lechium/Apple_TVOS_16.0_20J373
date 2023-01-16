//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLBufferLayoutDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor
{
    unsigned long long _stride;	// 8 = 0x8
    unsigned long long _stepFunction;	// 16 = 0x10
    unsigned long long _instanceStepRate;	// 24 = 0x18
}

- (void)setStepRate:(unsigned long long)arg1;	// IMP=0x0000000000006236
- (unsigned long long)stepRate;	// IMP=0x0000000000006225
- (void)setStepFunction:(unsigned long long)arg1;	// IMP=0x0000000000006214
- (unsigned long long)stepFunction;	// IMP=0x0000000000006203
- (void)setStride:(unsigned long long)arg1;	// IMP=0x00000000000061f2
- (unsigned long long)stride;	// IMP=0x00000000000061e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006170
- (id)init;	// IMP=0x0000000000006112

@end
