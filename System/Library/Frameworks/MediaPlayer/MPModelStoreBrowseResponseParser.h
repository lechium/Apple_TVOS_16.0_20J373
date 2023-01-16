//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPChangeDetails, MPModelStoreBrowseContentItemBuilder, MPModelStoreBrowseSectionBuilder, MPSectionedCollection, MPStoreItemMetadataResponse, NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface MPModelStoreBrowseResponseParser : NSObject
{
    MPSectionedCollection *_additionalContentIdentifiers;	// 8 = 0x8
    NSArray *_allAdditionalContentIdentifiersNeedingLookup;	// 16 = 0x10
    long long _parseOnceToken;	// 24 = 0x18
    MPSectionedCollection *_results;	// 32 = 0x20
    NSDictionary *_storePlatformDataResults;	// 40 = 0x28
    NSSet *_unavailableContentIdentifiers;	// 48 = 0x30
    ICUserIdentity *_userIdentity;	// 56 = 0x38
    CDStruct_d2d88407 _options;	// 64 = 0x40
    id _rawResponseOutput;	// 72 = 0x48
    MPModelStoreBrowseResponseParser *_previousParser;	// 80 = 0x50
    MPStoreItemMetadataResponse *_additionalStoreItemMetadataResponse;	// 88 = 0x58
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;	// 96 = 0x60
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;	// 104 = 0x68
    MPChangeDetails *_changeDetails;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000238140
@property(readonly, nonatomic) MPChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
@property(readonly, nonatomic) MPModelStoreBrowseContentItemBuilder *contentItemBuilder; // @synthesize contentItemBuilder=_contentItemBuilder;
@property(readonly, nonatomic) MPModelStoreBrowseSectionBuilder *sectionBuilder; // @synthesize sectionBuilder=_sectionBuilder;
@property(readonly, nonatomic) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse; // @synthesize additionalStoreItemMetadataResponse=_additionalStoreItemMetadataResponse;
@property(readonly, nonatomic) MPModelStoreBrowseResponseParser *previousParser; // @synthesize previousParser=_previousParser;
@property(readonly, nonatomic) CDStruct_d2d88407 options; // @synthesize options=_options;
@property(readonly, nonatomic) id rawResponseOutput; // @synthesize rawResponseOutput=_rawResponseOutput;
- (_Bool)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg1;	// IMP=0x0000000000238050
- (id)_storeItemMetadataForContentIdentifier:(id)arg1;	// IMP=0x0000000000237f5f
- (void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg1;	// IMP=0x0000000000237c46
- (void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg1;	// IMP=0x0000000000237a54
- (void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;	// IMP=0x000000000023773a
- (void)_parseSingleContentListFromPageDataDictionary:(id)arg1 isMemberOfChartSet:(_Bool)arg2;	// IMP=0x0000000000236b6e
- (_Bool)_parseFeaturedContentChild:(id)arg1 isMemberOfChartSet:(_Bool)arg2 insertingResultsToSectionedCollection:(id)arg3 atSectionIndex:(long long)arg4 additionalContentIdentifiers:(id)arg5 allAdditionalContentIdentifiersNeedingLookup:(id)arg6;	// IMP=0x0000000000235e53
- (void)_parseFeaturedContentStructureModelChildren:(id)arg1;	// IMP=0x000000000023574e
- (void)_parse;	// IMP=0x0000000000235555
@property(readonly, nonatomic) NSArray *allAdditionalContentIdentifiersNeedingLookup;
@property(readonly, nonatomic) MPSectionedCollection *additionalContentIdentifiers;
@property(readonly, nonatomic) MPSectionedCollection *results;
- (id)initWithPreviousParser:(id)arg1 additionalStoreItemMetadataResponse:(id)arg2 options:(CDStruct_d2d88407)arg3 sectionBuilder:(id)arg4 contentItemBuilder:(id)arg5 userIdentity:(id)arg6;	// IMP=0x000000000023531f
- (id)initWithRawResponseOutput:(id)arg1 options:(CDStruct_d2d88407)arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4 userIdentity:(id)arg5;	// IMP=0x0000000000235239

@end

