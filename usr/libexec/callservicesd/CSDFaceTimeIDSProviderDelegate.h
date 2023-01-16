//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableSet, NSObject, NSOrderedSet, NSSet, NSString, TUCallProviderManager;
@protocol CSDFaceTimeIDSProviderDelegateCapabilities, CSDFaceTimeIDSProviderDelegateServerBag, CSDFaceTimeProviderDelegateManagerDelegate, OS_dispatch_queue;

@interface CSDFaceTimeIDSProviderDelegate
{
    id <CSDFaceTimeProviderDelegateManagerDelegate> _faceTimeDemuxerDelegate;	// 8 = 0x8
    NSSet *_accounts;	// 16 = 0x10
    TUCallProviderManager *_callProviderManager;	// 24 = 0x18
    id <CSDFaceTimeIDSProviderDelegateCapabilities> _capabilities;	// 32 = 0x20
    NSOrderedSet *_telephonySenderIdentities;	// 40 = 0x28
    NSMutableSet *_chatsPendingUpgrade;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    id <CSDFaceTimeIDSProviderDelegateServerBag> _serverBag;	// 64 = 0x40
    CDUnknownBlockType _facetimeIDSServiceGenerator;	// 72 = 0x48
    CDUnknownBlockType _isAccountActive;	// 80 = 0x50
    CDUnknownBlockType _outgoingSessionProviderGenerator;	// 88 = 0x58
    CDUnknownBlockType _outgoingChatGenerator;	// 96 = 0x60
    double _upgradeTimeout;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000093634
@property(nonatomic) double upgradeTimeout; // @synthesize upgradeTimeout=_upgradeTimeout;
@property(copy, nonatomic) CDUnknownBlockType outgoingChatGenerator; // @synthesize outgoingChatGenerator=_outgoingChatGenerator;
@property(copy, nonatomic) CDUnknownBlockType outgoingSessionProviderGenerator; // @synthesize outgoingSessionProviderGenerator=_outgoingSessionProviderGenerator;
@property(copy, nonatomic) CDUnknownBlockType isAccountActive; // @synthesize isAccountActive=_isAccountActive;
@property(copy, nonatomic) CDUnknownBlockType facetimeIDSServiceGenerator; // @synthesize facetimeIDSServiceGenerator=_facetimeIDSServiceGenerator;
@property(retain, nonatomic) id <CSDFaceTimeIDSProviderDelegateServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *chatsPendingUpgrade; // @synthesize chatsPendingUpgrade=_chatsPendingUpgrade;
@property(copy, nonatomic) NSOrderedSet *telephonySenderIdentities; // @synthesize telephonySenderIdentities=_telephonySenderIdentities;
@property(readonly, nonatomic) id <CSDFaceTimeIDSProviderDelegateCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(copy, nonatomic) NSSet *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) __weak id <CSDFaceTimeProviderDelegateManagerDelegate> faceTimeDemuxerDelegate; // @synthesize faceTimeDemuxerDelegate=_faceTimeDemuxerDelegate;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000000933ca
- (void)providerDidBegin:(id)arg1;	// IMP=0x001000000009330d
- (void)updateProviderConfigurationWithAccounts:(id)arg1 senderIdentities:(id)arg2;	// IMP=0x0010000000092dbb
- (void)updateProviderConfigurationWithSenderIdentities:(id)arg1;	// IMP=0x0010000000092d1c
- (void)updateProviderConfigurationWithAccounts:(id)arg1;	// IMP=0x0010000000092c7d
- (_Bool)isMomentsAvailableForChat:(id)arg1;	// IMP=0x0010000000092c39
- (void)chatEnded:(id)arg1;	// IMP=0x0010000000092a30
- (void)chatStartedConnecting:(id)arg1;	// IMP=0x001000000009289b
- (_Bool)isMediaAllowedForChat:(id)arg1;	// IMP=0x001000000009272e
- (void)endCallWithUUIDAsDeclinedElsewhere:(id)arg1;	// IMP=0x00100000000925e2
- (void)endCallWithUUIDAsLocalHangup:(id)arg1;	// IMP=0x00100000000923c7
- (void)endCallWithUUID:(id)arg1;	// IMP=0x001000000009227b
- (void)endCallWithUUIDAsAnsweredElsewhere:(id)arg1;	// IMP=0x001000000009212f
- (_Bool)hasCallStartedConnectingWithUUID:(id)arg1;	// IMP=0x00100000000920cc
- (id)upgradeSessionUUIDForCallWithUUID:(id)arg1;	// IMP=0x001000000009207c
- (void)upgradeChatIfNecessary:(id)arg1;	// IMP=0x0010000000091e70
- (_Bool)canUpgradeChat:(id)arg1;	// IMP=0x0010000000091c7b
- (_Bool)isUpgradingCallWithUUID:(id)arg1;	// IMP=0x0010000000091bfa
- (MISSING_TYPE *)isManagingCallWithUUID: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000091bc7
- (id)ISOCountryCodeForChat:(id)arg1;	// IMP=0x0010000000091a9c
- (id)ISOCountryCodeForCallWithUUID:(id)arg1;	// IMP=0x0010000000091a3d
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x00100000000918ff
- (id)callForConversation:(id)arg1 withSessionToken:(id)arg2;	// IMP=0x001000000009154f
- (id)upgradeCallForConversation:(id)arg1 withSessionToken:(id)arg2;	// IMP=0x0010000000091447
- (id)callUpdateForChat:(id)arg1;	// IMP=0x00100000000913ad
- (void)inviteIDSPeersWithAction:(id)arg1 destinations:(id)arg2 joinCallActionToFulfill:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000090593
- (id)accountWithUUID:(id)arg1 service:(id)arg2;	// IMP=0x00100000000900ee
- (id)initWithCapabilities:(id)arg1 queue:(id)arg2;	// IMP=0x001000000008fca8
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000008fc44
- (id)init;	// IMP=0x001000000008fbba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

