//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppInstallEntity
{
    _Bool _isAutomatic;	// 8 = 0x8
    _Bool _isUpdate;	// 9 = 0x9
    _Bool _isRestore;	// 10 = 0xa
    unsigned long long _coordinatorIntent;	// 16 = 0x10
}

+ (Class)memoryEntityClass;	// IMP=0x00400000000c19ff
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00100000000c1888
+ (id)databaseTable;	// IMP=0x00100000000c187b
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000000c148f
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000000c141f
- (_Bool)deleteFromDatabase;	// IMP=0x00200000000c03e4

@end

