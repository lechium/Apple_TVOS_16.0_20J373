//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable
{
    unsigned int _audioUnitModel;	// 8 = 0x8
    unsigned int _payloadFlags;	// 12 = 0xc
    unsigned int _rtpSSRC;	// 16 = 0x10
    unsigned int _secondaryFlags;	// 20 = 0x14
    unsigned int _supportFlags;	// 24 = 0x18
    _Bool _useSBR;	// 28 = 0x1c
    struct {
        unsigned int audioUnitModel:1;
    } _has;	// 32 = 0x20
}

+ (_Bool)isAudioPayloadSupported:(int)arg1;	// IMP=0x0010000000334346
+ (int)payloadFromNegotiationPayload:(int)arg1;	// IMP=0x00100000003341d7
+ (int)negotiationPayloadFromPayload:(int)arg1;	// IMP=0x0010000000334068
@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int secondaryFlags; // @synthesize secondaryFlags=_secondaryFlags;
@property(nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property(nonatomic) unsigned int supportFlags; // @synthesize supportFlags=_supportFlags;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000629a4
- (unsigned long long)hash;	// IMP=0x0000000000062924
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062866
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000627c3
- (void)copyTo:(id)arg1;	// IMP=0x000000000006275e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000626b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000626a8
- (id)dictionaryRepresentation;	// IMP=0x00000000000620b3
- (id)description;	// IMP=0x0000000000062019
@property(nonatomic) _Bool hasAudioUnitModel;
- (void)printWithLogFile:(void *)arg1;	// IMP=0x0000000000334482
- (id)newMediaNegotiatorAudioConfiguration;	// IMP=0x0000000000334366
@property(readonly, nonatomic) _Bool allowAudioSwitching;
@property(readonly, nonatomic) _Bool allowAudioRecording;
- (id)initWithAudioConfiguration:(id)arg1;	// IMP=0x0000000000333da8

@end
