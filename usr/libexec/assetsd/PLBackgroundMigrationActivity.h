//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundle, PLXPCTransaction;
@protocol OS_xpc_object;

@interface PLBackgroundMigrationActivity : NSObject
{
    PLPhotoLibraryBundle *_bundle;	// 8 = 0x8
    NSObject<OS_xpc_object> *;	// 16 = 0x10
    PLXPCTransaction *_transaction;	// 24 = 0x18
}

+ (void)installBackgroundMigrationActivity:(id)arg1;	// IMP=0x004000000000a4e7
+ (void)registerIncompleteBackgroundMigrationActivity;	// IMP=0x001000000000a368
+ (id)_backgroundMigrationUniqueID:(const char *)arg1;	// IMP=0x001000000000a262
+ (id)_criteriaForBackgroundMigration;	// IMP=0x001000000000a1ad
- (void).cxx_destruct;	// IMP=0x002000000000a054
- (void)_runBackgroundMigrationActions;	// IMP=0x0010000000009f4b
- (_Bool)_runTask;	// IMP=0x0010000000009caa
- (id)initWithLibraryBundle:(id)arg1 xpcActivity:(id)arg2 description:(id)arg3;	// IMP=0x0010000000009bb5

@end

