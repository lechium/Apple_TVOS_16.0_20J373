//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEOResourceManifestManager, NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODBWriter : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSDictionary *_pragmaOverrides;	// 16 = 0x10
    struct sqlite3 *_db;	// 24 = 0x18
    struct sqlite3_stmt *_versionQuery;	// 32 = 0x20
    struct sqlite3_stmt *_versionInsert;	// 40 = 0x28
    struct sqlite3_stmt *_editionQuery;	// 48 = 0x30
    struct sqlite3_stmt *_editionDelete;	// 56 = 0x38
    struct sqlite3_stmt *_editionInvalidate;	// 64 = 0x40
    struct sqlite3_stmt *_editionUpdate;	// 72 = 0x48
    struct sqlite3_stmt *_editionInvalidateAll;	// 80 = 0x50
    struct sqlite3_stmt *_tileInsert;	// 88 = 0x58
    struct sqlite3_stmt *_tileDelete;	// 96 = 0x60
    struct sqlite3_stmt *_tileSize;	// 104 = 0x68
    struct sqlite3_stmt *_sizeQuery;	// 112 = 0x70
    long long _lastRowID;	// 120 = 0x78
    unsigned long long _databaseSize;	// 128 = 0x80
    unsigned long long _maxDatabaseSize;	// 136 = 0x88
    _Bool _closed;	// 144 = 0x90
    _Bool _defunct;	// 145 = 0x91
    NSMutableArray *_writeList;	// 152 = 0x98
    NSMutableSet *_uncommitedWriteSet;	// 160 = 0xa0
    unsigned long long _pendingWriteBytes;	// 168 = 0xa8
    struct os_unfair_lock_s _writeListLock;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_writeQueue;	// 184 = 0xb8
    void *_editionMap;	// 192 = 0xc0
    long long _evictionRowsThreshold;	// 200 = 0xc8
    CDStruct_4e27301a *_expirationRecords;	// 208 = 0xd0
    unsigned long long _expirationRecordCount;	// 216 = 0xd8
    _Bool _preloading;	// 224 = 0xe0
    double _lastCheckedGeneralExpiration;	// 232 = 0xe8
    unsigned long long _tileCacheMinimumWriteCount;	// 240 = 0xf0
    unsigned long long _tileCacheMinimumWriteBytes;	// 248 = 0xf8
    unsigned long long _tileCacheMaximumWriteCount;	// 256 = 0x100
    unsigned long long _tileCacheMaximumWriteBytes;	// 264 = 0x108
    NSString *_devicePostureCountry;	// 272 = 0x110
    NSString *_devicePostureRegion;	// 280 = 0x118
    _Bool _canCreateDebugTable;	// 288 = 0x120
    GEOResourceManifestManager *_manifestManager;	// 296 = 0x128
    GEOCountryConfiguration *_countryConfiguration;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000033cccc
@property(readonly, nonatomic) NSString *devicePostureRegion; // @synthesize devicePostureRegion=_devicePostureRegion;
@property(readonly, nonatomic) NSString *devicePostureCountry; // @synthesize devicePostureCountry=_devicePostureCountry;
@property(nonatomic) unsigned long long maxDatabaseSize; // @synthesize maxDatabaseSize=_maxDatabaseSize;
@property(readonly, nonatomic) unsigned long long databaseSize; // @synthesize databaseSize=_databaseSize;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;	// IMP=0x000000000033cb58
- (void)endPreloadSession;	// IMP=0x000000000033caf9
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;	// IMP=0x000000000033ca57
- (void)setExpirationRecords:(CDStruct_4e27301a *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000033c98a
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;	// IMP=0x000000000033c571
- (void)deleteData:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000033c287
- (void)_deleteKey:(struct _GEOTileKey)arg1;	// IMP=0x000000000033bde5
- (void)pendingWritesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033badf
- (id)pendingWriteForKey:(struct _GEOTileKey *)arg1;	// IMP=0x000000000033b8e8
- (void)addData:(id)arg1 forKey:(struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;	// IMP=0x000000000033b656
- (void)_performWrites:(_Bool)arg1;	// IMP=0x000000000033b29a
- (void)_dropWritesOnFloor:(id)arg1;	// IMP=0x000000000033b117
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;	// IMP=0x000000000033aaa0
- (void)_writeEntry:(id)arg1;	// IMP=0x000000000033a4f3
- (_Bool)_tileSetExpires:(unsigned int)arg1;	// IMP=0x000000000033a4aa
- (void)_evict;	// IMP=0x000000000033a48f
- (void)shrinkBySize:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x000000000033a19c
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x0000000000339eb5
- (void)calculateFreeableSizeWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x0000000000339d59
- (unsigned long long)_dbFileSize;	// IMP=0x0000000000339cb6
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(_Bool)arg2;	// IMP=0x00000000003390be
- (unsigned long long)_freeableDiskSpace;	// IMP=0x000000000033909a
- (void)_printDBStatus:(const char *)arg1;	// IMP=0x0000000000338feb
@property _Bool closed;
- (void)waitForPendingWrites;	// IMP=0x0000000000338f12
- (void)_openIfNecessary;	// IMP=0x0000000000338ec0
- (void)_openDBForceRecreate:(_Bool)arg1;	// IMP=0x00000000003383fd
- (void)_openDBAndPurgeContents;	// IMP=0x0000000000338243
- (void)_updateVersionTableWithCountryAndRegion;	// IMP=0x00000000003381b7
- (void)_assertDatabaseSize;	// IMP=0x00000000003381b1
- (void)_updateSize;	// IMP=0x0000000000338170
- (void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2;	// IMP=0x0000000000337569
- (_Bool)_readEditions;	// IMP=0x00000000003373d9
- (void)_writeVersionForCountry:(id)arg1 region:(id)arg2;	// IMP=0x000000000033717b
- (void)_prepareStatements;	// IMP=0x0000000000336fd3
- (_Bool)prepareSingleStatement:(struct sqlite3_stmt **)arg1 forSql:(id)arg2;	// IMP=0x0000000000336e2f
- (void)_createTables;	// IMP=0x0000000000336d8e
- (void)_closeDB;	// IMP=0x0000000000336c1f
- (void)_finalizeStatements;	// IMP=0x0000000000336af8
- (void)flushPendingWrites;	// IMP=0x0000000000336a86
- (void)_countryChanged:(id)arg1;	// IMP=0x000000000033689c
- (void)_deviceLocked;	// IMP=0x000000000033682a
- (void)_localeChanged:(id)arg1;	// IMP=0x00000000003367bd
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 manifestManager:(id)arg3 countryConfiguration:(id)arg4;	// IMP=0x000000000033627c
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;	// IMP=0x0000000000336264
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000336250

@end

