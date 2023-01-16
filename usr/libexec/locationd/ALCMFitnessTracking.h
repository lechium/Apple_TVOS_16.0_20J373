//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMFitnessTracking : PBCodable
{
    int _powerSource;	// 8 = 0x8
    _Bool _fitnessTrackingEnabled;	// 12 = 0xc
    struct {
        unsigned int powerSource:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool fitnessTrackingEnabled; // @synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000a3d594
- (unsigned long long)hash;	// IMP=0x0010000000a3d557
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000a3d4de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000a3d46f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000a3d43e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000a3d3ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000a3d3df
- (id)dictionaryRepresentation;	// IMP=0x0010000000a3d09b
- (id)description;	// IMP=0x0010000000a3d024
- (int)StringAsPowerSource:(id)arg1;	// IMP=0x0010000000a3cf9e
- (id)powerSourceAsString:(int)arg1;	// IMP=0x0010000000a3cf65
@property(nonatomic) _Bool hasPowerSource;
@property(nonatomic) int powerSource; // @synthesize powerSource=_powerSource;

@end
