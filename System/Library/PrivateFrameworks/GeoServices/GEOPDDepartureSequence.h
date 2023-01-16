//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPBTransitArtwork, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureSequence : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _nextStopIds;	// 24 = 0x18
    struct GEOPDTimeRange *_operatingHours;	// 48 = 0x30
    unsigned long long _operatingHoursCount;	// 56 = 0x38
    unsigned long long _operatingHoursSpace;	// 64 = 0x40
    GEOPBTransitArtwork *_artwork;	// 72 = 0x48
    NSMutableArray *_departureFrequencys;	// 80 = 0x50
    NSMutableArray *_departures;	// 88 = 0x58
    NSString *_directionNameString;	// 96 = 0x60
    NSString *_displayName;	// 104 = 0x68
    NSString *_headsignString;	// 112 = 0x70
    unsigned long long _lineId;	// 120 = 0x78
    NSString *_originName;	// 128 = 0x80
    unsigned long long _stopId;	// 136 = 0x88
    unsigned long long _transitId;	// 144 = 0x90
    unsigned int _readerMarkPos;	// 152 = 0x98
    unsigned int _readerMarkLength;	// 156 = 0x9c
    struct os_unfair_lock_s _readerLock;	// 160 = 0xa0
    struct {
        unsigned int has_lineId:1;
        unsigned int has_stopId:1;
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nextStopIds:1;
        unsigned int read_operatingHours:1;
        unsigned int read_artwork:1;
        unsigned int read_departureFrequencys:1;
        unsigned int read_departures:1;
        unsigned int read_directionNameString:1;
        unsigned int read_displayName:1;
        unsigned int read_headsignString:1;
        unsigned int read_originName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 164 = 0xa4
}

- (void).cxx_destruct;	// IMP=0x0000000000bfc4f7
- (unsigned long long)hash;	// IMP=0x0000000000bfc0bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bfbdf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bfb870
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bfb203
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bfb1f4
- (id)jsonRepresentation;	// IMP=0x0000000000bf9c08
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf9166
- (id)description;	// IMP=0x0000000000bf90b7
- (void)dealloc;	// IMP=0x0000000000bf7146
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bf70ea
- (id)init;	// IMP=0x0000000000bf708e

@end

