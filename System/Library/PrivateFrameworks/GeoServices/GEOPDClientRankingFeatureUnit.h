//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureTypeSource, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureUnit : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;	// 24 = 0x18
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;	// 32 = 0x20
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;	// 40 = 0x28
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _featureType;	// 68 = 0x44
    int _functionType;	// 72 = 0x48
    struct {
        unsigned int has_featureType:1;
        unsigned int has_functionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_featureTypeResult:1;
        unsigned int read_featureTypeSource:1;
        unsigned int read_functionTypeDiscrete:1;
        unsigned int read_functionTypeLinear:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x00000000006694a9
- (unsigned long long)hash;	// IMP=0x00000000006693bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000669213
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000668fa5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000668d7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000668d70
- (id)jsonRepresentation;	// IMP=0x00000000006689ef
- (id)dictionaryRepresentation;	// IMP=0x0000000000668557
- (id)description;	// IMP=0x00000000006684a8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000667672
- (id)init;	// IMP=0x0000000000667616

@end
