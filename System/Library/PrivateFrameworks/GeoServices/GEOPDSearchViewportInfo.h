//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion;

__attribute__((visibility("hidden")))
@interface GEOPDSearchViewportInfo : PBCodable
{
    GEOMapRegion *_mapRegion;	// 8 = 0x8
    int _mapType;	// 16 = 0x10
    unsigned int _timeSinceMapViewportChanged;	// 20 = 0x14
    struct {
        unsigned int has_mapType:1;
        unsigned int has_timeSinceMapViewportChanged:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011910e9
- (unsigned long long)hash;	// IMP=0x000000000119107a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001190f93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001190ede
- (void)writeTo:(id)arg1;	// IMP=0x0000000001190e50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001190e41
- (id)jsonRepresentation;	// IMP=0x0000000001190e32
- (id)dictionaryRepresentation;	// IMP=0x0000000001190c52
- (id)description;	// IMP=0x0000000001190ba3

@end

