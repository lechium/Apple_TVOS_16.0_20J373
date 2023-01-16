//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
{
}

+ (_Bool)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0040000000047eee
+ (_Bool)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000047da1
+ (_Bool)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000047d7f
+ (_Bool)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000047d5d
+ (_Bool)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000047d3b
+ (_Bool)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000047d29
+ (_Bool)completeNotificationForInstallingBundleIdentifier:(id)arg1;	// IMP=0x0010000000047d0a
+ (_Bool)completeNotificationForFailedBundleIdentifier:(id)arg1;	// IMP=0x0010000000047ceb
+ (_Bool)completeNotificationForCanceledBundleIdentifier:(id)arg1;	// IMP=0x0010000000047ccc
+ (id)databaseTable;	// IMP=0x0010000000047cbf

@end
