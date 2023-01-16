//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbRegionPreloadMarket : PBCodable
{
    double _northWestLatitude;	// 8 = 0x8
    double _northWestLongitude;	// 16 = 0x10
    double _southEastLatitude;	// 24 = 0x18
    double _southEastLongitude;	// 32 = 0x20
    NSMutableArray *_tiles;	// 40 = 0x28
    struct {
        unsigned int northWestLatitude:1;
        unsigned int northWestLongitude:1;
        unsigned int southEastLatitude:1;
        unsigned int southEastLongitude:1;
    } _has;	// 48 = 0x30
}

@property(retain, nonatomic) NSMutableArray *tiles; // @synthesize tiles=_tiles;
@property(nonatomic) double southEastLongitude; // @synthesize southEastLongitude=_southEastLongitude;
@property(nonatomic) double southEastLatitude; // @synthesize southEastLatitude=_southEastLatitude;
@property(nonatomic) double northWestLongitude; // @synthesize northWestLongitude=_northWestLongitude;
@property(nonatomic) double northWestLatitude; // @synthesize northWestLatitude=_northWestLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003553db
- (unsigned long long)hash;	// IMP=0x0010000000354f8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000354e76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000354c32
- (void)copyTo:(id)arg1;	// IMP=0x0010000000354b20
- (void)writeTo:(id)arg1;	// IMP=0x0010000000354989
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000035497c
- (id)dictionaryRepresentation;	// IMP=0x001000000035430b
- (id)description;	// IMP=0x0010000000354294
- (id)tilesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000354277
- (unsigned long long)tilesCount;	// IMP=0x001000000035425a
- (void)addTiles:(id)arg1;	// IMP=0x001000000035420d
- (void)clearTiles;	// IMP=0x00100000003541f0
@property(nonatomic) _Bool hasSouthEastLongitude;
@property(nonatomic) _Bool hasSouthEastLatitude;
@property(nonatomic) _Bool hasNorthWestLongitude;
@property(nonatomic) _Bool hasNorthWestLatitude;
- (void)dealloc;	// IMP=0x0010000000354084

@end

