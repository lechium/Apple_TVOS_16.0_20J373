//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryPoiMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ae8b2f
- (unsigned long long)hash;	// IMP=0x0000000000ae8b12
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae8a78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae88db
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ae87ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ae879c
- (id)jsonRepresentation;	// IMP=0x0000000000ae878d
- (id)dictionaryRepresentation;	// IMP=0x0000000000ae850c
- (id)description;	// IMP=0x0000000000ae845d

@end
