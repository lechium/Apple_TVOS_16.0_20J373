//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPlaceContextMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_alternateSearchableNames;	// 24 = 0x18
    NSString *_interpretedCategory;	// 32 = 0x20
    NSString *_matchedDisplayNameLanguageCode;	// 40 = 0x28
    NSString *_matchedDisplayName;	// 48 = 0x30
    NSString *_normalizedQuery;	// 56 = 0x38
    NSString *_secondaryNameOverrideLanguage;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    _Bool _isDefaultName;	// 84 = 0x54
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alternateSearchableNames:1;
        unsigned int read_interpretedCategory:1;
        unsigned int read_matchedDisplayNameLanguageCode:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int read_normalizedQuery:1;
        unsigned int read_secondaryNameOverrideLanguage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000cbee79
- (unsigned long long)hash;	// IMP=0x0000000000cbed89
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cbeb94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cbe7be
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cbe46b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cbe45c
- (id)jsonRepresentation;	// IMP=0x0000000000cbe34a
- (id)dictionaryRepresentation;	// IMP=0x0000000000cbda7b
- (id)description;	// IMP=0x0000000000cbd9cc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cbcc82
- (id)init;	// IMP=0x0000000000cbcc26

@end

