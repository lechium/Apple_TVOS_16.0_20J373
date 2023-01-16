//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter, VCPFaceAnalyzer, VCPFaceClusterer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosFaceAssetProcessingTask
{
    VCPDatabaseWriter *_analysisDatabase;	// 8 = 0x8
    NSMutableArray *_assetEntries;	// 16 = 0x10
    VCPFaceAnalyzer *_faceAnalyzer;	// 24 = 0x18
    VCPFaceClusterer *_faceClusterer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_managementQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_processGroup;	// 48 = 0x30
    unsigned long long _processingJobCount;	// 56 = 0x38
    unsigned long long _processingQueuesCount;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_downloadGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 80 = 0x50
    NSMutableDictionary *_downloadRequestIDs;	// 88 = 0x58
    NSDate *_downloadStateChange;	// 96 = 0x60
    int _downloadStatus;	// 104 = 0x68
    int _status;	// 108 = 0x6c
}

+ (id)taskWithAnalysisDatabase:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x004000000006b5aa
+ (unsigned long long)_concurrentQueueCount;	// IMP=0x001000000006b337
+ (_Bool)_concurrentFaceAnalysis;	// IMP=0x001000000006b2da
- (void).cxx_destruct;	// IMP=0x002000000007114e
- (void)publish;	// IMP=0x0010000000071120
- (int)_publish;	// IMP=0x0010000000070417
- (void)_publishEntry:(id)arg1 faceLocalIdentifiers:(id *)arg2;	// IMP=0x001000000006f0f7
- (void)process;	// IMP=0x001000000006f0c9
- (int)_process;	// IMP=0x001000000006ed54
- (void)_dispatchAssetEntries;	// IMP=0x001000000006e2da
- (void)_asyncAnalysisWithAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3 isBestResource:(_Bool)arg4;	// IMP=0x001000000006d972
- (void)download;	// IMP=0x001000000006c903
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000006c613
- (double)downloadInactiveTimeInterval;	// IMP=0x001000000006c4f7
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x001000000006c2b8
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x001000000006c12d
- (void)prepare;	// IMP=0x001000000006c106
- (int)_prepare;	// IMP=0x001000000006bc34
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x001000000006b8b8
- (int)status;	// IMP=0x001000000006b8a8
- (unsigned long long)count;	// IMP=0x001000000006b88b
- (void)dealloc;	// IMP=0x001000000006b63e
- (id)initWithAnalysisDatabase:(id)arg1 andFaceCluster:(id)arg2;	// IMP=0x001000000006b377

@end
