//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PHFetchResult (PXDisplayAssetAdoption)
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x002000000052f8b0
- (void)px_safelyPrefetchObjectAtIndex:(long long)arg1;	// IMP=0x0020000000837a05
- (id)px_fetchedObjectIDsSortedByLocalIdentifiers:(id)arg1;	// IMP=0x0020000000837779
- (id)px_fetchAssetSortDatesWithDateRangeEliminationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0020000000836e19
- (long long)px_indexOfSortedAssetNearestToAsset:(id)arg1;	// IMP=0x0020000000836b96
@property(readonly, nonatomic) unsigned long long px_sortOrder;
- (Class)px_sortByDatePropertySetClass;	// IMP=0x00200000008369b0

// Remaining properties
@property(readonly, nonatomic) long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly) Class superclass;
@end
