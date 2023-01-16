//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol VCSessionDownlinkBandwidthAllocatorClient;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableEntry : NSObject
{
    id <VCSessionDownlinkBandwidthAllocatorClient> _client;	// 8 = 0x8
    NSNumber *_streamToken;	// 16 = 0x10
    unsigned int _minNetworkBitrate;	// 24 = 0x18
    unsigned int _maxNetworkBitrate;	// 28 = 0x1c
    unsigned int _maxMediaBitrate;	// 32 = 0x20
    unsigned int _qualityIndex;	// 36 = 0x24
    _Bool _isLowestQuality;	// 40 = 0x28
    unsigned char _type;	// 41 = 0x29
    unsigned int _streamID;	// 44 = 0x2c
    unsigned int _actualNetworkBitrate;	// 48 = 0x30
    _Bool _hasRepairStreamID;	// 52 = 0x34
    unsigned int _repairStreamID;	// 56 = 0x38
    unsigned int _repairMaxNetworkBitrate;	// 60 = 0x3c
    _Bool _onDemand;	// 64 = 0x40
    unsigned int _streamGroupID;	// 68 = 0x44
    unsigned int _encoderGroupID;	// 72 = 0x48
    _Bool _subscribedTo;	// 76 = 0x4c
    _Bool _startOnDemand;	// 77 = 0x4d
}

+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;	// IMP=0x006000000018bc11
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;	// IMP=0x006000000018b80c
+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;	// IMP=0x006000000018b66b
+ (unsigned char)entryTypeForMediaType:(unsigned int)arg1;	// IMP=0x006000000018b429
@property(readonly) NSNumber *streamToken; // @synthesize streamToken=_streamToken;
@property(readonly) unsigned int encoderGroupID; // @synthesize encoderGroupID=_encoderGroupID;
@property(readonly) unsigned int streamGroupID; // @synthesize streamGroupID=_streamGroupID;
@property(readonly, getter=isStartOnDemand) _Bool startOnDemand; // @synthesize startOnDemand=_startOnDemand;
@property(getter=isSubscribedTo) _Bool subscribedTo; // @synthesize subscribedTo=_subscribedTo;
@property(readonly) _Bool hasRepairStreamID; // @synthesize hasRepairStreamID=_hasRepairStreamID;
@property(readonly) unsigned int repairMaxNetworkBitrate; // @synthesize repairMaxNetworkBitrate=_repairMaxNetworkBitrate;
@property(readonly) unsigned int repairStreamID; // @synthesize repairStreamID=_repairStreamID;
@property unsigned int actualNetworkBitrate; // @synthesize actualNetworkBitrate=_actualNetworkBitrate;
@property(readonly) unsigned int streamID; // @synthesize streamID=_streamID;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property _Bool isLowestQuality; // @synthesize isLowestQuality=_isLowestQuality;
@property(readonly) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(readonly) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(readonly) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(readonly) unsigned int minNetworkBitrate; // @synthesize minNetworkBitrate=_minNetworkBitrate;
@property(readonly) id <VCSessionDownlinkBandwidthAllocatorClient> client; // @synthesize client=_client;
- (long long)compare:(id)arg1;	// IMP=0x000000000018b4b5
- (id)description;	// IMP=0x000000000018b315
- (void)dealloc;	// IMP=0x000000000018b2b7
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 minNetworkBitrate:(unsigned int)arg4 maxNetworkBitrate:(unsigned int)arg5 mediaBitrate:(unsigned int)arg6 qualityIndex:(unsigned int)arg7 streamID:(unsigned int)arg8 hasRepairStreamID:(_Bool)arg9 repairStreamID:(unsigned int)arg10 repairMaxNetworkBitrate:(unsigned int)arg11 subscribedTo:(_Bool)arg12 startOnDemand:(_Bool)arg13 streamGroupID:(unsigned int)arg14 encoderGroupID:(unsigned int)arg15;	// IMP=0x000000000018b1c4
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 networkBitrate:(unsigned int)arg4 mediaBitrate:(unsigned int)arg5 qualityIndex:(unsigned int)arg6 streamID:(unsigned int)arg7 streamGroupID:(unsigned int)arg8;	// IMP=0x000000000018b182

@end
