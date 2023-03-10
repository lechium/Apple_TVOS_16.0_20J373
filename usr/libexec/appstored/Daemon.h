//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, JobManagerListener, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSString, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, RequestBroker, SoftwareUpdateListener, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_jetsamSource;	// 24 = 0x18
    JobManagerListener *_jobManagerDelegate;	// 32 = 0x20
    NSXPCListener *_jobManagerListener;	// 40 = 0x28
    LaunchServicesObserver *_launchServicesObserver;	// 48 = 0x30
    ODRAppReviewListener *_odrAppReviewDelegate;	// 56 = 0x38
    NSXPCListener *_odrAppReviewListener;	// 64 = 0x40
    ODRDiagnosticsListener *_odrCtlDelegate;	// 72 = 0x48
    NSXPCListener *_odrCtlListener;	// 80 = 0x50
    ODRDevtoolsListener *_odrDevtoolsDelegate;	// 88 = 0x58
    NSXPCListener *_odrDevtoolsListener;	// 96 = 0x60
    ODRServiceDelegate *_odrFoundationDelegate;	// 104 = 0x68
    NSXPCListener *_odrFoundationListener;	// 112 = 0x70
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;	// 120 = 0x78
    NSXPCListener *_odrLaunchServicesListener;	// 128 = 0x80
    NSXPCListener *_personalizationStoreService;	// 136 = 0x88
    RequestBroker *_requestBroker;	// 144 = 0x90
    NSXPCListener *_requestListener;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_signalSource;	// 160 = 0xa0
    NSXPCListener *_softwareUpdateListener;	// 168 = 0xa8
    SoftwareUpdateListener *_softwareUpdateDelegate;	// 176 = 0xb0
    NSXPCListener *_storeQueueListener;	// 184 = 0xb8
    StoreQueueListener *_storeQueueDelegate;	// 192 = 0xc0
    NSCountedSet *_transactionCount;	// 200 = 0xc8
    NSMutableDictionary *_transactionStore;	// 208 = 0xd0
    XPCServiceBroker *_serviceBroker;	// 216 = 0xd8
    AppMetricsMonitor *_appMetricsMonitor;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0020000000186c09
- (void)_handleMigrationDidFinishNotification:(id)arg1;	// IMP=0x00100000001866ed
- (void)dealloc;	// IMP=0x0000000000184dd5
- (id)init;	// IMP=0x0010000000184d3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

