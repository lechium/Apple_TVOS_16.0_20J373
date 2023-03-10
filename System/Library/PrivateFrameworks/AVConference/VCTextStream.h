//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextStream
{
    VCTextReceiver *_textReceiver;	// 536 = 0x218
    VCTextTransmitter *_textTransmitter;	// 544 = 0x220
    id <VCTextReceiverDelegate> _receiveDelegate;	// 552 = 0x228
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0010000000060715
- (double)rtcpHeartbeatLeeway;	// IMP=0x000000000006195c
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property(readonly, nonatomic) double lastReceivedRTPPacketTime;
- (void)onRTCPTimeout;	// IMP=0x000000000006191c
- (void)onRTPTimeout;	// IMP=0x0000000000061916
- (void)onSendRTCPPacket;	// IMP=0x000000000006187d
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061868
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061853
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000617fa
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000617a1
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061189
- (_Bool)setupTextReceiverWithError:(id *)arg1;	// IMP=0x0000000000061041
- (void)setupTextTransmitter;	// IMP=0x0000000000060f4a
- (void)onCallIDChanged;	// IMP=0x0000000000060f44
- (id)supportedPayloads;	// IMP=0x0000000000060f37
- (void)didReceiveText:(id)arg1;	// IMP=0x0000000000060f06
- (void)didReceiveCharacter:(unsigned short)arg1;	// IMP=0x0000000000060d9a
- (void)sendText:(id)arg1;	// IMP=0x0000000000060bfa
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x0000000000060a56
@property(nonatomic) id <VCTextReceiverDelegate> receiveDelegate;
- (void)dealloc;	// IMP=0x0000000000060829
- (id)init;	// IMP=0x0000000000060729

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

