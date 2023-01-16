//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResource.h>

@interface PHAssetResource (MediaAnalysis)
+ (CDUnknownBlockType)vcp_descendingSizeComparator;	// IMP=0x006000000018d6a1
+ (CDUnknownBlockType)vcp_ascendingSizeComparator;	// IMP=0x006000000018d4dd
+ (id)vcp_allAcceptableResourcesForAsset:(id)arg1;	// IMP=0x006000000018cbae
+ (id)vcp_allResourcesForAsset:(id)arg1;	// IMP=0x006000000018cb80
- (struct CGSize)vcp_size;	// IMP=0x001000000018d486
- (unsigned long long)vcp_fileSize;	// IMP=0x001000000018d37a
- (_Bool)vcp_hasExtremeAbnormalDimensionForScene;	// IMP=0x001000000018d2ac
- (_Bool)vcp_isLocallyAvailable;	// IMP=0x001000000018d187
- (_Bool)vcp_isDecodable;	// IMP=0x001000000018d11c
- (_Bool)vcp_isPhotoResourceUsable:(_Bool)arg1;	// IMP=0x001000000018d0aa
- (_Bool)vcp_isVideoResourceUsable:(_Bool)arg1;	// IMP=0x001000000018d014
- (_Bool)vcp_isPhoto;	// IMP=0x001000000018cfb2
- (_Bool)vcp_isMovie;	// IMP=0x001000000018cef0
- (id)vcp_uniformTypeIdentifier;	// IMP=0x001000000018ce79
- (id)vcp_avAsset;	// IMP=0x001000000018d865
@end

