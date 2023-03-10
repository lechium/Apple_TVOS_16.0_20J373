//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchStructureIntentRequestType : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _intentType;	// 16 = 0x10
    int _structureType;	// 20 = 0x14
    struct {
        unsigned int has_intentType:1;
        unsigned int has_structureType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000683a15
- (unsigned long long)hash;	// IMP=0x000000000068395b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006838a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068380b
- (void)writeTo:(id)arg1;	// IMP=0x000000000068377f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000683770
- (id)jsonRepresentation;	// IMP=0x0000000000682e7b
- (id)dictionaryRepresentation;	// IMP=0x0000000000682bfb
- (id)description;	// IMP=0x0000000000682b4c

@end

