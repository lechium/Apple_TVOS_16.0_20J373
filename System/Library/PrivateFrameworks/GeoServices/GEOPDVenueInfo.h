//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDLocatedInsideInfo, GEOPDVenueItemList, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_filterElements;	// 24 = 0x18
    GEOPDVenueItemList *_itemList;	// 32 = 0x20
    GEOPDLocatedInsideInfo *_locatedInside;	// 40 = 0x28
    NSMutableArray *_venueFeatureIds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _featureType;	// 68 = 0x44
    int _goInsideLevel;	// 72 = 0x48
    struct {
        unsigned int has_featureType:1;
        unsigned int has_goInsideLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_filterElements:1;
        unsigned int read_itemList:1;
        unsigned int read_locatedInside:1;
        unsigned int read_venueFeatureIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (id)venueInfoForPlaceData:(id)arg1;	// IMP=0x0010000000a43093
- (void).cxx_destruct;	// IMP=0x0000000000417f0f
- (unsigned long long)hash;	// IMP=0x00000000004179c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000417816
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000417396
- (void)writeTo:(id)arg1;	// IMP=0x0000000000416f6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000416f5c
- (id)jsonRepresentation;	// IMP=0x0000000000414f4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000414793
- (id)description;	// IMP=0x00000000004146e4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000413352
- (id)init;	// IMP=0x00000000004132f6

@end

