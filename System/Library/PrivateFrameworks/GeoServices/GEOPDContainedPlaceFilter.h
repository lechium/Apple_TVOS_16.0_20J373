//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDContainedPlaceFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000be9d67
- (unsigned long long)hash;	// IMP=0x0000000000be9d5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be9d1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be9cbf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be9ca2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be9c93
- (id)jsonRepresentation;	// IMP=0x0000000000be9b81
- (id)dictionaryRepresentation;	// IMP=0x0000000000be9a16
- (id)description;	// IMP=0x0000000000be9967

@end
