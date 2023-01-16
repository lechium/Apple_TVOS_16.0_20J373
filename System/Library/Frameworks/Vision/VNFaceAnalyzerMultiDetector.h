//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetector
{
    struct shared_ptr<vision::mod::FaceFrontalizer> _mFaceFrontalizerImpl;	// 32 = 0x20
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000000f0ea2
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00600000000f0e97
+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)arg1;	// IMP=0x00600000000f0e5a
- (id).cxx_construct;	// IMP=0x00000000000f0db4
- (void).cxx_destruct;	// IMP=0x00000000000f0d6d
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;	// IMP=0x00000000000f0c8f
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000efc60
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000ef6ee
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ef590

@end

