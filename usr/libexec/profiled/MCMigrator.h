//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCNotifier, NSFileManager;

@interface MCMigrator : NSObject
{
    _Bool _systemProfileStorageWasMigratedFromLegacyStorage;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    MCNotifier *_notifier;	// 24 = 0x18
}

+ (id)stringWithContext:(int)arg1;	// IMP=0x004000000002ba71
- (void).cxx_destruct;	// IMP=0x002000000003a60f
@property(nonatomic) _Bool systemProfileStorageWasMigratedFromLegacyStorage; // @synthesize systemProfileStorageWasMigratedFromLegacyStorage=_systemProfileStorageWasMigratedFromLegacyStorage;
@property(retain, nonatomic) MCNotifier *notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)_checkForStaleAPNCarrierFile;	// IMP=0x001000000003a25c
- (void)_wakeDaemonsPostMigration;	// IMP=0x001000000003a20f
- (void)_correctCloudConfigurationIfNecessary;	// IMP=0x0010000000039ba0
- (void)_validateCloudConfiguration;	// IMP=0x0010000000039911
- (void)_tagIMAPAccountsWithProfileAndPayloadProperties;	// IMP=0x00100000000398ad
- (void)_tagManagedAccounts;	// IMP=0x001000000003951e
- (void)_correctInstallOptionsOnProfileStubs;	// IMP=0x0010000000039081
- (void)_removeUnmanageableApps;	// IMP=0x0010000000038b9d
- (void)_cleanUpAppConfiguration;	// IMP=0x00100000000381d9
- (void)_removeSupervisionProfiles;	// IMP=0x0010000000037ec6
- (id)_generatedManifestIfNeededFromOrderedProfiles:(id)arg1 hiddenProfiles:(id)arg2 existingManifest:(id)arg3;	// IMP=0x0010000000037cf4
- (void)_profilesFromStubsAtPath:(id)arg1 orderedProfiles:(id *)arg2 hiddenProfiles:(id *)arg3;	// IMP=0x00100000000377ff
- (id)_profilesFromManifestAtPath:(id)arg1;	// IMP=0x001000000003748e
- (void)_fixManifestFromStubsIfNecessaryWithStubPath:(id)arg1 manifestPath:(id)arg2;	// IMP=0x00100000000371f7
- (void)_fixManifestFromStubsIfNecessary;	// IMP=0x001000000003713c
- (void)_migrateLostModeLastLocationRequestDate;	// IMP=0x0010000000036bc5
- (void)_migrateSharedDeviceConfiguration;	// IMP=0x0010000000036a9e
- (void)_applyImpliedSettings;	// IMP=0x0010000000036918
- (void)_updateProfileRestrictions;	// IMP=0x001000000003659c
- (id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1;	// IMP=0x001000000003631b
- (void)_updateClientRestrictions;	// IMP=0x0010000000035f4c
- (void)_migrateClientRestrictions;	// IMP=0x00100000000357bb
- (void)_migrateSettings;	// IMP=0x0010000000034648
- (void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(_Bool)arg4;	// IMP=0x0010000000034564
- (void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5;	// IMP=0x00100000000341c4
- (void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5;	// IMP=0x0010000000033e01
- (void)_applyDefaultSettings;	// IMP=0x0010000000033671
- (void)_removeOriginalCopies;	// IMP=0x0010000000033350
- (void)_transferTagsToProfileStubs;	// IMP=0x0010000000032f68
- (_Bool)_applyAccountTagsToProfile:(id)arg1;	// IMP=0x0010000000032b91
- (void)_transferInstallationDatesFromOriginalProfiles;	// IMP=0x00100000000325a5
- (void)_migrateOTAProfiles;	// IMP=0x0010000000031638
- (void)_transferRemovalPasswordsFromOriginalProfiles;	// IMP=0x0010000000030eda
- (void)_transferSignerCertificates;	// IMP=0x001000000003059f
- (void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1;	// IMP=0x00100000000302d4
- (id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1;	// IMP=0x001000000002fc81
- (void)_removeOrphanedManifestEntries;	// IMP=0x001000000002faee
- (void)_createStubs;	// IMP=0x001000000002f2ec
- (void)_removeDuplicatedHiddenIdentifiers;	// IMP=0x001000000002ef78
- (void)_removeUnusedManifestArrays;	// IMP=0x001000000002ee15
- (void)_migrateManifestLocation;	// IMP=0x001000000002e8db
- (void)_moveFilesToPublicDirectories;	// IMP=0x001000000002e6e9
- (void)_removeLegacyProfileStorageDirectory;	// IMP=0x001000000002e576
- (_Bool)_isDirectoryEmptyAtPath:(id)arg1;	// IMP=0x001000000002e4d4
- (_Bool)_isLegacyProfileStoragePresent;	// IMP=0x001000000002e45c
- (_Bool)_shouldAttemptToMigrateLegacyProfileStorage;	// IMP=0x001000000002e405
- (_Bool)_copyAlmostAtomicallyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e0d4
- (id)_attributeDictionaryForProfileStorageWithPosixPermissions:(unsigned long long)arg1;	// IMP=0x001000000002e00d
- (id)_attributesForUserProfileStorageItem;	// IMP=0x001000000002dff6
- (id)_attributesForSystemProfileStorageItems;	// IMP=0x001000000002dfdf
- (void)_setAttributesOnSystemProfileStorageDirectory;	// IMP=0x001000000002deb2
- (void)_removeExistingSystemProfileStorageDirectoryBlockingMigration;	// IMP=0x001000000002dd7a
- (void);	// IMP=0x001000000002dbe5
- (void)_createSystemProfileStorageDirectoryMigratingFromLegacyStorageIfNecessary;	// IMP=0x001000000002dae1
- (void)_sendCloudConfigurationChangedNotificationIfWeMigratedLegacyProfileStorage;	// IMP=0x001000000002da88
- (void)_fixPermissionsOnTheSystemProfileLibraryDirectoryAndContents;	// IMP=0x001000000002d974
- (void)_createSystemGroupContainerAndMoveFiles;	// IMP=0x001000000002d7b1
- (void)_removeInvalidOptionsFromLegacyCloudConfiguration;	// IMP=0x001000000002d61e
- (void)_createDirectories;	// IMP=0x001000000002d4de
- (void)_fixDirectoryAtPath:(id)arg1 permissions:(id)arg2;	// IMP=0x001000000002d411
- (void)_createDirectoryAtPath:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000002d297
- (void)_createDirectoryAtPath:(id)arg1;	// IMP=0x001000000002d1e7
- (void)migrateWithPostMigrationTaskQueue:(id)arg1;	// IMP=0x001000000002c884
- (void)migrateCleanupMigratorWithContext:(int)arg1;	// IMP=0x001000000002c1c2
- (void)_removeMDMProfileIfUserEnrollment;	// IMP=0x001000000002bea0
- (void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2;	// IMP=0x001000000002ba92
- (void)_removeOSXServerPayloadAccount;	// IMP=0x001000000002ba24
- (void)_removeiPCUCertificates;	// IMP=0x001000000002b778
- (_Bool)_isMultiUserMode;	// IMP=0x001000000002b6dd
- (void)_migratePasscodeDidRestore:(_Bool)arg1 passcodeWasSet:(_Bool)arg2 historyRequired:(_Bool)arg3;	// IMP=0x001000000002b650
- (id)_lastUserMigratedBuildVersion;	// IMP=0x001000000002b5f6
- (id)_lastSystemMigratedBuildVersion;	// IMP=0x001000000002b59c
- (void)setUserMetadataDictionary:(id)arg1;	// IMP=0x001000000002b544
- (id)userMetadataDictionary;	// IMP=0x001000000002b45c
- (void)setSystemMetadataDictionary:(id)arg1;	// IMP=0x001000000002b404
- (id)systemMetadataDictionary;	// IMP=0x001000000002b31c
- (id)init;	// IMP=0x001000000002b2a3

@end
