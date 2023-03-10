//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_privateCoordinator;	// 16 = 0x10
    NSURL *_databaseURL;	// 24 = 0x18
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 32 = 0x20
    NSDictionary *_storeOptions;	// 40 = 0x28
}

+ (id)new;	// IMP=0x006000000005d692
- (void).cxx_destruct;	// IMP=0x000000000005fd6c
@property(readonly, copy, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;	// IMP=0x000000000005f796
- (long long)_versionForModel:(id)arg1;	// IMP=0x000000000005f725
- (id)_compatibleModelForStoreAtURL:(id)arg1;	// IMP=0x000000000005f248
- (id)_setUpContextForMigration;	// IMP=0x000000000005ef49
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;	// IMP=0x000000000005ed24
- (id)_fetchAllDataclassEntitles;	// IMP=0x000000000005eb1f
- (void)_migrateNameAttributeOfDataclassEntities;	// IMP=0x000000000005e993
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;	// IMP=0x000000000005e5f6
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;	// IMP=0x000000000005e1d0
- (_Bool)runReturningError:(id *)arg1;	// IMP=0x000000000005d79f
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;	// IMP=0x000000000005d6d5
- (id)init;	// IMP=0x000000000005d6aa

@end

