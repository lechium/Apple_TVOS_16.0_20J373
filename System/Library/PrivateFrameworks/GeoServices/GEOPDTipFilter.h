//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000cdf272
- (unsigned long long)hash;	// IMP=0x0000000000cdf247
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cdf1ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cdf10e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cdf056
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cdf047
- (id)jsonRepresentation;	// IMP=0x0000000000cdef35
- (id)dictionaryRepresentation;	// IMP=0x0000000000cdece1
- (id)description;	// IMP=0x0000000000cdec32
- (void)dealloc;	// IMP=0x0000000000cdea6c

@end
