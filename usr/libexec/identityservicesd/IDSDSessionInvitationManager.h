//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionMessenger, IDSDSessionSharedState, NSData, NSDictionary;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionInvitationManager : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _remoteAssumeRemoteDeviceEncryption;	// 68 = 0x44
    _Bool _useStunMICheck;	// 69 = 0x45
    unsigned int _seqRecvStart;	// 72 = 0x48
    unsigned int _SSRCRecv;	// 76 = 0x4c
    unsigned int _seqSendStart;	// 80 = 0x50
    unsigned int _SSRCSend;	// 84 = 0x54
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 88 = 0x58
    NSDictionary *_preferences;	// 96 = 0x60
    NSData *_quickRelaySessionToken;	// 104 = 0x68
    NSData *_remoteBlob;	// 112 = 0x70
    IDSDSessionMessenger *_messenger;	// 120 = 0x78
    IDSDSessionSharedState *_sharedState;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000004e7e30
@property(nonatomic) _Bool useStunMICheck; // @synthesize useStunMICheck=_useStunMICheck;
@property(nonatomic) unsigned int SSRCSend; // @synthesize SSRCSend=_SSRCSend;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(nonatomic) unsigned int seqSendStart; // @synthesize seqSendStart=_seqSendStart;
@property(nonatomic) _Bool remoteAssumeRemoteDeviceEncryption; // @synthesize remoteAssumeRemoteDeviceEncryption=_remoteAssumeRemoteDeviceEncryption;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(nonatomic) unsigned int SSRCRecv; // @synthesize SSRCRecv=_SSRCRecv;
@property(nonatomic) unsigned int seqRecvStart; // @synthesize seqRecvStart=_seqRecvStart;
@property(retain, nonatomic) NSData *remoteBlob; // @synthesize remoteBlob=_remoteBlob;
@property(retain, nonatomic) NSData *quickRelaySessionToken; // @synthesize quickRelaySessionToken=_quickRelaySessionToken;
@property(retain, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
- (void)receivedCancelMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00100000004e7030
- (_Bool)_isValidDestination:(id)arg1;	// IMP=0x00100000004e68f0
- (void)receivedDeclineMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00100000004e5910
- (void)receivedAcceptMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00000000004e15a0
- (id)publicIdentityDataFromLocalFullIdentity;	// IMP=0x00100000004e0b70
- (_Bool)_isLocalDeviceSafeviewAdviserInitiatorOnLoboMacOrLaterAndRemoteDeviceIsPreTiboAnyPlatform;	// IMP=0x00100000004e0b50
- (void)declineInvitationWithData:(id)arg1 forceFromID:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x00100000004e04a0
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x00100000004e0440
- (void)declineInvitation;	// IMP=0x00100000004e0410
- (void)_sendAcceptMessageWithContext:(id)arg1 connectionData:(id)arg2;	// IMP=0x00100000004df080
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x00100000004dbef0
- (void)acceptInvitation;	// IMP=0x00100000004dbec0
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x00100000004dbe40
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x00100000004dbda0
- (void)cancelInvitation;	// IMP=0x00100000004dbd30
- (id)_acceptedDeviceToken;	// IMP=0x00100000004db750
- (id)_acceptedDeviceUniqueID;	// IMP=0x00100000004daff0
- (void)sendCancelInvitationToDestinations:(id)arg1 remoteEndReason:(unsigned int)arg2 data:(id)arg3;	// IMP=0x00100000004da5f0
- (void)_sendCancelInvitationToDestinations:(id)arg1 withData:(id)arg2;	// IMP=0x00100000004da570
- (void)_setLinkPreferences:(id)arg1;	// IMP=0x00100000004da530
- (void)_sendInvitationMessageToDestinations:(id)arg1 withOptions:(id)arg2 contextData:(id)arg3 declineOnError:(_Bool)arg4 connectionData:(id)arg5;	// IMP=0x00100000004d7700
- (void)_sendInvitationWithOptions:(id)arg1 data:(id)arg2 declineOnError:(_Bool)arg3;	// IMP=0x00100000004d44d0
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00100000004d4460
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00100000004d43f0
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2 messenger:(id)arg3;	// IMP=0x00100000004d4230

@end

