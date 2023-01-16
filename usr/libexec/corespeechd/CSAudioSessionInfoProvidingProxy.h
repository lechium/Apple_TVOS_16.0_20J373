//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSXPCConnection, NSString;
@protocol CSAudioSessionInfoProviding;

@interface CSAudioSessionInfoProvidingProxy : NSObject
{
    id <CSAudioSessionInfoProviding> _audioSessionInfoProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006459b
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioSessionInfoProviding> audioSessionInfoProvider; // @synthesize audioSessionInfoProvider=_audioSessionInfoProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x0010000000064445
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x001000000006435d
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000064275
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x001000000006418d
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000640a5
- (void)_handleSessionIDRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000063eaf
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000063df4
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000063d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

