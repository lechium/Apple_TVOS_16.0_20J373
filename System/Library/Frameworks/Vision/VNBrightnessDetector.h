//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNBrightnessDetector
{
}

+ (_Bool)isReentrant;	// IMP=0x00800000000aa390
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000aa6a2
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000aa59a
- (struct __CVBuffer *)_createPixelBufferFromImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 maximumIntermediateSideLength:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000aa398

@end

