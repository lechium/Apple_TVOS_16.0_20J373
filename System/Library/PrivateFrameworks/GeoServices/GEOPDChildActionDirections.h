//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionDirections : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b74c8a
- (unsigned long long)hash;	// IMP=0x0000000000b74c82
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b74c3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b74be2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b74bc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b74bb6
- (id)jsonRepresentation;	// IMP=0x0000000000b74aa4
- (id)dictionaryRepresentation;	// IMP=0x0000000000b74939
- (id)description;	// IMP=0x0000000000b7488a

@end
