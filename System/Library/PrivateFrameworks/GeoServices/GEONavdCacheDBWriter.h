//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBWriter
{
    struct sqlite3_stmt *_sqlInsertCache;	// 312 = 0x138
    struct sqlite3_stmt *_sqlDeleteRowForRowID;	// 320 = 0x140
    struct sqlite3_stmt *_sqlUpdateCache;	// 328 = 0x148
    struct sqlite3_stmt *_sqlDeleteAllRows;	// 336 = 0x150
}

- (void)performTableCreationTasks;	// IMP=0x00000000011c9009
- (void)performStatementPreparationTasks;	// IMP=0x00000000011c8f7d
- (void)_deleteAllRows;	// IMP=0x00000000011c8e24
- (_Bool)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3;	// IMP=0x00000000011c8a18
- (void)_deleteRowsWithRowIDs:(id)arg1;	// IMP=0x00000000011c86fd
- (long long)_insertWithKey:(id)arg1 value:(id)arg2;	// IMP=0x00000000011c8394
- (void)_openIfNecessary;	// IMP=0x00000000011c8365
- (void)_createCacheTable;	// IMP=0x00000000011c8334
- (void)dealloc;	// IMP=0x00000000011c828b
- (id)initWithPath:(id)arg1;	// IMP=0x00000000011c823e

@end

