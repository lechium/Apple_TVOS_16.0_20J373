//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEventFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeEventCategoryId;	// 16 = 0x10
    struct {
        unsigned int has_includeEventCategoryId:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c9c3b1
- (unsigned long long)hash;	// IMP=0x0000000000c9c386
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9c2e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c9c264
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c9c201
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c9c1f2
- (id)jsonRepresentation;	// IMP=0x0000000000c9c0e0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c9bf0c
- (id)description;	// IMP=0x0000000000c9be5d

@end

