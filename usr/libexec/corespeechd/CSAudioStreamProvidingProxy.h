//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, CSAudioStream, CSXPCConnection, NSString;
@protocol CSAudioStreamProviding, CSTriggerInfoProviding;

@interface CSAudioStreamProvidingProxy : NSObject
{
    id <CSAudioStreamProviding> _audioStreamProviding;	// 8 = 0x8
    id <CSTriggerInfoProviding> _triggerInfoProviding;	// 16 = 0x10
    CSXPCConnection *_xpcConnection;	// 24 = 0x18
    unsigned long long _streamClientType;	// 32 = 0x20
    CSAudioStream *_audioStream;	// 40 = 0x28
    CSAudioRecordContext *_recordContext;	// 48 = 0x30
    NSString *_recordEventUUID;	// 56 = 0x38
    NSString *_accessoryId;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000f87f
- (void)setAccessoryId:(id)arg1;	// IMP=0x001000000000f86e
- (id)accessoryId;	// IMP=0x001000000000f864
@property(retain, nonatomic) NSString *recordEventUUID; // @synthesize recordEventUUID=_recordEventUUID;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSTriggerInfoProviding> triggerInfoProviding; // @synthesize triggerInfoProviding=_triggerInfoProviding;
@property(nonatomic, setter=setAudioStreamProvidingForProxy:) __weak id <CSAudioStreamProviding> audioStreamProviding; // @synthesize audioStreamProviding=_audioStreamProviding;
- (void)_setAllowMixableAudioWhileRecording:(_Bool)arg1;	// IMP=0x001000000000f65e
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x001000000000f577
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;	// IMP=0x001000000000f46a
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x001000000000f389
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x001000000000f2a8
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x001000000000f083
- (void)_handlePlaybackRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000ef34
- (void)_handleIsNarrowband:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000ee00
- (void)_handleRecordSettings:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000eca5
- (void)_handleAudioDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000eb4a
- (void)_handleRecordDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e9ef
- (void)_handleRecordRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e8a0
- (void)_handleIsRecordingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e76c
- (void)_handleVoiceTriggerInfoMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e546
- (void)_handleStopAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e086
- (void)_handleStartAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d8e4
- (void)_handleAudioStreamPrepareMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d48b
- (void)_handleAudioStreamRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000d159
- (void)_handleSetCurrentConextMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000cedd
- (void)_handleSupportsDuckingWithStreamHandleID:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000cd70
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000cbe0
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x001000000000c809
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000000c71a
- (_Bool)_isHubRequest;	// IMP=0x001000000000c70c
- (void)setInitialContext:(id)arg1;	// IMP=0x001000000000c677
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000000c4c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

