//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDBounds, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _mappedCategorys;	// 24 = 0x18
    GEOPDBounds *_bounds;	// 48 = 0x30
    GEOLatLng *_center;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mappedCategorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (id)spatialLookupResultForPlaceData:(id)arg1;	// IMP=0x0010000000a41033
- (void).cxx_destruct;	// IMP=0x0000000000ccae70
- (unsigned long long)hash;	// IMP=0x0000000000ccae04
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ccad07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ccab3f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cca928
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cca919
- (id)jsonRepresentation;	// IMP=0x0000000000cca73f
- (id)dictionaryRepresentation;	// IMP=0x0000000000cca3e0
- (id)description;	// IMP=0x0000000000cca331
- (void)dealloc;	// IMP=0x0000000000cc962d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cc95d1
- (id)init;	// IMP=0x0000000000cc9575

@end

