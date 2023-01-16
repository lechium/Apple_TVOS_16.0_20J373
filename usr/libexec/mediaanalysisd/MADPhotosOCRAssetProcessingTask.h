//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosOCRAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    _Bool _allowDownload;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_downloadGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 40 = 0x28
    NSMutableDictionary *_downloadRequestIDs;	// 48 = 0x30
    NSDate *_downloadStateChange;	// 56 = 0x38
    int _downloadStatus;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_computeGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_computeQueue;	// 80 = 0x50
    int _status;	// 88 = 0x58
}

+ (id)taskWithAnalysisDatabase:(id)arg1;	// IMP=0x0040000000054be4
- (void).cxx_destruct;	// IMP=0x002000000005af67
- (void)publish;	// IMP=0x001000000005af39
- (int)_publish;	// IMP=0x0010000000059e16
- (void)process;	// IMP=0x0010000000059de8
- (int)_process;	// IMP=0x0010000000059103
- (void)processAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3;	// IMP=0x0010000000057bc8
- (id)remoteResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x001000000005795e
- (id)localResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x00100000000577d8
- (id)acceptableResourcesForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x0010000000057184
- (void)prepare;	// IMP=0x001000000005715d
- (int)_prepare;	// IMP=0x0010000000056c15
- (void)download;	// IMP=0x0010000000055a1a
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000005572a
- (double)downloadInactiveTimeInterval;	// IMP=0x001000000005560e
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x00100000000553cf
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000055244
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x0010000000054ec8
- (int)status;	// IMP=0x0010000000054eb8
- (unsigned long long)count;	// IMP=0x0010000000054e9b
- (void)dealloc;	// IMP=0x0010000000054c41
- (id)initWithAnalysisDatabase:(id)arg1;	// IMP=0x0010000000054a72

@end
