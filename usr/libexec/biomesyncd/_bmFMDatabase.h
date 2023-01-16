//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface _bmFMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    _Bool _isExecutingStatement;	// 16 = 0x10
    double _startBusyRetryTime;	// 24 = 0x18
    NSMutableSet *_openResultSets;	// 32 = 0x20
    NSMutableSet *_openFunctions;	// 40 = 0x28
    NSDateFormatter *_dateFormat;	// 48 = 0x30
    _Bool _shouldCacheStatements;	// 56 = 0x38
    _Bool _traceExecution;	// 57 = 0x39
    _Bool _checkedOut;	// 58 = 0x3a
    _Bool _crashOnErrors;	// 59 = 0x3b
    _Bool _logsErrors;	// 60 = 0x3c
    _Bool _isOpen;	// 61 = 0x3d
    _Bool _isInTransaction;	// 62 = 0x3e
    double _maxBusyRetryTimeInterval;	// 64 = 0x40
    NSMutableDictionary *_cachedStatements;	// 72 = 0x48
    NSString *_databasePath;	// 80 = 0x50
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x00400000000431c8
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x0010000000042553
+ (id)sqliteLibVersion;	// IMP=0x001000000004250f
+ (int)FMDBVersion;	// IMP=0x00100000000422fe
+ (id)FMDBUserVersion;	// IMP=0x00100000000422f1
+ (id)databaseWithURL:(id)arg1;	// IMP=0x0010000000042105
+ (id)databaseWithPath:(id)arg1;	// IMP=0x00100000000420bc
- (void).cxx_destruct;	// IMP=0x001000000004630d
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x0010000000046268
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x001000000004625b
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x001000000004624c
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x0010000000046215
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000461d7
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x001000000004616d
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x0010000000046160
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x0010000000046150
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x0010000000046141
- (void)resultNullInContext:(void *)arg1;	// IMP=0x0010000000046134
- (id)valueString:(void *)arg1;	// IMP=0x00100000000460f6
- (id)valueData:(void *)arg1;	// IMP=0x00100000000460a1
- (double)valueDouble:(void *)arg1;	// IMP=0x0010000000046094
- (long long)valueLong:(void *)arg1;	// IMP=0x0010000000046087
- (int)valueInt:(void *)arg1;	// IMP=0x001000000004607a
- (int)valueType:(void *)arg1;	// IMP=0x001000000004606d
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045f77
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045f65
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x0010000000045d5f
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000045d3a
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000045d13
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045bad
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045a6a
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045927
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000457e4
- (_Bool)interrupt;	// IMP=0x00100000000457b3
- (_Bool)inTransaction;	// IMP=0x00100000000457aa
- (_Bool)beginExclusiveTransaction;	// IMP=0x001000000004577c
- (_Bool)beginImmediateTransaction;	// IMP=0x001000000004574e
- (_Bool)beginDeferredTransaction;	// IMP=0x0010000000045720
- (_Bool)beginTransaction;	// IMP=0x00100000000456f2
- (_Bool)commit;	// IMP=0x00100000000456c4
- (_Bool)rollback;	// IMP=0x0010000000045696
- (id)prepare:(id)arg1;	// IMP=0x001000000004566c
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x00100000000455c8
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0010000000045524
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004542c
- (_Bool)executeStatements:(id)arg1;	// IMP=0x0010000000045418
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x001000000004511d
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x00100000000450f6
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x00100000000450cb
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004509c
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0010000000045071
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x0010000000044fc7
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x0010000000044f28
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000044efe
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000044e8a
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0010000000044e62
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x0010000000044ce9
- (id)executeQuery:(id)arg1;	// IMP=0x0010000000044c30
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x001000000004469c
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x001000000004432a
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x0010000000044300
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x0010000000043ae6
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x0010000000043580
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x00100000000434ab
- (id)errorWithMessage:(id)arg1;	// IMP=0x0010000000043424
- (int)lastExtendedErrorCode;	// IMP=0x0010000000043416
- (int)lastErrorCode;	// IMP=0x0010000000043408
- (_Bool)hadError;	// IMP=0x00100000000433ed
- (id)lastErrorMessage;	// IMP=0x00100000000433be
- (_Bool)databaseExists;	// IMP=0x0010000000043374
- (void)warnInUse;	// IMP=0x001000000004333d
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x00100000000432c7
- (id)dateFromString:(id)arg1;	// IMP=0x00100000000432b1
- (void)setDateFormat:(id)arg1;	// IMP=0x00100000000432a0
- (_Bool)hasDateFormatter;	// IMP=0x0010000000043292
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x00100000000431c0
- (_Bool)setKey:(id)arg1;	// IMP=0x00100000000430fb
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x00100000000430f3
- (_Bool)rekey:(id)arg1;	// IMP=0x001000000004302e
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x0010000000042ec0
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x0010000000042e17
- (void)clearCachedStatements;	// IMP=0x0010000000042bb8
- (void)resultSetDidClose:(id)arg1;	// IMP=0x0010000000042b64
- (void)closeOpenResultSets;	// IMP=0x0010000000042986
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x001000000004293b
- (int)busyRetryTimeout;	// IMP=0x0010000000042908
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;	// IMP=0x001000000004275b
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x001000000004267b
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x0010000000042667
- (_Bool)open;	// IMP=0x00100000000425d1
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x00100000000425bf
- (const char *)sqlitePath;	// IMP=0x001000000004256d
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x001000000004227c
- (id)initWithPath:(id)arg1;	// IMP=0x00100000000421b8
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000042162
- (id)init;	// IMP=0x001000000004214e
- (void)setShouldCacheStatementsWithoutClearingExistingStatements:(_Bool)arg1;	// IMP=0x0010000000027313
- (_Bool)DELETE_FROM:(id)arg1 WHERE:(id)arg2;	// IMP=0x0010000000027164
- (_Bool)INSERT_INTO:(id)arg1 VALUES:(id)arg2;	// IMP=0x0010000000026e28
- (_Bool)UPDATE:(id)arg1 SET:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000026b32
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 HAVING:(id)arg6 ORDER_BY:(id)arg7 LIMIT:(id)arg8;	// IMP=0x0010000000026426
- (id)_SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 ORDER_BY:(id)arg6 LIMIT:(id)arg7;	// IMP=0x0010000000025f08
- (id);	// IMP=0x0010000000025ed8
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 ORDER_BY:(id)arg5 LIMIT:(id)arg6;	// IMP=0x0010000000025eac
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 ORDER_BY:(id)arg4 LIMIT:(id)arg5;	// IMP=0x0010000000025e82
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000025e51
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000473b1
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x0010000000047396
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x0010000000047032
- (id)getTableSchema:(id)arg1;	// IMP=0x0010000000046f9d
- (id)getSchema;	// IMP=0x0010000000046f82
- (_Bool)tableExists:(id)arg1;	// IMP=0x0010000000046ef5
- (id)dateForQuery:(id)arg1;	// IMP=0x0010000000046dd2
- (id)dataForQuery:(id)arg1;	// IMP=0x0010000000046caf
- (double)doubleForQuery:(id)arg1;	// IMP=0x0010000000046b93
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x0010000000046a7c
- (long long)longForQuery:(id)arg1;	// IMP=0x0010000000046965
- (int)intForQuery:(id)arg1;	// IMP=0x001000000004684e
- (id)stringForQuery:(id)arg1;	// IMP=0x001000000004672b

@end
