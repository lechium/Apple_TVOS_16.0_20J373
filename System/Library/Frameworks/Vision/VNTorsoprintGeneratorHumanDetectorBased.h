//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNTorsoprintGeneratorHumanDetectorBased
{
    struct shared_ptr<vision::mod::TorsoprintGenerator> _torsoprintGenerator;	// 16 = 0x10
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000020893a
+ (const void *)modelVersionForOptions:(id)arg1;	// IMP=0x006000000020885b
- (id).cxx_construct;	// IMP=0x0000000000208844
- (void).cxx_destruct;	// IMP=0x00000000002087fd
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000020858d
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000208370
- (id)torsoprintForImageBuffer:(struct __CVBuffer *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002079d5
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000206e2f

@end

