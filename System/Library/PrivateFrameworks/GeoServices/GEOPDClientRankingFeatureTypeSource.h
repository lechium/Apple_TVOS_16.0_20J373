//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeSource : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _serverEntryType;	// 16 = 0x10
    int _suggestionType;	// 20 = 0x14
    struct {
        unsigned int has_serverEntryType:1;
        unsigned int has_suggestionType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000667603
- (unsigned long long)hash;	// IMP=0x00000000006675bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066750a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000066746d
- (void)writeTo:(id)arg1;	// IMP=0x00000000006673e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006673d2
- (id)jsonRepresentation;	// IMP=0x0000000000666d73
- (id)dictionaryRepresentation;	// IMP=0x0000000000666afa
- (id)description;	// IMP=0x0000000000666a4b

@end

