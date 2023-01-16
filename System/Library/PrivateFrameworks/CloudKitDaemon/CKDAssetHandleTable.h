//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTable.h>

@interface CKDAssetHandleTable : CKSQLiteTable
{
}

+ (Class)entryClass;	// IMP=0x00800000001dfbf1
+ (id)dbProperties;	// IMP=0x00800000001dfbe4
- (id)interruptedAssetWithSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e02a5
- (id)selectProperties:(id)arg1 inAssetHandlesWithStatus:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001e00c1
- (id)saveStatusAndChunkCount:(id)arg1;	// IMP=0x00000000001e009e
- (id)oldestLastUsedTime;	// IMP=0x00000000001dfea0
- (id)saveLastUsedTime:(id)arg1;	// IMP=0x00000000001dfe7d
- (id)saveChunkCount:(id)arg1;	// IMP=0x00000000001dfe5a
- (id)saveStatus:(id)arg1;	// IMP=0x00000000001dfe37
- (id)saveOrInsert:(id)arg1;	// IMP=0x00000000001dfda3
- (id)assetHandleWithUUID:(id)arg1;	// IMP=0x00000000001dfd02
- (_Bool)assetHandleExistsInDatabase:(id)arg1;	// IMP=0x00000000001dfc02

@end
