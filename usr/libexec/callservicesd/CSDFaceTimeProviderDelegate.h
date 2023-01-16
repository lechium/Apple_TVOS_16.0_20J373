//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDConversationManager, CSDConversationManagerXPCServer, CSDFaceTimeConversationProviderDelegate, CSDFaceTimeIDSProviderDelegate, CSDFaceTimeIMAVProviderDelegate, CSDFaceTimeInviteDemuxer, CSDGFTServiceConversationProviderDelegate, CSDIDSFirewallManager, CSDProviderCallDataSource, CXProvider, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDFaceTimeProviderDelegate : NSObject
{
    _Bool _shouldUseIDSDemuxer;	// 8 = 0x8
    CSDConversationManagerXPCServer *_conversationManagerXPCServer;	// 16 = 0x10
    id <TUFeatureFlags> _featureFlags;	// 24 = 0x18
    CXProvider *_provider;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableDictionary *_delayedActionsByCallUUID;	// 48 = 0x30
    CSDIDSFirewallManager *_firewallManager;	// 56 = 0x38
    CSDFaceTimeInviteDemuxer *_faceTimeInviteDemuxer;	// 64 = 0x40
    CSDFaceTimeIDSProviderDelegate *_faceTimeIDSProviderDelegate;	// 72 = 0x48
    CSDFaceTimeIMAVProviderDelegate *_faceTimeIMAVProviderDelegate;	// 80 = 0x50
    CSDFaceTimeConversationProviderDelegate *_faceTimeConversationProviderDelegate;	// 88 = 0x58
    CSDGFTServiceConversationProviderDelegate *_groupFaceTimeServiceProviderDelegate;	// 96 = 0x60
    CSDConversationManager *_conversationManager;	// 104 = 0x68
    CSDProviderCallDataSource *_callDataSource;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000b6e80
@property(nonatomic) __weak CSDProviderCallDataSource *callDataSource; // @synthesize callDataSource=_callDataSource;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) CSDGFTServiceConversationProviderDelegate *groupFaceTimeServiceProviderDelegate; // @synthesize groupFaceTimeServiceProviderDelegate=_groupFaceTimeServiceProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeConversationProviderDelegate *faceTimeConversationProviderDelegate; // @synthesize faceTimeConversationProviderDelegate=_faceTimeConversationProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIMAVProviderDelegate *faceTimeIMAVProviderDelegate; // @synthesize faceTimeIMAVProviderDelegate=_faceTimeIMAVProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIDSProviderDelegate *faceTimeIDSProviderDelegate; // @synthesize faceTimeIDSProviderDelegate=_faceTimeIDSProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeInviteDemuxer *faceTimeInviteDemuxer; // @synthesize faceTimeInviteDemuxer=_faceTimeInviteDemuxer;
@property(retain, nonatomic) CSDIDSFirewallManager *firewallManager; // @synthesize firewallManager=_firewallManager;
@property(readonly, nonatomic) NSMutableDictionary *delayedActionsByCallUUID; // @synthesize delayedActionsByCallUUID=_delayedActionsByCallUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) _Bool shouldUseIDSDemuxer; // @synthesize shouldUseIDSDemuxer=_shouldUseIDSDemuxer;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) CSDConversationManagerXPCServer *conversationManagerXPCServer; // @synthesize conversationManagerXPCServer=_conversationManagerXPCServer;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;	// IMP=0x00100000000b6c33
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;	// IMP=0x00100000000b6af4
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x00100000000b63a8
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x00100000000b5c7e
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x00100000000b5554
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000000b4e2a
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x00100000000b4700
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x00100000000b3fd6
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x00100000000b38ac
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x00100000000b3182
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x00100000000b2a58
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x00100000000b22e8
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x00100000000b1bbe
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000b0c85
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x00100000000b0b73
- (void)initiateModernFTInviteForAction:(id)arg1 destinations:(id)arg2 excludedIMAVDestinations:(id)arg3 joinCallActionToFulfill:(id)arg4;	// IMP=0x00100000000b046e
- (void)provider:(id)arg1 performStartCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000af963
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;	// IMP=0x00100000000af8e6
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;	// IMP=0x00100000000af841
- (void)providerDidReset:(id)arg1;	// IMP=0x00100000000af71c
- (void)providerDidBegin:(id)arg1;	// IMP=0x00100000000af5f7
- (void)providerDelegate:(id)arg1 endOtherProvidersCallWithUUID:(id)arg2;	// IMP=0x00100000000af3c6
- (_Bool)providerDelegate:(id)arg1 isExclusivelyManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000af1d0
- (_Bool)providerDelegate:(id)arg1 isManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000af146
- (void)providerDelegate:(id)arg1 requestedUpgradeToExistingCallForConversation:(id)arg2 withSessionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000aef85
- (void)providerDelegate:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aee5b
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 endedAtDate:(id)arg3 withReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x00100000000ae748
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x00100000000ae544
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x00100000000ae340
- (void)_processDelayedActionList:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000adfc9
- (void)_createDelayedActionListIfNecessary:(id)arg1;	// IMP=0x00100000000adef8
- (void)deferReportingAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x00100000000adde5
- (void)updateProviderConfigurationWithSenderIdentities:(id)arg1;	// IMP=0x00100000000add73
- (id)ISOCountryCodeForCallWithUUID:(id)arg1;	// IMP=0x00100000000adcf0
- (id)providerConfiguration;	// IMP=0x00100000000adc2e
- (void)dealloc;	// IMP=0x00100000000adbc3
- (id)initWithCallSource:(id)arg1 queue:(id)arg2 featureFlags:(id)arg3 shouldUseIDSDemuxer:(_Bool)arg4;	// IMP=0x00100000000ad83f
- (id)initWithCallSource:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000ad759
- (id)init;	// IMP=0x00100000000ad6cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

