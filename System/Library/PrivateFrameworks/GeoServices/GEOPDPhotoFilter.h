//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c6e7ac
- (unsigned long long)hash;	// IMP=0x0000000000c6e781
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6e6e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6e648
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6e590
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c6e581
- (id)jsonRepresentation;	// IMP=0x0000000000c6e46f
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6e21b
- (id)description;	// IMP=0x0000000000c6e16c
- (void)dealloc;	// IMP=0x0000000000c6dfa6

@end
