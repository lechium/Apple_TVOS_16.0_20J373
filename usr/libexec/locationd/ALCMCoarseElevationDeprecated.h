//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCoarseElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000007883fb
- (unsigned long long)hash;	// IMP=0x00100000007883e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000078839f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000078834e
- (void)copyTo:(id)arg1;	// IMP=0x001000000078833b
- (void)writeTo:(id)arg1;	// IMP=0x001000000078831f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000788312
- (id)dictionaryRepresentation;	// IMP=0x00100000007880e3
- (id)description;	// IMP=0x001000000078806c

@end

