//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXUpdateAssetTaskRestorationState
{
}

+ (id)restoreOrCreateStateFromStore:(id)arg1 assetType:(id)arg2;	// IMP=0x00400000000131f0
- (_Bool)hasCompletedDownloadingAssets;	// IMP=0x0040000000013480
- (_Bool)hasCompletedPurgingAssets;	// IMP=0x0010000000013420
- (_Bool)hasCompletedRefreshingAssets;	// IMP=0x00100000000133c0
- (_Bool)isDownloadingAssets;	// IMP=0x0010000000013360
- (_Bool)isPurgingAssets;	// IMP=0x0010000000013300
- (_Bool)isRefreshingAssets;	// IMP=0x00100000000132a0

@end

