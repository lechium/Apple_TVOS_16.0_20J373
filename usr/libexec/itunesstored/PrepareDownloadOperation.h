//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSDownloadPolicy, SSMemoryEntity;

@interface PrepareDownloadOperation : ISOperation
{
    SSMemoryEntity *_download;	// 96 = 0x60
    _Bool _ignoresDownloadHandler;	// 104 = 0x68
    NSArray *_mediaAssets;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
    SSDownloadPolicy *_policy;	// 128 = 0x80
}

+ (long long)_URLSessionTaskPriorityForDownloadPriority:(long long)arg1;	// IMP=0x00200000001626fe
+ (long long)_URLSessionTaskPriorityForDownload:(id)arg1;	// IMP=0x00100000001625be
+ (id)_mediaAssetsForDownloadIdentifier:(long long)arg1 session:(id)arg2;	// IMP=0x001000000015c658
+ (_Bool)_isDTServiceHubIssuedRequest:(id)arg1;	// IMP=0x001000000015c5bd
+ (void)enumerateOperationsWithDownloadQuery:(id)arg1 session:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000158cfe
- (void).cxx_destruct;	// IMP=0x0020000000162866
- (_Bool)_usesStreamingZipDataConsumerForAsset:(id)arg1;	// IMP=0x0010000000162720
- (double)_transferProgressFractionWithAsset:(id)arg1;	// IMP=0x001000000016233c
- (_Bool)_shouldFailForDiskSpaceWithAsset:(id)arg1 dataConsumer:(id)arg2;	// IMP=0x00100000001615c9
- (_Bool)_shouldFailForFinishedDownload;	// IMP=0x0010000000161579
- (_Bool)_shouldCancelAutomaticDownload;	// IMP=0x00100000001612f0
- (_Bool)_shouldCancelAsDuplicate;	// IMP=0x0010000000161213
- (_Bool)_sendsStoreHeadersForAsset:(id)arg1;	// IMP=0x0010000000161155
- (_Bool)_requiresPoweredPluggedIn;	// IMP=0x0010000000160fe9
- (void)_recordCoreAnalyticsEventForClient:(id)arg1 downloadKind:(id)arg2 url:(id)arg3;	// IMP=0x0010000000160d30
- (id)_newURLRequestWithAsset:(id)arg1;	// IMP=0x0010000000160720
- (id)_newDataConsumerWithAsset:(id)arg1 destinationPath:(id)arg2;	// IMP=0x0010000000160371
- (id)_newAVContentInfoDictionary;	// IMP=0x001000000015ff8e
- (id)_newAVAssetDownloadSessionOptionsWithAsset:(id)arg1 URLRequest:(id)arg2;	// IMP=0x001000000015f44d
- (long long)_loadSizeForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x001000000015eb90
- (long long)_loadSizeIfNecessaryForAsset:(id)arg1;	// IMP=0x001000000015eae7
- (_Bool)_itemIsInSoftwareLibrary;	// IMP=0x001000000015e9e2
- (_Bool)_itemIsInMediaLibrary;	// IMP=0x001000000015e72e
- (id)_clientIdentifier;	// IMP=0x001000000015e512
- (id)_bestMediaAsset;	// IMP=0x001000000015dbfb
- (long long)_assetSizeFromURLResponse:(id)arg1;	// IMP=0x001000000015da31
- (_Bool)_assetNeedsDecryption:(id)arg1;	// IMP=0x001000000015d992
- (_Bool)_isPodcast;	// IMP=0x001000000015d942
- (_Bool)_isPodcastRestore;	// IMP=0x001000000015d8d1
- (_Bool)_allowsCellularAccessForAsset:(id)arg1;	// IMP=0x001000000015ccae
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x001000000015c5a8
- (long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2;	// IMP=0x001000000015c59d
- (void)run;	// IMP=0x00100000001593ea
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool ignoresDownloadHandler;
@property(readonly, nonatomic) long long downloadIdentifier;
- (id)_initWithDownload:(id)arg1 mediaAssets:(id)arg2 policy:(id)arg3;	// IMP=0x0010000000158c1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
