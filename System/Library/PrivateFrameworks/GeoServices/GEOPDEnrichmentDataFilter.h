//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentDataFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c0ce87
- (unsigned long long)hash;	// IMP=0x0000000000c0ce7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c0ce3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c0cddf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c0cdc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c0cdb3
- (id)jsonRepresentation;	// IMP=0x0000000000c0cca1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c0cb36
- (id)description;	// IMP=0x0000000000c0ca87

@end

