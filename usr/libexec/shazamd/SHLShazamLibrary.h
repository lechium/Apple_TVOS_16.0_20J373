//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSProgress, NSString, SHLFailedTaskRetryHandler, SHLLibraryStore, SHLSyncSession, SHLSyncSessionConfiguration;
@protocol SHLShazamLibraryDelegate;

@interface SHLShazamLibrary : NSObject
{
    _Bool _shouldPerformFetch;	// 8 = 0x8
    id <SHLShazamLibraryDelegate> _delegate;	// 16 = 0x10
    NSProgress *_syncProgress;	// 24 = 0x18
    SHLSyncSessionConfiguration *_configuration;	// 32 = 0x20
    SHLSyncSession *_syncSession;	// 40 = 0x28
    SHLLibraryStore *_store;	// 48 = 0x30
    SHLFailedTaskRetryHandler *_retryHandler;	// 56 = 0x38
}

+ (id)defaultLibrary;	// IMP=0x0020000000033197
- (void).cxx_destruct;	// IMP=0x002000000003331c
@property(nonatomic) _Bool shouldPerformFetch; // @synthesize shouldPerformFetch=_shouldPerformFetch;
@property(retain, nonatomic) SHLFailedTaskRetryHandler *retryHandler; // @synthesize retryHandler=_retryHandler;
@property(retain, nonatomic) SHLLibraryStore *store; // @synthesize store=_store;
@property(retain, nonatomic) SHLSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(retain, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSProgress *syncProgress; // @synthesize syncProgress=_syncProgress;
@property(nonatomic) __weak id <SHLShazamLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retryFailedTasks:(id)arg1;	// IMP=0x0010000000032fd6
- (long long)syncActionForTaskType:(long long)arg1;	// IMP=0x0010000000032fc7
- (void)updateProgressWithTask:(id)arg1;	// IMP=0x0010000000032e69
- (void)migrateCacheIfNeeded;	// IMP=0x0010000000032cb4
- (MISSING_TYPE *)isValidCallingProcessIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000032c98
- (id)taskWithFailedItemsAndCurrentChanges:(id)arg1;	// IMP=0x001000000003262a
- (id)newFetchTaskWithStartCondition:(id)arg1;	// IMP=0x00100000000325ac
- (id)newModifyTaskWithChanges:(id)arg1 startCondition:(id)arg2;	// IMP=0x00100000000324a9
- (void)session:(id)arg1 task:(id)arg2 didFetchDeletedItemsWithIdentifiers:(id)arg3;	// IMP=0x0010000000032366
- (void)session:(id)arg1 task:(id)arg2 didFetchGroups:(id)arg3;	// IMP=0x0010000000032223
- (void)session:(id)arg1 task:(id)arg2 didFetchTracks:(id)arg3;	// IMP=0x00100000000320e0
- (void)session:(id)arg1 task:(id)arg2 didDeleteItemsWithIdentifiers:(id)arg3;	// IMP=0x0010000000031fa0
- (void)session:(id)arg1 task:(id)arg2 didModifyGroups:(id)arg3;	// IMP=0x0010000000031e60
- (void)session:(id)arg1 task:(id)arg2 didModifyTracks:(id)arg3;	// IMP=0x0010000000031d20
- (void)finishSession:(id)arg1;	// IMP=0x00100000000318e8
- (void)session:(id)arg1 task:(id)arg2 didProduceOutcome:(id)arg3;	// IMP=0x0010000000031164
- (void)clearCachedSyncStatus;	// IMP=0x00100000000310f8
- (void)synchronizeChanges:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000030ab7
- (void)synchronizeWithStartCondition:(id)arg1;	// IMP=0x0010000000030a58
- (id)initWithScope:(long long)arg1 callingProcessIdentifier:(id)arg2;	// IMP=0x00100000000308f8
- (id)initWithCallingProcessIdentifier:(id)arg1;	// IMP=0x00100000000308de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
