//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLRowingModel : PBCodable
{
    float _strokeAmp;	// 8 = 0x8
    float _strokeFrequency;	// 12 = 0xc
    float _strokePower;	// 16 = 0x10
    struct {
        unsigned int strokeAmp:1;
        unsigned int strokeFrequency:1;
    } _has;	// 20 = 0x14
}

// Error: Property attributes should begin with the type ('T') attribute, property name: strokeFrequency
// Property attributes: (null)

@property(nonatomic) float strokeAmp; // @synthesize strokeAmp=_strokeAmp;
@property(nonatomic) float strokePower; // @synthesize strokePower=_strokePower;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003deef0
- (unsigned long long)hash;	// IMP=0x00100000003dec00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003deb60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003deaca
- (void)copyTo:(id)arg1;	// IMP=0x00100000003dea72
- (void)writeTo:(id)arg1;	// IMP=0x00100000003de9eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003de9de
- (id)dictionaryRepresentation;	// IMP=0x00100000003de677
- (id)description;	// IMP=0x00100000003de600
@property(nonatomic) _Bool hasStrokeFrequency;
@property(nonatomic) _Bool hasStrokeAmp;

@end

