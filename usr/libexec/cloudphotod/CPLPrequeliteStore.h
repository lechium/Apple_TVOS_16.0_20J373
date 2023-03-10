//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLChangeSessionUpdate, CPLPrequeliteClientCacheMigrator, CPLPrequeliteTable, CPLPrequeliteVariable, CPLSimpleUpgradeHistory, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, PQLConnection;
@protocol OS_dispatch_queue;

@interface CPLPrequeliteStore : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_writeQueue;	// 16 = 0x10
    PQLConnection *_db;	// 24 = 0x18
    NSURL *_dbURL;	// 32 = 0x20
    _Bool _configuringDB;	// 40 = 0x28
    NSMutableSet *_modifiedVariables;	// 48 = 0x30
    id _globalVariableCacheIdentifier;	// 56 = 0x38
    CPLPrequeliteTable *_globals;	// 64 = 0x40
    CPLPrequeliteVariable *_libraryVersionVar;	// 72 = 0x48
    CPLPrequeliteVariable *_userIdentifierVar;	// 80 = 0x50
    CPLPrequeliteVariable *_lastQuarantineCountReportDateVar;	// 88 = 0x58
    CPLPrequeliteVariable *_clientCacheIdentifierVar;	// 96 = 0x60
    CPLPrequeliteVariable *_clientCacheIdentifierAsKnownByClient;	// 104 = 0x68
    CPLPrequeliteVariable *_libraryCreationDateVar;	// 112 = 0x70
    CPLPrequeliteVariable *_changeSessionUpdateVar;	// 120 = 0x78
    _Bool _hasCachedChangeSessionUpdate;	// 128 = 0x80
    CPLChangeSessionUpdate *_cachedChangeSessionUpdate;	// 136 = 0x88
    CPLPrequeliteVariable *_libraryOptionsVar;	// 144 = 0x90
    CPLPrequeliteVariable *_shouldUpdateDisabledFeaturesVar;	// 152 = 0x98
    CPLPrequeliteVariable *_disabledFeaturesDataVar;	// 160 = 0xa0
    CPLSimpleUpgradeHistory *_history;	// 168 = 0xa8
    CPLPrequeliteVariable *_derivativesFilterVar;	// 176 = 0xb0
    CPLPrequeliteVariable *_deactivatedVar;	// 184 = 0xb8
    CPLPrequeliteVariable *_universeNameVar;	// 192 = 0xc0
    Class _userIdentifierClass;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_isClientInSyncWithClientCacheQueue;	// 208 = 0xd0
    _Bool _isClientInSyncWithClientCache;	// 216 = 0xd8
    unsigned long long _resetOption;	// 224 = 0xe0
    NSString *_resetReason;	// 232 = 0xe8
    NSString *_wipeReason;	// 240 = 0xf0
    _Bool _failInsteadOfWipe;	// 248 = 0xf8
    _Bool _needsToReset;	// 249 = 0xf9
    _Bool _reentrencyGuard;	// 250 = 0xfa
    _Bool _didWipeLibrary;	// 251 = 0xfb
    int _upgradeEventJournal;	// 252 = 0xfc
    _Bool _mustFix22666940;	// 256 = 0x100
    _Bool _mustMigratePushQueue;	// 257 = 0x101
    CPLPrequeliteClientCacheMigrator *_clientCacheMigrator;	// 264 = 0x108
    _Bool _hasScheduledClientCacheDrop;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_vacuumQueue;	// 280 = 0x118
    _Bool _executingVacuum;	// 288 = 0x120
    _Bool _shouldProfile;	// 289 = 0x121
    _Bool _showStatsForAllTransactions;	// 290 = 0x122
    double _lastLongTransactionDate;	// 296 = 0x128
    NSMutableDictionary *_transactionStatistics;	// 304 = 0x130
    NSDate *_libraryCreationDate;	// 312 = 0x138
}

+ (void)setShouldWarnUserBeforeWipeOnUpgrade:(_Bool)arg1;	// IMP=0x002000000003127b
+ (_Bool)shouldWarnUserBeforeWipeOnUpgrade;	// IMP=0x001000000003126f
+ (void)setShouldPreventWipeOnUpgrade:(_Bool)arg1;	// IMP=0x001000000003125c
+ (_Bool)shouldPreventWipeOnUpgrade;	// IMP=0x00100000000311d5
- (void).cxx_destruct;	// IMP=0x002000000003d4f5
@property(readonly) NSDate *libraryCreationDate; // @synthesize libraryCreationDate=_libraryCreationDate;
- (id)redactedDescription;	// IMP=0x001000000003d3d2
@property(readonly, copy) NSString *description;
- (_Bool)deleteDynamicallyCreatedStorages:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003cf1c
- (_Bool)createStoragesDynamically:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003cc0b
- (void)markAsCorrupted;	// IMP=0x001000000003c9d6
- (void)emergencyClose;	// IMP=0x001000000003c658
- (void)stopVacuum;	// IMP=0x001000000003c577
- (void)startVacuum;	// IMP=0x001000000003c35f
- (void)_vacuum:(long long)arg1 withInitialDatabaseSize:(long long)arg2;	// IMP=0x001000000003bd53
- (long long)_sizeInBytes;	// IMP=0x001000000003bc84
- (id)transientPullRepository;	// IMP=0x001000000003bc06
- (id)cloudCache;	// IMP=0x001000000003bb88
- (id)clientCache;	// IMP=0x001000000003bb58
- (_Bool)hasTable:(id)arg1;	// IMP=0x001000000003bb05
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2;	// IMP=0x001000000003b9fa
- (void)table:(id)arg1 enumerateCountGroupedByProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b8db
- (void)table:(id)arg1 enumerateCountGroupedByUnsignedIntegerProperty:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b7b9
- (unsigned long long)table:(id)arg1 countOfRecordsMatchingQuery:(id)arg2;	// IMP=0x001000000003b713
- (unsigned long long)tableCountOfRecords:(id)arg1;	// IMP=0x001000000003b684
- (_Bool)table:(id)arg1 hasRecordsMatchingQuery:(id)arg2;	// IMP=0x001000000003b5eb
- (_Bool)tableHasRecords:(id)arg1;	// IMP=0x001000000003b572
- (void)recordUpgradeEvent:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x001000000003b496
- (void)recordUpgradeEvent:(id)arg1;	// IMP=0x001000000003b3f8
- (id)status;	// IMP=0x001000000003b328
- (void)transactionDidFinish;	// IMP=0x001000000003b322
- (void)writeTransactionDidFail;	// IMP=0x001000000003b1a7
- (void)writeTransactionDidSucceed;	// IMP=0x001000000003b18a
- (void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003af27
- (void)_deleteWipeReason;	// IMP=0x001000000003ad76
- (id)wipeReason;	// IMP=0x001000000003acbf
- (id)_wipeStoreMarkerURL;	// IMP=0x001000000003ac17
- (_Bool)storeDerivativesFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003ab75
- (id)derivativesFilter;	// IMP=0x001000000003aaf8
- (id)disabledFeatures;	// IMP=0x001000000003aa3f
- (_Bool)storeDisabledFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a95c
- (_Bool)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;	// IMP=0x001000000003a935
@property(readonly, nonatomic) _Bool shouldUpdateDisabledFeatures;
- (_Bool)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a769
@property(readonly, nonatomic) CPLChangeSessionUpdate *storedChangeSessionUpdate;
@property(readonly, nonatomic) _Bool hasStoredChangeSessionUpdate;
- (_Bool)isClientInSyncWithClientCache;	// IMP=0x001000000003a4c9
- (_Bool)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x001000000003a33a
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;	// IMP=0x001000000003a179
- (id)createNewClientCacheIdentifier;	// IMP=0x001000000003a122
- (_Bool)storeClientCacheIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a102
- (id)clientCacheIdentifier;	// IMP=0x001000000003a0e5
- (_Bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a0c5
- (id)lastQuarantineCountReportDate;	// IMP=0x001000000003a057
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039ed6
- (id)userIdentifier;	// IMP=0x0010000000039c6e
- (Class)_userIdentifierClass;	// IMP=0x0010000000039b93
- (_Bool)resetValueForGlobalVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039b13
- (id)valueForGlobalVariable:(id)arg1;	// IMP=0x00100000000399e4
- (_Bool)setValue:(id)arg1 forGlobalVariable:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000398de
- (_Bool)addGlobalVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000039535
- (void)_cacheValue:(id)arg1 forVariable:(id)arg2;	// IMP=0x00100000000394a7
- (id)pqlConnection;	// IMP=0x0010000000039492
- (id)createNewLibraryVersion;	// IMP=0x001000000003943b
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000003941b
- (id)libraryVersion;	// IMP=0x00100000000393fe
- (_Bool)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000003916d
- (unsigned long long)libraryOptions;	// IMP=0x001000000003911e
- (void)performBarrier;	// IMP=0x00100000000390fc
- (void)performBarrierTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038fef
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0010000000038fa7
- (void)blockWriteTransactionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038e46
- (void)performWriteTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000388ce
- (void)performReadTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000384dd
- (_Bool)executePostOpenWithError:(id *)arg1;	// IMP=0x0010000000038417
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00100000000381ce
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x0010000000036ccd
- (void)_markLibraryAsCorruptedWithInfo:(id)arg1;	// IMP=0x0010000000036c07
- (_Bool)_setupPragmasAndFunctions;	// IMP=0x0010000000036bea
- (_Bool)markDatabaseAsDeactivatedWithError:(id *)arg1;	// IMP=0x0010000000036bc3
- (void)_deleteCorruptionInfo;	// IMP=0x0010000000036a12
@property(readonly, nonatomic) id corruptionInfo;
- (id)_corruptionMarkerURL;	// IMP=0x001000000003686d
- (_Bool)_setupDBIfNeeded;	// IMP=0x0010000000035ffb
- (_Bool)_upgradeDB:(long long)arg1;	// IMP=0x0010000000035243
- (_Bool)_wipeIfDeactivated:(long long)arg1 didWipeDatabase:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000003512d
- (void)_wipeBeforeOpeningIfNecessary;	// IMP=0x0010000000034f59
- (id)_wipeReasonFromCorruptionInfo:(id)arg1;	// IMP=0x0010000000034ec2
- (_Bool)_closeWipeAndReOpenWithReason:(id)arg1 warnUserIfPossible:(_Bool)arg2 createRadar:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000034894
- (void)_wipeWithReason:(id)arg1;	// IMP=0x00100000000346b0
- (_Bool)_fixStoreAfterAnyVersionChange;	// IMP=0x0010000000034459
- (_Bool)_postUpgradeToVersion:(long long)arg1;	// IMP=0x001000000003422e
- (_Bool)_upgradeToVersion:(long long)arg1;	// IMP=0x0010000000033ec1
- (void)_scheduleClientCacheDropIfNecessary;	// IMP=0x0010000000033de9
- (void)_scheduleClientCacheDrop;	// IMP=0x0010000000033ca9
- (_Bool)_fix22666940;	// IMP=0x00100000000334ac
- (_Bool)_performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x001000000003312b
- (void)_unsetupProfilingHooks;	// IMP=0x00100000000330af
- (void)_setupProfilingHooks;	// IMP=0x0010000000032997
- (id)_transactionStatsDescription;	// IMP=0x0010000000032758
- (_Bool)_initializeDB;	// IMP=0x0010000000031cad
- (void)triggerResetAfterUpgrade:(unsigned long long)arg1 withReason:(id)arg2;	// IMP=0x0010000000031b0a
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000031287

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

