//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    int _eyeExpression;	// 16 = 0x10
    float _faceQuality;	// 20 = 0x14
    int _mouthExpression;	// 24 = 0x18
    int _position;	// 28 = 0x1c
    int _yaw;	// 32 = 0x20
    _Bool _isCloseup;	// 36 = 0x24
    struct {
        unsigned int faceQuality:1;
    } _has;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000228e2
- (void).cxx_destruct;	// IMP=0x0000000000073fd4
@property(nonatomic) float faceQuality; // @synthesize faceQuality=_faceQuality;
@property(nonatomic) _Bool isCloseup; // @synthesize isCloseup=_isCloseup;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) int yaw; // @synthesize yaw=_yaw;
@property(nonatomic) int mouthExpression; // @synthesize mouthExpression=_mouthExpression;
@property(nonatomic) int eyeExpression; // @synthesize eyeExpression=_eyeExpression;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000073e36
- (unsigned long long)hash;	// IMP=0x0000000000073c8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000073b50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073a6e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000739c6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000738f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000738e4
- (id)dictionaryRepresentation;	// IMP=0x00000000000731d2
- (id)description;	// IMP=0x0000000000073123
@property(nonatomic) _Bool hasFaceQuality;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000022c75

@end

