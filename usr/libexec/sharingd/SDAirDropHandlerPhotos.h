//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SDAirDropHandlerPhotos
{
    _Bool _hasPhotos;	// 8 = 0x8
    _Bool _hasVideos;	// 9 = 0x9
    _Bool _shouldExtractMediaFromPhotosBundles;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
- (id)createDestination;	// IMP=0x0010000000190651
- (_Bool)transferContainsAssetBundles:(id)arg1;	// IMP=0x0010000000190492
- (void)updatePossibleActions;	// IMP=0x0010000000190463
- (id)transformPhotosAssetBundlesToFoldersIfNeededInCompletedURLs:(id)arg1;	// IMP=0x001000000018ff15
- (id)suitableContentsDescription;	// IMP=0x001000000018f86b
- (long long)transferTypes;	// IMP=0x001000000018f836
- (_Bool)canHandleTransfer;	// IMP=0x001000000018f821
- (id)initWithTransfer:(id)arg1;	// IMP=0x001000000018f7eb

@end
