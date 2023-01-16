//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdServerProxy.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000128ef0e
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;	// IMP=0x000000000128eccf
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000128e964
- (void)dealloc;	// IMP=0x000000000128e8bd
- (void)forceCacheRefresh;	// IMP=0x000000000128e82a
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x000000000128e79c
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x000000000128e639
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000128e4d0
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000128e3bc
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000128e11f
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x000000000128e119
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000128dfd8
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000128dee9
- (void)registerObserver:(id)arg1;	// IMP=0x000000000128de30
- (void)_connectToDaemonIfNeededThreadUnsafe;	// IMP=0x000000000128d38d
- (void)close;	// IMP=0x000000000128d1e7
- (void)open;	// IMP=0x000000000128d17f
- (id)init;	// IMP=0x000000000128cfc8

@end
