//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDExternalIDSDualSession, CXCallFailureContext, NSArray, NSDate, NSDictionary, NSString, NSUUID, RTCSecureHierarchyToken, TUHandle;
@protocol CSDAVConference, CSDIDSChatDelegate;

@interface CSDIDSChat : NSObject
{
    _Bool _shouldSuppressInCallUI;	// 8 = 0x8
    _Bool _outgoing;	// 9 = 0x9
    _Bool _video;	// 10 = 0xa
    _Bool _relaying;	// 11 = 0xb
    _Bool _remoteUplinkMuted;	// 12 = 0xc
    _Bool _remoteMomentsAvailable;	// 13 = 0xd
    _Bool _muted;	// 14 = 0xe
    _Bool _shouldStartAudioPaused;	// 15 = 0xf
    _Bool _shouldStartVideoPaused;	// 16 = 0x10
    _Bool _mayRequireBreakBeforeMake;	// 17 = 0x11
    _Bool _hasSentInvitation;	// 18 = 0x12
    id <CSDIDSChatDelegate> _delegate;	// 24 = 0x18
    CSDExternalIDSDualSession *_session;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    TUHandle *_handle;	// 48 = 0x30
    NSUUID *_localSenderIdentityUUID;	// 56 = 0x38
    NSUUID *_upgradeSessionUUID;	// 64 = 0x40
    id <CSDAVConference> _conference;	// 72 = 0x48
    NSDate *_dateReceivedFirstRemoteFrame;	// 80 = 0x50
    NSDate *_dateEnded;	// 88 = 0x58
    NSDictionary *_remoteInviteDictionary;	// 96 = 0x60
    NSArray *_invitedPushTokens;	// 104 = 0x68
    CDUnknownBlockType _inviteCompletion;	// 112 = 0x70
    CDUnknownBlockType _conferenceCreationBlock;	// 120 = 0x78
    RTCSecureHierarchyToken *_reportingHierarchyToken;	// 128 = 0x80
    struct CGSize _localLandscapeAspectRatio;	// 136 = 0x88
    struct CGSize _localPortraitAspectRatio;	// 152 = 0x98
}

+ (id)faceTimeAppUUID;	// IMP=0x0020000000066dd8
- (void).cxx_destruct;	// IMP=0x002000000006b84d
@property(retain, nonatomic) RTCSecureHierarchyToken *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(copy, nonatomic) CDUnknownBlockType conferenceCreationBlock; // @synthesize conferenceCreationBlock=_conferenceCreationBlock;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(copy, nonatomic) CDUnknownBlockType inviteCompletion; // @synthesize inviteCompletion=_inviteCompletion;
@property(copy, nonatomic) NSArray *invitedPushTokens; // @synthesize invitedPushTokens=_invitedPushTokens;
@property(readonly, copy, nonatomic) NSDictionary *remoteInviteDictionary; // @synthesize remoteInviteDictionary=_remoteInviteDictionary;
@property(retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(retain, nonatomic) NSDate *dateReceivedFirstRemoteFrame; // @synthesize dateReceivedFirstRemoteFrame=_dateReceivedFirstRemoteFrame;
@property(nonatomic) _Bool hasSentInvitation; // @synthesize hasSentInvitation=_hasSentInvitation;
@property(nonatomic) _Bool mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property(nonatomic) _Bool shouldStartVideoPaused; // @synthesize shouldStartVideoPaused=_shouldStartVideoPaused;
@property(nonatomic) _Bool shouldStartAudioPaused; // @synthesize shouldStartAudioPaused=_shouldStartAudioPaused;
@property(retain, nonatomic) id <CSDAVConference> conference; // @synthesize conference=_conference;
@property(copy, nonatomic) NSUUID *upgradeSessionUUID; // @synthesize upgradeSessionUUID=_upgradeSessionUUID;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic, getter=isRemoteMomentsAvailable) _Bool remoteMomentsAvailable; // @synthesize remoteMomentsAvailable=_remoteMomentsAvailable;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(readonly, nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) CSDExternalIDSDualSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <CSDIDSChatDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x001000000006b59e
- (void)conference:(id)arg1 changedBytesOfDataUsed:(long long)arg2;	// IMP=0x001000000006b53c
- (void)conference:(id)arg1 outputLevelChangedTo:(float)arg2;	// IMP=0x001000000006b4d5
- (void)conference:(id)arg1 inputLevelChangedTo:(float)arg2;	// IMP=0x001000000006b46e
- (void)conference:(id)arg1 outputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x001000000006b3f4
- (void)conference:(id)arg1 inputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x001000000006b37a
- (void)conference:(id)arg1 remoteMediaStalled:(_Bool)arg2;	// IMP=0x001000000006b2a6
- (void)remoteVideoPausedForConference:(id)arg1;	// IMP=0x001000000006b24a
- (void)receivedFirstRemoteFrameForConference:(id)arg1;	// IMP=0x001000000006b133
- (void)sendingAudioChangedForConference:(id)arg1;	// IMP=0x001000000006b0d7
- (void)mutedChangedForConference:(id)arg1;	// IMP=0x001000000006b07b
- (void)conference:(id)arg1 endedWithReason:(long long)arg2 error:(id)arg3;	// IMP=0x001000000006af5f
- (void)conferenceStarted:(id)arg1;	// IMP=0x001000000006acdb
- (void)conferenceFinishedPreparing:(id)arg1;	// IMP=0x001000000006a8a1
- (void)session:(id)arg1 receivedData:(id)arg2;	// IMP=0x001000000006a7d9
- (void)session:(id)arg1 receivedInvitationCancelWithData:(id)arg2;	// IMP=0x001000000006a70f
- (void)session:(id)arg1 receivedInvitationDeclineWithData:(id)arg2;	// IMP=0x001000000006a645
- (void)session:(id)arg1 receivedInvitationAcceptWithData:(id)arg2;	// IMP=0x0010000000069d1e
- (void)session:(id)arg1 endedWithReason:(int)arg2;	// IMP=0x0010000000069c05
- (void)session:(id)arg1 invitationSentToPushTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x0010000000069ae3
- (void)sessionStarted:(id)arg1;	// IMP=0x0010000000069881
- (void)_handlePushTokensInvited:(id)arg1 didSendInvitation:(_Bool)arg2 didCancelInvitation:(_Bool)arg3;	// IMP=0x0010000000069750
- (void)setRemoteVideoPresentationState:(int)arg1;	// IMP=0x00100000000696f8
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;	// IMP=0x001000000006969f
- (void)prepareConference;	// IMP=0x0010000000069406
- (void)startConnectionWithTransport:(id)arg1;	// IMP=0x001000000006925b
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo;
@property(nonatomic, getter=isSendingAudioData) _Bool sendingAudioData;
@property(nonatomic, getter=isSendingAudio) _Bool sendingAudio;
- (void)sendDataUnreliably:(id)arg1;	// IMP=0x0010000000068be5
- (void)cancelInvitationWithLocalHangup;	// IMP=0x0010000000068aec
- (void)cancelInvitationWithDeclinedElsewhere;	// IMP=0x00000000000689f0
- (void)cancelInvitationWithAnsweredElsewhere;	// IMP=0x00100000000688f4
- (void)end;	// IMP=0x00100000000685fd
- (void)cancelOrDeclineInvitation;	// IMP=0x00100000000684ca
- (void)answerWithVideoAspectRatioDescriptor:(id)arg1;	// IMP=0x00100000000683c4
- (void)startWithVideoAspectRatioDescriptor:(id)arg1 inviteCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000682f8
- (int)deviceRole;	// IMP=0x00100000000682df
- (id)capabilities;	// IMP=0x00100000000680e3
- (void)_setLocalAspectRatiosForVideoAspectRatioDescriptor:(id)arg1;	// IMP=0x0010000000067f7f
- (void)_setDateEndedIfNecessary;	// IMP=0x0010000000067d0b
@property(readonly, nonatomic) unsigned long long initialLinkType;
@property(readonly, copy, nonatomic) NSString *remoteFromID;
@property(readonly, copy, nonatomic) NSString *crossDeviceIdentifier;
@property(readonly, nonatomic) CXCallFailureContext *failureContext;
@property(readonly, nonatomic) long long endedReason;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic) NSDate *dateConnected;
@property(readonly, nonatomic) NSDate *dateStartedConnecting;
@property(readonly, nonatomic) long long spatialAudioSourceIdentifier;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long videoStreamToken;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) NSString *sessionUUID;
- (id)initOutgoingWithSession:(id)arg1 UUID:(id)arg2 remoteHandle:(id)arg3 wantsVideo:(_Bool)arg4 isRelaying:(_Bool)arg5;	// IMP=0x00100000000671e2
- (id)initIncomingWithSession:(id)arg1 remoteHandle:(id)arg2 wantsVideo:(_Bool)arg3 remoteInviteDictionary:(id)arg4;	// IMP=0x001000000006707e
- (id)initWithSession:(id)arg1 remoteHandle:(id)arg2 wantsVideo:(_Bool)arg3;	// IMP=0x0010000000066ede

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

