//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSURL, _SWCGeneration;
@protocol OS_dispatch_source;

@interface SWCDatabase : NSObject
{
    NSMutableOrderedSet *_entries;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_saveTimer;	// 24 = 0x18
    unsigned int _shared:1;	// 32 = 0x20
    _SWCGeneration *_settingsGeneration;	// 40 = 0x28
    NSNumber *_launchServicesDatabaseGeneration;	// 48 = 0x30
    NSData *_enterpriseState;	// 56 = 0x38
}

+ (id)queue;	// IMP=0x002000000001142c
+ (id)loadContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001112a
+ (id)new;	// IMP=0x00100000000110fc
+ (id)sharedDatabase;	// IMP=0x001000000001104c
+ (id)_archivedDataFromStorage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000147da
+ (id)_storageFromArchivedData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014701
- (void).cxx_destruct;	// IMP=0x001000000001352d
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(readonly) _SWCGeneration *settingsGeneration; // @synthesize settingsGeneration=_settingsGeneration;
- (void)scheduleNextSave;	// IMP=0x00100000000134c1
- (_Bool)saveReturningError:(id *)arg1;	// IMP=0x001000000001319e
- (void)cleanOldSettings;	// IMP=0x0010000000012da2
- (void)enumerateSettingsDictionariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012d8c
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x0010000000012cd0
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2;	// IMP=0x00100000000128c0
- (void)setSettingsDictionary:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x001000000001280b
- (id)settingsDictionaryForServiceSpecifier:(id)arg1;	// IMP=0x00100000000127f5
- (void)updateEntriesForDomain:(id)arg1 canonicalEntries:(id)arg2;	// IMP=0x001000000001249a
- (void)removeAllEntries;	// IMP=0x0010000000012308
- (_Bool)removeEntries:(id)arg1;	// IMP=0x0010000000012291
- (_Bool)addEntries:(id)arg1;	// IMP=0x001000000001221a
- (id)entryMatchingServiceSpecifier:(id)arg1;	// IMP=0x0010000000012131
- (id)entryMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3;	// IMP=0x0010000000011dcc
- (void)enumerateEntriesMatchingServiceSpecifierWithExactDomain:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011ce8
- (void)enumerateEntriesMatchingService:(id)arg1 exactDomain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011be5
- (void)enumerateEntriesMatchingServiceSpecifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011af1
- (void)enumerateEntriesMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011ac2
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001193a
- (void)enumerateEntries:(id)arg1 matchingServiceSpecifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000001184a
- (void)enumerateEntries:(id)arg1 matchingService:(id)arg2 domain:(id)arg3 appID:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000011541
- (_Bool)mayContainEntryMatchingServiceSpecifier:(id)arg1;	// IMP=0x0010000000011539
- (id)entry:(id)arg1;	// IMP=0x00100000000114ad
@property(readonly) NSURL *storageURL;
- (void)receiveSIGTERMSignal;	// IMP=0x00100000000112fa
- (id)init;	// IMP=0x0010000000011105
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x0010000000014b70
- (void)_scheduleSave;	// IMP=0x0010000000014898
- (id)_storageForArchiving;	// IMP=0x00100000000145e0
- (void)_removeSettingsForKeysNoSave:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x00100000000144a5
- (id)_initShared;	// IMP=0x001000000001405b
- (_Bool)_deleteStorageItemReturningError:(id *)arg1;	// IMP=0x00100000000150cd
- (_Bool)_updateStorageItemWithData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001504f
- (id)_dataFromStorageReturningError:(id *)arg1;	// IMP=0x0010000000014fd0
- (id)_dataURLReturningError:(id *)arg1;	// IMP=0x0010000000014f18

@end

