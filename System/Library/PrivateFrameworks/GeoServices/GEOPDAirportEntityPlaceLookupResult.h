//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAirportEntityPlaceLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004bfcac
- (unsigned long long)hash;	// IMP=0x00000000004bfca4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bfc5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bfc04
- (void)writeTo:(id)arg1;	// IMP=0x00000000004bfbe7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004bfbd8
- (id)jsonRepresentation;	// IMP=0x00000000004bf91a
- (id)dictionaryRepresentation;	// IMP=0x00000000004bf7af
- (id)description;	// IMP=0x00000000004bf700

@end

