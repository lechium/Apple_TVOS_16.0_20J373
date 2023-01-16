//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface FLStoreMigrator : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000edb4
@property(retain) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_dropTables;	// IMP=0x001000000000ecf7
- (void)_createCurrentDatabaseWithTableSuffix:(id)arg1;	// IMP=0x001000000000eb1b
- (void)_migrateFujitailToCurrent;	// IMP=0x001000000000e678
- (void)_migrateToCurrentFrom:(long long)arg1;	// IMP=0x001000000000d7b6
- (void)_createCleanCurrentDatabase;	// IMP=0x001000000000d781
- (void)_migrateSchema:(long long)arg1 toSchema:(long long)arg2;	// IMP=0x001000000000d5c4
- (long long)_schemaVersion;	// IMP=0x001000000000d487
- (void)migrateSchemeIfNecessary;	// IMP=0x001000000000d446
- (id)initWithExecutor:(id)arg1;	// IMP=0x001000000000d3ec

@end
