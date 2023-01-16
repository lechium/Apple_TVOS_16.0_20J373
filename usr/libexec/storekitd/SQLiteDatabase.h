//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SQLiteConnection;
@protocol OS_dispatch_queue;

@interface SQLiteDatabase : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    NSHashTable *_migratedStores;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004637a
- (void)_reentrantSafePerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046303
- (void)_readUsingSession:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046228
- (void)_performMigrationIfNeededForStore:(id)arg1;	// IMP=0x0010000000046018
- (void)_modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045f2a
- (void)verifyDatabaseIntegrity;	// IMP=0x0010000000045d67
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x0010000000045b9f
- (_Bool)connectionNeedsResetForReopen:(id)arg1;	// IMP=0x0010000000045b1a
- (void)readStore:(id)arg1 usingSession:(CDUnknownBlockType)arg2;	// IMP=0x00100000000459b8
- (void)modifyStore:(id)arg1 usingTransactionClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000458b6
- (void)modifyStore:(id)arg1 usingTransaction:(CDUnknownBlockType)arg2;	// IMP=0x001000000004577c
- (void)dealloc;	// IMP=0x00100000000456f3
- (id)initWithConnectionOptions:(id)arg1;	// IMP=0x0010000000045675
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000004556a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

