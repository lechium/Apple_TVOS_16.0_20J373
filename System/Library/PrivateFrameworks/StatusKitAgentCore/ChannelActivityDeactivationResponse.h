//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityDeactivationResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;	// 8 = 0x8
    int _status;	// 16 = 0x10
    NSData *_uuid;	// 24 = 0x18
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int status:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000607fd
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006073f
- (unsigned long long)hash;	// IMP=0x00000000000606ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000605d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060524
- (void)copyTo:(id)arg1;	// IMP=0x000000000006049c
- (void)writeTo:(id)arg1;	// IMP=0x000000000006040f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000060402
- (id)dictionaryRepresentation;	// IMP=0x0000000000060013
- (id)description;	// IMP=0x000000000005ff64
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000005fdd1
- (id)statusAsString:(int)arg1;	// IMP=0x000000000005fd88
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end
