//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ChannelActivityParticipantPayload, NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdatePayload : PBCodable
{
    NSData *_padding;	// 8 = 0x8
    ChannelActivityParticipantPayload *_participantPayload;	// 16 = 0x10
    int _updateType;	// 24 = 0x18
    struct {
        unsigned int updateType:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000004981f
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) ChannelActivityParticipantPayload *participantPayload; // @synthesize participantPayload=_participantPayload;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000049738
- (unsigned long long)hash;	// IMP=0x00000000000496b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000495c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049502
- (void)copyTo:(id)arg1;	// IMP=0x000000000004947f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000493fe
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000493f1
- (id)dictionaryRepresentation;	// IMP=0x0000000000049021
- (id)description;	// IMP=0x0000000000048f72
@property(readonly, nonatomic) _Bool hasPadding;
@property(readonly, nonatomic) _Bool hasParticipantPayload;
- (int)StringAsUpdateType:(id)arg1;	// IMP=0x0000000000048ee6
- (id)updateTypeAsString:(int)arg1;	// IMP=0x0000000000048e91
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;

@end

