//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataTileData : PBCodable
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d7672d
- (unsigned long long)hash;	// IMP=0x0000000000d76710
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d76676
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d764d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d763a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d761a1
- (id)jsonRepresentation;	// IMP=0x0000000000d76192
- (id)dictionaryRepresentation;	// IMP=0x0000000000d75f23
- (id)description;	// IMP=0x0000000000d75e74

@end

