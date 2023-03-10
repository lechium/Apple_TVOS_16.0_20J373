//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSDServiceController, IDSRegistrationController, IDSSystemAccountAdapter, MISSING_TYPE, NSArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString;
@protocol IDSDAccountControllerDelegate, IDSDAccountControllerDeviceSupport, OS_dispatch_queue;

@interface IDSDAccountController : NSObject
{
    NSMutableDictionary *_accountIDMap;	// 8 = 0x8
    NSMutableSet *_enabledAccounts;	// 16 = 0x10
    NSMutableDictionary *_deviceProperties;	// 24 = 0x18
    NSRecursiveLock *_accountIDMapLock;	// 32 = 0x20
    _Bool _accountsLoaded;	// 40 = 0x28
    _Bool _isLoading;	// 41 = 0x29
    _Bool _hasHardDeregistered;	// 42 = 0x2a
    NSObject<OS_dispatch_queue> *_authkitQueue;	// 48 = 0x30
    IDSSystemAccountAdapter *_systemAccountAdapter;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
    IDSRegistrationController *_registrationController;	// 72 = 0x48
    id <IDSDAccountControllerDeviceSupport> _deviceSupport;	// 80 = 0x50
    id <IDSDAccountControllerDelegate> _delegate;	// 88 = 0x58
    CUTDeferredTaskQueue *_storeAccountTask;	// 96 = 0x60
}

+ (_Bool)isDefaultPairedDeviceFromID:(id)arg1 accountUniqueID:(id)arg2 serviceName:(id)arg3;	// IMP=0x0020000000216660
+ (id)sharedInstance;	// IMP=0x00100000002165a0
- (void).cxx_destruct;	// IMP=0x00200000002403b0
@property(readonly, nonatomic) CUTDeferredTaskQueue *storeAccountTask; // @synthesize storeAccountTask=_storeAccountTask;
@property(retain, nonatomic) id <IDSDAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasHardDeregistered; // @synthesize hasHardDeregistered=_hasHardDeregistered;
- (id)deviceCertificateForService:(id)arg1 uri:(id)arg2;	// IMP=0x001000000023fff0
- (void)authKitAccountUpdate:(id)arg1;	// IMP=0x001000000023fbc0
- (_Bool)isiCloudHSA2;	// IMP=0x001000000023f930
- (void)loadDeviceProperties;	// IMP=0x001000000023ecb0
- (void)saveDevicePropertiesWithOldKeys:(id)arg1;	// IMP=0x001000000023e610
- (void)updateDevicePropertiesWithDevices:(id)arg1;	// IMP=0x001000000023dda0
- (void)_updateDeviceProperties;	// IMP=0x001000000023dc50
- (id)propertiesForDeviceWithUniqueID:(id)arg1;	// IMP=0x001000000023dba0
- (void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2;	// IMP=0x001000000023d370
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isCloudConnected:(_Bool)arg3;	// IMP=0x001000000023d180
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isNearby:(_Bool)arg3;	// IMP=0x001000000023cf90
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isConnected:(_Bool)arg3;	// IMP=0x001000000023cda0
- (id)publicKeyForDeviceID:(id)arg1;	// IMP=0x001000000023c730
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x001000000023c1d0
- (id)pushTokenForDeviceID:(id)arg1;	// IMP=0x001000000023bc70
- (id)deviceIDForPushToken:(id)arg1;	// IMP=0x001000000023b4b0
- (id)cloudPairedIDForDeviceID:(id)arg1;	// IMP=0x001000000023b3f0
- (void)_kickRemoteCacheWipe;	// IMP=0x001000000023aa40
- (void)_registerForAllRegistrationsSucceeded;	// IMP=0x001000000023a5e0
- (_Bool)isiTunesSignedIn;	// IMP=0x001000000023a580
- (_Bool)isiCloudSignedIn;	// IMP=0x001000000023a520
- (_Bool)hasiCloudAccount;	// IMP=0x001000000023a470
- (void)issueGetDependentAndGetHandlesRequest;	// IMP=0x001000000023a1b0
- (void)issueGetDependentRequestForAccount:(id)arg1;	// IMP=0x001000000023a100
- (void)updateExpiredDependent;	// IMP=0x0010000000239d90
- (void)_resumeGDRReAuthenticateIfNecessary;	// IMP=0x0010000000239b20
- (void)issueGetDependentRequest;	// IMP=0x00100000002397a0
- (void)issueDependentIDQueriesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000238b90
- (_Bool)hasActiveSMSAccount;	// IMP=0x0010000000238800
- (id)accountsOfAdHocType:(unsigned int)arg1;	// IMP=0x00100000002384a0
- (id)registeredAccountsOnService:(id)arg1;	// IMP=0x00100000002381a0
- (id)enabledAccountsOnService:(id)arg1;	// IMP=0x0010000000237e30
- (id)accountsOnService:(id)arg1;	// IMP=0x0010000000237af0
- (void)_storeAccounts;	// IMP=0x00100000002371c0
- (MISSING_TYPE *)delayedSaveSettings;	// IMP=0x0010000000237160
- (_Bool)accountsLoaded;	// IMP=0x0010000000237140
- (_Bool)isLoading;	// IMP=0x0010000000237100
- (void)_loadAndEnableStoredLegacyAccounts;	// IMP=0x00100000002356e0
- (_Bool)_loadAndEnableStoredAccounts;	// IMP=0x0010000000233e60
- (void)_attachOrphanedPhoneAliases:(id)arg1 toRecipientAccounts:(id)arg2 withAccountsToEnable:(id)arg3;	// IMP=0x00100000002336c0
- (void)_addAccountDuringInitialSetup:(id)arg1;	// IMP=0x0010000000233600
- (id)_createAccountWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3;	// IMP=0x0010000000233520
- (void)loadStoredAccounts;	// IMP=0x0010000000233070
- (void)_servicesRemoved:(id)arg1;	// IMP=0x0010000000232b20
- (void)_servicesChanged;	// IMP=0x0010000000232ad0
- (void)_cleanupLegacyLocalAccounts;	// IMP=0x0010000000230df0
- (void)_cleanupLegacyAccounts;	// IMP=0x00100000002307e0
- (_Bool)hasForcedReRegistered;	// IMP=0x0010000000230460
- (id)_preferencesOnDomain:(id)arg1;	// IMP=0x0010000000230350
- (void)_persistAccounts:(id)arg1;	// IMP=0x001000000022ffd0
- (id)_legacyAccountsOnService:(id)arg1;	// IMP=0x001000000022f7b0
- (void)_migrateLegacyAccounts2;	// IMP=0x001000000022f190
- (void)_migrateLegacyAccounts1;	// IMP=0x001000000022dd10
- (void)_migrateLegacyAccounts;	// IMP=0x001000000022dcd0
- (void)_setupLinkedAccounts;	// IMP=0x001000000022cc30
- (void)_setupAdHocAccounts;	// IMP=0x001000000022c820
- (void)_setupAdHocAccountsForPrimaryAccount:(id)arg1;	// IMP=0x001000000022a430
- (void)stopLocalSetup;	// IMP=0x001000000022a320
- (void)startLocalSetup;	// IMP=0x001000000022a1c0
- (_Bool)isTraditionalLocalSetupEnabled;	// IMP=0x001000000022a150
- (_Bool)isLocalSetupEnabled;	// IMP=0x001000000022a0e0
- (void)_setupForLocal;	// IMP=0x001000000022a0a0
- (void)__pairedDeviceStateUpdated;	// IMP=0x001000000022a090
- (void)_setupUsingRemoteInfo;	// IMP=0x001000000022a080
- (_Bool)_isAccountInfoRegistered:(id)arg1;	// IMP=0x0010000000229f90
- (id)_strippedAccountInfo:(id)arg1;	// IMP=0x0010000000229e70
- (void)_cleanupLocalAccounts;	// IMP=0x0010000000229480
- (void)_refreshLocalAccounts;	// IMP=0x0010000000228f40
- (void)_setupLocalAccounts;	// IMP=0x0010000000228870
- (void)setupLocalAccountForService:(id)arg1;	// IMP=0x0010000000228450
- (id)threadSafeServiceWithAccountUniqueID:(id)arg1;	// IMP=0x0010000000227f90
- (id)existingAccountOnService:(id)arg1 withType:(int)arg2 loginID:(id)arg3;	// IMP=0x0010000000227560
- (id)primaryAccountForAdHocAccount:(id)arg1;	// IMP=0x0010000000227170
- (_Bool)isEnabledAccount:(id)arg1;	// IMP=0x00100000002270e0
- (id)accountUniqueIDsWithType:(int)arg1;	// IMP=0x0010000000226e20
- (id)accountsWithType:(int)arg1;	// IMP=0x0010000000226ba0
- (id)accountWithServiceName:(id)arg1 myID:(id)arg2;	// IMP=0x0010000000225650
- (id)accountWithUniqueID:(id)arg1;	// IMP=0x00100000002253b0
- (id)accountWithServiceName:(id)arg1 loginID:(id)arg2;	// IMP=0x00100000002246f0
- (id)accountWithServiceName:(id)arg1 aliasURI:(id)arg2;	// IMP=0x0010000000223a80
- (id)accountsOnService:(id)arg1 withType:(int)arg2;	// IMP=0x0010000000223760
- (id)deviceAccountOnService:(id)arg1;	// IMP=0x0010000000223480
- (id)appleIDAccountOnService:(id)arg1;	// IMP=0x00100000002231a0
- (id)localAccountOnService:(id)arg1;	// IMP=0x0010000000222ec0
- (id)accountOnService:(id)arg1 withLoginID:(id)arg2;	// IMP=0x0010000000222560
- (id)accountOnService:(id)arg1 withVettedAliasURI:(id)arg2;	// IMP=0x0010000000221d00
- (id)accountOnService:(id)arg1 withAliasURI:(id)arg2;	// IMP=0x00100000002214a0
- (void)disableAccountWithUniqueID:(id)arg1;	// IMP=0x00100000002212f0
- (void)enableAccountWithUniqueID:(id)arg1;	// IMP=0x0010000000221130
- (void)_enableAccountWithUniqueID:(id)arg1;	// IMP=0x001000000021ff10
- (void)enablePrimaryAccountWithUniqueID:(id)arg1;	// IMP=0x001000000021f430
- (void)_disableAccountWithUniqueID:(id)arg1;	// IMP=0x001000000021ea70
- (void)_disablePrimaryAccountWithUniqueID:(id)arg1 userAction:(_Bool)arg2;	// IMP=0x001000000021e0a0
- (void)disablePrimaryAccountWithUniqueID:(id)arg1;	// IMP=0x001000000021e040
- (void)forceRemoveAccount:(id)arg1;	// IMP=0x001000000021ddb0
- (void)removeAccount:(id)arg1;	// IMP=0x001000000021dbb0
- (void)addAccount:(id)arg1;	// IMP=0x001000000021d9b0
- (void)addPrimaryAccount:(id)arg1;	// IMP=0x001000000021d180
- (void)_addAccount:(id)arg1;	// IMP=0x001000000021c900
- (void)_cleanUpAccountCredentialStore;	// IMP=0x001000000021c700
- (void)_cleanUpAccountCredentialForRemovedAccount:(id)arg1;	// IMP=0x001000000021c530
- (id)_inUseProfileIDs;	// IMP=0x001000000021c280
- (id)_inUseUsernames;	// IMP=0x001000000021bfd0
- (void)_removePrimaryAccount:(id)arg1;	// IMP=0x001000000021bac0
- (void)_removeAccount:(id)arg1;	// IMP=0x001000000021b570
- (void)triggerFinalDeregister;	// IMP=0x001000000021b1f0
- (void)hardDeregister;	// IMP=0x001000000021af50
@property(readonly, nonatomic) NSSet *enabledAccounts;
@property(readonly, nonatomic) NSArray *accounts;
- (void)dealloc;	// IMP=0x001000000021adc0
- (id)init;	// IMP=0x001000000021ac80
- (id)initWithServiceController:(id)arg1 registrationController:(id)arg2 systemAccountAdapter:(id)arg3 deviceSupport:(id)arg4;	// IMP=0x0010000000217600
- (id)userDefaults;	// IMP=0x00100000002175d0
- (id)registrationListener;	// IMP=0x00100000002175a0
- (id)daemon;	// IMP=0x0010000000217570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

