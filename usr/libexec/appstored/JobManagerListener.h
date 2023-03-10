//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface JobManagerListener
{
    NSMapTable *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableDictionary *_progress;	// 24 = 0x18
    _Bool _progressDirty;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000013003b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000012df48
- (void)_handleLegacyNotifications:(id)arg1;	// IMP=0x001000000012d3fc
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012d17d
- (void)registerJobManagerWithOptions:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012cdb4
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012cb21
- (void)getJobsWithIDs:(id)arg1 usingReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c7c5
- (void)getJobsUsingReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012c5a9
- (void)finishJobsWithIDs:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c32a
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bfb1
- (id)init;	// IMP=0x001000000012beab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

