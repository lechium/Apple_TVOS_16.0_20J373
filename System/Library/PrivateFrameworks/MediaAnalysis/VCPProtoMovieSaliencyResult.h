//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000a6ba7
- (void).cxx_destruct;	// IMP=0x00000000000710d0
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000070fb9
- (unsigned long long)hash;	// IMP=0x0000000000070e79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070d98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070ce8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000070c65
- (void)writeTo:(id)arg1;	// IMP=0x0000000000070bec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000070bdf
- (id)dictionaryRepresentation;	// IMP=0x0000000000070844
- (id)description;	// IMP=0x0000000000070795
- (id)exportToLegacyDictionary;	// IMP=0x00000000000a6e20

@end

