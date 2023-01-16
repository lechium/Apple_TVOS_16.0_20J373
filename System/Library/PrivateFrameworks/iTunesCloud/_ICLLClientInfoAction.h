//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _ICLLClientInfoAction : PBCodable
{
    long long _participantId;	// 8 = 0x8
    int _code;	// 16 = 0x10
    struct {
        unsigned int participantId:1;
        unsigned int code:1;
    } _has;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x00000000001c6653
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c65a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c6521
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c64af
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c64a2
- (id)dictionaryRepresentation;	// IMP=0x00000000001c63aa
- (id)description;	// IMP=0x00000000001c62fb

@end

