//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersionedLayer : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOMapLayerDataServiceLayer *_layer;	// 16 = 0x10
    GEOMapLayerDataServiceVersion *_version;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_layer:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000001197ef3
- (unsigned long long)hash;	// IMP=0x0000000001197e9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001197dba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001197c27
- (void)writeTo:(id)arg1;	// IMP=0x0000000001197a98
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001197a8b
- (id)jsonRepresentation;	// IMP=0x000000000119781b
- (id)dictionaryRepresentation;	// IMP=0x000000000119757b
- (id)description;	// IMP=0x00000000011974cc
- (id)initWithData:(id)arg1;	// IMP=0x0000000001196fb5
- (id)init;	// IMP=0x0000000001196f59

@end

