//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001994d0
+ (Class)interfaceClass;	// IMP=0x00100000001994bf
- (oneway void)checkAndUpdateArcadeSubscriberStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0020000000199e0a
- (oneway void)cancelNetworkManagerTasks;	// IMP=0x0010000000199dc6
- (oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000199c42
- (oneway void)refreshPreferencesWithDataType:(unsigned int)arg1;	// IMP=0x0010000000199b11
- (oneway void)refreshPreferences;	// IMP=0x0010000000199afa
- (oneway void)updateNotificationTopics;	// IMP=0x0010000000199ab6
- (oneway void)pingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000199aa4
- (oneway void)clearCaches;	// IMP=0x0010000000199768
- (oneway void)terminate;	// IMP=0x00100000001995a7
- (oneway void)openGameCenterSettings;	// IMP=0x0010000000199563
- (oneway void)openICloudSettings;	// IMP=0x001000000019951f
- (oneway void)openSettings;	// IMP=0x00100000001994db
- (oneway void)getCredentialInfoAndStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198f78
- (oneway void)getHostGameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198d51
- (oneway void)invokeASCAppLaunchTrampoline:(id)arg1 bundleID:(id)arg2 deepLink:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000198926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

