//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCAudioIOControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioIOControllerClient : NSObject
{
    id _delegate;	// 8 = 0x8
    struct tagVCAudioFrameFormat _clientFormat;	// 16 = 0x10
    struct tagVCAudioFrameFormat _controllerFormat;	// 64 = 0x40
    int _deviceRole;	// 112 = 0x70
    _Bool _allowAudioRecording;	// 116 = 0x74
    int _operatingMode;	// 120 = 0x78
    _Bool _isRemoteCodecInfoValid;	// 124 = 0x7c
    unsigned int _remoteCodecType;	// 128 = 0x80
    double _remoteCodecSampleRate;	// 136 = 0x88
    _Bool _isRemoteVersionInfoValid;	// 144 = 0x90
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;	// 148 = 0x94
    int _clientPid;	// 280 = 0x118
    _Bool _isInputMeteringEnabled;	// 284 = 0x11c
    _Bool _isOutputMeteringEnabled;	// 285 = 0x11d
    unsigned char _direction;	// 286 = 0x11e
    struct _VCAudioIOControllerClientIO _sinkIO;	// 288 = 0x120
    struct _VCAudioIOControllerClientIO _sourceIO;	// 336 = 0x150
    unsigned int _audioSessionId;	// 384 = 0x180
    _Bool _isPrewarmingClient;	// 388 = 0x184
    unsigned long long _spatialToken;	// 392 = 0x188
    _Bool _spatialAudioDisabled;	// 400 = 0x190
    unsigned int _channelIndex;	// 404 = 0x194
}

@property(nonatomic) _Bool spatialAudioDisabled; // @synthesize spatialAudioDisabled=_spatialAudioDisabled;
@property(readonly, nonatomic) unsigned long long spatialToken; // @synthesize spatialToken=_spatialToken;
@property(readonly, nonatomic) unsigned int channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, nonatomic) _Bool isPrewarmingClient; // @synthesize isPrewarmingClient=_isPrewarmingClient;
@property(readonly, nonatomic) unsigned int audioSessionId; // @synthesize audioSessionId=_audioSessionId;
@property(nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(nonatomic, getter=isOuputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled=_isOutputMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled=_isInputMeteringEnabled;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo; // @synthesize farEndVersionInfo=_farEndVersionInfo;
@property(readonly, nonatomic) _Bool isRemoteVersionInfoValid; // @synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid;
@property(readonly, nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property(readonly, nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property(readonly, nonatomic) _Bool isRemoteCodecInfoValid; // @synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(readonly, nonatomic) id <VCAudioIOControllerDelegate> delegate;
@property(nonatomic) const struct tagVCAudioFrameFormat *controllerFormat;
@property(readonly, nonatomic) const struct tagVCAudioFrameFormat *clientFormat;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x0000000000255de0
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;	// IMP=0x0000000000255dc8
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo)arg1;	// IMP=0x0000000000255d9c
@property(readonly, nonatomic) struct _VCAudioIOControllerClientIO *sinkIO;
@property(readonly, nonatomic) struct _VCAudioIOControllerClientIO *sourceIO;
- (id)description;	// IMP=0x0000000000255cb5
- (void)dealloc;	// IMP=0x0000000000255c32
- (id)initWithDelegate:(id)arg1 audioSessionId:(unsigned int)arg2 channelIndex:(unsigned int)arg3 sourceContext:(void *)arg4 sourceProcess:(CDUnknownFunctionPointerType)arg5 sinkContext:(void *)arg6 sinkProcess:(CDUnknownFunctionPointerType)arg7 clientPid:(int)arg8 isPrewarmingClient:(_Bool)arg9 spatialToken:(unsigned long long)arg10;	// IMP=0x0000000000255af8

@end
