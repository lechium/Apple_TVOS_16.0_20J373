//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiAtAddressLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_components;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005eac03
- (unsigned long long)hash;	// IMP=0x00000000005eabe6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005eab4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ea98c
- (void)writeTo:(id)arg1;	// IMP=0x00000000005ea82d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005ea81e
- (id)jsonRepresentation;	// IMP=0x00000000005ea70c
- (id)dictionaryRepresentation;	// IMP=0x00000000005ea37b
- (id)description;	// IMP=0x00000000005ea2cc

@end

