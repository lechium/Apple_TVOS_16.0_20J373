//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObject : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_addressObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b36a38
- (unsigned long long)hash;	// IMP=0x0000000000b36a18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3697e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b368f3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b36898
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b36889
- (id)jsonRepresentation;	// IMP=0x0000000000b362d8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b360e6
- (id)description;	// IMP=0x0000000000b36037

@end

