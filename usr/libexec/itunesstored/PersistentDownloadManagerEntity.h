//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x00400000000c3de0
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000000c3dc7
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000000c3dba
+ (id)databaseTable;	// IMP=0x00100000000c3dad
- (void)performNewsstandMigration1InDatabase:(id)arg1;	// IMP=0x00400000000c3868
- (id)finishPersistentDownloadsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000c2ed3

@end

