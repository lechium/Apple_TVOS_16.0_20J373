//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitIncident : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_transitIncidents;	// 16 = 0x10
}

+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1;	// IMP=0x0010000000a3b3a1
+ (id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(_Bool *)arg2;	// IMP=0x0010000000a3aff7
- (void).cxx_destruct;	// IMP=0x0000000000ce3a7e
- (unsigned long long)hash;	// IMP=0x0000000000ce3a61
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce39c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce3807
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce36a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce3699
- (id)jsonRepresentation;	// IMP=0x0000000000ce3587
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce31e4
- (id)description;	// IMP=0x0000000000ce3135

@end

