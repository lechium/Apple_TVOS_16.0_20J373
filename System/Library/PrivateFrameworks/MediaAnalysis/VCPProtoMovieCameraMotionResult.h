//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieCameraMotionResult : PBCodable
{
    int _motionType;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
    _Bool _isFast;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000195d6b
- (void).cxx_destruct;	// IMP=0x0000000000221f96
@property(nonatomic) _Bool isFast; // @synthesize isFast=_isFast;
@property(nonatomic) int motionType; // @synthesize motionType=_motionType;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000221eb8
- (unsigned long long)hash;	// IMP=0x0000000000221e67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000221da2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000221d0e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000221ca6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000221c2e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000221c21
- (id)dictionaryRepresentation;	// IMP=0x000000000022180f
- (id)description;	// IMP=0x0000000000221760
- (id)exportToLegacyDictionary;	// IMP=0x0000000000196064

@end
