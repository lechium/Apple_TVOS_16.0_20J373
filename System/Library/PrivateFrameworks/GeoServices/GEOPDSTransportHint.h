//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSTransportHint : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _transportType;	// 16 = 0x10
    struct {
        unsigned int has_transportType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000685664
- (unsigned long long)hash;	// IMP=0x0000000000685639
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006855a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000685527
- (void)writeTo:(id)arg1;	// IMP=0x00000000006854c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006854b6
- (id)jsonRepresentation;	// IMP=0x00000000006853a4
- (id)dictionaryRepresentation;	// IMP=0x00000000006851b5
- (id)description;	// IMP=0x0000000000685106

@end

