//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCloudKitCoordinator, CPLCloudKitPushNotificationCenter, CPLEngineParametersStorage, CPLEngineWrapper, CPLEngineWrapperArray, NSDate, NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface (null) : NSObject
{
    NSDate *_launchDate;	// 8 = 0x8
    _Bool _forSyncBubble;	// 16 = 0x10
    _Bool _forceClientPush;	// 17 = 0x11
    CPLEngineParametersStorage *_parametersStorage;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    CPLCloudKitCoordinator *_coordinator;	// 40 = 0x28
    CPLCloudKitPushNotificationCenter *_pushNotificationCenter;	// 48 = 0x30
    NSMutableArray *_daemonManagers;	// 56 = 0x38
    CPLEngineWrapperArray *_wrappers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_watchCPLLibrarySource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_watchKillSignalSource;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_watchInfoSignalSource;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    _Bool _closing;	// 104 = 0x68
    _Bool _deactivated;	// 105 = 0x69
    _Bool _hasDoneInitialRegistration;	// 106 = 0x6a
    CPLEngineWrapper *_systemLibraryAtLaunchTime;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000086ee
- (void)wrapperArray:(id)arg1 getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000841e
- (void)wrapperArray:(id)arg1 getStatusWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007e1e
- (void)wrapperArrayCountDidChange:(id)arg1;	// IMP=0x0010000000007ca1
- (void)emergencyExitForWrapperArray:(id)arg1;	// IMP=0x0010000000007c30
- (id)daemonLibraryManagerOtherLibraryManager:(id)arg1 withLibraryIdentifier:(id)arg2;	// IMP=0x00100000000079de
- (void)startSyncTaskForDaemonLibraryManager:(id)arg1;	// IMP=0x00100000000079d8
- (void)daemonLibraryManagerWantsToExitNow:(id)arg1;	// IMP=0x00100000000078ea
- (void)_deactivateDaemon;	// IMP=0x00100000000078e0
- (void)daemonLibraryManagerHasBeenDisconnected:(id)arg1;	// IMP=0x00100000000077c4
- (void)daemonLibraryManager:(id)arg1 wantsToExitAfterResettingParametersForLibraryWithIdentifier:(id)arg2;	// IMP=0x0010000000007638
- (id)daemonLibraryManager:(id)arg1 engineWrapperWithClientLibraryBaseURL:(id)arg2 cloudLibraryStateStorageURL:(id)arg3 cloudLibraryResourceStorageURL:(id)arg4 libraryIdentifier:(id)arg5 options:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x0010000000007484
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000006b79
- (id)allowedProtocolForClientAccess:(id)arg1;	// IMP=0x0010000000006adc
- (void)_registerForMaintenance;	// IMP=0x0010000000006358
- (void)_registerAfterLaunchWhenAllEnginesAreOpened;	// IMP=0x00100000000060b8
- (id)initForSyncBubble:(_Bool)arg1 forceClientPush:(_Bool)arg2;	// IMP=0x0010000000004ebc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

