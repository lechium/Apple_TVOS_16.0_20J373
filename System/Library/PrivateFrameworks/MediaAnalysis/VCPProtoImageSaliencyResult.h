//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000005eed2
- (void).cxx_destruct;	// IMP=0x00000000000a6b94
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a6adc
- (unsigned long long)hash;	// IMP=0x00000000000a69c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6919
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a688f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a685b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a67f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a67e8
- (id)dictionaryRepresentation;	// IMP=0x00000000000a64f5
- (id)description;	// IMP=0x00000000000a6446
- (id)exportToLegacyDictionary;	// IMP=0x000000000005f07e

@end

