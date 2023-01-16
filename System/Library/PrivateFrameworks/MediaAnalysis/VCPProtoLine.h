//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoLine : PBCodable
{
    VCPProtoPoint *_end;	// 8 = 0x8
    VCPProtoPoint *_start;	// 16 = 0x10
}

+ (id)lineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000000b8f98
- (void).cxx_destruct;	// IMP=0x0000000000269a01
@property(retain, nonatomic) VCPProtoPoint *end; // @synthesize end=_end;
@property(retain, nonatomic) VCPProtoPoint *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000269920
- (unsigned long long)hash;	// IMP=0x00000000002698d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026980b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026976d
- (void)copyTo:(id)arg1;	// IMP=0x00000000002696fc
- (void)writeTo:(id)arg1;	// IMP=0x000000000026969d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000269690
- (id)dictionaryRepresentation;	// IMP=0x00000000002693e3
- (id)description;	// IMP=0x0000000000269334
- (struct CGPoint)endPointValue;	// IMP=0x00000000000b90c1
- (struct CGPoint)startPointValue;	// IMP=0x00000000000b9067

@end
