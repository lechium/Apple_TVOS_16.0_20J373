//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDParsecQueryRankingFeatures : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _geoScore;	// 16 = 0x10
    double _poiScore;	// 24 = 0x18
    struct {
        unsigned int has_geoScore:1;
        unsigned int has_poiScore:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000066a396
- (unsigned long long)hash;	// IMP=0x000000000066a0f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066a034
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000669f8f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000669eff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000669ef0
- (id)jsonRepresentation;	// IMP=0x000000000066980e
- (id)dictionaryRepresentation;	// IMP=0x00000000006695cd
- (id)description;	// IMP=0x000000000066951e

@end

