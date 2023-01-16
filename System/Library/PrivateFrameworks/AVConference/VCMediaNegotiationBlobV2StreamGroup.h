//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
    unsigned int _streamGroup;	// 16 = 0x10
    NSMutableArray *_streams;	// 24 = 0x18
    struct {
        unsigned int streamGroup:1;
    } _has;	// 32 = 0x20
}

+ (Class)streamsType;	// IMP=0x00100000000dc19b
+ (Class)payloadsType;	// IMP=0x00100000000dc0e6
+ (unsigned int)streamGroupIDFromStreamGroup:(unsigned int)arg1;	// IMP=0x0010000000291bd9
+ (unsigned int)streamGroupFromStreamGroupID:(unsigned int)arg1;	// IMP=0x0010000000291b03
+ (_Bool)isValidStreamGroupIDFromConfig:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x0010000000291a6c
+ (id)negotiationCipherSuiteAsString:(unsigned int)arg1;	// IMP=0x0010000000291a33
+ (void)updateParentStreamIDForGroupConfig:(id)arg1;	// IMP=0x00100000002918a6
+ (id)defaultsForStreamGroupCustom:(unsigned int)arg1;	// IMP=0x001000000029079c
+ (id)defaultsForStreamGroup:(unsigned int)arg1;	// IMP=0x001000000029054b
@property(retain, nonatomic) NSMutableArray *streams; // @synthesize streams=_streams;
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int streamGroup; // @synthesize streamGroup=_streamGroup;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000dd031
- (unsigned long long)hash;	// IMP=0x00000000000dcfb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dcef2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dcc0f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000dcad6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dc8f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dc8e4
- (id)dictionaryRepresentation;	// IMP=0x00000000000dc246
- (id)description;	// IMP=0x00000000000dc1ac
- (id)streamsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dc17e
- (unsigned long long)streamsCount;	// IMP=0x00000000000dc161
- (void)addStreams:(id)arg1;	// IMP=0x00000000000dc114
- (void)clearStreams;	// IMP=0x00000000000dc0f7
- (id)payloadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dc0c9
- (unsigned long long)payloadsCount;	// IMP=0x00000000000dc0ac
- (void)addPayloads:(id)arg1;	// IMP=0x00000000000dc05f
- (void)clearPayloads;	// IMP=0x00000000000dc042
@property(nonatomic) _Bool hasStreamGroup;
- (void)dealloc;	// IMP=0x00000000000dbf83
- (void)updateDefaultPayloadConfigsWithConfig:(id)arg1 rtpSampleRates:(id)arg2;	// IMP=0x00000000002916d0
- (_Bool)updatePayloadConfigsWithStreamGroupConfig:(id)arg1 rtpSampleRates:(id)arg2;	// IMP=0x00000000002912e0
- (_Bool)setupPayloadsWithGroupConfig:(id)arg1;	// IMP=0x0000000000290fea
- (_Bool)isUsedPayloadConfigAtIndex:(id)arg1 streamGroupConfig:(id)arg2 rtpTimestampRate:(unsigned int *)arg3;	// IMP=0x0000000000290e66
- (_Bool)setupStreamsWithGroupConfig:(id)arg1;	// IMP=0x0000000000290c37
- (id)customPayloadConfigStateWithStreamGroupConfig:(id)arg1;	// IMP=0x0000000000290b71
- (_Bool)isDefaultPayloadConfigsWithStreamGroupConfig:(id)arg1;	// IMP=0x00000000002909bc
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x0000000000290080
- (_Bool)appendStreamsToStreamGroupConfig:(id)arg1 streamGroupID:(unsigned int)arg2 rtpSampleRates:(id)arg3;	// IMP=0x000000000028f8d0
- (int)getStreamGroupConfig:(id *)arg1;	// IMP=0x000000000028f3f4
- (id)initWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000028f203
- (id)initWithStreamGroupConfig:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x000000000028ee08

@end

