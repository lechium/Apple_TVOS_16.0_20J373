//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCollectionSuggestionParameters, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsHomeParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;	// 16 = 0x10
    _Bool _shouldPopulateExploreGuidesEntry;	// 24 = 0x18
    struct {
        unsigned int has_shouldPopulateExploreGuidesEntry:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000054cc49
- (unsigned long long)hash;	// IMP=0x000000000054cbf6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054cb25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054ca77
- (void)writeTo:(id)arg1;	// IMP=0x000000000054c9f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054c9e8
- (id)jsonRepresentation;	// IMP=0x000000000054c5ad
- (id)dictionaryRepresentation;	// IMP=0x000000000054c346
- (id)description;	// IMP=0x000000000054c297

@end

