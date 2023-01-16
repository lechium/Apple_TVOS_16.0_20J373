//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoRecommendationResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000019090b
- (void).cxx_destruct;	// IMP=0x00000000001ac2e0
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ac228
- (unsigned long long)hash;	// IMP=0x00000000001ac111
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ac062
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001abfd8
- (void)copyTo:(id)arg1;	// IMP=0x00000000001abf7a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001abf19
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001abf0c
- (id)dictionaryRepresentation;	// IMP=0x00000000001abc0f
- (id)description;	// IMP=0x00000000001abb60
- (id)exportToLegacyDictionary;	// IMP=0x0000000000190a81

@end

