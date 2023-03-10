//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSObject, VCMediaStreamStats;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStreamTransmitter
{
    struct tagHANDLE *_videoRTP;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_transmitterQueue;	// 136 = 0x88
    struct tagVCRealTimeThread *_encoderThread;	// 144 = 0x90
    _Bool _terminateEncoderThread;	// 152 = 0x98
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 160 = 0xa0
    struct opaqueCMBufferQueue *_bufferQueue;	// 168 = 0xa8
    char *_buffer;	// 176 = 0xb0
    unsigned long long _bufferSize;	// 184 = 0xb8
    int _maxPacketCount;	// 192 = 0xc0
    int *_packetSizes;	// 200 = 0xc8
    int *_packetFlags;	// 208 = 0xd0
    unsigned long long _lastKeyFrameSampleBufferSize;	// 216 = 0xd8
    int _iSMBCount;	// 224 = 0xe0
    unsigned int _keyFrameIntervalDuration;	// 228 = 0xe4
    unsigned short _recommendedMTU;	// 232 = 0xe8
    long long _videoCodecType;	// 240 = 0xf0
    int _videoSource;	// 248 = 0xf8
    unsigned int _dwRefreshFrameCounter;	// 252 = 0xfc
    struct _opaque_pthread_mutex_t _xMBs;	// 256 = 0x100
    int _shouldGenerateKeyFrame;	// 320 = 0x140
    VCMediaStreamStats *_stats;	// 328 = 0x148
    double _reportingIntervalStartTime;	// 336 = 0x150
    double _reportingLastUpdateTime;	// 344 = 0x158
    unsigned char _lastCameraStatusBits;	// 352 = 0x160
    _Bool _enableCVO;	// 353 = 0x161
    unsigned long long _cvoExtensionID;	// 360 = 0x168
    struct opaqueRTCReporting *_reportingAgent;	// 368 = 0x170
    int _reportingModuleID;	// 376 = 0x178
    struct {
        struct *encoderVTable;
        int type;
        struct tagHANDLE *encoderHandle;
    } _encoder;	// 384 = 0x180
    struct tagVCMemoryPool *_encodingArgPool;	// 408 = 0x198
    _Bool _forceDisableBitrateCap;	// 416 = 0x1a0
    AVCStatisticsCollector *_statisticsCollector;	// 424 = 0x1a8
    unsigned int _totalPacketsSent;	// 432 = 0x1b0
    unsigned long long _totalBytesSent;	// 440 = 0x1b8
    unsigned int _tilesPerFrame;	// 448 = 0x1c0
    unsigned int _totalKeyFramesSent;	// 452 = 0x1c4
    struct __CFAllocator *_videoPacketAllocator;	// 456 = 0x1c8
}

- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000007cbe5
- (void)reportingVideoStreamEvent:(unsigned short)arg1;	// IMP=0x000000000007cb39
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x000000000007c650
- (void)updateSendStatisticsWithTimestamp:(unsigned int)arg1 frameSize:(unsigned int)arg2 packetsInFrame:(unsigned int)arg3;	// IMP=0x000000000007c560
- (int)transmitVideoPackets:(const char *)arg1 packetSizes:(int *)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned int)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int *)arg9;	// IMP=0x000000000007c322
- (int)transmitFrameInGroups:(char *)arg1 numOfPackets:(int)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;	// IMP=0x000000000007c0af
- (int)transmitEncodedVideoFrame:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;	// IMP=0x000000000007be02
- (void)transmitEncodedVideoFrame:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2;	// IMP=0x000000000007b8fc
- (_Bool)isKeyFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000007b863
- (_Bool)prependSPSPPS:(unsigned long long *)arg1 dataPointer:(char *)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3;	// IMP=0x000000000007b6e1
- (void)encodeVideoFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000007b560
- (struct __CFDictionary *)forceKeyFrameProperties;	// IMP=0x000000000007b4ce
- (void)initVideoCompressionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bitrate:(unsigned int)arg3 keyFrameIntervalDuration:(unsigned int)arg4;	// IMP=0x000000000007b30c
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x000000000007b2ba
- (void)handleThermalLevelChange:(int)arg1;	// IMP=0x000000000007b268
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x000000000007b214
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x000000000007b1c2
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x000000000007b170
- (void)setFECRatio:(double)arg1;	// IMP=0x000000000007b11e
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;	// IMP=0x000000000007b118
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;	// IMP=0x000000000007b112
- (void)setTargetBitrate:(unsigned int)arg1;	// IMP=0x000000000007b0c4
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;	// IMP=0x000000000007aea1
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x000000000007ad39
- (_Bool)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;	// IMP=0x000000000007aba9
- (void)stopVideo;	// IMP=0x000000000007aad9
- (void)startVideo;	// IMP=0x000000000007a918
- (void)dealloc;	// IMP=0x000000000007a783
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000079ecc

@end

