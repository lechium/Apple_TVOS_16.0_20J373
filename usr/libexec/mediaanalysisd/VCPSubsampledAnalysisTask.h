//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPBatchAnalysisTask, VCPDatabaseWriter, VCPPhotosAssetChangeManager;

@interface VCPSubsampledAnalysisTask
{
    VCPDatabaseWriter *_database;	// 8 = 0x8
    VCPPhotosAssetChangeManager *_changeManager;	// 16 = 0x10
    VCPBatchAnalysisTask *_pendingBatch;	// 24 = 0x18
    unsigned long long _highlightCount;	// 32 = 0x20
    unsigned long long _memoryCountPerAssetType;	// 40 = 0x28
    _Bool _networkAvailable;	// 48 = 0x30
}

+ (id)taskWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x00400000000d2550
- (void).cxx_destruct;	// IMP=0x00200000000d5229
- (int)mainInternal;	// IMP=0x00100000000d49ab
- (unsigned long long)queryMemoryCount;	// IMP=0x00100000000d4915
- (unsigned long long)queryHighlightCount;	// IMP=0x00100000000d4861
- (int)processMemorieswithProgressReporter:(id)arg1;	// IMP=0x00100000000d44d1
- (int)processMemoriesWithAssetPredicate:(id)arg1 andProgressReporter:(id)arg2;	// IMP=0x00100000000d41d8
- (int)processMemory:(id)arg1 withAssetPredicate:(id)arg2 andAnalyzedAssetCount:(unsigned long long *)arg3;	// IMP=0x00100000000d3e93
- (id)memorySpecificFetchOptions;	// IMP=0x00100000000d3de5
- (int)processHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 andLimit:(_Bool)arg3 andProgressReporter:(id)arg4;	// IMP=0x00100000000d3ae4
- (int)processHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 assetPredicate:(id)arg3 andLimit:(_Bool)arg4 andProgressReporter:(id)arg5;	// IMP=0x00100000000d3603
- (int)processHighlight:(id)arg1 withAssetPredicate:(id)arg2 andLimit:(_Bool)arg3;	// IMP=0x00100000000d2eec
- (int)processAsset:(id)arg1 skipped:(_Bool *)arg2;	// IMP=0x00100000000d26e6
- (int)processPendingBatch;	// IMP=0x00100000000d268c
- (void)resetPendingBatch;	// IMP=0x00100000000d25c6
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x00100000000d24c4

@end

