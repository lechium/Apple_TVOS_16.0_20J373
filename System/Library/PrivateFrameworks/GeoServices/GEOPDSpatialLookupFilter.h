//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc9562
- (unsigned long long)hash;	// IMP=0x0000000000cc955a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc9515
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc94ba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc949d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc948e
- (id)jsonRepresentation;	// IMP=0x0000000000cc937c
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc9211
- (id)description;	// IMP=0x0000000000cc9162

@end

