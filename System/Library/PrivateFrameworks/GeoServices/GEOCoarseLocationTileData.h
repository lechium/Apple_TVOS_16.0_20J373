//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationTileData : PBCodable
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bdce9
- (unsigned long long)hash;	// IMP=0x00000000002bdccc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bdc32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bda95
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bd965
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bd75d
- (id)jsonRepresentation;	// IMP=0x00000000002bd74e
- (id)dictionaryRepresentation;	// IMP=0x00000000002bd4df
- (id)description;	// IMP=0x00000000002bd430

@end

