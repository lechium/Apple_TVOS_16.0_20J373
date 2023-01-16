//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOStyleAttributes, GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfoSnippet : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_artworks;	// 24 = 0x18
    NSMutableArray *_labels;	// 32 = 0x20
    NSString *_searchDisplayName;	// 40 = 0x28
    GEOLatLng *_stopLocationForTrip;	// 48 = 0x30
    GEOStyleAttributes *_styleAttributesForTrip;	// 56 = 0x38
    NSMutableArray *_systemNames;	// 64 = 0x40
    GEOTimezone *_timezone;	// 72 = 0x48
    unsigned long long _transitId;	// 80 = 0x50
    NSString *_transitName;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artworks:1;
        unsigned int read_labels:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_stopLocationForTrip:1;
        unsigned int read_styleAttributesForTrip:1;
        unsigned int read_systemNames:1;
        unsigned int read_timezone:1;
        unsigned int read_transitName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

+ (id)transitInfoSnippetForPlaceData:(id)arg1;	// IMP=0x0010000000a3a88f
- (void).cxx_destruct;	// IMP=0x0000000000cec979
- (unsigned long long)hash;	// IMP=0x0000000000cec84f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cec600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cebff5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ceb9f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ceb9e9
- (id)jsonRepresentation;	// IMP=0x0000000000ceaded
- (id)dictionaryRepresentation;	// IMP=0x0000000000cea590
- (id)description;	// IMP=0x0000000000cea4e1
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ce89fe
- (id)init;	// IMP=0x0000000000ce89a2

@end
