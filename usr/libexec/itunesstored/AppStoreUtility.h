//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppStoreUtility : NSObject
{
}

+ (void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000001bb890
+ (id)_newRequestWithManifest:(id)arg1;	// IMP=0x00100000001bb7fb
+ (id)_newManifestWithManifestType:(long long)arg1;	// IMP=0x00100000001bb7c0
+ (void)_checkClaimsForAccountID:(id)arg1 claimStyle:(long long)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(_Bool)arg4 ignoresPreviousClaimAttempts:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001bb203
+ (void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001baefb
+ (void)sendAppStoreSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001bacfd
+ (void)sendActivitySubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001baaff
+ (void)sendNewsSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001ba904
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(long long)arg4;	// IMP=0x00100000001ba68c
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001ba677
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(long long)arg3;	// IMP=0x00100000001ba65b
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000001ba63f
+ (void)sendClusterMappings:(id)arg1;	// IMP=0x00100000001ba639
+ (void)restoreDemotedAppsWithBundleIDs:(id)arg1;	// IMP=0x00100000001ba16e
+ (void)repairAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b9dc7
+ (void)reloadUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b9b7c
+ (void)postBulletinWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3 actionButtonTitle:(id)arg4 actionButtonURL:(id)arg5 launchURL:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000001b9853
+ (void)installManagedAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b94b6
+ (void)hidePendingUpdatesBadge;	// IMP=0x00100000001b92ed
+ (void)claimAppsWithPurchase:(id)arg1;	// IMP=0x00100000001b8c71
+ (void)checkFirstPartyClaimsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b8c4a
+ (void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b8c23
+ (void)checkDownloadQueue;	// IMP=0x00100000001b87f4
+ (void)checkClaimsEstablishingActiveAccounts:(_Bool)arg1 ignoringPreviousClaimAttempts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b87c7

@end

