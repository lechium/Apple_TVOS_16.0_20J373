//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSDestination, IDSDevice, NSArray, NSData, NSMutableArray, NSMutableSet;
@protocol CSDRelayIDSDualSessionDelegate;

@interface CSDRelayIDSDualSession
{
    _Bool _hasStarted;	// 8 = 0x8
    _Bool _hasReceivedAccept;	// 9 = 0x9
    id <CSDRelayIDSDualSessionDelegate> _delegate;	// 16 = 0x10
    IDSDestination *_remoteDestination;	// 24 = 0x18
    IDSDevice *_remoteDevice;	// 32 = 0x20
    NSMutableArray *_pendingData;	// 40 = 0x28
    NSMutableSet *_identifiers;	// 48 = 0x30
    NSMutableArray *_blocksPendingTransportAvailability;	// 56 = 0x38
    NSData *_acceptPayloadData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005c920
@property(copy, nonatomic) NSData *acceptPayloadData; // @synthesize acceptPayloadData=_acceptPayloadData;
@property(nonatomic) _Bool hasReceivedAccept; // @synthesize hasReceivedAccept=_hasReceivedAccept;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly, nonatomic) NSMutableArray *blocksPendingTransportAvailability; // @synthesize blocksPendingTransportAvailability=_blocksPendingTransportAvailability;
@property(readonly, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSMutableArray *pendingData; // @synthesize pendingData=_pendingData;
@property(retain, nonatomic) IDSDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(retain, nonatomic) IDSDestination *remoteDestination; // @synthesize remoteDestination=_remoteDestination;
@property(nonatomic) __weak id <CSDRelayIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005c685
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005c4f6
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005c367
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000005c18e
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000005c0f1
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x001000000005c084
- (void)prepareToEnd;	// IMP=0x001000000005bf8d
- (void)sendDataAndDeclineInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005bea9
- (void)sendDataAndCancelInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005bdc2
- (void)sendDataAndAcceptInvitationIfNecessary:(id)arg1;	// IMP=0x001000000005bcde
- (void)sendDataAndSendInvitationIfNecessary:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x001000000005bbf1
- (void)sendData:(id)arg1 toDestinations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b9e7
- (void)sendData:(id)arg1 waitUntilConnected:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b70d
- (void)removePendingData;	// IMP=0x001000000005b513
- (void)sendPendingData;	// IMP=0x001000000005b2d4
- (void)pendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b216
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ae99
- (void)runBlocksPendingTransportAvailability:(_Bool)arg1;	// IMP=0x001000000005ab74
- (void)runBlocksPendingTransportAvailabilityIfNecessary:(_Bool)arg1;	// IMP=0x001000000005aa09
- (void)mergeSession:(id)arg1;	// IMP=0x001000000005a7e8
- (void)removeIdentifiers:(id)arg1;	// IMP=0x001000000005a663
- (void)removeIdentifier:(id)arg1;	// IMP=0x001000000005a5f1
- (void)addIdentifiers:(id)arg1;	// IMP=0x001000000005a57f
- (void)addIdentifier:(id)arg1;	// IMP=0x001000000005a50d
- (_Bool)hasIdentifier:(id)arg1;	// IMP=0x001000000005a496
@property(readonly, copy, nonatomic) NSArray *allIdentifiers;
- (id)transport;	// IMP=0x001000000005a389
- (void)dealloc;	// IMP=0x001000000005a334
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteDestination:(id)arg2 remoteDevice:(id)arg3 remoteProtocolVersion:(int)arg4 identifiers:(id)arg5;	// IMP=0x001000000005a24b
- (id)initAsInitiatorWithSessionProvider:(id)arg1 identifiers:(id)arg2;	// IMP=0x001000000005a223
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteDestination:(id)arg3 remoteDevice:(id)arg4 remoteProtocolVersion:(id)arg5 identifiers:(id)arg6;	// IMP=0x0010000000059fd9
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x0010000000059f52

@end

