//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CPLCKAvailabilityResponse : PBCodable
{
    int _feature;	// 8 = 0x8
    _Bool _allowed;	// 12 = 0xc
    struct {
        unsigned int feature:1;
        unsigned int allowed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000134b64
- (unsigned long long)hash;	// IMP=0x0010000000134b1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000134a5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001349de
- (void)copyTo:(id)arg1;	// IMP=0x0010000000134984
- (void)writeTo:(id)arg1;	// IMP=0x0010000000134912
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000134905
- (id)dictionaryRepresentation;	// IMP=0x001000000013459f
- (id)description;	// IMP=0x00100000001344f0
@property(nonatomic) _Bool hasAllowed;
- (int)StringAsFeature:(id)arg1;	// IMP=0x001000000013449a
- (id)featureAsString:(int)arg1;	// IMP=0x001000000013448e
@property(nonatomic) _Bool hasFeature;

@end
