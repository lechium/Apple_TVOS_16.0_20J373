//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPShareVettingInitiateResponse : PBCodable
{
    int _vettingError;	// 8 = 0x8
    struct {
        unsigned int vettingError:1;
    } _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000251d6c
- (unsigned long long)hash;	// IMP=0x0000000000251d41
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000251caf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000251c4d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000251c29
- (void)writeTo:(id)arg1;	// IMP=0x0000000000251bfe
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000251bf1
- (id)dictionaryRepresentation;	// IMP=0x0000000000251966
- (id)description;	// IMP=0x00000000002518b7
- (int)StringAsVettingError:(id)arg1;	// IMP=0x00000000002517e5
- (id)vettingErrorAsString:(int)arg1;	// IMP=0x000000000025179a
@property(nonatomic) _Bool hasVettingError;
@property(nonatomic) int vettingError; // @synthesize vettingError=_vettingError;

@end

