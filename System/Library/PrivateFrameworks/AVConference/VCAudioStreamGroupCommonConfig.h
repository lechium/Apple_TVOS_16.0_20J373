//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioStreamGroupCommonConfig : NSObject
{
    int _processID;	// 8 = 0x8
    _Bool _isGKVoiceChat;	// 12 = 0xc
    _Bool _isMuted;	// 13 = 0xd
    unsigned int _preferredIOSampleRate;	// 16 = 0x10
    unsigned int _preferredIOSamplesPerFrame;	// 20 = 0x14
    unsigned int _audioSessionID;	// 24 = 0x18
    CDUnknownFunctionPointerType _didProcessSamplesCallback;	// 32 = 0x20
    void *_didProcessSamplesCallbackContext;	// 40 = 0x28
    long long _powerSpectrumStreamToken;	// 48 = 0x30
    unsigned int _audioChannelIndex;	// 56 = 0x38
    unsigned long long _spatialAudioSourceID;	// 64 = 0x40
}

@property(nonatomic) unsigned long long spatialAudioSourceID; // @synthesize spatialAudioSourceID=_spatialAudioSourceID;
@property(nonatomic) unsigned int audioChannelIndex; // @synthesize audioChannelIndex=_audioChannelIndex;
@property(nonatomic) long long powerSpectrumStreamToken; // @synthesize powerSpectrumStreamToken=_powerSpectrumStreamToken;
@property(nonatomic) void *didProcessSamplesCallbackContext; // @synthesize didProcessSamplesCallbackContext=_didProcessSamplesCallbackContext;
@property(nonatomic) CDUnknownFunctionPointerType didProcessSamplesCallback; // @synthesize didProcessSamplesCallback=_didProcessSamplesCallback;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) unsigned int preferredIOSamplesPerFrame; // @synthesize preferredIOSamplesPerFrame=_preferredIOSamplesPerFrame;
@property(nonatomic) unsigned int preferredIOSampleRate; // @synthesize preferredIOSampleRate=_preferredIOSampleRate;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(nonatomic) int processID; // @synthesize processID=_processID;
- (void)dealloc;	// IMP=0x00000000002217e5

@end

