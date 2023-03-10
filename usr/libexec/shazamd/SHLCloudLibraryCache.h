//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHLCloudLibraryCache : NSObject
{
    NSString *_processID;	// 8 = 0x8
    NSString *_containerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002d0e1
@property(readonly, copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, copy, nonatomic) NSString *processID; // @synthesize processID=_processID;
- (_Bool)migrateWithError:(id *)arg1;	// IMP=0x001000000002cfad
@property(readonly, nonatomic) _Bool needsMigration;
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x001000000002ce60
- (_Bool)undoTransactionWithError:(id *)arg1;	// IMP=0x001000000002cdd6
- (_Bool)startTransactionWithError:(id *)arg1;	// IMP=0x001000000002cc75
- (id)failedTaskPathForIdentifier:(id)arg1;	// IMP=0x001000000002cbf2
- (id)inflightTaskPathForIdentifier:(id)arg1;	// IMP=0x001000000002cb6f
- (id)zonePathForIdentifier:(id)arg1;	// IMP=0x001000000002caec
- (id)failedFolderPath;	// IMP=0x001000000002ca95
- (id)inflightFolderPath;	// IMP=0x001000000002ca3e
- (id)zonesFolderPath;	// IMP=0x001000000002c9e7
- (id)privateDatabaseTransactionPath;	// IMP=0x001000000002c990
- (id)privateDatabaseFolderPath;	// IMP=0x001000000002c939
- (id)currentDatabaseFolderPath;	// IMP=0x001000000002c884
- (id)cacheDirectory;	// IMP=0x001000000002c804
- (id)bundleDirectory;	// IMP=0x001000000002c784
- (id)rootDirectory;	// IMP=0x001000000002c6f9
- (id)legacyCacheDirectory;	// IMP=0x001000000002c648
- (_Bool)createPrivateDatabaseFolderPathWithError:(id *)arg1;	// IMP=0x001000000002c5b6
- (_Bool)doesPrivateDatabaseFolderPathExist;	// IMP=0x001000000002c529
- (_Bool)createTaskFolderPaths;	// IMP=0x001000000002c3d1
- (_Bool)doesTaskFolderPathsExist;	// IMP=0x001000000002c2d8
- (_Bool)createZoneFolderPath;	// IMP=0x001000000002c242
- (_Bool)doesZoneFolderPathExist;	// IMP=0x001000000002c1b5
- (_Bool)doesCacheDirectoryExist;	// IMP=0x001000000002c128
- (_Bool)createBundleDirectory;	// IMP=0x001000000002c092
- (_Bool)doesLegacyCacheDirectoryExist;	// IMP=0x001000000002c005
- (_Bool)subscriptionExistsForZoneIdentifier:(id)arg1;	// IMP=0x001000000002bf69
- (_Bool)removeSubscriptionForZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bec0
- (_Bool)storeSubscription:(id)arg1 forZoneIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002bd5e
- (id)zoneTokenForZoneIdentifier:(id)arg1;	// IMP=0x001000000002bbfc
- (id)databaseToken;	// IMP=0x001000000002ba8d
- (_Bool)removeTokenAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002ba08
- (_Bool)removeTokenForZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002b9b0
- (_Bool)removeDatabaseTokenWithError:(id *)arg1;	// IMP=0x001000000002b95a
- (_Bool)writeToken:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002b875
- (_Bool)storeZoneToken:(id)arg1 forZoneIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002b7b1
- (_Bool)storeDatabaseToken:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002b708
- (_Bool)zoneExistsForIdentifier:(id)arg1;	// IMP=0x001000000002b65d
- (_Bool)removeZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002b5a7
- (_Bool)storeZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002b4d0
- (id)taskForFilePath:(id)arg1;	// IMP=0x001000000002b35c
- (id)tasksForFolderPath:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000002af83
- (id)taskOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x001000000002ae9b
- (id)tasksOfType:(long long)arg1;	// IMP=0x001000000002ad9f
- (void)removeAllTasksOfType:(long long)arg1;	// IMP=0x001000000002ac0c
- (_Bool)removeTaskOfType:(long long)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002ab02
- (_Bool)storeTask:(id)arg1 ofType:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000002a9bf
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x001000000002a8a2
- (id)initWithCallingProcessIdentifier:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x001000000002a809

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

