//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000062fc53
- (unsigned long long)hash;	// IMP=0x000000000062fc4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062fc06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062fbab
- (void)writeTo:(id)arg1;	// IMP=0x000000000062fb8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000062fb7f
- (id)jsonRepresentation;	// IMP=0x000000000062fa6d
- (id)dictionaryRepresentation;	// IMP=0x000000000062f902
- (id)description;	// IMP=0x000000000062f853

@end
