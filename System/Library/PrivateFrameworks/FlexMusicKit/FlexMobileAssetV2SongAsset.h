//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FlexMobileAssetV2SongAsset
{
    NSString *_mobileAssetID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018a53
@property(readonly) NSString *mobileAssetID; // @synthesize mobileAssetID=_mobileAssetID;
- (_Bool)contentUpdateAvaliable;	// IMP=0x00000000000189f9
- (unsigned long long)assetStatus;	// IMP=0x00000000000188b9
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x000000000001881d
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x0000000000018781
- (id)_metadataForAssetWithNewestContentVersion;	// IMP=0x0000000000018597
- (id)mobileAsset;	// IMP=0x000000000001824c
- (id)initWithAssetID:(id)arg1 asset:(id)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;	// IMP=0x000000000001819c

@end
