//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategorySearchResultSection : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_sectionHeaderDisplayName;	// 24 = 0x18
    NSString *_sectionSubHeaderDisplayName;	// 32 = 0x20
    GEOStyleAttributes *_styleAttributes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _categorySearchResultSectionCellType;	// 60 = 0x3c
    struct {
        unsigned int has_categorySearchResultSectionCellType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000672084
- (unsigned long long)hash;	// IMP=0x0000000000671eb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000671d6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000671b50
- (void)writeTo:(id)arg1;	// IMP=0x0000000000671963
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000671954
- (id)jsonRepresentation;	// IMP=0x000000000067105b
- (id)dictionaryRepresentation;	// IMP=0x0000000000670d32
- (id)description;	// IMP=0x0000000000670c83
- (id)initWithData:(id)arg1;	// IMP=0x000000000067001c
- (id)init;	// IMP=0x000000000066ffc0

@end

