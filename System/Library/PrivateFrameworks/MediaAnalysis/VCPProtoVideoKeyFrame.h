//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoVideoKeyFrame : PBCodable
{
    float _curationScore;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000075b33
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000075a7b
- (unsigned long long)hash;	// IMP=0x0000000000075964
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000758b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007582b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000757cd
- (void)writeTo:(id)arg1;	// IMP=0x000000000007576c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007575f
- (id)dictionaryRepresentation;	// IMP=0x0000000000075462
- (id)description;	// IMP=0x00000000000753b3

@end
