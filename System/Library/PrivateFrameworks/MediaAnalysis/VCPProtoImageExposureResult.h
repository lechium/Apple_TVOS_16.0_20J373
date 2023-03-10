//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageExposureResult : PBCodable
{
    float _exposure;	// 8 = 0x8
    float _underExpose;	// 12 = 0xc
    struct {
        unsigned int underExpose:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000793b3
@property(nonatomic) float underExpose; // @synthesize underExpose=_underExpose;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000128ca8
- (unsigned long long)hash;	// IMP=0x0000000000128ab4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000128a08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000128991
- (void)copyTo:(id)arg1;	// IMP=0x0000000000128958
- (void)writeTo:(id)arg1;	// IMP=0x00000000001288f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001288e9
- (id)dictionaryRepresentation;	// IMP=0x00000000001285eb
- (id)description;	// IMP=0x000000000012853c
@property(nonatomic) _Bool hasUnderExpose;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000079552

@end

