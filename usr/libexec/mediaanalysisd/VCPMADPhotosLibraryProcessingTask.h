//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPMADPhotosLibraryProcessingTask
{
    NSArray *_photoLibraries;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000095bc8
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000094dde
- (int)_processPhotoLibrary:(id)arg1 withProgress:(id)arg2;	// IMP=0x00100000000946ef
- (int)_processFailedAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x0010000000093bc6
- (int)_processChangesToPhotoLibrary:(id)arg1 withChangeToken:(id)arg2 analysisDatabase:(id)arg3 andProgress:(id)arg4;	// IMP=0x0010000000092148
- (int)_processDownloadEligibleAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x001000000009170f
- (int)_processAllAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000910c2
- (id)assetPriorityPredicates;	// IMP=0x00100000000910ba
- (int)_checkHardFailuresForPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2;	// IMP=0x0010000000090923
- (int)completeSceneProcessingWithProgress:(id)arg1;	// IMP=0x00100000000905d5
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000090402

@end

