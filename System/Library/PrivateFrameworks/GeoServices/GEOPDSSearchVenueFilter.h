//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchVenueFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDVenueIdentifier *_venueFilter;	// 16 = 0x10
    int _venueSearchType;	// 24 = 0x18
    struct {
        unsigned int has_venueSearchType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000006850d5
- (unsigned long long)hash;	// IMP=0x0000000000685082
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000684fc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000684f13
- (void)writeTo:(id)arg1;	// IMP=0x0000000000684e94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000684e85
- (id)jsonRepresentation;	// IMP=0x0000000000684d73
- (id)dictionaryRepresentation;	// IMP=0x0000000000684af3
- (id)description;	// IMP=0x0000000000684a44

@end
