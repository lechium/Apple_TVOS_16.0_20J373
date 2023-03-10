//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieCheeringResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000009e698
- (void).cxx_destruct;	// IMP=0x00000000001945a4
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001944ec
- (unsigned long long)hash;	// IMP=0x00000000001943d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000194326
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019429c
- (void)copyTo:(id)arg1;	// IMP=0x000000000019423e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001941dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001941d0
- (id)dictionaryRepresentation;	// IMP=0x0000000000193ed3
- (id)description;	// IMP=0x0000000000193e24
- (id)exportToLegacyDictionary;	// IMP=0x000000000009e80e

@end

