//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_zeroKeywordEntrys;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000619405
- (unsigned long long)hash;	// IMP=0x00000000006193ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006192cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000618efe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000618b9b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000618b8c
- (id)jsonRepresentation;	// IMP=0x0000000000618575
- (id)dictionaryRepresentation;	// IMP=0x0000000000617fe5
- (id)description;	// IMP=0x0000000000617f36
- (id)initWithData:(id)arg1;	// IMP=0x000000000061739c
- (id)init;	// IMP=0x0000000000617340

@end

