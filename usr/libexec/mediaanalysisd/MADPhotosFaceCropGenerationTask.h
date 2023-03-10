//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MADPhotosFaceCropGenerationTask
{
    NSMutableSet *_faces;	// 8 = 0x8
    NSArray *_assetEntries;	// 16 = 0x10
    MISSING_TYPE *_downloadGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 32 = 0x20
    NSMutableDictionary *_downloadRequestIDs;	// 40 = 0x28
    NSDate *_downloadStateChange;	// 48 = 0x30
    int _downloadStatus;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000699af
- (void)process;	// IMP=0x00100000000690d8
- (void)download;	// IMP=0x001000000006875c
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000006849a
- (double)downloadInactiveTimeInterval;	// IMP=0x0010000000068342
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x001000000006811f
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000067fb7
- (void)prepare;	// IMP=0x00100000000675d7
- (void)addFace:(id)arg1;	// IMP=0x00100000000674c6
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x00100000000673a4

@end

