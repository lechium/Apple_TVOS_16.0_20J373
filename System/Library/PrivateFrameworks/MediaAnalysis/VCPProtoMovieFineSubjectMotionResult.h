//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFineSubjectMotionResult : PBCodable
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000b3c6a
- (void).cxx_destruct;	// IMP=0x000000000001424c
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000014194
- (unsigned long long)hash;	// IMP=0x000000000001407d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013fce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013f44
- (void)copyTo:(id)arg1;	// IMP=0x0000000000013ee6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000013e85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000013e78
- (id)dictionaryRepresentation;	// IMP=0x0000000000013b7b
- (id)description;	// IMP=0x0000000000013acc
- (id)exportToLegacyDictionary;	// IMP=0x00000000000b3de0

@end

