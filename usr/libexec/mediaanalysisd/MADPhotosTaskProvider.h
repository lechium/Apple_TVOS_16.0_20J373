//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSObject, NSString, PHFetchResult, PHPersistentChangeToken, PHPhotoLibrary, VCPDatabaseWriter;
@protocol OS_dispatch_queue;

@interface MADPhotosTaskProvider
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_statusQueue;	// 32 = 0x20
    int _status;	// 40 = 0x28
    int _downloadStatus;	// 44 = 0x2c
    long long _assetStage;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_taskContextQueue;	// 56 = 0x38
    MISSING_TYPE *_taskContext;	// 64 = 0x40
    PHPersistentChangeToken *_lastChangeToken;	// 72 = 0x48
    PHPersistentChangeToken *_currentChangeToken;	// 80 = 0x50
    PHPersistentChangeToken *_fullScanChangeToken;	// 88 = 0x58
    NSArray *_fetchPredicates;	// 96 = 0x60
    unsigned long long _fetchPredicateIdx;	// 104 = 0x68
    PHFetchResult *_fetchResult;	// 112 = 0x70
    unsigned long long _fetchIdx;	// 120 = 0x78
    CDUnknownBlockType _cancelBlock;	// 128 = 0x80
}

+ (id)name;	// IMP=0x002000000000d68a
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x001000000000d61b
- (void).cxx_destruct;	// IMP=0x001000000000d540
- (void)retireTask:(id)arg1;	// IMP=0x001000000000ce27
- (id)nextDownloadAssetProcessingTask;	// IMP=0x001000000000ccfd
- (void)performDownloadRetryAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000cbe7
- (void)performDownloadAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000cacc
- (id)nextAssetProcessingTask;	// IMP=0x001000000000c547
- (void)performHardFailureAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000c433
- (void)performSoftFailureAssetEvaluationWithTask:(id)arg1;	// IMP=0x001000000000c2a4
- (void)performFailedAssetEvaluationWithTask:(id)arg1 localIdentifierBlock:(CDUnknownBlockType)arg2 fetchCount:(unsigned long long)arg3 assetCount:(unsigned long long)arg4 download:(_Bool)arg5;	// IMP=0x001000000000ba6e
- (void)performFullAssetEvaluationWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000b3b6
- (int)performChangeTokenAssetEvaluationWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000a26d
- (void)evaluateChangeFetchWithTask:(id)arg1 andContext:(id)arg2;	// IMP=0x001000000000a106
- (void);	// IMP=0x0010000000009c4a
- (_Bool)_isAssetEligible:(id)arg1 withPreviousStatus:(unsigned long long *)arg2 allowDownload:(_Bool)arg3;	// IMP=0x00100000000098ac
- (int)_cleanupHardFailures;	// IMP=0x0010000000009294
- (void)_collectNumberOfAssets:(unsigned long long)arg1 forCoreAnalyticsField:(id)arg2;	// IMP=0x00100000000091fc
- (void)setStatus:(int)arg1;	// IMP=0x0010000000008fc9
- (int)downloadStatus;	// IMP=0x0010000000008f12
- (int)status;	// IMP=0x0010000000008e5b
- (unsigned long long)iterations;	// IMP=0x0010000000008e0e
- (unsigned long long)priority;	// IMP=0x0010000000008d84
- (id)initWithPhotoLibrary:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008997
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x001000000000d6b6
- (id)assetPriorityPredicates;	// IMP=0x001000000000d6ae

@end

