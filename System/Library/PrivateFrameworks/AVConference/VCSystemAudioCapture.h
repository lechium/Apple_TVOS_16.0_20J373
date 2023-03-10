//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCSystemAudioCapture
{
    struct _opaque_pthread_mutex_t _stateLock;	// 24 = 0x18
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[10];
        unsigned int _field4;
        int _field5;
    } *_audioRecorderQueue;	// 88 = 0x58
    struct tagVCSystemAudioCaptureTapSettings _tapSettings;	// 96 = 0x60
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioQueue;	// 112 = 0x70
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioCapture;	// 152 = 0x98
    unsigned int _samplesPerFrame;	// 192 = 0xc0
    void *_sinkContext;	// 200 = 0xc8
    CDUnknownFunctionPointerType _sinkProc;	// 208 = 0xd0
    _Bool _firstAudioBufferReceived;	// 216 = 0xd8
    struct opaqueVCAudioBufferList *_audioBufferAppendList;	// 224 = 0xe0
    struct opaqueVCAudioBufferList *_audioBufferOutputList;	// 232 = 0xe8
    double _conversionRatio;	// 240 = 0xf0
    unsigned int _timestamp;	// 248 = 0xf8
    double _hostTime;	// 256 = 0x100
    double _startHostTime;	// 264 = 0x108
    _Bool _useSineWave;	// 272 = 0x110
}

+ (id)newAudioTapWithCaptureContext:(struct __CFString *)arg1 audioFormat:(id)arg2;	// IMP=0x006000000034e805
+ (id)newAudioTapWithSessionType:(unsigned int)arg1 audioFormat:(id)arg2;	// IMP=0x006000000034e677
+ (unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)arg1;	// IMP=0x006000000034e66a
+ (id)newAudioTapWithProcessID:(int)arg1 audioFormat:(id)arg2;	// IMP=0x006000000034e5c4
+ (_Bool)isValidConfiguration:(CDStruct_b94bc9bb *)arg1;	// IMP=0x006000000034b93d
- (void)setupCannedAudioInjection;	// IMP=0x000000000034ea6d
- (id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1;	// IMP=0x000000000034e895
- (_Bool)stop;	// IMP=0x000000000034e2db
- (_Bool)start;	// IMP=0x000000000034bc0a
- (void)dealloc;	// IMP=0x000000000034b7ee
- (id)initWithConfiguration:(CDStruct_b94bc9bb *)arg1;	// IMP=0x000000000034b26e

@end

