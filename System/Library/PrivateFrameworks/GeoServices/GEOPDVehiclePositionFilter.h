//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVehiclePositionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d021df
- (unsigned long long)hash;	// IMP=0x0000000000d021d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d02192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d02137
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d0211a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d0210b
- (id)jsonRepresentation;	// IMP=0x0000000000d01ff9
- (id)dictionaryRepresentation;	// IMP=0x0000000000d01e8e
- (id)description;	// IMP=0x0000000000d01ddf

@end
