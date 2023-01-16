//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;
@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <AMSSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    AMSSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000029bf2c
@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029bd74
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029bbc0
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029baa1
- (_Bool)_resetAfterIOError;	// IMP=0x000000000029b8a8
- (_Bool)_resetAfterCorruptionError;	// IMP=0x000000000029b863
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029b68d
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x000000000029b37c
- (_Bool)_openAndAllowRetry:(_Bool)arg1;	// IMP=0x000000000029b2e6
- (_Bool)_open;	// IMP=0x000000000029b2cf
- (void)_flushAfterTransactionBlocks;	// IMP=0x000000000029b103
- (void)_finalizeAllStatements;	// IMP=0x000000000029af84
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000029ab5e
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029aa9d
- (_Bool)_close;	// IMP=0x000000000029aa3c
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000029aa2a
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x000000000029a977
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a830
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000029a72d
- (_Bool)open;	// IMP=0x000000000029a71b
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a5fe
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x000000000029a463
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a44e
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x000000000029a2b7
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x000000000029a17c
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a167
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x000000000029a035
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000299f87
- (_Bool)close;	// IMP=0x0000000000299f75
- (void)dealloc;	// IMP=0x0000000000299f37
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000299e90

@end

