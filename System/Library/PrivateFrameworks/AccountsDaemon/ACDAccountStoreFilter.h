//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDAccountStore, NSString;

__attribute__((visibility("hidden")))
@interface ACDAccountStoreFilter : NSObject
{
    ACDAccountStore *_backingAccountStore;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00100000000607c6
- (void).cxx_destruct;	// IMP=0x000000000006b45d
@property(readonly, nonatomic) ACDAccountStore *backingAccountStore; // @synthesize backingAccountStore=_backingAccountStore;
- (void)registerMonitorForAccountsOfTypes:(id)arg1 propertiesToPrefetch:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b1cf
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x000000000006af29
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ac89
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a9e3
- (void)runAccountMigrationPlugins:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a73d
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a497
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a1dd
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069f3d
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069c86
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000699ae
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;	// IMP=0x000000000006976d
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000693c4
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069165
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000068ea8
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000068c18
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000689b9
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006874f
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000684e5
- (void)handleURL:(id)arg1;	// IMP=0x000000000006840b
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000681a1
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067f42
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067ce3
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067a84
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000676d1
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067153
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000670be
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066e0d
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066d87
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066d01
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066c7b
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006698a
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066904
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066864
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000667de
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066758
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000666d2
- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006614f
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065bd1
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065b4b
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006582c
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000657a6
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065720
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006569a
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065614
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000655a2
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006551c
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065496
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065424
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006539e
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065318
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065292
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006520c
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065186
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000650f1
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006507f
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064eec
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064d94
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064d0e
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064c88
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064c02
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064aaa
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000647ec
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064766
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064507
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000642a8
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063fea
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063e84
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063769
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000632a6
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062d5c
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062bf6
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062b84
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000628df
- (void)setNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000000062893
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062634
- (_Bool)_clientHasPermissionToAddAccount:(id)arg1;	// IMP=0x0000000000061b2c
- (_Bool)_isClientPermittedToRemoveAccount:(id)arg1;	// IMP=0x00000000000617c3
- (_Bool)_isClientPermittedToAccessAccount:(id)arg1;	// IMP=0x000000000006174c
- (id)_appPermissionsForAccountTypeIdentifier:(id)arg1;	// IMP=0x000000000006148e
- (_Bool)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000061201
- (_Bool)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1;	// IMP=0x0000000000061110
- (_Bool)isClientEntitledToAccessAccountTypeWithIdentifier:(id)arg1;	// IMP=0x00000000000609ca
- (_Bool)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2;	// IMP=0x0000000000060944
- (_Bool)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2;	// IMP=0x0000000000060874
- (id)initWithBackingAccountStore:(id)arg1;	// IMP=0x0000000000060809
- (id)init;	// IMP=0x00000000000607de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

