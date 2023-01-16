//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICURLBag, MPModelForYouRecommendationMusicKitGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

__attribute__((visibility("hidden")))
@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject
{
    struct {
        _Bool isInitialized;
        _Bool itemType;
        _Bool url;
        _Bool reason;
        _Bool utterance;
        _Bool backedByStoreItemMetadata;
        _Bool album;
        _Bool playlist;
        _Bool radioStation;
        _Bool subgroup;
    } _requestedItemProperties;	// 8 = 0x8
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;	// 24 = 0x18
    MPModelForYouRecommendationMusicKitGroupBuilder *_subgroupBuilder;	// 32 = 0x20
    ICURLBag *_storeURLBag;	// 40 = 0x28
    _Bool _isListenNow;	// 48 = 0x30
    MPPropertySet *_requestedPropertySet;	// 56 = 0x38
    NSDictionary *_storeItemMetadataResults;	// 64 = 0x40
    MPMutableSectionedCollection *_flatSectionedItems;	// 72 = 0x48
}

+ (id)allSupportedProperties;	// IMP=0x00600000001fe2aa
- (void).cxx_destruct;	// IMP=0x00000000001fdffb
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (id)convertToStoreItemMetadataDictionary:(id)arg1;	// IMP=0x00000000001fdde6
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg1;	// IMP=0x00000000001fdd57
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4;	// IMP=0x00000000001fd1ae
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 storeURLBag:(id)arg4 isListenNow:(_Bool)arg5;	// IMP=0x00000000001fd0a9

@end

