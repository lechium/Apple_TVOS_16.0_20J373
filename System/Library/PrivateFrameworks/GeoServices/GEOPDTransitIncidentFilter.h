//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitIncidentFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ce3eaf
- (unsigned long long)hash;	// IMP=0x0000000000ce3ea7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce3e62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce3e07
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce3dea
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce3ddb
- (id)jsonRepresentation;	// IMP=0x0000000000ce3cc9
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce3b5e
- (id)description;	// IMP=0x0000000000ce3aaf

@end
