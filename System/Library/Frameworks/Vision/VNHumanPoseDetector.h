//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPRequest;

__attribute__((visibility("hidden")))
@interface VNHumanPoseDetector
{
    VCPRequest *_humanPoseDetector;	// 16 = 0x10
}

+ (Class)recognizedPointsObservationClass;	// IMP=0x00600000000f5480
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000000f541d
- (void).cxx_destruct;	// IMP=0x00000000000f617b
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000f5de8
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000f59b0
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f571e
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f557e

@end

