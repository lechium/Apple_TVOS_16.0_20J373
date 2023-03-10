//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSSession, NSString;
@protocol CSDIDSDualSessionProviderDelegate;

@interface CSDIDSDualSessionProvider : NSObject
{
    id <CSDIDSDualSessionProviderDelegate> _delegate;	// 8 = 0x8
    IDSSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006397a
@property(readonly, nonatomic) IDSSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <CSDIDSDualSessionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000638c0
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000063837
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000637ae
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0010000000063733
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x00100000000636b8
- (void)session:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000006362f
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x0010000000063558
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;	// IMP=0x0010000000063543
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;	// IMP=0x001000000006352e
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;	// IMP=0x0010000000063519
- (void)sessionEnded:(id)arg1;	// IMP=0x0010000000063502
- (void)sessionStarted:(id)arg1;	// IMP=0x00100000000634b6
- (void)end;	// IMP=0x0010000000063479
- (void)reconnectSession;	// IMP=0x001000000006343c
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x00100000000633ca
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x001000000006337e
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x001000000006330c
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x001000000006329a
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x0010000000063222
- (void)sendData:(id)arg1 toDestinations:(id)arg2;	// IMP=0x001000000006319c
- (void)sendData:(id)arg1;	// IMP=0x001000000006312a
- (void)setStreamPreferences:(id)arg1;	// IMP=0x0010000000063045
- (void)setPreferences:(id)arg1;	// IMP=0x0010000000062f60
@property(nonatomic) long long invitationTimeout;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(readonly, nonatomic) unsigned long long initialLinkType;
@property(readonly, copy, nonatomic) NSString *destination;
@property(readonly, nonatomic) int socket;
@property(readonly, nonatomic) _Bool shouldUseSocketForTransport;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, copy) NSString *description;
- (id)initWithSession:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000062b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

