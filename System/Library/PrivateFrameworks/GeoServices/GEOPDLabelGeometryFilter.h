//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLabelGeometryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c3fdbf
- (unsigned long long)hash;	// IMP=0x0000000000c3fdb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3fd72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3fd17
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3fcfa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3fceb
- (id)jsonRepresentation;	// IMP=0x0000000000c3fbd9
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3fa6e
- (id)description;	// IMP=0x0000000000c3f9bf

@end
