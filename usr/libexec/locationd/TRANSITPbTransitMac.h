//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006324c1
- (unsigned long long)hash;	// IMP=0x0010000000632499
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000063243a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006323d6
- (void)copyTo:(id)arg1;	// IMP=0x00100000006323b0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000632384
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000632377
- (id)dictionaryRepresentation;	// IMP=0x0010000000632128
- (id)description;	// IMP=0x00100000006320b1
@property(nonatomic) _Bool hasMac;

@end

