//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, MISSING_TYPE, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface RestoreService : NSObject
{
    AppInstallsDatabaseStore *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MISSING_TYPE *_queue_restoreState;	// 24 = 0x18
    NSMutableArray *_queue_parkedDownloadSizeHandlers;	// 32 = 0x20
}

+ (unsigned long long)_readTotalPendingDownloadSizeFromDatabase:(id)arg1;	// IMP=0x00200000000b3d13
+ (id)defaultService;	// IMP=0x00100000000b34b6
- (void).cxx_destruct;	// IMP=0x00200000000b3fa1
- (void)_queue_dispatchParkedDownloadSizeHandlers;	// IMP=0x00100000000b3df2
- (void)prioritizeBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3a85
- (void)clearFollowupsForAccountID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b39e6
- (void)restoreRunning;	// IMP=0x00100000000b390f
- (void)restorePreparing;	// IMP=0x00100000000b3853
- (void)restoreCompletedIfUnknown;	// IMP=0x00100000000b3776
- (void)restoreCompleted;	// IMP=0x00100000000b369f
- (id)_initWithDatabase:(id)arg1;	// IMP=0x00100000000b3577
- (id)init;	// IMP=0x00100000000b352f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
