//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchCategoryLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_categoryLookupResults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000050417a
- (unsigned long long)hash;	// IMP=0x000000000050415d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005040c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000503f03
- (void)writeTo:(id)arg1;	// IMP=0x0000000000503da4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000503d95
- (id)jsonRepresentation;	// IMP=0x000000000050387f
- (id)dictionaryRepresentation;	// IMP=0x00000000005034dc
- (id)description;	// IMP=0x000000000050342d

@end

