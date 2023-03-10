//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;

@interface CKDFetchMergeableDeltaMetadataOperation
{
    CDUnknownBlockType _metadataFetchedBlock;	// 8 = 0x8
    NSArray *_mergeableValueIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000067913
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
@property(copy, nonatomic) CDUnknownBlockType metadataFetchedBlock; // @synthesize metadataFetchedBlock=_metadataFetchedBlock;
- (void)handleFetchedMetadatasForMergeableValueID:(id)arg1 metadatas:(id)arg2 result:(id)arg3;	// IMP=0x00000000000668ef
- (void)fetchMetadataRecursivelyForMergeableValueIDs:(id)arg1 continuationTokens:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000660aa
- (void)fetchMetadata;	// IMP=0x0000000000065cf2
- (void)main;	// IMP=0x0000000000065c91
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x0000000000065c41
- (_Bool)makeStateTransition;	// IMP=0x0000000000065b9c
- (id)activityCreate;	// IMP=0x0000000000065b73
- (int)operationType;	// IMP=0x0000000000065b68
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000065ad9

// Remaining properties
@property(retain, nonatomic) id <CKFetchMergeableDeltaMetadataOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

