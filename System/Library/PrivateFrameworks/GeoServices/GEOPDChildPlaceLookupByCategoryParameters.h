//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_categoryMetadata;	// 16 = 0x10
    unsigned long long _parentMuid;	// 24 = 0x18
    struct {
        unsigned int has_parentMuid:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000051fb59
- (unsigned long long)hash;	// IMP=0x000000000051fb09
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051fa48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051f999
- (void)writeTo:(id)arg1;	// IMP=0x000000000051f919
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000051f90a
- (id)jsonRepresentation;	// IMP=0x000000000051f523
- (id)dictionaryRepresentation;	// IMP=0x000000000051f2c7
- (id)description;	// IMP=0x000000000051f218

@end

