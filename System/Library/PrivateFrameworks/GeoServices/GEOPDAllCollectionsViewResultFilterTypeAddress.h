//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResultFilterTypeAddress : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_geoId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004c73fb
- (unsigned long long)hash;	// IMP=0x00000000004c73de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c7344
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c72b9
- (void)writeTo:(id)arg1;	// IMP=0x00000000004c725e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004c724f
- (id)jsonRepresentation;	// IMP=0x00000000004c713d
- (id)dictionaryRepresentation;	// IMP=0x00000000004c6f3d
- (id)description;	// IMP=0x00000000004c6e8e

@end

