//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityActivationResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    unsigned int _activationExpirySeconds;	// 24 = 0x18
    NSMutableArray *_participantPayloads;	// 32 = 0x20
    unsigned int _responseMessageIndex;	// 40 = 0x28
    int _status;	// 44 = 0x2c
    unsigned int _totalResponseMessages;	// 48 = 0x30
    NSData *_uuid;	// 56 = 0x38
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int version:1;
        unsigned int activationExpirySeconds:1;
        unsigned int responseMessageIndex:1;
        unsigned int status:1;
        unsigned int totalResponseMessages:1;
    } _has;	// 64 = 0x40
}

+ (Class)participantPayloadType;	// IMP=0x0010000000062fc1
- (void).cxx_destruct;	// IMP=0x00000000000647ca
@property(nonatomic) unsigned int activationExpirySeconds; // @synthesize activationExpirySeconds=_activationExpirySeconds;
@property(nonatomic) unsigned int totalResponseMessages; // @synthesize totalResponseMessages=_totalResponseMessages;
@property(nonatomic) unsigned int responseMessageIndex; // @synthesize responseMessageIndex=_responseMessageIndex;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000644d8
- (unsigned long long)hash;	// IMP=0x00000000000643a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000641d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063f3b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000063da9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000063b81
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063b74
- (id)dictionaryRepresentation;	// IMP=0x0000000000063162
- (id)description;	// IMP=0x00000000000630b3
@property(nonatomic) _Bool hasActivationExpirySeconds;
@property(nonatomic) _Bool hasTotalResponseMessages;
@property(nonatomic) _Bool hasResponseMessageIndex;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000062fa4
- (unsigned long long)participantPayloadsCount;	// IMP=0x0000000000062f87
- (void)addParticipantPayload:(id)arg1;	// IMP=0x0000000000062f1d
- (void)clearParticipantPayloads;	// IMP=0x0000000000062f00
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000062d23
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000062cda
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

