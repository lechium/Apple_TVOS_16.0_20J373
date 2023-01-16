//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteConnection, SQLiteQueryDescriptor;

@interface SQLiteQuery : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    SQLiteQueryDescriptor *_descriptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006acf3
- (id)_newSelectSQLWithProperties:(id)arg1;	// IMP=0x001000000006aacb
@property(readonly) SQLiteQueryDescriptor *queryDescriptor;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a6a2
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a5fb
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a3be
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a32d
- (_Bool)deleteAllEntities;	// IMP=0x001000000006a185
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000069da1
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;	// IMP=0x0010000000069af3
- (id)copyEntityIdentifiers;	// IMP=0x0010000000069a18
@property(readonly) SQLiteConnection *connection;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000069969
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;	// IMP=0x00100000000698be

@end
