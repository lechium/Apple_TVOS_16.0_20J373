//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CBCentralManager, CLAvengerReconciler, CLAvengerScannerPolicy, CLAvengerScannerSettings, CLAvengerScannerStateContext, CLDurianSystemMonitor, CLTimer, NSMapTable, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CLAvengerScanner : CLIntersiloService
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    _Bool _hasQueriedNumberOfBuffers;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CLAvengerScannerStateContext *_stateContext;	// 32 = 0x20
    NSMutableSet *_clients;	// 40 = 0x28
    NSMapTable *_clientToNameMap;	// 48 = 0x30
    NSMapTable *_clientToLongAggressiveScanTimeout;	// 56 = 0x38
    CLAvengerScannerPolicy *_policy;	// 64 = 0x40
    CLDurianSystemMonitor *_systemMonitor;	// 72 = 0x48
    CLTimer *fAnalyticsTimer;	// 80 = 0x50
    struct CLAvengerScannerAnalytics fAnalytics;	// 88 = 0x58
    CLAvengerScannerSettings *_avengerScannerSettings;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    CLAvengerReconciler *_reconciler;	// 120 = 0x78
}

+ (_Bool)isSupported;	// IMP=0x00200000006ca58c
+ (id)getSilo;	// IMP=0x00100000006ca530
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006ca517
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006ca4ba
- (id).cxx_construct;	// IMP=0x00200000006ce2c7
- (void)updateDeviceConnectionState:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x00100000006ce2c1
- (void)updateSystemLoiType:(unsigned long long)arg1 isEntry:(_Bool)arg2;	// IMP=0x00100000006ce2bb
- (void)systemMetricHeartbeat;	// IMP=0x00100000006ce2b5
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000006ce2af
- (void)systemConnectivity:(id)arg1 isConnected:(_Bool)arg2;	// IMP=0x00100000006ce2a9
- (void)systemCoexImpact:(id)arg1 toState:(int)arg2;	// IMP=0x00100000006ce235
- (void)findMyAppDidBackgroundOrExit;	// IMP=0x00100000006ce22f
- (long long)getCLAvengerScannerPolicyPlatformType;	// IMP=0x00100000006ce1ee
- (void)stoppedAggressiveDiscoveryScan;	// IMP=0x00100000006ce1e8
- (void)startedAggressiveDiscoveryScan;	// IMP=0x00100000006ce1e2
- (void)scanTypeUpdated:(long long)arg1;	// IMP=0x00100000006ce071
- (void)initAnalyticsTimer;	// IMP=0x00100000006cdf80
- (void)resetAnalyticsCache;	// IMP=0x00100000006cdf47
- (void)persistAnalyticsCache;	// IMP=0x00100000006cde8f
- (void)initAnalyticsCache;	// IMP=0x00100000006cddc7
- (void)onAnalyticsTimerFired:(id)arg1;	// IMP=0x00100000006cdc3b
- (void)initializeClientRequestsViewsWithZeroValues:(id)arg1;	// IMP=0x00100000006cda14
- (void)submitClientRequestsEvent:(id)arg1 client:(id)arg2 scanType:(id)arg3;	// IMP=0x00100000006cd81a
- (void)initializeScanTypeChangeViewsWithZeroValues;	// IMP=0x00100000006cd7b7
- (void)submitScanTypeChangeEvent:(id)arg1 type:(id)arg2;	// IMP=0x00100000006cd5f2
- (void)stopWatchAdvertisementBufferScan:(byref id)arg1;	// IMP=0x00100000006cd42f
- (void)startWatchAdvertisementBufferScan:(byref id)arg1;	// IMP=0x00100000006cd25f
- (void)stopBTFindingScan:(byref id)arg1;	// IMP=0x00100000006cd09c
- (void)startBTFindingScan:(byref id)arg1;	// IMP=0x00100000006ccecc
- (void)performTemporaryHawkeyeLowEnergyScan:(byref id)arg1;	// IMP=0x00100000006ccc5a
- (void)terminateTemporaryLongAggressiveScan:(byref id)arg1;	// IMP=0x00100000006cc89b
- (void)performTemporaryLongAggressiveScan:(byref id)arg1;	// IMP=0x00100000006cbbe0
- (void)performTemporaryAggressiveScanForFindMyAccessoryManager:(byref id)arg1;	// IMP=0x00100000006cba3c
- (void)performTemporaryAggressiveScan:(byref id)arg1;	// IMP=0x00100000006cb626
- (_Bool)shouldStartSpecialScan;	// IMP=0x00100000006cb4c4
- (_Bool)syncgetIsScanning;	// IMP=0x00100000006cb4af
- (void)stop;	// IMP=0x00100000006cb482
- (void)start;	// IMP=0x00100000006cb47c
- (void)stopMonitoringAvengerAdvertisementsForClient:(byref id)arg1;	// IMP=0x00100000006cb22e
- (void)startMonitoringAvengerAdvertisementsForClient:(byref id)arg1 optedIn:(_Bool)arg2 clientName:(id)arg3;	// IMP=0x00100000006cafc6
- (void)createLongAggressiveTimeoutBlockForClient:(byref id)arg1 seconds:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000006cad17
- (void)clearLongAggressiveTimeoutBlockForClient:(byref id)arg1;	// IMP=0x00100000006cabeb
- (void)startMonitoringAvengerAdvertisementsForClient:(byref id)arg1 clientName:(id)arg2;	// IMP=0x00100000006cab9b
- (id)nameForClient:(byref id)arg1;	// IMP=0x00100000006cab42
- (void)endService;	// IMP=0x00100000006ca984
- (void)beginService;	// IMP=0x00100000006ca5dd
- (id)init;	// IMP=0x00100000006ca5a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

