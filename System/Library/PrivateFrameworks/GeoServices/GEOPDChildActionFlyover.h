//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionFlyover : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b7509d
- (unsigned long long)hash;	// IMP=0x0000000000b75095
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b75050
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b74ff5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b74fd8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b74fc9
- (id)jsonRepresentation;	// IMP=0x0000000000b74eb7
- (id)dictionaryRepresentation;	// IMP=0x0000000000b74d4c
- (id)description;	// IMP=0x0000000000b74c9d

@end

