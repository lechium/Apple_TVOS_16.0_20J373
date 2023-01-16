//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDAssetRequestPlanner, CKDCancelTokenGroup, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDUploadAssetsOperation
{
    _Bool _atomic;	// 8 = 0x8
    _Bool _temporary;	// 9 = 0x9
    CDUnknownBlockType _uploadPreparationBlock;	// 16 = 0x10
    CDUnknownBlockType _uploadProgressBlock;	// 24 = 0x18
    CDUnknownBlockType _uploadCompletionBlock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSArray *_assetsToUpload;	// 48 = 0x30
    NSMapTable *_uploadTasksByPackages;	// 56 = 0x38
    NSMutableArray *_packageManifests;	// 64 = 0x40
    NSMutableArray *_openedPackages;	// 72 = 0x48
    CKDCancelTokenGroup *_cancelTokens;	// 80 = 0x50
    unsigned long long _maxPackageUploadsPerBatch;	// 88 = 0x58
    CKDAssetRequestPlanner *_assetRequestPlanner;	// 96 = 0x60
    NSDictionary *_assetUUIDToExpectedProperties;	// 104 = 0x68
    NSDictionary *_packageUUIDToExpectedProperties;	// 112 = 0x70
}

+ (long long)isPredominatelyDownload;	// IMP=0x006000000011e9df
- (void).cxx_destruct;	// IMP=0x000000000011ef13
@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property(retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(retain, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner; // @synthesize assetRequestPlanner=_assetRequestPlanner;
@property(nonatomic) unsigned long long maxPackageUploadsPerBatch; // @synthesize maxPackageUploadsPerBatch=_maxPackageUploadsPerBatch;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSMutableArray *openedPackages; // @synthesize openedPackages=_openedPackages;
@property(retain, nonatomic) NSMutableArray *packageManifests; // @synthesize packageManifests=_packageManifests;
@property(retain, nonatomic) NSMapTable *uploadTasksByPackages; // @synthesize uploadTasksByPackages=_uploadTasksByPackages;
@property(retain, nonatomic) NSArray *assetsToUpload; // @synthesize assetsToUpload=_assetsToUpload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadPreparationBlock; // @synthesize uploadPreparationBlock=_uploadPreparationBlock;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x000000000011ecf6
- (void)main;	// IMP=0x000000000011ebfe
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000011eb00
- (void)finishWithError:(id)arg1;	// IMP=0x000000000011ea54
- (void)cancel;	// IMP=0x000000000011e9e7
- (void)_removePackageManifests;	// IMP=0x000000000011e511
- (_Bool)_upload;	// IMP=0x000000000011c6a6
- (void)_didUploadPackageWithTask:(id)arg1;	// IMP=0x000000000011bc08
- (void)_didMakeProgressForMMCSItem:(id)arg1;	// IMP=0x000000000011ba55
- (void)_didUploadMMCSItems:(id)arg1 error:(id)arg2;	// IMP=0x000000000011b7a3
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;	// IMP=0x000000000011b70c
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;	// IMP=0x000000000011b659
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;	// IMP=0x000000000011b518
- (void)_didUploadMMCSItem:(id)arg1 error:(id)arg2;	// IMP=0x000000000011af30
- (void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3;	// IMP=0x000000000011a743
- (void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011a0c8
- (void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000119f3f
- (void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000118d6e
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;	// IMP=0x0000000000118c17
- (void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x0000000000118945
- (void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x0000000000118564
- (_Bool)_fetchUploadTokens;	// IMP=0x00000000001172a0
- (_Bool)_didFetchUploadTokensForAssetTokenRequest:(id)arg1 error:(id)arg2 newError:(id *)arg3;	// IMP=0x0000000000116dea
- (void)_failAllItemsInAssetBatch:(id)arg1 error:(id)arg2;	// IMP=0x00000000001168d9
- (_Bool)_prepareForUpload;	// IMP=0x00000000001131b0
- (_Bool)_fetchConfiguration;	// IMP=0x00000000001130ad
- (_Bool)_fetchAssetRereferenceRecords;	// IMP=0x00000000001130a5
- (void)_didPrepareAssetBatch:(id)arg1 error:(id)arg2;	// IMP=0x0000000000111f7b
- (void)_didPutChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;	// IMP=0x0000000000111e9c
- (void)_didGetChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;	// IMP=0x0000000000111b41
- (_Bool)_planSectionsForPackage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001106a4
- (void)_didUploadAsset:(id)arg1 error:(id)arg2;	// IMP=0x0000000000110453
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;	// IMP=0x00000000001102a8
- (void)_didPrepareAsset:(id)arg1;	// IMP=0x0000000000110112
- (void)_closeAllPackages;	// IMP=0x000000000010ff7b
- (void)_closePackage:(id)arg1;	// IMP=0x000000000010fe0c
- (_Bool)_openPackage:(id)arg1;	// IMP=0x000000000010fb9e
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000010fb48
- (_Bool)makeStateTransition;	// IMP=0x000000000010f93b
- (id)CKStatusReportLogGroups;	// IMP=0x000000000010f6ff
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000010f495

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
