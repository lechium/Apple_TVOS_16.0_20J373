//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, VCEffectsManagerDelegate;

__attribute__((visibility("hidden")))
@interface VCEffectsManager : NSObject
{
    id _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 16 = 0x10
    NSMutableArray *_effectsArray;	// 24 = 0x18
    _Bool _effectsRegistered;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _loggingLock;	// 40 = 0x28
    CDStruct_1b6d18a9 _lastPrintTimestamp;	// 104 = 0x68
    CDStruct_1b6d18a9 _lastReceivedTimestamp;	// 128 = 0x80
    CDStruct_1b6d18a9 _lastSentTimestamp;	// 152 = 0x98
    int _consecutiveDroppedFrameCount;	// 176 = 0xb0
    int _sentFrameCount;	// 180 = 0xb4
    int _receivedFrameCount;	// 184 = 0xb8
    int _droppedFrameCount;	// 188 = 0xbc
    int _failedFrameCount;	// 192 = 0xc0
    _Bool _forceDisableEffectsHealthCheck;	// 196 = 0xc4
    struct __CVBuffer *_lastReceivedPixelBuffer;	// 200 = 0xc8
    struct __CVBuffer *_lastReceivedDepthBuffer;	// 208 = 0xd0
    int _thermalPressureLevel;	// 216 = 0xd8
}

+ (id)sharedManager;	// IMP=0x00600000003c9c0a
@property(retain) NSMutableArray *effectsArray; // @synthesize effectsArray=_effectsArray;
- (void)effectsRegistered:(_Bool)arg1;	// IMP=0x00000000003cac4a
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3 processTime:(id)arg4;	// IMP=0x00000000003cab67
- (_Bool)checkEffectsHealth;	// IMP=0x00000000003ca7c5
- (void)resetEffectsLogging;	// IMP=0x00000000003ca767
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4 toClient:(id)arg5;	// IMP=0x00000000003ca761
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000003ca75b
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthDataPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4;	// IMP=0x00000000003ca396
- (void)updateThermalLevel:(int)arg1;	// IMP=0x00000000003c9fca
- (_Bool)isFaceMeshTrackingEnabled;	// IMP=0x00000000003c9df1
- (_Bool)isEffectsOn;	// IMP=0x00000000003c9c18
- (void)registerBlocksForService;	// IMP=0x00000000003c9c12
@property(nonatomic) id <VCEffectsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)releaseAllocators;	// IMP=0x00000000003c9be5
- (_Bool)createAllocators;	// IMP=0x00000000003c9bdd
- (_Bool)initializeReceiveQueue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003c9bd5
- (void)dealloc;	// IMP=0x00000000003c9b33
- (id)init;	// IMP=0x00000000003c9a28

@end

