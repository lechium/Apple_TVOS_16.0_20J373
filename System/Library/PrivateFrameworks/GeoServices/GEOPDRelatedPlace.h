//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _areaHighlightIndexs;	// 24 = 0x18
    NSMutableArray *_mapsIds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _type;	// 68 = 0x44
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_areaHighlightIndexs:1;
        unsigned int read_mapsIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (id)relatedPlacesForPlaceData:(id)arg1;	// IMP=0x0010000000a427dd
- (void).cxx_destruct;	// IMP=0x0000000000cb11e2
- (unsigned long long)hash;	// IMP=0x0000000000cb1175
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb107b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb0d6c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb0a85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb0a76
- (id)jsonRepresentation;	// IMP=0x0000000000cb089c
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb0420
- (id)description;	// IMP=0x0000000000cb0371
- (void)dealloc;	// IMP=0x0000000000caf674
- (id)initWithData:(id)arg1;	// IMP=0x0000000000caf618
- (id)init;	// IMP=0x0000000000caf5bc

@end
