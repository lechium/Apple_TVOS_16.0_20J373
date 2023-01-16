//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPFaceAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPPhotosQuickFaceDetectionManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPFaceAnalyzer *_faceAnalyzer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f6c10
- (int)processAsset:(id)arg1;	// IMP=0x00000000000f68a3
- (int)_persistFaces:(id)arg1 forAsset:(id)arg2;	// IMP=0x00000000000f6340
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000f623a
- (id)init;	// IMP=0x00000000000f622c

@end

