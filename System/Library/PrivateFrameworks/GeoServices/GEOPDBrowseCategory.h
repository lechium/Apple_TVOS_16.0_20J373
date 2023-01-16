//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategory : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayString;	// 24 = 0x18
    NSString *_popularDisplayToken;	// 32 = 0x20
    NSString *_shortDisplayString;	// 40 = 0x28
    GEOStyleAttributes *_styleAttributes;	// 48 = 0x30
    NSMutableArray *_subCategorys;	// 56 = 0x38
    NSData *_suggestionEntryMetadata;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _displayMode;	// 84 = 0x54
    int _sortOrder;	// 88 = 0x58
    int _subCategoryType;	// 92 = 0x5c
    _Bool _includeEvChargingParametersOnSearch;	// 96 = 0x60
    _Bool _isAllCategoryForVenue;	// 97 = 0x61
    _Bool _isSubCategorySameAsTopLevel;	// 98 = 0x62
    struct {
        unsigned int has_displayMode:1;
        unsigned int has_sortOrder:1;
        unsigned int has_subCategoryType:1;
        unsigned int has_includeEvChargingParametersOnSearch:1;
        unsigned int has_isAllCategoryForVenue:1;
        unsigned int has_isSubCategorySameAsTopLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayString:1;
        unsigned int read_popularDisplayToken:1;
        unsigned int read_shortDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_subCategorys:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x0000000000df3a67
- (unsigned long long)hash;	// IMP=0x0000000000df35f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000df3330
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000df2ec9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000df2ad6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000df2ac7
- (id)jsonRepresentation;	// IMP=0x0000000000df1ea2
- (id)dictionaryRepresentation;	// IMP=0x0000000000df1603
- (id)description;	// IMP=0x0000000000df1554
- (id)initWithData:(id)arg1;	// IMP=0x0000000000defbb3
- (id)init;	// IMP=0x0000000000defb57

@end
