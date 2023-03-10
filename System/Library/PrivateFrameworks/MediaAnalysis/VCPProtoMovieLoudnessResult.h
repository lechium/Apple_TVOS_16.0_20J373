//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieLoudnessResult : PBCodable
{
    double _energy;	// 8 = 0x8
    double _peak;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000018343f
- (void).cxx_destruct;	// IMP=0x0000000000226ec4
@property(nonatomic) double peak; // @synthesize peak=_peak;
@property(nonatomic) double energy; // @synthesize energy=_energy;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000226dd6
- (unsigned long long)hash;	// IMP=0x0000000000226bb3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000226aeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226a4f
- (void)copyTo:(id)arg1;	// IMP=0x00000000002269df
- (void)writeTo:(id)arg1;	// IMP=0x0000000000226964
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000226957
- (id)dictionaryRepresentation;	// IMP=0x00000000002265aa
- (id)description;	// IMP=0x00000000002264fb
- (id)exportToLegacyDictionary;	// IMP=0x0000000000183655

@end

