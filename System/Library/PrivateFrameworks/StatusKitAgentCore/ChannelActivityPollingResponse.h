//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityPollingResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSMutableArray *_participantPayloads;	// 24 = 0x18
    unsigned int _responseMessageIndex;	// 32 = 0x20
    int _status;	// 36 = 0x24
    unsigned int _totalResponseMessages;	// 40 = 0x28
    NSData *_uuid;	// 48 = 0x30
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int version:1;
        unsigned int responseMessageIndex:1;
        unsigned int status:1;
        unsigned int totalResponseMessages:1;
    } _has;	// 56 = 0x38
}

+ (Class)participantPayloadType;	// IMP=0x001000000000f9c1
- (void).cxx_destruct;	// IMP=0x0000000000010fdc
@property(nonatomic) unsigned int totalResponseMessages; // @synthesize totalResponseMessages=_totalResponseMessages;
@property(nonatomic) unsigned int responseMessageIndex; // @synthesize responseMessageIndex=_responseMessageIndex;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000010d19
- (unsigned long long)hash;	// IMP=0x0000000000010c0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010a5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000107dc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000010662
- (void)writeTo:(id)arg1;	// IMP=0x0000000000010459
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001044c
- (id)dictionaryRepresentation;	// IMP=0x000000000000fb17
- (id)description;	// IMP=0x000000000000fa68
@property(nonatomic) _Bool hasTotalResponseMessages;
@property(nonatomic) _Bool hasResponseMessageIndex;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000f9a4
- (unsigned long long)participantPayloadsCount;	// IMP=0x000000000000f987
- (void)addParticipantPayload:(id)arg1;	// IMP=0x000000000000f91d
- (void)clearParticipantPayloads;	// IMP=0x000000000000f900
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000000f723
- (id)statusAsString:(int)arg1;	// IMP=0x000000000000f6da
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

