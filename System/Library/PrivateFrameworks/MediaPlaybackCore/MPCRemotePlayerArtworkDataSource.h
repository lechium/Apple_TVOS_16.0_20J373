//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

+ (id)bestArtworkSizes;	// IMP=0x00400000000a0d6e
+ (id)sharedDataSource;	// IMP=0x00400000000a0d0b
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000a0ac0
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0a3e
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000a09dd
- (id)_urlForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000a088a
- (id)supportedSizesForCatalog:(id)arg1;	// IMP=0x00000000000a0536
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000a04c5

@end
