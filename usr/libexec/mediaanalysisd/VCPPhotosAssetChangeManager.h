//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;

@interface VCPPhotosAssetChangeManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    unsigned long long _pendingResourceChangeCount;	// 24 = 0x18
}

+ (id)managerForPhotoLibrary:(id)arg1;	// IMP=0x00400000000a67f3
- (void).cxx_destruct;	// IMP=0x00200000000abdc9
- (int)publishPendingChanges;	// IMP=0x00100000000aba09
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000ab7a8
- (int)updateLegacyAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000ab38f
- (int)updateMovieAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000aa6b8
- (int)updateImageAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000a94d3
- (int)associateTraitsForAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x00100000000a7bb3
- (int)associateTraitsForMovieAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x00100000000a6e05
- (id)matchPerson:(struct CGRect)arg1 withPHFaces:(id)arg2 withMinIOU:(float)arg3 iou:(float *)arg4;	// IMP=0x00100000000a68cb
- (void)dealloc;	// IMP=0x00100000000a6858
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000a672e

@end

