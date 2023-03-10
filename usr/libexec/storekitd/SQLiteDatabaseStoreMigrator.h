//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, SQLiteConnection;

@interface SQLiteDatabaseStoreMigrator : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000023fcd
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023ee5
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023ecb
- (void)executeStatement:(id)arg1;	// IMP=0x0010000000023eb1
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023e9a
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x0010000000023e83
@property(readonly) SQLiteConnection *connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000023e06

@end

