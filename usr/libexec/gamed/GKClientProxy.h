//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, GKDiscovery, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKResourceManager, GKThreadsafeDictionary, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue, OS_dispatch_source;

@interface GKClientProxy : NSObject
{
    _Bool _deniedProductionEnvironment;	// 8 = 0x8
    _Bool _productionSigned;	// 9 = 0x9
    _Bool _installed;	// 10 = 0xa
    _Bool _supportsMultipleActivePlayers;	// 11 = 0xb
    _Bool _isOcelot;	// 12 = 0xc
    unsigned char _achievementsRateLimitedCurrentState;	// 13 = 0xd
    unsigned char _scoresRateLimitedCurrentState;	// 14 = 0xe
    _Bool _initialized;	// 15 = 0xf
    int _pid;	// 16 = 0x10
    unsigned int _applicationState;	// 20 = 0x14
    unsigned int _previousApplicationState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authQueue;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    NSNumber *_adamID;	// 64 = 0x40
    NSNumber *_sandboxExtensionToken;	// 72 = 0x48
    NSNumber *_externalVersion;	// 80 = 0x50
    NSString *_bundleIdentifier;	// 88 = 0x58
    NSString *_originalBundleIdentifier;	// 96 = 0x60
    NSString *_bundleVersion;	// 104 = 0x68
    NSString *_bundleShortVersion;	// 112 = 0x70
    NSString *_name;	// 120 = 0x78
    long long _environment;	// 128 = 0x80
    NSDate *_achievementsRateLimitingStartDate;	// 136 = 0x88
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 144 = 0x90
    NSDate *_scoresRateLimitingStartDate;	// 152 = 0x98
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 160 = 0xa0
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 168 = 0xa8
    NSString *_language;	// 176 = 0xb0
    GKClientProxy<GKUIViewService> *_viewService;	// 184 = 0xb8
    GKGameInternal *_currentGame;	// 192 = 0xc0
    GKDiscovery *_nearbyDiscovery;	// 200 = 0xc8
    GKEventTuple *_launchEvent;	// 208 = 0xd0
    GKInviteSession *_inviteSession;	// 216 = 0xd8
    GKMatchResponse *_currentMatchResponse;	// 224 = 0xe0
    NSMapTable *_extensionProxies;	// 232 = 0xe8
    _GKStateMachine *_appInitStateMachine;	// 240 = 0xf0
    GKThreadsafeDictionary *_appSessions;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 256 = 0x100
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 272 = 0x110
    GKResourceManager *_resourceManager;	// 280 = 0x118
    NSMutableSet *_pendingDataTypesForRefresh;	// 288 = 0x120
    NSDictionary *_preferencesFromBag;	// 296 = 0x128
    NSObject<OS_dispatch_source> *_checkMatchStatusTimer;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_checkMatchStatusQueue;	// 312 = 0x138
}

+ (id)syncQueue;	// IMP=0x002000000018182f
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x00100000000945a1
+ (void)closeDatabaseFromManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0010000000094555
+ (id)newManagedObjectContextForClient:(id)arg1 player:(id)arg2;	// IMP=0x00100000000943af
+ (id)_newManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0010000000093494
+ (id)cacheFileQueue;	// IMP=0x001000000009343d
+ (id)managedObjectModel;	// IMP=0x00100000000930f3
+ (void)removeAllCaches;	// IMP=0x0010000000092aae
+ (void)removeCacheForPlayer:(id)arg1;	// IMP=0x00100000000922f3
+ (id)cacheFileURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x001000000009229a
+ (id)cacheDirectoryURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x0010000000091c7b
+ (id)cacheDirectoryForBundleID:(id)arg1 environment:(long long)arg2;	// IMP=0x0010000000091bd0
+ (id)_existingManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0010000000091870
+ (id)contextKeyForPlayer:(id)arg1;	// IMP=0x0010000000091840
+ (void)removeClient:(id)arg1;	// IMP=0x0010000000185d99
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000185ccd
+ (id)clientsToBeEnumerated;	// IMP=0x0010000000185acc
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x00100000001858f5
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x00100000001853d0
+ (void)checkGameCenterEnabledForegroundClients;	// IMP=0x00100000001853ca
+ (id)nonGameCenterForegroundClient;	// IMP=0x0010000000185254
+ (id)foregroundClient;	// IMP=0x00100000001850fe
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x00100000001850e4
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x001000000018420e
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x00100000001840ab
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x001000000018400c
+ (id)clientForBundleID:(id)arg1;	// IMP=0x0010000000183fef
+ (id)gameCenterClient;	// IMP=0x0010000000183fc8
+ (id)_clientLookup;	// IMP=0x0010000000183f61
+ (id)factoryQueue;	// IMP=0x0010000000183f0a
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x001000000018b494
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x001000000018af4a
+ (void)authenticationDidChange;	// IMP=0x001000000018a98f
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0010000000194c34
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0010000000193968
- (void).cxx_destruct;	// IMP=0x0010000000183d5b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkMatchStatusQueue; // @synthesize checkMatchStatusQueue=_checkMatchStatusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkMatchStatusTimer; // @synthesize checkMatchStatusTimer=_checkMatchStatusTimer;
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) _Bool productionSigned; // @synthesize productionSigned=_productionSigned;
@property(nonatomic) _Bool deniedProductionEnvironment; // @synthesize deniedProductionEnvironment=_deniedProductionEnvironment;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *originalBundleIdentifier; // @synthesize originalBundleIdentifier=_originalBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)deleteInviteSession;	// IMP=0x0010000000183613
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000182f84
- (void)cancelOutstandingCheckMatchStatus;	// IMP=0x0010000000182efb
- (_Bool);	// IMP=0x0010000000181fc3
- (void)checkMatchStatus;	// IMP=0x0010000000181ac2
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181a5c
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000181886
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00100000001815c0
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x001000000018156b
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000018143d
- (_Bool)isExtension;	// IMP=0x0010000000181435
- (_Bool)isUIService;	// IMP=0x001000000018142d
- (_Bool)isGameCenter;	// IMP=0x00100000001813df
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000180f1e
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetCache:(id)arg1;	// IMP=0x0010000000180da0
- (void)_setupCache;	// IMP=0x0010000000180d9a
- (id)credentialForPlayer:(id)arg1;	// IMP=0x0010000000180c23
- (id)transportWithCredential:(id)arg1;	// IMP=0x0010000000180b6c
- (void)dealloc;	// IMP=0x0010000000180a78
- (void)updateIfRecentlyInstalled;	// IMP=0x0010000000180673
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x001000000017ff6e
- (void)initializeInitializationStateMachine;	// IMP=0x001000000017fe08
- (void)invalidateStoreFrontDependentObjects;	// IMP=0x00100000000931b5
- (id)transactionGroupIfCacheExistsForPlayer:(id)arg1;	// IMP=0x0010000000091b0b
- (id)transactionGroupForPlayer:(id)arg1;	// IMP=0x0010000000091a75
- (id)_managedObjectContextForPlayer:(id)arg1;	// IMP=0x00100000000918f6
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000018a64f
- (oneway void)resetLoginCancelCount;	// IMP=0x001000000018a394
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000018a302
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018a1f0
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018a124
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000189ea0
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000188f48
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000188cc7
- (oneway void)getAuthenticatedPlayerCredential:(CDUnknownBlockType)arg1;	// IMP=0x00100000001888a2
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000001884f4
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000187fe7
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001879a4
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001873ea
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000186d17
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000186d00
- (oneway void)messagesDidReceiveGameCenterURL:(id)arg1 senderHandle:(id)arg2 contactID:(id)arg3;	// IMP=0x00100000001861f4
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001861dd
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000185f50
- (void)didEnterForeground;	// IMP=0x001000000018bbea
- (void)updateAppInitState;	// IMP=0x001000000018bafd
- (id)verifyAuthorized;	// IMP=0x001000000018ae37
- (id)appInitState;	// IMP=0x001000000018ae1e
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x001000000018ae05
- (void)stateDidChange;	// IMP=0x001000000018ad8a
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x001000000018ac4d
- (void)sendAuthenticationDidChangeNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018a9ca
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001934dc
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000192ed2
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x0010000000192eb9
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x0010000000192e32
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x0010000000192d1b
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192569
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000191dc1
- (oneway void)setLogBits:(int)arg1;	// IMP=0x0010000000191b62
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001913dc
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000191333
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000190d2a
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000190cba
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x0010000000190b5f
- (oneway void)refreshPendingDataTypes;	// IMP=0x0010000000190a3c
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x001000000019040f
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x0010000000190259
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x001000000019003b
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x001000000018fe42
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x001000000018fc49
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x001000000018fa62
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;	// IMP=0x001000000018f883
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;	// IMP=0x001000000018f6a4
- (oneway void)localPlayerAcceptedCustomTournamentInvite;	// IMP=0x001000000018f487
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x001000000018f285
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x001000000018f0bf
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x001000000018eef9
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x001000000018ec68
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x001000000018ea6f
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x001000000018e890
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x001000000018e697
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x001000000018e406
- (oneway void)cancelInviteWithNotification:(id)arg1;	// IMP=0x001000000018e175
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x001000000018dee4
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x001000000018dc53
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x001000000018da31
- (oneway void)fetchTurnBasedData;	// IMP=0x001000000018d872
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x001000000018d6ac
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x001000000018d4e6
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x001000000018d2b7
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x001000000018d0f1
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x001000000018cf2b
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x001000000018cd65
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x001000000018cb5a
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x001000000018c994
- (oneway void)resetNetworkActivity;	// IMP=0x001000000018c7f5
- (oneway void)endNetworkActivity;	// IMP=0x001000000018c656
- (oneway void)beginNetworkActivity;	// IMP=0x001000000018c4b7
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x001000000018c29f
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x001000000019529e
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x00100000001951cf
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x0010000000194ba1
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0010000000194b0e
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0010000000194a7b
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x00100000001949e8
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x00100000001946c7
- (void)_removeDelayedRequestStore;	// IMP=0x0010000000193f33
- (void)_setupDelayedRequestsWriters;	// IMP=0x0010000000193d0d
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x0010000000193ada
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0010000000193a6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

