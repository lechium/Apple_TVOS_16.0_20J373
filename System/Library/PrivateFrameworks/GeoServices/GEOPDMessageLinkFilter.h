//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMessageLinkFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c56972
- (unsigned long long)hash;	// IMP=0x0000000000c5696a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c56925
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c568ca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c568ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c5689e
- (id)jsonRepresentation;	// IMP=0x0000000000c5678c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c56621
- (id)description;	// IMP=0x0000000000c56572

@end
