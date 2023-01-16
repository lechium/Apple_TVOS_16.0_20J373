//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x0040000000049cd6
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049c6f
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049c17
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x0010000000049bb5
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x0010000000049b6c
- (void).cxx_destruct;	// IMP=0x002000000004aa61
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x001000000004a8a6
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004a881
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x001000000004a85a
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a558
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a53e
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a527
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a50d
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a4f6
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a306
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a1e4
- (id)database;	// IMP=0x001000000004a11b
- (void)interrupt;	// IMP=0x001000000004a0de
- (void)close;	// IMP=0x001000000004a059
- (void)dealloc;	// IMP=0x001000000004a011
- (id)init;	// IMP=0x0010000000049ffd
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000049fe3
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000049f8d
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049f2f
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049f1a
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0010000000049d69
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0010000000049ce7

@end

