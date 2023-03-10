//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrandDensity : PBCodable
{
    unsigned long long _count;	// 8 = 0x8
    NSString *_geohash;	// 16 = 0x10
    float _popularitySum;	// 24 = 0x18
    struct {
        unsigned int has_count:1;
        unsigned int has_popularitySum:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000a94fee
- (unsigned long long)hash;	// IMP=0x0000000000a94e9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a94dae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a94cfc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a94c6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a94c5c
- (id)jsonRepresentation;	// IMP=0x0000000000a9454d
- (id)dictionaryRepresentation;	// IMP=0x0000000000a94418
- (id)description;	// IMP=0x0000000000a94369

@end

