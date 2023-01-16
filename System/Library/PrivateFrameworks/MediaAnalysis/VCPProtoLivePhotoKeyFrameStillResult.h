//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable
{
    float _sharpness;	// 8 = 0x8
    float _stillTime;	// 12 = 0xc
    float _textureness;	// 16 = 0x10
    _Bool _hasFlash;	// 20 = 0x14
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000026cbaa
@property(nonatomic) float stillTime; // @synthesize stillTime=_stillTime;
@property(nonatomic) _Bool hasFlash; // @synthesize hasFlash=_hasFlash;
@property(nonatomic) float textureness; // @synthesize textureness=_textureness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001efc8b
- (unsigned long long)hash;	// IMP=0x00000000001ef9ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ef8e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ef862
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ef81c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ef781
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ef774
- (id)dictionaryRepresentation;	// IMP=0x00000000001ef31b
- (id)description;	// IMP=0x00000000001ef26c
- (id)exportToLegacyDictionary;	// IMP=0x000000000026ce0b

@end

