//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ACAccount (CalUserManagement)
@property(readonly, nonatomic) NSString *cal_personaIdentifier;
- (_Bool)_useSSLForSchemeString:(id)arg1;	// IMP=0x00300000000570e1
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;	// IMP=0x0030000000056fae
- (id)_calDAVDataclassProperties;	// IMP=0x0030000000056ec5
- (void)_setCalInternalValue:(id)arg1 forAccountPropertyKey:(id)arg2;	// IMP=0x0030000000056c06
- (void)_setIsEnabled:(_Bool)arg1 forDataclass:(id)arg2;	// IMP=0x0030000000056afc
- (id)_schemeStringForUseSSL:(_Bool)arg1;	// IMP=0x003000000000690f
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;	// IMP=0x0030000000055f2e
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;	// IMP=0x0030000000055c46
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;	// IMP=0x0030000000055b5a
- (_Bool)_dataclassIsEnabled:(id)arg1;	// IMP=0x003000000000629a
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;	// IMP=0x0030000000055937
- (id)_accountPropertiesKeys;	// IMP=0x00300000000557a3
- (id)calSyncingAccountUsingChildAccounts:(id)arg1;	// IMP=0x003000000005545e
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;	// IMP=0x0030000000006d29
- (id)valueForAccountPropertyKey:(id)arg1;	// IMP=0x003000000000672b
- (_Bool)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;	// IMP=0x00300000000551a9
- (_Bool)removePrincipalWithUID:(id)arg1;	// IMP=0x00300000000550a0
- (void)removeAccountPropertyForKey:(id)arg1;	// IMP=0x0030000000054f24
- (id)firstDifferentPropertyWithAccount:(id)arg1;	// IMP=0x0030000000054ecf
- (id)diffWithAccount:(id)arg1;	// IMP=0x0030000000054ebb
- (void)createDictionaryForPrincipalWithUID:(id)arg1;	// IMP=0x0030000000054e1d
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;	// IMP=0x0030000000054d6e
- (id)calPrincipalURLForMainPrincipal;	// IMP=0x0030000000054d0f
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;	// IMP=0x0030000000054b51
@property _Bool calUseExternalURL;
@property(copy) NSString *calRootFolderID;
@property(copy) NSString *calIdentityEmailAddress;
@property(copy) NSURL *calExternalURL;
@property(readonly) _Bool calIsDirty;
@property(readonly) NSURL *calExternalExchangeWebServicesURL;
@property(readonly) NSURL *calExchangeWebServicesURL;
@property(readonly) _Bool calIsiCloudCalDAVAccount;
@property(copy) NSString *calWebServicesRecordGUID;
@property _Bool calUseKerberos;
@property _Bool calSkipCredentialVerification;
@property _Bool calAttachmentDownloadHasTakenPlace;
@property _Bool calServerSyncHasTakenPlace;
@property _Bool calLocalDataMigrationHasTakenPlace;
@property(retain) NSString *calCollectionSetName;
@property(readonly) _Bool calSupportsPush;
@property _Bool calUseSSL;
@property(copy) NSURL *calServerURL;
@property long long calRefreshInterval;
@property _Bool calPushDisabled;
- (void)setCalPrincipals:(id)arg1;	// IMP=0x0030000000054136
@property(copy) NSNumber *calPort;
@property(copy) NSString *calMainPrincipalUID;
@property _Bool calIsEnabledForReminders;
@property _Bool calIsEnabledForCalendar;
@property(retain) NSString *calHostname;
@property(readonly, copy) NSDictionary *calPrincipals;
@property(readonly) NSString *calAccountFullName;
@property(readonly) _Bool calIsRestrictedForCalendar;
@property(readonly) _Bool calIsMissingParentAccount;
@property(readonly) _Bool calIsExchangeAccount;
@property(readonly) _Bool calIsEnabled;
@property(readonly) _Bool calIsGenericCalDAVAccount;
@property(readonly) _Bool calIsCalDAVAccount;
@property(readonly) _Bool calIsAutoRefreshed;
@property(readonly) NSArray *calCalDAVChildAccounts;
@end

