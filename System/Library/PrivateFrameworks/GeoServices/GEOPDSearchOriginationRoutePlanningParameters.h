//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchOriginationRoutePlanningParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLatLng *_previousLocation;	// 16 = 0x10
    _Bool _isEditServerRecommendedStop;	// 24 = 0x18
    struct {
        unsigned int has_isEditServerRecommendedStop:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000e2cb92
- (unsigned long long)hash;	// IMP=0x0000000000e2cb3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2ca6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e2c9c0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e2c940
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e2c931
- (id)jsonRepresentation;	// IMP=0x0000000000e2c81f
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2c5b8
- (id)description;	// IMP=0x0000000000e2c509

@end
