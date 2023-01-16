//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOBusynessPoiLookupTileMetaData : PBCodable
{
    unsigned long long _tileId;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
    unsigned int _poiCount;	// 24 = 0x18
    struct {
        unsigned int has_tileId:1;
        unsigned int has_poiCount:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000d07bee
- (unsigned long long)hash;	// IMP=0x0000000000d07b85
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d07a9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d079f0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d07961
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d07618
- (id)jsonRepresentation;	// IMP=0x0000000000d0760e
- (id)dictionaryRepresentation;	// IMP=0x0000000000d074db
- (id)description;	// IMP=0x0000000000d0742c

@end

