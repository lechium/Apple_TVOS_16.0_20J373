//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPlayActivityController, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudPlayActivityRequestListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSOperationQueue *_flushOperationQueue;	// 24 = 0x18
    long long _flushOperationCount;	// 32 = 0x20
    double _nextFlushPlayActivityFireSyncInterval;	// 40 = 0x28
    double _testNextFlushPlayActivityFireSyncInterval;	// 48 = 0x30
    ICPlayActivityController *_playActivityController;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00200000000a942f
- (void).cxx_destruct;	// IMP=0x00200000000a6d52
- (void)_scheduleNextPlayActivityFlushOperationWithCriteria:(id)arg1;	// IMP=0x00100000000a6cba
- (_Bool)_isValidTimeInterval:(double)arg1;	// IMP=0x00100000000a6c4d
- (id)_criteriaDictionaryForEndPointIdentifier:(id)arg1 withPostFrequency:(double)arg2;	// IMP=0x00100000000a6928
- (void)_timeIntervalForNextFlushOperationWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a66e1
- (void)_playActivityControllerDidRecordEventsNotification:(id)arg1;	// IMP=0x00100000000a6696
- (void)_playActivityControllerEndpointRevisionInformationDidChangeNotification:(id)arg1;	// IMP=0x00100000000a6524
- (void)_flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a6216
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000a5e38
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 result:(unsigned long long)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a5d68
- (void)insertPlayActivityEvents:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5cb1
- (void)removePlayActivityEventsUptoRevision:(unsigned long long)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5c1a
- (void)setRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a5b2a
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 storeAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a5a5c
- (void)flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a59a5
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a598f
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5979
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a5963
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a594d
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5937
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a5921
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a590b
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a58f5
- (void)stop;	// IMP=0x00100000000a5801
- (void)start;	// IMP=0x00100000000a56d0
- (id)_init;	// IMP=0x00100000000a558f
- (id)init;	// IMP=0x00100000000a554d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
