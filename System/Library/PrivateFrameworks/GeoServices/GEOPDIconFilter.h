//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIconFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c3d0f7
- (unsigned long long)hash;	// IMP=0x0000000000c3d0ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3d0aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3d04f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3d032
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3d023
- (id)jsonRepresentation;	// IMP=0x0000000000c3cf11
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3cda6
- (id)description;	// IMP=0x0000000000c3ccf7

@end

