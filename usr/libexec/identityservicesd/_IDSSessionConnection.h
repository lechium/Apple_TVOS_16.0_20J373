//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConference, NSMutableArray;
@protocol OS_dispatch_queue, _IDSSessionConnectionDelegate;

@interface _IDSSessionConnection : NSObject
{
    AVConference *_connection;	// 8 = 0x8
    NSMutableArray *_connectionInfos;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    id <_IDSSessionConnectionDelegate> _delegate;	// 32 = 0x20
    long long _callID;	// 40 = 0x28
    long long _connType;	// 48 = 0x30
    long long _localCell;	// 56 = 0x38
    long long _remoteCell;	// 64 = 0x40
    _Bool _connectionActive;	// 72 = 0x48
    _Bool _connectionEnableAudio;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x00100000004cadb0
@property(nonatomic) __weak id <_IDSSessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)remoteCell;	// IMP=0x00100000004cad30
- (long long)localCell;	// IMP=0x00100000004cad10
- (long long)connectionType;	// IMP=0x00100000004cacf0
- (long long)callID;	// IMP=0x00100000004cacd0
- (unsigned int)natType;	// IMP=0x00100000004caca0
- (_Bool)muted;	// IMP=0x00100000004cac80
- (void)setMuted:(_Bool)arg1;	// IMP=0x00100000004cac60
- (_Bool)getAudioEnabled;	// IMP=0x00100000004cac40
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x00100000004cac20
- (void)sendData:(id)arg1;	// IMP=0x00100000004ca7f0
- (_Bool)stopConnection:(id *)arg1;	// IMP=0x00100000004ca520
- (_Bool)startConnectionAsInitiator:(_Bool)arg1 peerProtocolVersion:(unsigned int)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004c9d60
- (void)createConnectionData:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004c7650
- (void)receivedRemoteConnectionData:(id)arg1;	// IMP=0x00100000004c6e40
- (long long)bestCallID;	// IMP=0x00100000004c6a30
- (id)connectionInfoForCallID:(long long)arg1;	// IMP=0x00100000004c6780
- (id)connectionInfoWithState:(long long)arg1;	// IMP=0x00100000004c6510
- (void)dealloc;	// IMP=0x00100000004c60c0
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000004c5f40
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;	// IMP=0x00100000004cc670
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x00100000004cc600
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x00100000004cc580
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;	// IMP=0x00100000004cc500
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x00100000004cc480
- (void)serverDiedForConference:(id)arg1;	// IMP=0x00100000004cc440
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x00100000004cc3e0
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x00100000004cc380
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00100000004cc300
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00100000004cc280
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;	// IMP=0x00100000004cc230
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00100000004cc1e0
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x00100000004cc190
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;	// IMP=0x00100000004cbcb0
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;	// IMP=0x00100000004cb240
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;	// IMP=0x00100000004cb1e0
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x00100000004caf50
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(long long)arg3;	// IMP=0x00100000004caef0
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00100000004cae80
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00100000004cae10

@end
