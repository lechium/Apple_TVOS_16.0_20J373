//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNProcessingDevice;
@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface VNSegmentationGenerator
{
    VNProcessingDevice *_processingDevice;	// 16 = 0x10
    unsigned int _outputMaskPixelFormat;	// 24 = 0x18
    struct BufferSize _espressoMaskInputBufferSize;	// 32 = 0x20
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _espressoMaskOutputBuffers;	// 48 = 0x30
    struct unordered_map<NSString *, apple::vision::BufferSize, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, apple::vision::BufferSize>>> _espressoMaskOutputBufferSizes;	// 88 = 0x58
    struct BufferSize _espressoInputImageSize;	// 128 = 0x80
    struct BufferSize _espressoInputMaskSize;	// 144 = 0x90
    id <MTLComputePipelineState> _createTileWithScaleComputePipelineState;	// 160 = 0xa0
    id <MTLComputePipelineState> _pasteTileComputePipelineState;	// 168 = 0xa8
}

+ (_Bool)supportsTiling;	// IMP=0x00400000000e5cc9
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00400000000e5c66
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000e58c4
- (id).cxx_construct;	// IMP=0x00000000000e897b
- (void).cxx_destruct;	// IMP=0x00000000000e8899
- (struct BufferSize)calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize)arg1 networkInputMaskSize:(struct BufferSize)arg2 networkOutputMaskSize:(struct BufferSize)arg3 rotated:(_Bool)arg4;	// IMP=0x00000000000e8889
@property(readonly, nonatomic) struct BufferSize outputMaskSize;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000e76ee
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e7285
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e5e9a
- (_Bool)needsMetalContext;	// IMP=0x00000000000e5da7

@end

