//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeComposite : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_variableExponentPairs;	// 16 = 0x10
    float _featureWeight;	// 24 = 0x18
    struct {
        unsigned int has_featureWeight:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000666023
- (unsigned long long)hash;	// IMP=0x0000000000665ef2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000665e2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000665c4a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000665ac4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000665ab5
- (id)jsonRepresentation;	// IMP=0x000000000066567d
- (id)dictionaryRepresentation;	// IMP=0x000000000066526a
- (id)description;	// IMP=0x00000000006651bb

@end

