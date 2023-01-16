//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _resultSubtype;	// 16 = 0x10
    int _resultType;	// 20 = 0x14
    int _sortPriority;	// 24 = 0x18
    struct {
        unsigned int has_resultSubtype:1;
        unsigned int has_resultType:1;
        unsigned int has_sortPriority:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000050275f
- (unsigned long long)hash;	// IMP=0x00000000005026fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000502629
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000502571
- (void)writeTo:(id)arg1;	// IMP=0x00000000005024c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005024b7
- (id)jsonRepresentation;	// IMP=0x00000000005023a5
- (id)dictionaryRepresentation;	// IMP=0x00000000005020b8
- (id)description;	// IMP=0x0000000000502009

@end

