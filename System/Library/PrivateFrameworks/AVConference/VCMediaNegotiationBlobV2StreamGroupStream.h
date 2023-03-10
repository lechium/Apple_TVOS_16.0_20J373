//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2StreamGroupStream : PBCodable
{
    unsigned int _audioChannelCount;	// 8 = 0x8
    unsigned int _coordinateSystem;	// 12 = 0xc
    unsigned int _maxNetworkBitrate;	// 16 = 0x10
    unsigned int _metadata;	// 20 = 0x14
    NSData *_optionalPackedPayload;	// 24 = 0x18
    unsigned int _payloadSpecOrPayloads;	// 32 = 0x20
    unsigned int _qualityIndex;	// 36 = 0x24
    unsigned int _repairedMaxNetworkBitrate;	// 40 = 0x28
    NSData *_requiredPackedPayload;	// 48 = 0x30
    unsigned int _rtpSSRC;	// 56 = 0x38
    unsigned int _streamID;	// 60 = 0x3c
    unsigned int _streamIndex;	// 64 = 0x40
    struct {
        unsigned int audioChannelCount:1;
        unsigned int coordinateSystem:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int metadata:1;
        unsigned int payloadSpecOrPayloads:1;
        unsigned int qualityIndex:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int rtpSSRC:1;
        unsigned int streamID:1;
        unsigned int streamIndex:1;
    } _has;	// 68 = 0x44
}

+ (void)appendPayloadsSpecsToString:(id)arg1 streamConfig:(id)arg2;	// IMP=0x00100000000f0380
+ (void)appendPayloadsToString:(id)arg1 streamConfig:(id)arg2;	// IMP=0x00100000000f00ac
+ (void)appendMetadata:(unsigned int)arg1 toString:(id)arg2;	// IMP=0x00100000000eff7b
+ (int)payloadsWithPayloadBit:(int)arg1;	// IMP=0x00100000000ef360
+ (_Bool)payloadSpecWithStreamConfig:(id)arg1 payloadConfigs:(id)arg2 payloadSpecs:(unsigned int *)arg3;	// IMP=0x00100000000ef115
+ (_Bool)payloadsWithStreamConfig:(id)arg1 payloadBitmap:(unsigned int *)arg2;	// IMP=0x00100000000eeef4
+ (unsigned int)payloadFlagWithPayload:(int)arg1;	// IMP=0x00100000000eee4d
+ (void)updateStreamConfig:(id)arg1 withMetadata:(unsigned int)arg2;	// IMP=0x00100000000eedf0
+ (unsigned int)metadataWithStreamConfig:(id)arg1;	// IMP=0x00100000000eed6e
+ (_Bool)isFallbackStreamWithStreamGroupID:(unsigned int)arg1 streamConfig:(id)arg2;	// IMP=0x00100000000eed28
+ (id)defaultsForStreamGroupID:(unsigned int)arg1 streamIndex:(unsigned char)arg2;	// IMP=0x00100000000ee042
+ (_Bool)qualityIndex:(unsigned int *)arg1 isFallbackStream:(_Bool *)arg2 forStreamGroupID:(unsigned int)arg3 streamIndex:(unsigned char)arg4;	// IMP=0x00100000000edc66
+ (_Bool)streamIndex:(char *)arg1 forStreamGroupID:(unsigned int)arg2 qualityIndex:(unsigned int)arg3 isFallbackStream:(_Bool)arg4;	// IMP=0x00100000000ed887
+ (_Bool)isDefaultPayloadConfigsWithStreamConfig:(id)arg1 payloadConfigs:(id)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x00100000000ed583
+ (void)printWithLogFile:(void *)arg1 prefix:(id)arg2 streamConfig:(id)arg3;	// IMP=0x00100000000ed2c5
@property(nonatomic) unsigned int coordinateSystem; // @synthesize coordinateSystem=_coordinateSystem;
@property(retain, nonatomic) NSData *optionalPackedPayload; // @synthesize optionalPackedPayload=_optionalPackedPayload;
@property(retain, nonatomic) NSData *requiredPackedPayload; // @synthesize requiredPackedPayload=_requiredPackedPayload;
@property(nonatomic) unsigned int streamIndex; // @synthesize streamIndex=_streamIndex;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int payloadSpecOrPayloads; // @synthesize payloadSpecOrPayloads=_payloadSpecOrPayloads;
@property(nonatomic) unsigned int metadata; // @synthesize metadata=_metadata;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003ac940
- (unsigned long long)hash;	// IMP=0x00000000003ac779
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ac51f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ac357
- (void)copyTo:(id)arg1;	// IMP=0x00000000003ac1d9
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ac031
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ac024
- (id)dictionaryRepresentation;	// IMP=0x00000000003ab59b
- (id)description;	// IMP=0x00000000003ab501
@property(nonatomic) _Bool hasCoordinateSystem;
@property(readonly, nonatomic) _Bool hasOptionalPackedPayload;
@property(readonly, nonatomic) _Bool hasRequiredPackedPayload;
@property(nonatomic) _Bool hasStreamIndex;
@property(nonatomic) _Bool hasAudioChannelCount;
@property(nonatomic) unsigned int audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) _Bool hasRepairedMaxNetworkBitrate;
@property(nonatomic) _Bool hasMaxNetworkBitrate;
@property(nonatomic) _Bool hasStreamID;
@property(nonatomic) _Bool hasRtpSSRC;
@property(nonatomic) _Bool hasQualityIndex;
@property(nonatomic) _Bool hasPayloadSpecOrPayloads;
@property(nonatomic) _Bool hasMetadata;
- (void)dealloc;	// IMP=0x00000000003ab14c
- (_Bool)setNegotiatedCoordinateSystemFromCoordinateSystem:(unsigned int)arg1;	// IMP=0x00000000000f0db0
- (unsigned int)mediaStreamGroupCoordinateSystem;	// IMP=0x00000000000f0d6a
- (id)compressWithConfig:(id)arg1;	// IMP=0x00000000000f0d18
- (id)optionalPayloadCompressWithConfig:(id)arg1;	// IMP=0x00000000000f0b80
- (id)requiredPayloadCompressWithConfig:(id)arg1;	// IMP=0x00000000000f09e8
- (_Bool)readOptionalPacketPayload:(struct tagStreamGroupStreamOptionalPackedPayload *)arg1;	// IMP=0x00000000000f0972
- (id)optionalPackedPayloaWithDefaultConfig:(id)arg1;	// IMP=0x00000000000f0668
- (_Bool)readRequiredPacketPayloadWithStreamConfig:(id)arg1;	// IMP=0x00000000000f0596
- (id)dataRequiredPacketPayload;	// IMP=0x00000000000f04ef
- (_Bool)updatePayloadSpecsForConfig:(id)arg1 defaultConfig:(id)arg2 payloadConfigs:(id)arg3;	// IMP=0x00000000000efa82
- (_Bool)updatePayloadSpecsForConfig:(id)arg1 defaultConfig:(id)arg2;	// IMP=0x00000000000ef795
- (unsigned int)actualQualityIndexWithDefaultConfig:(id)arg1;	// IMP=0x00000000000ef75c
- (unsigned int)actualMetadataWithDefaultConfig:(id)arg1;	// IMP=0x00000000000ef6ad
- (unsigned int)actualAudioChannelCountWithDefaultConfig:(id)arg1;	// IMP=0x00000000000ef612
- (unsigned int)actualMaxRepairedNetworkBitrateWithDefaultConfig:(id)arg1;	// IMP=0x00000000000ef5d9
- (unsigned int)actualMaxNetworkBitrateWithDefaultConfig:(id)arg1;	// IMP=0x00000000000ef53e
- (unsigned int)actualStreamIndex;	// IMP=0x00000000000ef494
- (_Bool)usesPayloadConfigsWithGroupID:(unsigned int)arg1;	// IMP=0x00000000000ed811
- (void)usePayloadSpecWithGroupID:(unsigned int)arg1 qualityIndexForPayloadSpecIndex:(id)arg2 defaultPayloadSpecsForQualityIndex:(id)arg3;	// IMP=0x00000000000ed01a
- (id)streamConfigWithPayloadConfigs:(id)arg1 payloadConfigSampleRates:(id)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x00000000000ec991
- (_Bool)initSSRC:(id)arg1;	// IMP=0x00000000000ec7cc
- (id)initWithStreamConfig:(id)arg1 payloadConfigs:(id)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x00000000000ec18a
- (id)initWithStreamConfig:(id)arg1 payloadConfigs:(id)arg2 streamGroupID:(unsigned int)arg3 defaultConfig:(id)arg4;	// IMP=0x00000000000ebcf8

@end

