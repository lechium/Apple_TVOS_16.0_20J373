//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseSchema : NSObject
{
}

+ (void)migrateVersion4to5WithMigration:(id)arg1;	// IMP=0x008000000022d79a
+ (void)migrateVersion3to4WithMigration:(id)arg1;	// IMP=0x008000000022d77e
+ (void)migrateVersion2to3WithMigration:(id)arg1;	// IMP=0x008000000022d778
+ (void)migrateVersion1to2WithMigration:(id)arg1;	// IMP=0x008000000022d75c
+ (void)migrateVersion0to1WithMigration:(id)arg1;	// IMP=0x008000000022d6c5
+ (_Bool)createOrUpdateSchemaUsingConnection:(id)arg1;	// IMP=0x008000000022d234

@end

