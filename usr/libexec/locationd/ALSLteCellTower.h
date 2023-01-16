//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSLteCellTower : PBCodable
{
    int _cellID;	// 8 = 0x8
    ALSLocation *_location;	// 16 = 0x10
    int _mcc;	// 24 = 0x18
    int _mnc;	// 28 = 0x1c
    int _pid;	// 32 = 0x20
    int _tacID;	// 36 = 0x24
    int _uarfcn;	// 40 = 0x28
    struct {
        unsigned int cellID:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int pid:1;
        unsigned int tacID:1;
        unsigned int uarfcn:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int tacID; // @synthesize tacID=_tacID;
@property(nonatomic) int cellID; // @synthesize cellID=_cellID;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006feaa1
- (unsigned long long)hash;	// IMP=0x00100000006fe9a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006fe836
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006fe714
- (void)copyTo:(id)arg1;	// IMP=0x00100000006fe630
- (void)writeTo:(id)arg1;	// IMP=0x00100000006fe52d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006fe520
- (id)dictionaryRepresentation;	// IMP=0x00100000006fde0a
- (id)description;	// IMP=0x00100000006fdd93
@property(nonatomic) _Bool hasPid;
@property(nonatomic) _Bool hasUarfcn;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasTacID;
@property(nonatomic) _Bool hasCellID;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
- (void)dealloc;	// IMP=0x00100000006fdb84

@end

