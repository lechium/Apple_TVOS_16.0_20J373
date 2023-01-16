//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseImportManager, ML3MediaLibraryWriter, MLDCacheDeleteController, MLDDatabaseValidationController, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MLDMediaLibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writerBeginTransactionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writerUpdateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    struct os_unfair_lock_s _xpcLock;	// 48 = 0x30
    NSMutableDictionary *_xpcListeners;	// 56 = 0x38
    NSMutableDictionary *_xpcClients;	// 64 = 0x40
    ML3MediaLibraryWriter *_writer;	// 72 = 0x48
    ML3DatabaseImportManager *_importManager;	// 80 = 0x50
    MLDCacheDeleteController *_cacheDeleteController;	// 88 = 0x58
    MLDDatabaseValidationController *_validationController;	// 96 = 0x60
    NSOperationQueue *_maintenanceTasksOperationQueue;	// 104 = 0x68
    NSOperationQueue *_databaseRecoveryOperationQueue;	// 112 = 0x70
    NSMutableArray *_databaseRecoveryCompletionHandlers;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_signalDispatchSource;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_spotlightIndexCoalescingTimer;	// 136 = 0x88
    NSTimer *_idleTimer;	// 144 = 0x90
    NSMutableDictionary *_mediaLibraries;	// 152 = 0x98
    NSString *_deviceSharedLibraryPath;	// 160 = 0xa0
    NSMutableDictionary *_transactionInfoForID;	// 168 = 0xa8
    unsigned long long _stateHandle;	// 176 = 0xb0
    _Bool _databaseLocked;	// 184 = 0xb8
    long long _currentLockReason;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x002000000000f8bf
- (void).cxx_destruct;	// IMP=0x002000000000be34
- (void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3;	// IMP=0x001000000000bad9
- (void)_updateSiriIndexMetadataForLibraryAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b9a6
- (_Bool)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id *)arg3;	// IMP=0x001000000000b55f
- (_Bool)_platformSupportsSpotlightIndexing;	// IMP=0x001000000000b557
- (void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1;	// IMP=0x001000000000b4b1
- (void)_validateDatabaseAtPath:(id)arg1 forConnection:(id)arg2 byTruncatingFirst:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000b26b
- (void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b251
- (_Bool)_validateTransactionIdentifier:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000000b09d
- (void)_unregisterTransactionInfoForIdentifier:(id)arg1;	// IMP=0x001000000000b00e
- (void)_registerTransactionInfo:(id)arg1 forIdentitifer:(id)arg2;	// IMP=0x001000000000af44
- (void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ad80
- (void)_stopIdleTimer;	// IMP=0x001000000000acd2
- (void)_resetIdleTimer;	// IMP=0x001000000000abfe
- (void)_idleTimerFired:(id)arg1;	// IMP=0x001000000000aad2
- (void)_startIdleTimer;	// IMP=0x001000000000a97a
- (void)_tearDownLibraryDidChangeNotifications;	// IMP=0x001000000000a8aa
- (void)_updateSpotlightIndexForNotification:(id)arg1;	// IMP=0x001000000000a898
- (void)_updateSiriIndexForNotification:(id)arg1;	// IMP=0x001000000000a7c3
- (void)_handleLibraryDidChangeNotification:(id)arg1;	// IMP=0x001000000000a76e
- (void)_registerForLibraryDidChangeNotifications;	// IMP=0x001000000000a690
- (void)_writeDiagnosticToDisk:(id)arg1;	// IMP=0x001000000000a4ae
- (void)_performDiagnosticWithReason:(id)arg1;	// IMP=0x001000000000a339
- (void)_handleDebugSignal;	// IMP=0x001000000000a2b6
- (void)_tearDownSignalHandler;	// IMP=0x001000000000a2a5
- (void)_setupSignalHandler;	// IMP=0x001000000000a19b
- (id)_clientForConnection:(id)arg1;	// IMP=0x001000000000a072
- (id)_currentXPCClient;	// IMP=0x0010000000009ff3
- (void)_handleXPCDisconnect:(id)arg1;	// IMP=0x0010000000009f12
- (id)_deviceSharedLibraryPath;	// IMP=0x0010000000009eb6
- (id)_allMediaLibraries;	// IMP=0x0010000000009dfd
- (id)_mediaLibraryForPath:(id)arg1;	// IMP=0x0010000000009c71
- (long long)_MLDSupportedServiceForXPCListener:(id)arg1;	// IMP=0x0000000000009be5
- (id)_XPCListenerForService:(long long)arg1;	// IMP=0x0010000000009b21
- (void)_setupCacheDeleteController;	// IMP=0x0010000000009aac
- (void)_setupActivityHandlers;	// IMP=0x00100000000099d8
- (void)_setupNotifyEventHandlers;	// IMP=0x00100000000099d2
- (void)_logPrivacyAccessWithTransactionIdentifier:(id)arg1;	// IMP=0x0010000000009947
- (void)_reconnectLibraries:(id)arg1;	// IMP=0x001000000000968e
- (void)_disconnectLibraries:(id)arg1;	// IMP=0x00100000000093b1
@property(nonatomic) long long currentLockReason; // @synthesize currentLockReason=_currentLockReason;
@property(nonatomic, getter=isDatabaseLocked) _Bool databaseLocked; // @synthesize databaseLocked=_databaseLocked;
- (void)start;	// IMP=0x0010000000009103
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000009021
- (void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000008f0d
- (void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008ef8
- (void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008ee3
- (void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000008dff
- (_Bool)_shouldAcceptConnectionForMediaLibraryService:(id)arg1;	// IMP=0x0010000000008a8d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000885c
- (void)getClientImportServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008700
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000085a4
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000084a6
- (void)updateSiriIndexMetadataForAllLibrariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008014
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007997
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000797d
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007707
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000767c
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007571
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000745a
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007111
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006fd5
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000069ca
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000006891
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006727
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000063c2
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006107
- (id)beginTransactionForDatabaseWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005f55
- (void)beginTransactionForDatabaseWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005913
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000056d3
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000551b
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000051ef
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004f35
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d74
- (void)dealloc;	// IMP=0x0010000000004cce
- (id)_stateDump;	// IMP=0x0010000000004c54
- (id)_init;	// IMP=0x001000000000497d
- (id)init;	// IMP=0x001000000000493b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

