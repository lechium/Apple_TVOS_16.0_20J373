//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableSet;

@interface VCPFaceLibraryProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    unsigned long long _subtasks;	// 32 = 0x20
    NSMutableSet *_assetBatch;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    CDUnknownBlockType _cancelBlock;	// 64 = 0x40
}

+ (void)_logSubtasks:(unsigned long long)arg1;	// IMP=0x002000000008197e
+ (id)taskWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000008188b
- (void).cxx_destruct;	// IMP=0x002000000008b1a7
- (_Bool)autoCancellable;	// IMP=0x001000000008b19f
- (int)run;	// IMP=0x001000000008a2b0
- (int)_processAutoCounterForPhotoLibrary:(id)arg1;	// IMP=0x0010000000089a25
- (int)_clusterAndProcessPersonsForPhotoLibrary:(id)arg1 withContext:(id)arg2 progressMade:(_Bool *)arg3;	// IMP=0x001000000008941f
- (int)_promotePersonsForPhotoLibrary:(id)arg1;	// IMP=0x001000000008900e
- (int)_buildPersonsForPhotoLibrary:(id)arg1 withClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x0010000000088acb
- (int)_clusterFacesWithClusterer:(id)arg1;	// IMP=0x00100000000887ca
- (int)_updateQuickFaceIDModelForPhotoLibrary:(id)arg1 withContext:(id)arg2 andQuickFaceIDManager:(id)arg3;	// IMP=0x00100000000883e5
- (int)_generateAndDetectFaceCropsForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000087f0a
- (int)_detectFacesForPhotoLibrary:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000087cb3
- (_Bool)_readyToProcessProcessLibrary:(id)arg1;	// IMP=0x0010000000087ac4
- (int)completeSceneProcessing;	// IMP=0x0010000000087830
- (int)_processingLibraryWithTask:(id)arg1;	// IMP=0x00100000000871cf
- (int)_maintainProcessingStatusWithTask:(id)arg1;	// IMP=0x0010000000086bc6
- (int)_analyzeAssetsWithChangeToken:(id)arg1 withTask:(id)arg2;	// IMP=0x0010000000085828
- (int)_queryChangeTokenCountSince:(id)arg1 count:(unsigned long long *)arg2 withTask:(id)arg3;	// IMP=0x0010000000085564
- (int)_processLocalIdentifiers:(id)arg1 change:(id)arg2 insert:(_Bool)arg3 withTask:(id)arg4;	// IMP=0x0010000000084e69
- (int)_analyzeAllAssetsWithTask:(id)arg1;	// IMP=0x00100000000844bf
- (int)_processFetchedAssets:(id)arg1 withProcessingTask:(id)arg2 andProgressReporter:(id)arg3;	// IMP=0x00100000000840e3
- (int)_retryFailedAssetsWithTask:(id)arg1;	// IMP=0x0010000000083db3
- (int)_retryEligibleAssetsWithTask:(id)arg1 andStatus:(unsigned long long)arg2 andReporter:(id)arg3;	// IMP=0x00100000000835af
- (int)_streamAnalysisWithTask:(id)arg1 andProcessingStatus:(unsigned long long)arg2;	// IMP=0x0010000000082f84
- (int)_screenLocalIdentifiers:(id)arg1 withTask:(id)arg2 andPreviousStatus:(unsigned long long)arg3 andProgressReporter:(id)arg4;	// IMP=0x0010000000082432
- (int)_addBatchWithAsset:(id)arg1 isRetry:(_Bool)arg2 withTask:(id)arg3;	// IMP=0x0010000000081a48
- (_Bool)isCancelled;	// IMP=0x0010000000081a24
- (void)cancel;	// IMP=0x0010000000081a19
- (float)resourceRequirement;	// IMP=0x0010000000081a0b
- (void)dealloc;	// IMP=0x0010000000081984
- (id)initWithPhotoLibraries:(id)arg1 andOptions:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4 andCancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000815ee
- (id)init;	// IMP=0x00100000000815e0

@end

