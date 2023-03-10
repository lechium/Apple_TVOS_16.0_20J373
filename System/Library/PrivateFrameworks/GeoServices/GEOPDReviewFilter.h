//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReviewFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
    _Bool _suppressSyntheticReviews;	// 40 = 0x28
    struct {
        unsigned int has_suppressSyntheticReviews:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000cba89f
- (unsigned long long)hash;	// IMP=0x0000000000cba841
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cba76f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cba6af
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cba5d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cba5c1
- (id)jsonRepresentation;	// IMP=0x0000000000cba4af
- (id)dictionaryRepresentation;	// IMP=0x0000000000cba1e8
- (id)description;	// IMP=0x0000000000cba139
- (void)dealloc;	// IMP=0x0000000000cb9f73

@end

