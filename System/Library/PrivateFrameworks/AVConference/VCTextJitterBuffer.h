//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject
{
    struct tagVCTextJitterBufferConfiguration _configuration;	// 8 = 0x8
    _Bool _resetRequested;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    struct JitterPreloadQueue_t *_preloadQueue;	// 40 = 0x28
    struct JitterQueue_t *_jitterQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_heartbeat;	// 56 = 0x38
    unsigned int _lastSequenceNumber;	// 64 = 0x40
    _Bool _firstFrameReceived;	// 68 = 0x44
}

- (void)heartbeat;	// IMP=0x00000000002e4ac6
- (void)stopHeartbeat;	// IMP=0x00000000002e4a97
- (_Bool)startHeartbeat;	// IMP=0x00000000002e46ce
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002e464f
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002e463e
- (void)stop;	// IMP=0x00000000002e447c
- (_Bool)start;	// IMP=0x00000000002e42b6
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;	// IMP=0x00000000002e42a5
- (struct tagAudioFrame *)allocTextFrame;	// IMP=0x00000000002e4297
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002e4246
- (struct tagAudioPacket *)allocTextPacket;	// IMP=0x00000000002e4238
- (void)setDelegate:(id)arg1;	// IMP=0x00000000002e4227
- (id)delegate;	// IMP=0x00000000002e4219
- (void)dealloc;	// IMP=0x00000000002e4022
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;	// IMP=0x00000000002e3de6

@end

