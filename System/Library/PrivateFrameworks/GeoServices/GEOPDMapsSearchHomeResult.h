//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSearchHomeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_mapsSearchHomeSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000055510d
- (unsigned long long)hash;	// IMP=0x00000000005550f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000555056
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000554e96
- (void)writeTo:(id)arg1;	// IMP=0x0000000000554d37
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000554d28
- (id)jsonRepresentation;	// IMP=0x0000000000554812
- (id)dictionaryRepresentation;	// IMP=0x000000000055446f
- (id)description;	// IMP=0x00000000005543c0

@end

