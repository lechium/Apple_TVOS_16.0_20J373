//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNTorsoprintGeneratorFaceBased
{
}

+ (float)magnifiedBBoxScaleFactor;	// IMP=0x0080000000292262
+ (float)minimumTorsoInsideInputImageThreshold;	// IMP=0x0080000000292254
+ (struct CGSize)torsoprintDescriptorSize;	// IMP=0x008000000029223e
+ (struct CGSize)torsoprintInputImageSizeForFaceOrientation:(int)arg1;	// IMP=0x0080000000292218
- (_Bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect)arg1 insideImageWithSize:(struct CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect *)arg4 error:(id *)arg5;	// IMP=0x0000000000291df3
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000291c51
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000291929
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002913e7
- (id)torsoprintForImageBuffer:(struct __CVBuffer *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002913df

@end

