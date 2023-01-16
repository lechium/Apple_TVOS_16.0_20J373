//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePipelineReflection.h"

@class NSArray, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection
{
    NSArray *_arguments;	// 8 = 0x8
    NSArray *_builtInArguments;	// 16 = 0x10
    NSDictionary *_performanceStatistics;	// 24 = 0x18
    CDStruct_596dc0d1 _flags;	// 32 = 0x20
    unsigned int _traceBufferIndex;	// 40 = 0x28
    NSData *_pluginReturnData;	// 48 = 0x30
    NSArray *_constantSamplerUniqueIdentifiers;	// 56 = 0x38
    NSArray *_constantSamplerDescriptors;	// 64 = 0x40
    NSArray *_bindings;	// 72 = 0x48
}

- (id)description;	// IMP=0x00000000000ab1e6
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000aae74
- (id)builtInArguments;	// IMP=0x00000000000aae63
- (id)bindings;	// IMP=0x00000000000aae46
- (id)arguments;	// IMP=0x00000000000aae35
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000aadf8
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;	// IMP=0x00000000000aadba
- (id)constantSamplerDescriptors;	// IMP=0x00000000000aada9
- (id)constantSamplerUniqueIdentifiers;	// IMP=0x00000000000aad98
- (id)pluginReturnData;	// IMP=0x00000000000aad87
- (unsigned int)traceBufferIndex;	// IMP=0x00000000000aad77
- (CDStruct_596dc0d1)usageFlags;	// IMP=0x00000000000aad66
- (void)setPerformanceStatistics:(id)arg1;	// IMP=0x00000000000aad2d
- (id)performanceStatistics;	// IMP=0x00000000000aad1c
- (void)dealloc;	// IMP=0x00000000000aac7e
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;	// IMP=0x00000000000aac54
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_596dc0d1)arg5;	// IMP=0x00000000000aa825

@end
