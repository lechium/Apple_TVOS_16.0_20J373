//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTileRenderPipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;	// 16 = 0x10
    struct FlatBufferBuilder _builder;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x0000000000005c83
- (void).cxx_destruct;	// IMP=0x0000000000005c72
- (const void *)getPipelineScript;	// IMP=0x0000000000005bd9
- (id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000005659
- (void)validateWithDevice:(id)arg1;	// IMP=0x0000000000005623
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000050ad
- (id)colorAttachments;	// IMP=0x000000000000509c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004e86
- (unsigned long long)hash;	// IMP=0x0000000000004cd5
- (void)setInsertLibraries:(id)arg1;	// IMP=0x0000000000004cb7
- (id)insertLibraries;	// IMP=0x0000000000004ca5
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x0000000000004c5e
- (id)preloadedLibraries;	// IMP=0x0000000000004c4c
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x0000000000004bba
- (id)linkedFunctions;	// IMP=0x0000000000004b6b
- (id)binaryArchives;	// IMP=0x0000000000004b59
- (void)setBinaryArchives:(id)arg1;	// IMP=0x0000000000004b12
- (long long)textureWriteRoundingMode;	// IMP=0x0000000000004aff
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x0000000000004aed
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x0000000000004adb
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x0000000000004a8f
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000004a7f
- (_Bool)threadgroupSizeMatchesTileSize;	// IMP=0x0000000000004a6e
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;	// IMP=0x0000000000004a5d
- (id)tileFunction;	// IMP=0x0000000000004a4b
- (void)setTileFunction:(id)arg1;	// IMP=0x00000000000049c1
- (void)setLabel:(id)arg1;	// IMP=0x0000000000004922
- (id)label;	// IMP=0x0000000000004910
- (void)reset;	// IMP=0x0000000000004812
- (void)setProfileControl:(id)arg1;	// IMP=0x00000000000047cb
- (id)profileControl;	// IMP=0x00000000000047b9
- (id)tileBuffers;	// IMP=0x00000000000047a7
- (void)setColorSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000004795
- (unsigned long long)colorSampleCount;	// IMP=0x0000000000004783
- (void)setPluginData:(id)arg1;	// IMP=0x0000000000004743
- (id)pluginData;	// IMP=0x0000000000004731
- (void)setRasterSampleCount:(unsigned long long)arg1;	// IMP=0x000000000000471f
- (unsigned long long)rasterSampleCount;	// IMP=0x000000000000470d
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x00000000000046fb
- (unsigned long long)sampleCount;	// IMP=0x00000000000046e9
- (id)description;	// IMP=0x00000000000046d5
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000004111
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003f64
- (void)dealloc;	// IMP=0x0000000000003ed6
- (id)init;	// IMP=0x0000000000003e2b

@end
