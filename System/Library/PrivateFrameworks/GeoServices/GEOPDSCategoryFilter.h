//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategoryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_categoryMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000066ff8f
- (unsigned long long)hash;	// IMP=0x000000000066ff72
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066fed8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000066fe4d
- (void)writeTo:(id)arg1;	// IMP=0x000000000066fdf2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000066fde3
- (id)jsonRepresentation;	// IMP=0x000000000066fac1
- (id)dictionaryRepresentation;	// IMP=0x000000000066f8cf
- (id)description;	// IMP=0x000000000066f820

@end

