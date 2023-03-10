//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoTimeRange : PBCodable
{
    VCPProtoTime *_duration;	// 8 = 0x8
    VCPProtoTime *_start;	// 16 = 0x10
}

+ (id)timeRangeWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x001000000001a537
- (void).cxx_destruct;	// IMP=0x00000000001ad76d
@property(retain, nonatomic) VCPProtoTime *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) VCPProtoTime *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ad68c
- (unsigned long long)hash;	// IMP=0x00000000001ad63f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ad577
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ad4d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ad468
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ad409
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ad3fc
- (id)dictionaryRepresentation;	// IMP=0x00000000001ad14f
- (id)description;	// IMP=0x00000000001ad0a0
- (CDStruct_e83c9415)timeRangeValue;	// IMP=0x000000000001a600

@end

