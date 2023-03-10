//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface ALCLElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    unsigned int _elevationDescended;	// 12 = 0xc
    int _gradeType;	// 16 = 0x10
    float _verticalSpeed;	// 20 = 0x14
    MISSING_TYPE *_has;	// 24 = 0x18
}

@property(nonatomic) float verticalSpeed; // @synthesize verticalSpeed=_verticalSpeed;
@property(nonatomic) unsigned int elevationDescended; // @synthesize elevationDescended=_elevationDescended;
@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000059ac87
- (unsigned long long)hash;	// IMP=0x001000000059ab2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000059aa6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000059a9c8
- (void)copyTo:(id)arg1;	// IMP=0x001000000059a95f
- (void)writeTo:(id)arg1;	// IMP=0x001000000059a8bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000059a8b0
- (id)dictionaryRepresentation;	// IMP=0x001000000059a3e0
- (id)description;	// IMP=0x001000000059a369
@property(nonatomic) _Bool hasVerticalSpeed;
- (int)StringAsGradeType:(id)arg1;	// IMP=0x001000000059a296
- (id)gradeTypeAsString:(int)arg1;	// IMP=0x001000000059a25d
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) _Bool hasElevationDescended;

@end

