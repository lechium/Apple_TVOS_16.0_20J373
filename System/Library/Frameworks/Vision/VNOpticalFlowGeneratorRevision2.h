//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMotionFlowRequest;

__attribute__((visibility("hidden")))
@interface VNOpticalFlowGeneratorRevision2
{
    VCPMotionFlowRequest *_motionFlowRequest;	// 16 = 0x10
    struct BufferSizeFormat _preferredBufferSizeFormat;	// 24 = 0x18
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000024de88
- (id).cxx_construct;	// IMP=0x000000000024f6e0
- (void).cxx_destruct;	// IMP=0x000000000024f6cd
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000024f06c
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000024e9fd
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024dfd4

@end

