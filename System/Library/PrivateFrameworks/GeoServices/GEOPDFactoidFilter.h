//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _canSupportStructuredData;	// 16 = 0x10
    struct {
        unsigned int has_canSupportStructuredData:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c29018
- (unsigned long long)hash;	// IMP=0x0000000000c28fed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c28f4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c28ecb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c28e68
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c28e59
- (id)jsonRepresentation;	// IMP=0x0000000000c28d47
- (id)dictionaryRepresentation;	// IMP=0x0000000000c28b73
- (id)description;	// IMP=0x0000000000c28ac4

@end
