//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDFactoid, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDFactoid *_factoid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c28a93
- (unsigned long long)hash;	// IMP=0x0000000000c28a76
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c289dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c28951
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c288f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c288e7
- (id)jsonRepresentation;	// IMP=0x0000000000c287d5
- (id)dictionaryRepresentation;	// IMP=0x0000000000c285ef
- (id)description;	// IMP=0x0000000000c28540

@end

