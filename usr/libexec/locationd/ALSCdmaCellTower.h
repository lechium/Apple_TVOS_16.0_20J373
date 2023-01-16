//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSCdmaCellTower : PBCodable
{
    int _bandclass;	// 8 = 0x8
    int _bsid;	// 12 = 0xc
    int _channel;	// 16 = 0x10
    ALSLocation *_location;	// 24 = 0x18
    int _mcc;	// 32 = 0x20
    int _nid;	// 36 = 0x24
    int _pnoffset;	// 40 = 0x28
    int _sid;	// 44 = 0x2c
    int _zoneid;	// 48 = 0x30
    struct {
        unsigned int bandclass:1;
        unsigned int bsid:1;
        unsigned int channel:1;
        unsigned int mcc:1;
        unsigned int nid:1;
        unsigned int pnoffset:1;
        unsigned int sid:1;
        unsigned int zoneid:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int bandclass; // @synthesize bandclass=_bandclass;
@property(nonatomic) int zoneid; // @synthesize zoneid=_zoneid;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int bsid; // @synthesize bsid=_bsid;
@property(nonatomic) int nid; // @synthesize nid=_nid;
@property(nonatomic) int sid; // @synthesize sid=_sid;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006d70c5
- (unsigned long long)hash;	// IMP=0x00100000006d6f8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006d6ddc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006d6c84
- (void)copyTo:(id)arg1;	// IMP=0x00100000006d6b6a
- (void)writeTo:(id)arg1;	// IMP=0x00100000006d6a29
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006d6a1c
- (id)dictionaryRepresentation;	// IMP=0x00100000006d616e
- (id)description;	// IMP=0x00100000006d60f7
@property(nonatomic) _Bool hasPnoffset;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasBandclass;
@property(nonatomic) _Bool hasZoneid;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasBsid;
@property(nonatomic) _Bool hasNid;
@property(nonatomic) _Bool hasSid;
@property(nonatomic) _Bool hasMcc;
- (void)dealloc;	// IMP=0x00100000006d5e54

@end

