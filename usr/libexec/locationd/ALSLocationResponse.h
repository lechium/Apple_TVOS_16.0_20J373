//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ALSLocationResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;	// 8 = 0x8
    NSMutableArray *_cellTowers;	// 16 = 0x10
    NSMutableArray *_lteCellTowers;	// 24 = 0x18
    NSMutableArray *_nr5GCellTowers;	// 32 = 0x20
    NSMutableArray *_scdmaCellTowers;	// 40 = 0x28
    NSMutableArray *_wirelessAPs;	// 48 = 0x30
}

+ (Class)nr5GCellTowerType;	// IMP=0x00200000006fa234
+ (Class)scdmaCellTowerType;	// IMP=0x00100000006fa17f
+ (Class)lteCellTowerType;	// IMP=0x00100000006fa0ca
+ (Class)cdmaCellTowerType;	// IMP=0x00100000006fa015
+ (Class)wirelessAPType;	// IMP=0x00100000006f9f60
+ (Class)cellTowerType;	// IMP=0x00100000006f9eab
@property(retain, nonatomic) NSMutableArray *nr5GCellTowers; // @synthesize nr5GCellTowers=_nr5GCellTowers;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006fc11d
- (unsigned long long)hash;	// IMP=0x00100000006fc05f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006fbeff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006fb7b5
- (void)copyTo:(id)arg1;	// IMP=0x00100000006fb4ba
- (void)writeTo:(id)arg1;	// IMP=0x00100000006fafe9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006fafdc
- (id)dictionaryRepresentation;	// IMP=0x00100000006fa2bc
- (id)description;	// IMP=0x00100000006fa245
- (id)nr5GCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006fa217
- (unsigned long long)nr5GCellTowersCount;	// IMP=0x00100000006fa1fa
- (void)addNr5GCellTower:(id)arg1;	// IMP=0x00100000006fa1ad
- (void)clearNr5GCellTowers;	// IMP=0x00100000006fa190
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006fa162
- (unsigned long long);	// IMP=0x00100000006fa145
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x00100000006fa0f8
- (void)clearScdmaCellTowers;	// IMP=0x00100000006fa0db
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006fa0ad
- (unsigned long long)lteCellTowersCount;	// IMP=0x00100000006fa090
- (void)addLteCellTower:(id)arg1;	// IMP=0x00100000006fa043
- (void)clearLteCellTowers;	// IMP=0x00100000006fa026
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006f9ff8
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x00100000006f9fdb
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x00100000006f9f8e
- (void)clearCdmaCellTowers;	// IMP=0x00100000006f9f71
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006f9f43
- (unsigned long long)wirelessAPsCount;	// IMP=0x00100000006f9f26
- (void)addWirelessAP:(id)arg1;	// IMP=0x00100000006f9ed9
- (void)clearWirelessAPs;	// IMP=0x00100000006f9ebc
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000006f9e8e
- (unsigned long long)cellTowersCount;	// IMP=0x00100000006f9e71
- (void)addCellTower:(id)arg1;	// IMP=0x00100000006f9e24
- (void)clearCellTowers;	// IMP=0x00100000006f9e07
- (void)dealloc;	// IMP=0x00100000006f9d74

@end

